#ifndef UDPSENDERWIDGET_H
#define UDPSENDERWIDGET_H

#include <QWidget>
#include <QtNetwork/QUdpSocket>
#include <QCloseEvent>

#include "recvvehiclestatusthread.h"
#include "bidformat.h"

#include "CommonDefinition.h"

#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>

//帧头
typedef struct
{
    unsigned int BCI=95835;            //changdi标识
    unsigned char PWID=0x00;           //密钥
    unsigned char VER=0x20;            //版本
    unsigned short MLen=0;               //包含帧头
    unsigned short FI=0x0A0C;           //帧标识
    unsigned int DData=0;                //北京绝对时间-日期
    unsigned char DTimeHH=0;             //北京绝对时间-时
    unsigned char DTimeMM=0;             //北京绝对时间-分
    unsigned char DTimeSS=0;             //北京绝对时间-秒
    unsigned short DTimeMS=0;             //北京绝对时间-毫秒
    unsigned short BID=0;               //battle编号
    unsigned int SID=0;                 //信源
    unsigned int DID=0;                 //信宿
    unsigned char Reserve1=0;           //预留

}KONG_FRAMEHEAD;     //30 byte


//数据头
typedef struct
{
    unsigned char SI=0x77;            //测试标识
    unsigned int HID=0;              //管号
    unsigned char TI=0x00;            //敌我标识
    unsigned char CI=0x01;               //坐标系标识
    unsigned char OID=0x00;           //处理原点
    char Reserve2=0x00;           //预留
    char Reserve3=0x00;           //预留
    short Reserve4=0x00;           //预留
    int Reserve5=0x00;           //预留

}KONG_DATAHEAD;   //16 byte


//数据
typedef struct
{
    unsigned short TType=0x00;        //目标型号
    unsigned short CSID=0x00;         //编号
    unsigned int TCode=0;               //目标代码
    unsigned char TID=0x00;           //任务编号
    unsigned char MID=0x00;           //目标标号
    int Lon=0;           //经度 0.000001度
    int Lat=0;           //纬度 0.000001度
    int Alt=0;           //高度 0.01m
    int H=0;             //相对高度 0.1m
    int BH=0;            //气压高 0.1m
    int GVel;          //地速  0.01km/h
    int IAS=0;           //**空速  0.01km/h
    int CAS=0;           //**空速  0.01km/h
    int TAS=0;           //**空速  0.01km/h
    unsigned short Head=0;   //航向 0.01度
    short Roll=0;            //横滚 0.01度
    short Pitch=0;           //俯仰 0.01度
    short ClimbRate=0;       //爬升率 0.1m/s
    short YR=0;              //偏航速率 0.1m/s
    short PR=0;              //俯仰速率 0.1rad/s
    short RR=0;              //旋转速率 0.1rad/s
    short Yaw=0;             //偏航 0.01度
    short Grade=0;           //坡度 0.01度
    int Reserve3=0;
}KONG_DATA;     //68 byte


namespace Ui {
class UDPSenderWidget;
}

class UDPSenderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UDPSenderWidget(QWidget *parent = 0);
    ~UDPSenderWidget();

    bool isValidIP(QString _strip);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void VehicleStatus_data(const autonavigation::VehicleStatus::ConstPtr &gp);
    void ControlCommand_data(const autonavigation::ControlCommand::ConstPtr &cc);

    void clientSocketstate_slot(QAbstractSocket::SocketState);
    void clientSocketerror_slot(QAbstractSocket::SocketError);

    void on_ConnetBtn_clicked();

    void udpServerReadData();
    void udpServerReadError();

    void on_btnUdpListen_clicked();

    void on_btnClearUdpServer_clicked();

    void timersend_slot();

public:
    void initdata();
    void setWidgetEnable(bool enabled);

    char xor_checksum( char *buf,  int len);   //异或校验和算法
    char* int2char_little(int _num);
    char* short2char_little(short _num);
    char* get_time();
    char* get_data();


    void send_realVehicleStatus();

    void showenabled(bool _enable);

    void readSettings();
    void writeSettins();

    void set_tooltip();

    void appendUdpMsg(quint8 type, QString msg);

    void decode(QByteArray tempbuf);

    QString formatTime(int ms);

    QByteArray hexStringtoByteArray(QString hex);

    QString ByteArrayToHexString(QByteArray data);

    QByteArray ByteArrayReserve(QByteArray _array, int n);

    void formatString(QString &org, int n, const QChar &ch);

    QByteArray frameHeadToByte(const KONG_FRAMEHEAD& framehead);
    QByteArray dataHeadToByte(const KONG_DATAHEAD& datahead);
    QByteArray dataToByte(const KONG_DATA& data);

private:
    Ui::UDPSenderWidget *ui;

    QUdpSocket *ServerudpSocket;//包含 <QtNetwork/qudpsocket.h>
    QUdpSocket *ClientudpSocket;

    int msgMaxCount;
    int countUdpServer;

    QString m_ip_zubo;
    QString m_port;

    RecvVehicleStatusThread m_recvvehiclestatusthread;

    QTimer *m_timersend;

    //MSG数据
    autonavigation::ControlCommandConstPtr m_cc;
    autonavigation::VehicleStatusConstPtr m_gp;


    QByteArray array_source;
    QByteArray array_target;
    QByteArray array_bid;

    int Vs_counter=0;

    KONG_FRAMEHEAD m_kongFrameHead;
    KONG_DATAHEAD m_kongDataHead;
    KONG_DATA m_kongData;
    QByteArray m_DataHeadBA;


    bool isSend;
    long m_current_gps;
    int m_counter;

};

#endif // UDPSENDERWIDGET_H
