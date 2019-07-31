#ifndef UDPSENDERWIDGET_H
#define UDPSENDERWIDGET_H

#include <QWidget>
#include <QtNetwork/QUdpSocket>
#include <QCloseEvent>

#include "recvvehiclestatusthread.h"
#include "bidformat.h"

#include <ros/ros.h>
#include "CommonDefinition.h"
#include "autonavigation/SetT0.h"

#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>

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
    void VehicleStatus_data(const autonavigation::VehicleStatus::ConstPtr &vs);
    void ControlCommand_data(const autonavigation::ControlCommand::ConstPtr &cc);
    void GpsTime_data(const autonavigation::GpsTime::ConstPtr &gps);

    void stateChanged_slot(QAbstractSocket::SocketState);

    void on_ConnetBtn_clicked();

    void udpServerReadData();
    void udpServerReadError();

    void on_btnUdpListen_clicked();

    void on_btnClearUdpServer_clicked();

    void timersend_slot();

public:
    void initdata();

    char xor_checksum( char *buf,  int len);   //异或校验和算法
    char* int2char_little(int _num);
    char* short2char_little(short _num);
    char* get_time();
    char* get_data();

    void send_lianjian_new();
    void send_T0_new();
    void send_realtimedata_new();
    void send_vehicleststus_new();

    void showenabled(bool _enable);

    void readSettings();
    void writeSettins();

    void set_tooltip();

    void appendUdpServer(quint8 type, QString msg);

    void decode(QByteArray tempbuf);

    QString formatTime(int ms);

    QByteArray hexStringtoByteArray(QString hex);

    QString ByteArrayToHexString(QByteArray data);

    QByteArray ByteArrayReserve(QByteArray _array, int n);

    void formatString(QString &org, int n, const QChar &ch);

    void Blh2XYZ(double B, double L, double H, double *x, double *y, double *z);

    void Speed2XYZ(double speed, double yaw, double B, double L, double *vx, double *vy, double *vz);

    void SendSetT0();

    void UDP_writeDatagram(const char* data, qint64 len);

private:
    Ui::UDPSenderWidget *ui;

    QUdpSocket *ServerudpSocket;//包含 <QtNetwork/qudpsocket.h>
    QUdpSocket *ClientudpSocket;

    int msgMaxCount;
    int countUdpServer;

    int lianjian_counter;
    int T0_counter;
    int Realtime_counter;
    int Vs_counter;

    QString m_ip_3;
    QString m_ip_1;
    QString m_ip_2;
    QString m_port;

    RecvVehicleStatusThread m_recvvehiclestatusthread;

    char intchar[4];
    char shortchar[2];

//    bool issendLianJian;
//    bool issendT0;
//    bool issendRealtimeData;
//    bool issendVehicleStatus;

    QTimer *timersend;

    //MSG数据
    autonavigation::ControlCommandConstPtr m_cc;
    autonavigation::VehicleStatusConstPtr m_vs;
    autonavigation::GpsTimeConstPtr m_gps;

    ros::NodeHandle m_nodeHandle_sett0;
    ros::Publisher m_publisher_sett0;
    autonavigation::SetT0Ptr m_sett0Ptr;

    QByteArray Lianjian_BID;
    QByteArray T0_BID;

    QByteArray array_source;
    QByteArray array_target;
    QByteArray array_renwuid;

    int m_T0;

/***********************SetT0参数**************************/
    UINT32     m_unique_key;          //自主行驶载车唯一标识，用于区分载车的id
    UINT32     m_gps_week;            //GPS周
    UINT64     m_gps_millisecond;     //取GPS周的毫秒级时间
    UINT64     m_cmd_millisecond;     //T0 时间
    UINT8      m_cmd_reserve1;        //预留
    UINT8      m_cmd_reserve2;        //预留
    UINT8      m_cmd_reserve3;        //

};

#endif // UDPSENDERWIDGET_H
