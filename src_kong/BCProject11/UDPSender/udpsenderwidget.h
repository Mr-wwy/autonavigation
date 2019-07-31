#ifndef UDPSENDERWIDGET_H
#define UDPSENDERWIDGET_H

#include <QWidget>
#include <QtNetwork/QUdpSocket>
#include <QCloseEvent>

#include "recvvehiclestatusthread.h"
#include "bidformat.h"

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
    void Ping_data(const autonavigation::Ping::ConstPtr &ping);

    void stateChanged_slot(QAbstractSocket::SocketState);
    void error_slot(QAbstractSocket::SocketError);
    void readyRead_slot();

    void on_ConnetBtn_clicked();

//    void on_SendBtn_clicked();

//    void on_SendButton_clicked();

    void on_radioButton_unicast_clicked();

    void on_radioButton_multicast_clicked();

    void on_checkBox_lianjian_clicked();

    void on_checkBox_T0_clicked();

    void on_checkBox_realtime_clicked();

    void on_checkBox_vehicle_clicked();

public:
    void paintEvent(QPaintEvent *e);
    char xor_checksum( char *buf,  int len);   //异或校验和算法
    char* int2char(int _num);
    char* short2char(short _num);
    void send_lianjian( char *data);
    void send_T0( char *data);
    void send_realtimedata(const autonavigation::VehicleStatus::ConstPtr &gp);
    void send_vehiclestatus(const autonavigation::VehicleStatus::ConstPtr &gp);

//    void testsend();
//    void testsend_ve();
    void showenabled(bool _enable);

    void readSettings();
    void writeSettins();

    void set_tooltip();
private:
    Ui::UDPSenderWidget *ui;

    QUdpSocket *ClientudpSocket;//包含 <QtNetwork/qudpsocket.h>

    QString m_ip;
    QString m_port;

    RecvVehicleStatusThread m_recvvehiclestatusthread;

    char intchar[4];
    char shortchar[2];

    bool issendLianJian;
    bool issendT0;
    bool issendRealtimeData;
    bool issendVehicleStatus;

};

#endif // UDPSENDERWIDGET_H
