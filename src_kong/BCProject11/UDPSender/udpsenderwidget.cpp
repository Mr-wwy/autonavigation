#include "udpsenderwidget.h"
#include "ui_udpsenderwidget.h"

#include <QValidator>
#include <QtNetwork/QNetworkInterface>
#include <QMessageBox>
#include <QDateTime>
#include <QTime>
#include <QSettings>
#include <QPalette>
#include <QPixmap>
#include <QPainter>


UDPSenderWidget::UDPSenderWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UDPSenderWidget)
{
    ui->setupUi(this);
    ui->radioButton_unicast->setChecked(true);

    this->setWindowIcon(QIcon(":/picture/net1.png"));

    this->setWindowTitle(tr("UDP发送端"));
    showenabled(true);

    issendLianJian=false;
    issendT0=false;
    issendRealtimeData=false;
    issendVehicleStatus=false;

    //只能输入IP地址
    QRegExp rx("((1?\\d{1,2}|2[0-5]{2})\\.){3}(1?\\d{1,2}|2[0-5]{2})");
    QValidator *validator_IP=new QRegExpValidator(rx,this);
    ui->lineEdit_ip->setValidator(validator_IP);

    //只能输入0-65535的端口号
    QValidator *validator_Port=new QIntValidator(0,65535,this);
    ui->lineEdit_port->setValidator(validator_Port);

    /***************qt传递参数时，是自定义的类型就要注册*************************/
    qRegisterMetaType<autonavigation::VehicleStatus::ConstPtr>("autonavigation::VehicleStatus::ConstPtr");
    qRegisterMetaType<autonavigation::ControlCommand::ConstPtr>("autonavigation::ControlCommand::ConstPtr");
    qRegisterMetaType<autonavigation::Ping::ConstPtr>("autonavigation::Ping::ConstPtr");

    ClientudpSocket = new QUdpSocket(this);
    connect(ClientudpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(stateChanged_slot(QAbstractSocket::SocketState)));
    connect(ClientudpSocket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(error_slot(QAbstractSocket::SocketError)));
    connect(ClientudpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_slot()));

    //m_recvvehiclestatusthread=new RecvVehicleStatusThread(this);
    connect(&m_recvvehiclestatusthread,SIGNAL(VehicleStatus_readed(autonavigation::VehicleStatus::ConstPtr)),this,SLOT(VehicleStatus_data(autonavigation::VehicleStatus::ConstPtr)));
    connect(&m_recvvehiclestatusthread,SIGNAL(ControlCommand_readed(autonavigation::ControlCommand::ConstPtr)),this,SLOT(ControlCommand_data(autonavigation::ControlCommand::ConstPtr)));
    connect(&m_recvvehiclestatusthread,SIGNAL(ping_readed(autonavigation::Ping::ConstPtr)),this,SLOT(Ping_data(autonavigation::Ping::ConstPtr)));
    m_recvvehiclestatusthread.start();

    readSettings();
    set_tooltip();

//    //获得自1970-01-01T00:00:00至今的秒数并将这个秒数转成日期
//    long i=QDateTime::currentDateTime().toTime_t();
//    qDebug()<<"time:"<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz");
//    qDebug()<<"i--"<<i;
//    qDebug()<<QDateTime::fromTime_t(i).toString("yyyy-MM-dd hh:mm:ss");

}

void UDPSenderWidget::paintEvent(QPaintEvent *e)
{
//    QPainter painter(this);
//    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(""));
}

UDPSenderWidget::~UDPSenderWidget()
{
    writeSettins();

    if(ClientudpSocket->state()==QAbstractSocket::BoundState)
    {
        ClientudpSocket->close();
    }

    delete ClientudpSocket;
    delete ui;
}

void UDPSenderWidget::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::information(this,tr("退出程序"),tr("确认退出程序？"),
                                QMessageBox::Yes,QMessageBox::No)==QMessageBox::Yes)
    {
        event->accept();
    }
    else
    {
        event->ignore();
    }

}

/*
QAbstractSocket::ConnectionRefusedError 0 The connection was refused by the peer (or timed out).
QAbstractSocket::RemoteHostClosedError 1 The remote host closed the connection. Note that the client socket (i.e., this socket) will be closed after the remote close notification has been sent.
QAbstractSocket::HostNotFoundError 2 The host address was not found.
QAbstractSocket::SocketAccessError 3 The socket operation failed because the application lacked the required privileges.
QAbstractSocket::SocketResourceError 4 The local system ran out of resources (e.g., too many sockets).
QAbstractSocket::SocketTimeoutError 5 The socket operation timed out.
QAbstractSocket::DatagramTooLargeError 6 The datagram was larger than the operating system's limit (which can be as low as 8192 bytes).
QAbstractSocket::NetworkError 7 An error occurred with the network (e.g., the network cable was accidentally plugged out).
QAbstractSocket::AddressInUseError 8 The address specified to QAbstractSocket::bind() is already in use and was set to be exclusive.
QAbstractSocket::SocketAddressNotAvailableError 9 The address specified to QAbstractSocket::bind() does not belong to the host.
QAbstractSocket::UnsupportedSocketOperationError 10 The requested socket operation is not supported by the local operating system (e.g., lack of IPv6 support).
QAbstractSocket::ProxyAuthenticationRequiredError 12 The socket is using a proxy, and the proxy requires authentication.
QAbstractSocket::SslHandshakeFailedError 13 The SSL/TLS handshake failed, so the connection was closed (only used in QSslSocket)
QAbstractSocket::UnfinishedSocketOperationError 11 Used by QAbstractSocketEngine only, The last operation attempted has not finished yet (still in progress in the background).
QAbstractSocket::ProxyConnectionRefusedError 14 Could not contact the proxy server because the connection to that server was denied
QAbstractSocket::ProxyConnectionClosedError 15 The connection to the proxy server was closed unexpectedly (before the connection to the final peer was established)
QAbstractSocket::ProxyConnectionTimeoutError 16 The connection to the proxy server timed out or the proxy server stopped responding in the authentication phase.
QAbstractSocket::ProxyNotFoundError 17 The proxy address set with setProxy() (or the application proxy) was not found.
QAbstractSocket::ProxyProtocolError 18 The connection negotiation with the proxy server failed, because the response from the proxy server could not be understood.
QAbstractSocket::OperationError 19 An operation was attempted while the socket was in a state that did not permit it.
QAbstractSocket::SslInternalError 20 The SSL library being used reported an internal error. This is probably the result of a bad installation or misconfiguration of the library.
QAbstractSocket::SslInvalidUserDataError 21 Invalid data (certificate, key, cypher, etc.) was provided and its use resulted in an error in the SSL library.
QAbstractSocket::TemporaryError 22 A temporary error occurred (e.g., operation would block and socket is non-blocking).
QAbstractSocket::UnknownSocketError -1 An unidentified error occurred.
*/

void UDPSenderWidget::error_slot(QAbstractSocket::SocketError err)
{
    //qDebug()<<"error:"<<err;
    switch (err) {
    case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::warning(this,tr("Warning!"),tr("The connection was refused by the peer (or timed out)."));
        break;
    case QAbstractSocket::RemoteHostClosedError:
        QMessageBox::warning(this,tr("Warning!"),tr("The remote host closed the connection."));
        break;
    case QAbstractSocket::HostNotFoundError:
        QMessageBox::warning(this,tr("Warning!"),tr("The host address was not found."));
        break;
    case QAbstractSocket::SocketAccessError:
        QMessageBox::warning(this,tr("Warning!"),tr("The socket operation failed because the application lacked the required privileges."));
        break;
    case QAbstractSocket::SocketResourceError:
        QMessageBox::warning(this,tr("Warning!"),tr("The local system ran out of resources (e.g., too many sockets)."));
        break;
    case QAbstractSocket::SocketTimeoutError:
        QMessageBox::warning(this,tr("Warning!"),tr("The socket operation timed out."));
        break;
    case QAbstractSocket::DatagramTooLargeError:
        QMessageBox::warning(this,tr("Warning!"),tr("The datagram was larger than the operating system's limit (which can be as low as 8192 bytes)."));
        break;
    case QAbstractSocket::NetworkError:
        QMessageBox::warning(this,tr("Warning!"),tr("An error occurred with the network."));
        break;
    case QAbstractSocket::AddressInUseError:
        QMessageBox::warning(this,tr("Warning!"),tr("The address specified to QAbstractSocket::bind() is already in use and was set to be exclusive."));
        break;
    case QAbstractSocket::SocketAddressNotAvailableError:
        QMessageBox::warning(this,tr("Warning!"),tr("The address specified to QAbstractSocket::bind() does not belong to the host."));
        break;
    case QAbstractSocket::UnsupportedSocketOperationError:
        QMessageBox::warning(this,tr("Warning!"),tr("The requested socket operation is not supported by the local operating system (e.g., lack of IPv6 support)."));
        break;
    case QAbstractSocket::UnknownSocketError:
        QMessageBox::warning(this,tr("Warning!"),tr(" An unidentified error occurred."));
        break;
    default:
        break;
    }


}

/*************************检测字符串是否为IP地址***************************/
bool UDPSenderWidget::isValidIP(QString _strip)
{
    //IP地址正则表达式
    QRegExp rx("((1?\\d{1,2}|2[0-5]{2})\\.){3}(1?\\d{1,2}|2[0-5]{2})");
    //QRegExp rx2("^([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])$");
    if(rx.exactMatch(_strip))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void UDPSenderWidget::stateChanged_slot(QAbstractSocket::SocketState state)
{
    //qDebug()<<"state:"<<state;
}

void UDPSenderWidget::readyRead_slot()
{
    QHostAddress client_address;//声明一个QHostAddress对象用于保存发送端的信息
    char buf[100];//声明一个字符数组用于接收发送过来的字符串
    if(ClientudpSocket->hasPendingDatagrams())
    {
        ClientudpSocket->readDatagram(buf,ClientudpSocket->pendingDatagramSize(),&client_address,0);
        QString text="recv "+QString(QLatin1String(buf))+" from " + client_address.toString() + "\n";
        //qDebug()<<"text:"<<text;
    }
}

void UDPSenderWidget::showenabled(bool _enable)
{
    ui->radioButton_unicast->setEnabled(_enable);
    ui->radioButton_multicast->setEnabled(_enable);
    ui->lineEdit_ip->setEnabled(_enable);
    ui->lineEdit_port->setEnabled(_enable);

    ui->checkBox_lianjian->setEnabled(!_enable);
    ui->checkBox_realtime->setEnabled(!_enable);
    ui->checkBox_T0->setEnabled(!_enable);
    ui->checkBox_vehicle->setEnabled(!_enable);
    //ui->SendBtn->setEnabled(!_enable);
    //ui->SendButton->setEnabled(!_enable);
}

void UDPSenderWidget::on_ConnetBtn_clicked()
{
    //qDebug()<<"start state:"<<ClientudpSocket->state();
    if(ui->ConnetBtn->text()==tr("断开"))
    {
        if(ClientudpSocket->state()==QAbstractSocket::BoundState)
        {
            m_ip = "0";
            m_port = "0";
            ClientudpSocket->close();
        }
        ui->ConnetBtn->setText(tr("连接"));
        showenabled(true);
    }
    else if(ui->ConnetBtn->text()==tr("连接"))
    {
        if(ui->lineEdit_ip->text().isEmpty())
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("The IP is null."));
            return;
        }
        if(!isValidIP(ui->lineEdit_ip->text()))
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("The IP is invalid."));
            return;
        }
        if(ui->lineEdit_port->text().isEmpty())
        {
            QMessageBox::warning(this,tr("Warning!"),tr("The port is null."));
            return;
        }
        m_ip=ui->lineEdit_ip->text();
        m_port=ui->lineEdit_port->text();

        QString text;
        text.clear();
        QByteArray datagram=text.toLatin1();
        int ret=ClientudpSocket->writeDatagram(datagram,datagram.size(),QHostAddress(m_ip),m_port.toInt());
        //qDebug()<<"ret:"<<ret;

        if(ret>=0)
        {
            ui->ConnetBtn->setText(tr("断开"));
            showenabled(false);
        }

    }

}

//void UDPSenderWidget::on_SendBtn_clicked()
//{
//    QString text=ui->lineEdit_send->text();
//    QByteArray datagram = text.toLatin1();
//    //ClientudpSocket->write(datagram.data(),datagram.size());
//    int ret=ClientudpSocket->writeDatagram(datagram.data(),datagram.size(),QHostAddress(m_ip),m_port.toInt());
//    qDebug()<<"ret:"<<ret;

//}

/*************************************处理VehicleStatus数据*********************************************/
void UDPSenderWidget::VehicleStatus_data(const autonavigation::VehicleStatus::ConstPtr &gp)
{
    if(issendRealtimeData)
    {
        send_realtimedata(gp);
    }
    if(issendVehicleStatus)
    {
        send_vehiclestatus(gp);
    }

}

/*************************************处理ControlCommand数据*********************************************/
void UDPSenderWidget::ControlCommand_data(const autonavigation::ControlCommand::ConstPtr &cc)
{
    if(issendT0)
    {
        int t0=cc->cmd_millisecond/1000;
        qDebug()<<"T0"<<t0;
        send_T0(int2char(t0));
    }
}

/*************************************处理Ping数据*********************************************/
void UDPSenderWidget::Ping_data(const autonavigation::Ping::ConstPtr &ping)
{
    if(issendLianJian)
    {
        int delaytime=ping->rtt;
        send_lianjian(int2char(delaytime));
    }

}

/****************************异或校验和算法******************************/
char UDPSenderWidget::xor_checksum( char *buf,  int len)
{
    int i;
    char checksum = 0;

    for (i = 0; i < len; ++i)
    {
        checksum ^= *(buf++);
    }

    return checksum;
}

/****************************int整型转化为字符型******************************/
char* UDPSenderWidget::int2char(int _num)
{
    memset(intchar,0,4);
    intchar[0] = _num/(256*256*256);
    intchar[1] = _num%(256*256*256)/(256*256);
    intchar[2] = _num%(256*256*256)%(256*256)/256;
    intchar[3] = _num%(256*256*256)%(256*256)%256;
    return intchar;
}

char* UDPSenderWidget::short2char(short _num)
{
    memset(shortchar,0,2);
    shortchar[0]=_num/256;
    shortchar[1]=_num%256;
    return shortchar;
}

/***************************************************************
 **************************发送数据信息**************************
 ***************************************************************/
// 1.链监信息
void UDPSenderWidget::send_lianjian(char *data)
{
    char send_lianjian_data[LIANJIAN_FIRM_SIZE];
    /* 1、链监信息head*/
    send_lianjian_data[0] = '#';
    /* 2、ID*/
    send_lianjian_data[1] = 0x01;
    /* 3、标志BID编码*/
    send_lianjian_data[2] = 0x00;
    send_lianjian_data[3] = 0x02;
    send_lianjian_data[4] = 0x01;
    send_lianjian_data[5] = 0x01;
    /* 4、时间*/
    int i=QDateTime::currentDateTime().toTime_t();    //获得自1970-01-01T00:00:00至今的秒数并将这个秒数转成日期
    memcpy(send_lianjian_data+6,int2char(i),4);
    /* 5、长度*/
    send_lianjian_data[10] = LIANJIAN_DATA_SIZE/256;           //先传高位
    send_lianjian_data[11] = LIANJIAN_DATA_SIZE%256;           //再传低位
    /* 6、数据*/
    memcpy(send_lianjian_data+12,data,4);
    /* 7、校验和 */
    send_lianjian_data[16] = xor_checksum(send_lianjian_data, LIANJIAN_FIRM_SIZE - 2);
    /* 8、尾部 */
    send_lianjian_data[17] ='$';
//    /* 1、链监信息head*/
//    _lianjian.head = '#';
//    /* 2、ID*/
//    _lianjian.id = 0x01;
//    /* 3、标志BID编码*/
//    _lianjian.BID[0] = 0x00;
//    _lianjian.BID[1] = 0x02;
//    _lianjian.BID[2] = 0x01;
//    _lianjian.BID[3] = 0x01;
//    /* 4、时间*/
//    long sendtime=QDateTime::currentDateTime().toTime_t();
//    _lianjian.time[0] = sendtime/(256*256*256);
//    _lianjian.time[1] = sendtime%(256*256*256)/(256*256);
//    _lianjian.time[2] = sendtime%(256*256*256)%(256*256)/256;
//    _lianjian.time[3] = sendtime%(256*256*256)%(256*256)%256;
//    /* 5、长度*/
//    _lianjian.length[0] = 4/256;           //先传高位
//    _lianjian.length[1] = 4%256;           //再传低位
//    /* 6、数据*/
//    memcpy(_lianjian.data,data,4);
//    /* 7、校验和 */
//    _lianjian.crc = 0x00;
//    /* 8、尾部 */
//    _lianjian.end ='$';

//    memcpy(send_lianjian_data,&_lianjian,LIANJIAN_FIRM_SIZE);
//    send_lianjian_data[LIANJIAN_FIRM_SIZE-2]=xor_checksum(send_lianjian_data,LIANJIAN_FIRM_SIZE-2);

    int send_ret=ClientudpSocket->writeDatagram(send_lianjian_data,LIANJIAN_FIRM_SIZE,QHostAddress(m_ip),m_port.toInt());
    //qDebug()<<"send_ret:"<<send_ret;
}

//2.T0信息
void UDPSenderWidget::send_T0(char *data)
{
    char send_T0_data[T0_FIRM_SIZE];

    /* 1、信息head*/
    send_T0_data[0] = '#';
    /* 2、ID*/
    send_T0_data[1] = 0x01;
    /* 3、标志BID编码*/
    send_T0_data[2] = 0x00;
    send_T0_data[3] = 0x01;
    send_T0_data[4] = 0x01;
    send_T0_data[5] = 0x00;
    /* 4、时间*/
    long i=QDateTime::currentDateTime().toTime_t();   //获得自1970-01-01T00:00:00至今的秒数并将这个秒数转成日期
    memcpy(send_T0_data+6,int2char(i),4);
    /* 5、长度*/
    send_T0_data[10] = T0_DATA_SIZE/256;           //先传高位
    send_T0_data[11] = T0_DATA_SIZE%256;           //再传低位
    /* 6、数据*/
    memcpy(send_T0_data+12,data,4);
    /* 7、校验和 */
    send_T0_data[16] = xor_checksum(send_T0_data, T0_FIRM_SIZE - 2);
    /* 8、尾部 */
    send_T0_data[17] ='$';

    int send_ret=ClientudpSocket->writeDatagram(send_T0_data,T0_FIRM_SIZE,QHostAddress(m_ip),m_port.toInt());
    //qDebug()<<"send_ret:"<<send_ret;

}

//3.realtime信息
void UDPSenderWidget::send_realtimedata(const autonavigation::VehicleStatus::ConstPtr &gp)
{
    long gaussx=gp->gaussX;
    long gaussy=gp->gaussY;
    long height=gp->height;

    int northvelocity=gp->northVelocity;              //单位：cm/s
    int eastvelocity=gp->eastVelocity;                //单位：cm/s
    int upvelocity=gp->upVelocity;                    //单位：cm/s

    QTime current_time =QTime::currentTime();
    int hour = current_time.hour();//当前的小时
    int minute = current_time.minute();//当前的分
    int second = current_time.second();//当前的秒
    int msec = current_time.msec();//当前的毫秒
    int alltime=hour*60*60*1000+minute*60*1000+second*1000+msec;

    char send_realtimemsg_data[REALTIMEDATA_FIRM_SIZE];

    /* 1、信息head*/
    send_realtimemsg_data[0] = '#';
    /* 2、ID*/
    send_realtimemsg_data[1] = 0x01;
    /* 3、标志BID编码*/
    send_realtimemsg_data[2] = 0x00;
    send_realtimemsg_data[3] = 0x2A;
    send_realtimemsg_data[4] = 0x01;
    send_realtimemsg_data[5] = 0x16;
    /* 4、时间*/
    long i=QDateTime::currentDateTime().toTime_t();   //获得自1970-01-01T00:00:00至今的秒数并将这个秒数转成日期
    memcpy(send_realtimemsg_data+6,int2char(i),4);
    /* 5、长度*/
    send_realtimemsg_data[10] = REALTIME_DATA_SIZE/256;           //先传高位
    send_realtimemsg_data[11] = REALTIME_DATA_SIZE%256;           //再传低位
    /* 6、数据*/
    memcpy(send_realtimemsg_data+12,int2char(alltime),4);
    memcpy(send_realtimemsg_data+16,int2char(gaussx),4);
    memcpy(send_realtimemsg_data+20,int2char(gaussy),4);
    memcpy(send_realtimemsg_data+24,int2char(height),4);
    memcpy(send_realtimemsg_data+28,int2char(northvelocity),4);
    memcpy(send_realtimemsg_data+32,int2char(eastvelocity),4);
    memcpy(send_realtimemsg_data+36,int2char(upvelocity),4);
    /* 7、校验和 */
    send_realtimemsg_data[REALTIMEDATA_FIRM_SIZE - 2] = xor_checksum(send_realtimemsg_data, REALTIMEDATA_FIRM_SIZE - 2);
    /* 8、尾部 */
    send_realtimemsg_data[REALTIMEDATA_FIRM_SIZE - 1] ='$';

    int send_ret=ClientudpSocket->writeDatagram(send_realtimemsg_data,REALTIMEDATA_FIRM_SIZE,QHostAddress(m_ip),m_port.toInt());
    //qDebug()<<"send_ret:"<<send_ret;

}

//4.vehiclestatus信息
void UDPSenderWidget::send_vehiclestatus(const autonavigation::VehicleStatus::ConstPtr &gp)
{
    QTime current_time =QTime::currentTime();
    int hour = current_time.hour();//当前的小时
    int minute = current_time.minute();//当前的分
    int second = current_time.second();//当前的秒
    int msec = current_time.msec();//当前的毫秒
    int alltime=hour*60*60*1000+minute*60*1000+second*1000+msec;

    unsigned int unique_key=gp->unique_key;
    short steer=gp->steer;

    char send_vehiclestatus_data[VEHICLESTATUS_FIRM_SIZE];

    /* 1、信息head*/
    send_vehiclestatus_data[0]= '#';
    /* 2、ID*/
    send_vehiclestatus_data[1] = 0x01;
    /* 3、标志BID编码*/
    send_vehiclestatus_data[2]=0x00;
    send_vehiclestatus_data[3]=0x02;
    send_vehiclestatus_data[4]=0x05;
    send_vehiclestatus_data[5]=0x32;
    /* 4、时间*/
    long i=QDateTime::currentDateTime().toTime_t();
    memcpy(send_vehiclestatus_data+6,int2char(i),4);

    /* 5、长度*/
    send_vehiclestatus_data[10] = VEHICLESTATUS_DATA_SIZE/256;           //先传高位
    send_vehiclestatus_data[11] = VEHICLESTATUS_DATA_SIZE%256;           //再传低位
    /* 6、数据*/
    memcpy(send_vehiclestatus_data+12,int2char(alltime),4);
    memcpy(send_vehiclestatus_data+16,int2char(unique_key),4);
    memcpy(send_vehiclestatus_data+20,short2char(steer),2);
    send_vehiclestatus_data[22]=gp->fuel;
    send_vehiclestatus_data[23]=gp->shift;
    send_vehiclestatus_data[24]=gp->voltage;
    send_vehiclestatus_data[25]=gp->throttle;
    send_vehiclestatus_data[26]=gp->brake;
    send_vehiclestatus_data[27]=gp->engine_speed;
    send_vehiclestatus_data[28]=gp->vehicle_speed;
    send_vehiclestatus_data[29]=gp->water_temperature;
    send_vehiclestatus_data[30]=gp->control_status;
    send_vehiclestatus_data[31]=gp->error_status;
    send_vehiclestatus_data[32]=gp->handbrake;
    send_vehiclestatus_data[33]=gp->engine_status;
    send_vehiclestatus_data[34]=gp->sts_mode;
    send_vehiclestatus_data[35]=gp->controllable1;
    send_vehiclestatus_data[36]=gp->enable;
    send_vehiclestatus_data[37]=gp->reserve3;
    send_vehiclestatus_data[38]=gp->reserve4;
    send_vehiclestatus_data[39]=gp->reserve5;
    send_vehiclestatus_data[40]=gp->reserve6;
    send_vehiclestatus_data[41]=gp->reserve7;
    /* 7、校验和 */
    send_vehiclestatus_data[VEHICLESTATUS_FIRM_SIZE-2]=xor_checksum(send_vehiclestatus_data,VEHICLESTATUS_FIRM_SIZE-2);
    /* 8、尾部 */
    send_vehiclestatus_data[VEHICLESTATUS_FIRM_SIZE-1] ='$';

    int send_ret=ClientudpSocket->writeDatagram(send_vehiclestatus_data,VEHICLESTATUS_FIRM_SIZE,QHostAddress(m_ip),m_port.toInt());
    //qDebug()<<"send_ret:"<<send_ret;

}

void UDPSenderWidget::on_radioButton_unicast_clicked()
{
    set_tooltip();
}

void UDPSenderWidget::on_radioButton_multicast_clicked()
{
    set_tooltip();
}

void UDPSenderWidget::set_tooltip()
{
    if(ui->radioButton_unicast->isChecked())
    {
        ui->lineEdit_ip->setToolTip(tr("请输入单播地址（目标地址）"));
    }
    else if(ui->radioButton_multicast->isChecked())
    {
        ui->lineEdit_ip->setToolTip(tr("请输入组播地址（224.0.0.0～239.255.255.255）"));
    }
}

void UDPSenderWidget::on_checkBox_lianjian_clicked()
{
    if(ui->checkBox_lianjian->isChecked())
    {
        issendLianJian=true;
    }
    else
    {
        issendLianJian=false;
    }

}

void UDPSenderWidget::on_checkBox_T0_clicked()
{
    if(ui->checkBox_T0->isChecked())
    {
        issendT0=true;
    }
    else
    {
        issendT0=false;
    }

}

void UDPSenderWidget::on_checkBox_realtime_clicked()
{
    if(ui->checkBox_realtime->isChecked())
    {
        issendRealtimeData=true;
    }
    else
    {
        issendRealtimeData=false;
    }

}

void UDPSenderWidget::on_checkBox_vehicle_clicked()
{
    if(ui->checkBox_vehicle->isChecked())
    {
        issendVehicleStatus=true;
    }
    else
    {
        issendVehicleStatus=false;
    }

}

void UDPSenderWidget::readSettings()
{
    QSettings settings("Config",QSettings::IniFormat);

    if(settings.value("UDP/mode").toString()==tr("2"))
    {
        ui->radioButton_multicast->setChecked(true);
    }
    else
    {
        ui->radioButton_unicast->setChecked(true);
    }
    ui->lineEdit_ip->setText(settings.value("UDP/IP").toString());
    ui->lineEdit_port->setText(settings.value("UDP/port").toString());

}

void UDPSenderWidget::writeSettins()
{
    QSettings settings("Config",QSettings::IniFormat);

    settings.beginGroup("UDP");
    QString mode;
    if(ui->radioButton_unicast->isChecked())
    {
        mode=tr("1");

    }
    else if(ui->radioButton_multicast->isChecked())
    {
        mode=tr("2");
    }
    settings.setValue("mode",mode);
    settings.setValue("IP",ui->lineEdit_ip->text());
    settings.setValue("port",ui->lineEdit_port->text());
    settings.endGroup();

}


//void UDPSenderWidget::on_SendButton_clicked()
//{
//    char a[4];
//    a[0]=0x00;
//    a[1]=0x00;
//    a[2]=0xff;
//    a[3]=0x05;

//    char b[4];
//    b[0]=0x00;
//    b[1]=0x00;
//    b[2]=0x00;
//    b[3]=0xff;

////    if(ui->ConnetBtn->text()==tr("连接"))
////    {
////        QMessageBox::warning(this,tr("Warning!"),tr("An error occurred with the network."));
////        return;
////    }
//    send_lianjian(a);
//    send_T0(b);
//    testsend();
//    testsend_ve();
//}

//void UDPSenderWidget::testsend_ve()
//{
//    QTime current_time =QTime::currentTime();
//    int hour = current_time.hour();//当前的小时
//    int minute = current_time.minute();//当前的分
//    int second = current_time.second();//当前的秒
//    int msec = current_time.msec();//当前的毫秒
//    int alltime=hour*60*60*1000+minute*60*1000+second*1000+msec;

//    qDebug()<<current_time;
//    qDebug()<<"alltime:"<<alltime;

//    unsigned int unique_key=1;
//    short steer=555;

//    char send_vehiclestatus_data[VEHICLESTATUS_FIRM_SIZE];

//    /* 1、信息head*/
//    send_vehiclestatus_data[0]= '#';
//    /* 2、ID*/
//    send_vehiclestatus_data[1] = 0x01;
//    /* 3、标志BID编码*/
//    send_vehiclestatus_data[2]=0x00;
//    send_vehiclestatus_data[3]=0x02;
//    send_vehiclestatus_data[4]=0x05;
//    send_vehiclestatus_data[5]=0x32;
//    /* 4、时间*/
//    long i=QDateTime::currentDateTime().toTime_t();
//    memcpy(send_vehiclestatus_data+6,int2char(i),4);

//    /* 5、长度*/
//    send_vehiclestatus_data[10] = VEHICLESTATUS_DATA_SIZE/256;           //先传高位
//    send_vehiclestatus_data[11] = VEHICLESTATUS_DATA_SIZE%256;           //再传低位
//    /* 6、数据*/
//    memcpy(send_vehiclestatus_data+12,int2char(alltime),4);
//    memcpy(send_vehiclestatus_data+16,int2char(unique_key),4);
//    memcpy(send_vehiclestatus_data+20,short2char(steer),2);
//    send_vehiclestatus_data[22]=0x02;
//    send_vehiclestatus_data[23]=0x02;
//    send_vehiclestatus_data[24]=0x03;
//    send_vehiclestatus_data[25]=0x04;
//    send_vehiclestatus_data[26]=0x05;
//    send_vehiclestatus_data[27]=0x06;
//    send_vehiclestatus_data[28]=0x07;
//    send_vehiclestatus_data[29]=0x08;
//    send_vehiclestatus_data[30]=0x01;
//    send_vehiclestatus_data[31]=0x02;
//    send_vehiclestatus_data[32]=0x03;
//    send_vehiclestatus_data[33]=0x04;
//    send_vehiclestatus_data[34]=0x05;
//    send_vehiclestatus_data[35]=0x06;
//    send_vehiclestatus_data[36]=0x00;
//    send_vehiclestatus_data[37]=0x00;
//    send_vehiclestatus_data[38]=0x00;
//    send_vehiclestatus_data[39]=0x00;
//    send_vehiclestatus_data[40]=0x00;
//    send_vehiclestatus_data[41]=0x00;
//    /* 7、校验和 */
//    send_vehiclestatus_data[VEHICLESTATUS_FIRM_SIZE-2]=xor_checksum(send_vehiclestatus_data,VEHICLESTATUS_FIRM_SIZE-2);
//    /* 8、尾部 */
//    send_vehiclestatus_data[VEHICLESTATUS_FIRM_SIZE-1] ='$';

//    int send_ret=ClientudpSocket->writeDatagram(send_vehiclestatus_data,VEHICLESTATUS_FIRM_SIZE,QHostAddress(m_ip),m_port.toInt());
//    qDebug()<<"send_ret:"<<send_ret;


//}

//void UDPSenderWidget::testsend()
//{
//    long gaussx=100;
//    long gaussy=200;
//    long height=300;

//    int northvelocity=400;              //单位：cm/s
//    int eastvelocity=500;                //单位：cm/s
//    int upvelocity=600;                    //单位：cm/s

//    QTime current_time =QTime::currentTime();
//    int hour = current_time.hour();//当前的小时
//    int minute = current_time.minute();//当前的分
//    int second = current_time.second();//当前的秒
//    int msec = current_time.msec();//当前的毫秒
//    int alltime=hour*60*60*1000+minute*60*1000+second*1000+msec;

//    char send_realtimemsg_data[REALTIMEDATA_FIRM_SIZE];

//    /* 1、信息head*/
//    send_realtimemsg_data[0] = '#';
//    /* 2、ID*/
//    send_realtimemsg_data[1] = 0x01;
//    /* 3、标志BID编码*/
//    send_realtimemsg_data[2] = 0x00;
//    send_realtimemsg_data[3] = 0x2A;
//    send_realtimemsg_data[4] = 0x01;
//    send_realtimemsg_data[5] = 0x16;
//    /* 4、时间*/
//    long i=QDateTime::currentDateTime().toTime_t();
//    memcpy(send_realtimemsg_data+6,int2char(i),4);
//    /* 5、长度*/
//    send_realtimemsg_data[10] = REALTIME_DATA_SIZE/256;           //先传高位
//    send_realtimemsg_data[11] = REALTIME_DATA_SIZE%256;           //再传低位
//    /* 6、数据*/
//    memcpy(send_realtimemsg_data+12,int2char(alltime),4);
//    memcpy(send_realtimemsg_data+16,int2char(gaussx),4);
//    memcpy(send_realtimemsg_data+20,int2char(gaussy),4);
//    memcpy(send_realtimemsg_data+24,int2char(height),4);
//    memcpy(send_realtimemsg_data+28,int2char(northvelocity),4);
//    memcpy(send_realtimemsg_data+32,int2char(eastvelocity),4);
//    memcpy(send_realtimemsg_data+36,int2char(upvelocity),4);
//    /* 7、校验和 */
//    send_realtimemsg_data[REALTIMEDATA_FIRM_SIZE - 2] = xor_checksum(send_realtimemsg_data, REALTIMEDATA_FIRM_SIZE - 2);
//    /* 8、尾部 */
//    send_realtimemsg_data[REALTIMEDATA_FIRM_SIZE - 1] ='$';

//    int send_ret=ClientudpSocket->writeDatagram(send_realtimemsg_data,REALTIMEDATA_FIRM_SIZE,QHostAddress(m_ip),m_port.toInt());
//    qDebug()<<"send_ret:"<<send_ret;
//}




