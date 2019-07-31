#include "udpsenderwidget.h"
#include "ui_udpsenderwidget.h"


#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

#include "myhelper.h"

#include <QValidator>
#include <QtNetwork/QNetworkInterface>
#include <QMessageBox>
#include <QDateTime>
#include <QDate>
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

    this->setWindowIcon(QIcon(":/picture/net1.png"));
    this->setWindowTitle(tr("UDP通信"));
    this->setFixedSize(this->size());

    ui->txtDataUdpServer->setReadOnly(true);
    ui->checkBox_T0->hide();

    ui->checkBox_lianjian->setChecked(true);
    ui->checkBox_realtime->setChecked(true);
    ui->checkBox_vehicle->setChecked(true);

    showenabled(true);

    initdata();

    //MSG数据初始化
    m_cc=boost::make_shared<autonavigation::ControlCommand>();
    m_vs=boost::make_shared<autonavigation::VehicleStatus>();
    m_gps=boost::make_shared<autonavigation::GpsTime>();
    m_sett0Ptr=boost::make_shared<autonavigation::SetT0>();

    m_publisher_sett0=m_nodeHandle_sett0.advertise<autonavigation::SetT0>(SETT0,10);

    //只能输入IP地址
    QRegExp rx("((1?\\d{1,2}|2[0-5]{2})\\.){3}(1?\\d{1,2}|2[0-5]{2})");
    QValidator *validator_IP=new QRegExpValidator(rx,this);
    ui->lineEdit_ip3->setValidator(validator_IP);
    ui->lineEdit_zuboIP1->setValidator(validator_IP);
    ui->lineEdit_zuboIP2->setValidator(validator_IP);

    //只能输入0-65535的端口号
    QValidator *validator_Port=new QIntValidator(0,65535,this);
    ui->lineEdit_sendport->setValidator(validator_Port);
    ui->txtUdpListenPort->setValidator(validator_Port);
    ui->lineEdit_localport->setValidator(validator_Port);

    //只能输入8个十六进制
    QRegExp regExp("[a-fA-F0-9]{8}");
    QValidator *validator_Hx=new QRegExpValidator(regExp,this);
    ui->lineEdit_from->setValidator(validator_Hx);
    ui->lineEdit_to->setValidator(validator_Hx);

    //只能输入4个十六进制
    QRegExp regExp_4("[a-fA-F0-9]{4}");
    QValidator *validator_Hx_4=new QRegExpValidator(regExp_4,this);
    ui->lineEdit_renwuid->setValidator(validator_Hx_4);

    /***************qt传递参数时，是自定义的类型就要注册*************************/
    qRegisterMetaType<autonavigation::VehicleStatus::ConstPtr>("autonavigation::VehicleStatus::ConstPtr");
    qRegisterMetaType<autonavigation::ControlCommand::ConstPtr>("autonavigation::ControlCommand::ConstPtr");
    qRegisterMetaType<autonavigation::GpsTime::ConstPtr>("autonavigation::GpsTime::ConstPtr");

    ServerudpSocket = new QUdpSocket(this);
    ServerudpSocket->abort();

    connect(ServerudpSocket, SIGNAL(readyRead()), this, SLOT(udpServerReadData()));
    connect(ServerudpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(udpServerReadError()));

    ClientudpSocket =new QUdpSocket(this);
    ClientudpSocket->abort();
    //ClientudpSocket->bind(24576);
    connect(ClientudpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(stateChanged_slot(QAbstractSocket::SocketState)));

    //m_recvvehiclestatusthread=new RecvVehicleStatusThread(this);
    connect(&m_recvvehiclestatusthread,SIGNAL(VehicleStatus_readed(autonavigation::VehicleStatus::ConstPtr)),this,SLOT(VehicleStatus_data(autonavigation::VehicleStatus::ConstPtr)));
    connect(&m_recvvehiclestatusthread,SIGNAL(ControlCommand_readed(autonavigation::ControlCommand::ConstPtr)),this,SLOT(ControlCommand_data(autonavigation::ControlCommand::ConstPtr)));
    connect(&m_recvvehiclestatusthread,SIGNAL(GpsTime_readed(autonavigation::GpsTime::ConstPtr)),this,SLOT(GpsTime_data(autonavigation::GpsTime::ConstPtr)));

    m_recvvehiclestatusthread.start();

    readSettings();
    set_tooltip();

    timersend=new QTimer(this);
    connect(timersend,SIGNAL(timeout()),this,SLOT(timersend_slot()));

//    //获得自1970-01-01T00:00:00至今的秒数并将这个秒数转成日期
//    long i=QDateTime::currentDateTime().toTime_t();
//    qDebug()<<"time:"<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz");
//    qDebug()<<"i--"<<i;
//    qDebug()<<QDateTime::fromTime_t(i).toString("yyyy-MM-dd hh:mm:ss");

//    //获得自1970-01-01T00:00:00.000至今的毫秒数
//    long abc=QDateTime::currentDateTime().toMSecsSinceEpoch();
//    qDebug()<<"abc:"<<abc;

//    qDebug()<<"date:"<<QDateTime::currentDateTime().date();
//    qDebug()<<"time:"<<QDateTime::currentDateTime().time();


//    QString strBuffer;
//    QDateTime time;
//    strBuffer = "2000/01/01 00:00:00";
//    time = QDateTime::fromString(strBuffer, "yyyy/MM/dd HH:mm:ss");
//    qDebug()<<"abc:"<<time.toTime_t();


//    QDate data_2000(2000,1,1);
//    QDate current_data=QDate::currentDate();
//    int c=data_2000.toJulianDay();
//    int b=current_data.toJulianDay();
//    qDebug()<<"b-c:"<<b-c;


//    QList<QHostAddress> addrs = QNetworkInterface::allAddresses();
//    foreach (QHostAddress addr, addrs) {
//        QString ip = addr.toString();
//        if(addr.protocol()==QAbstractSocket::IPv4Protocol)
//            qDebug()<<"ipv4:"<<addr.toString();
//    }


//    QByteArray a;
//    a[0]=0x09;
//    a[1]=0xaf;
//    a[2]=0xab;
//    qDebug()<<"a:"<<ByteArrayToHexString(a);
//    qDebug()<<"reserve:"<<ByteArrayReserve(a,a.count()).toHex().toUpper();


//    QString strBuffer;
//    QDateTime time;
//    strBuffer = "2001/01/01 00:00:00";
//    time = QDateTime::fromString(strBuffer, "yyyy/MM/dd HH:mm:ss");


//    QTime current_time =QTime::currentTime();
//    int hour = current_time.hour();//当前的小时
//    int minute = current_time.minute();//当前的分
//    int second = current_time.second();//当前的秒
//    int msec = current_time.msec();//当前的毫秒
//    int alltime=(hour*60*60*1000+minute*60*1000+second*1000+msec);
//    qDebug()<<"alltime:"<<alltime;
//    qDebug()<<"aaa:"<<current_time.msecsSinceStartOfDay();
//    qDebug()<<"time:"<<QTime::fromMSecsSinceStartOfDay(alltime).toString("HH:mm:ss.zzz");

}

/************************************初始化数值********************************************/
void UDPSenderWidget::initdata()
{
//    issendLianJian=false;
//    issendT0=false;
//    issendRealtimeData=false;
//    issendVehicleStatus=false;

    msgMaxCount = 600;
    countUdpServer = 0;

    lianjian_counter=0;
    T0_counter=0;
    Realtime_counter=0;
    Vs_counter=0;

    Lianjian_BID.resize(4);
    Lianjian_BID[0]=0x01;
    Lianjian_BID[1]=0x01;
    Lianjian_BID[2]=0x02;
    Lianjian_BID[3]=0x00;//链监信息

    T0_BID.resize(4);
    T0_BID[0]=0x00;
    T0_BID[1]=0x01;
    T0_BID[2]=0x01;
    T0_BID[3]=0x00;//T0信息

    array_source.clear();
    array_target.clear();
    array_renwuid.clear();

    m_T0=0;

    m_unique_key=0;          //自主行驶载车唯一标识，用于区分载车的id
    m_gps_week=0;            //GPS周
    m_gps_millisecond=0;     //取GPS周的毫秒级时间
    m_cmd_millisecond=0;     //T0 时间
    m_cmd_reserve1=0;        //预留
    m_cmd_reserve2=0;        //预留
    m_cmd_reserve3=0;        //预留
}

/************************************槽函数-定时器********************************************/
void UDPSenderWidget::timersend_slot()
{
    if(ui->checkBox_lianjian->isChecked())
    {
        send_lianjian_new();
    }

    if(ui->checkBox_T0->isChecked())
    {
        send_T0_new();
    }

    if(ui->checkBox_realtime->isChecked())
    {
        send_realtimedata_new();
    }

    if(ui->checkBox_vehicle->isChecked())
    {
        send_vehicleststus_new();
    }

}


UDPSenderWidget::~UDPSenderWidget()
{
    writeSettins();

    if(ServerudpSocket->state()==QAbstractSocket::BoundState)
    {
        ServerudpSocket->abort();
    }

    if(ClientudpSocket->state()==QAbstractSocket::BoundState)
    {
        ClientudpSocket->abort();
    }

    if(timersend->isActive())
    {
        timersend->stop();
    }

    delete timersend;

    delete ClientudpSocket;
    delete ServerudpSocket;
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

//void UDPSenderWidget::error_slot(QAbstractSocket::SocketError err)
//{
//    //qDebug()<<"error:"<<err;
//    switch (err) {
//    case QAbstractSocket::ConnectionRefusedError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The connection was refused by the peer (or timed out)."));
//        break;
//    case QAbstractSocket::RemoteHostClosedError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The remote host closed the connection."));
//        break;
//    case QAbstractSocket::HostNotFoundError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The host address was not found."));
//        break;
//    case QAbstractSocket::SocketAccessError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The socket operation failed because the application lacked the required privileges."));
//        break;
//    case QAbstractSocket::SocketResourceError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The local system ran out of resources (e.g., too many sockets)."));
//        break;
//    case QAbstractSocket::SocketTimeoutError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The socket operation timed out."));
//        break;
//    case QAbstractSocket::DatagramTooLargeError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The datagram was larger than the operating system's limit (which can be as low as 8192 bytes)."));
//        break;
//    case QAbstractSocket::NetworkError:
//        QMessageBox::warning(this,tr("Warning!"),tr("An error occurred with the network."));
//        break;
//    case QAbstractSocket::AddressInUseError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The address specified to QAbstractSocket::bind() is already in use and was set to be exclusive."));
//        break;
//    case QAbstractSocket::SocketAddressNotAvailableError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The address specified to QAbstractSocket::bind() does not belong to the host."));
//        break;
//    case QAbstractSocket::UnsupportedSocketOperationError:
//        QMessageBox::warning(this,tr("Warning!"),tr("The requested socket operation is not supported by the local operating system (e.g., lack of IPv6 support)."));
//        break;
//    case QAbstractSocket::UnknownSocketError:
//        QMessageBox::warning(this,tr("Warning!"),tr(" An unidentified error occurred."));
//        break;
//    default:
//        break;
//    }


//}

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

void UDPSenderWidget::showenabled(bool _enable)
{
    ui->lineEdit_ip3->setEnabled(_enable);
    ui->lineEdit_zuboIP1->setEnabled(_enable);
    ui->lineEdit_zuboIP2->setEnabled(_enable);
    ui->lineEdit_sendport->setEnabled(_enable);
    ui->lineEdit_from->setEnabled(_enable);
    ui->lineEdit_to->setEnabled(_enable);
    ui->lineEdit_localport->setEnabled(_enable);
    ui->spinBox_interval->setEnabled(_enable);
    ui->lineEdit_renwuid->setEnabled(_enable);

}

/************************************槽函数-连接按钮********************************************/
void UDPSenderWidget::on_ConnetBtn_clicked()
{
    //qDebug()<<"start state:"<<ClientudpSocket->state();
    if(ui->ConnetBtn->text()==tr("断开"))
    {
        if(timersend->isActive())
        {
            timersend->stop();
        }

        if(ClientudpSocket->state()==QAbstractSocket::BoundState)
        {
            m_ip_3.clear();
            m_ip_1.clear();
            m_ip_2.clear();
            m_port.clear();
            //ClientudpSocket->close();
            ClientudpSocket->abort();
        }
        ui->ConnetBtn->setText(tr("连接"));

        showenabled(true);
    }
    else if(ui->ConnetBtn->text()==tr("连接"))
    {
        if(ui->lineEdit_zuboIP1->text().isEmpty())
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("单播/组播IP地址1为空."));
            return;
        }
        if(ui->lineEdit_zuboIP2->text().isEmpty())
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("单播/组播IP地址2为空."));
            return;
        }
        if(ui->lineEdit_ip3->text().isEmpty())
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("单播/组播IP地址3为空."));
            return;
        }
        if(!isValidIP(ui->lineEdit_zuboIP1->text()))
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("单播/组播IP地址1输入有误."));
            ui->lineEdit_zuboIP1->setFocus();
            return;
        }
        if(!isValidIP(ui->lineEdit_zuboIP2->text()))
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("单播/组播IP地址2输入有误."));
            ui->lineEdit_zuboIP2->setFocus();
            return;
        }
        if(!isValidIP(ui->lineEdit_ip3->text()))
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("单播/组播IP地址3输入有误."));
            ui->lineEdit_ip3->setFocus();
            return;
        }
        if(ui->lineEdit_localport->text().isEmpty())
        {
            QMessageBox::warning(this,tr("Warning!"),tr("本地端口为空."));
            return;
        }
        if(ui->lineEdit_sendport->text().isEmpty())
        {
            QMessageBox::warning(this,tr("Warning!"),tr("发往端口为空."));
            return;
        }
        m_ip_3=ui->lineEdit_ip3->text();
        m_ip_1=ui->lineEdit_zuboIP1->text();
        m_ip_2=ui->lineEdit_zuboIP2->text();
        m_port=ui->lineEdit_sendport->text();

        array_source=hexStringtoByteArray(ui->lineEdit_from->text());
        array_target=hexStringtoByteArray(ui->lineEdit_to->text());

        if(array_source.count()<4)
        {
            QMessageBox::warning(this,tr("Warning!"),tr("信源输入有误."));
            return;
        }

        if(array_target.count()<4)
        {
            QMessageBox::warning(this,tr("Warning!"),tr("信宿输入有误."));
            return;
        }

        if(ui->lineEdit_renwuid->text().isEmpty())
        {
            array_renwuid.resize(2);
            array_renwuid[0]=0x00;
            array_renwuid[1]=0x00;
        }
        else
        {
            array_renwuid=hexStringtoByteArray(ui->lineEdit_renwuid->text());

        }
        if(array_renwuid.count()<2)
        {
            QMessageBox::warning(this,tr("Warning!"),tr("任务ID输入有误."));
            return;
        }

        bool ok = ClientudpSocket->bind(ui->lineEdit_localport->text().toInt());

        //qDebug()<<(uint8_t)array_source.at(0)<<(uint8_t)array_source[1]<<array_source[2]<<array_source[3];

        QString text;
        text.clear();
        QByteArray datagram=text.toLatin1();
        int ret=ClientudpSocket->writeDatagram(datagram,datagram.size(),QHostAddress(m_ip_3),m_port.toInt());
        //qDebug()<<"ret:"<<ret;

        if(ret>=0)
        {
            if(!timersend->isActive())
            {
                timersend->setInterval(ui->spinBox_interval->value());
                timersend->start();
            }

            ui->ConnetBtn->setText(tr("断开"));
            showenabled(false);
        }
    }
}


/*************************************处理VehicleStatus数据*********************************************/
void UDPSenderWidget::VehicleStatus_data(const autonavigation::VehicleStatus::ConstPtr &vs)
{
    m_vs=vs;

}

/*************************************处理ControlCommand数据*********************************************/
void UDPSenderWidget::ControlCommand_data(const autonavigation::ControlCommand::ConstPtr &cc)
{
    m_cc=cc;
}

/*************************************处理GpsTime数据*********************************************/
void UDPSenderWidget::GpsTime_data(const autonavigation::GpsTime::ConstPtr &gps)
{
    m_gps=gps;
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
char* UDPSenderWidget::int2char_little(int _num)
{
    memset(intchar,0,4);
//    intchar[0] = _num/(256*256*256);
//    intchar[1] = _num%(256*256*256)/(256*256);
//    intchar[2] = _num%(256*256*256)%(256*256)/256;
//    intchar[3] = _num%(256*256*256)%(256*256)%256;

    intchar[3] = _num/(256*256*256);
    intchar[2] = _num%(256*256*256)/(256*256);
    intchar[1] = _num%(256*256*256)%(256*256)/256;
    intchar[0] = _num%(256*256*256)%(256*256)%256;
    return intchar;
}

/****************************short整型转化为字符型******************************/
char* UDPSenderWidget::short2char_little(short _num)
{
    memset(shortchar,0,2);
//    shortchar[0]=_num/256;      //先传高端
//    shortchar[1]=_num%256;      //后传低端

    shortchar[1]=_num/256;        //后传高端
    shortchar[0]=_num%256;        //先传低端
    return shortchar;
}

void UDPSenderWidget::set_tooltip()
{
//   ui->lineEdit_ip->setToolTip(tr("请输入单播地址（目标地址）"));
//   ui->lineEdit_zuboIP->setToolTip(tr("请输入组播地址（224.0.0.0～239.255.255.255）"));
//   ui->lineEdit_zuboIP2->setToolTip(tr("请输入组播地址（224.0.0.0～239.255.255.255）"));
}


/****************************UDP服务端接受数据******************************/
void UDPSenderWidget::udpServerReadData()
{
    QHostAddress senderServerIP;
    quint16 senderServerPort;
    QByteArray data;
    QString buffer;

    do {
        data.resize(ServerudpSocket->pendingDatagramSize());
        ServerudpSocket->readDatagram(data.data(), data.size(), &senderServerIP, &senderServerPort);
        decode(data);

        if (ui->ckHexReceiveUdpServer->isChecked()) {
            buffer = myHelper::byteArrayToHexStr(data);
        } else {
            buffer = myHelper::byteArrayToAsciiStr(data);
        }

        QString str = QString("来自:%1[%2] ").arg(senderServerIP.toString().split(":").last()).arg(senderServerPort);
//        qDebug()<<"serverip:"<<senderServerIP.toString();
//        qDebug()<<"serverip123:"<<senderServerIP.toString().split(":").last();
//        qDebug()<<"port:"<<senderServerPort;
        appendUdpServer(1, str + buffer);

    } while (ServerudpSocket->hasPendingDatagrams());
}

/**************************************解析链监和T0*********************************************/
void UDPSenderWidget::decode(QByteArray tempbuf)
{
    if(tempbuf.mid(11,4)==Lianjian_BID)//链监信息
    {
        int lianjian_data=((int)(uchar)tempbuf[24])+((int)(uchar)tempbuf[25])*256-1;
        QDate data_2000(2000,1,1);
        int lj_current_data=data_2000.toJulianDay()+lianjian_data;
        QDate lj_cur=QDate::fromJulianDay(lj_current_data);
        //qDebug()<<cur;

        int lianjian_time=((int)(uchar)tempbuf[35])*(256*256*256)+((int)(uchar)tempbuf[34])*(256*256)+((int)(uchar)tempbuf[33])*256+((int)(uchar)tempbuf[32]);
        ui->label_lianjian_message->setText(QString("%1 %2").arg(lj_cur.toString("yyyy/MM/dd")).arg(formatTime(lianjian_time/10)));//链监信息
    }
    else if(tempbuf.mid(11,4)==T0_BID)//T0信息
    {
        int T0_data=((int)(uchar)tempbuf[24])+((int)(uchar)tempbuf[25])*256-1;
        QDate data_2000(2000,1,1);
        int T0_current_data=data_2000.toJulianDay()+T0_data;
        QDate T0_cur=QDate::fromJulianDay(T0_current_data);
        QString T0_str=T0_cur.toString("yyyy/MM/dd")+" "+"00:00:00.000";
        long time_T0=QDateTime::fromString(T0_str,"yyyy/MM/dd HH:mm:ss.zzz").toMSecsSinceEpoch();

        QDateTime time;
        QString strBuffer = GPSTIME_STR;
        time = QDateTime::fromString(strBuffer, "yyyy/MM/dd HH:mm:ss.zzz");
        long time_1980=time.toMSecsSinceEpoch();

        int T0=((int)(uchar)tempbuf[35])*(256*256*256)+((int)(uchar)tempbuf[34])*(256*256)+((int)(uchar)tempbuf[33])*256+((int)(uchar)tempbuf[32]);
        m_T0=T0;

        m_cmd_millisecond=time_T0+T0-time_1980;
        ui->label_T0_message->setText(QString("%1").arg(formatTime(T0/10)));//T0信息

        SendSetT0();
    }

}

/**************************************通过Ros发送T0 msg*********************************************/
void UDPSenderWidget::SendSetT0()
{
    m_sett0Ptr->unique_key=m_unique_key;
    m_sett0Ptr->gps_week=m_gps_week;
    m_sett0Ptr->gps_millisecond=m_gps_millisecond;
    m_sett0Ptr->cmd_millisecond=m_cmd_millisecond;
    m_sett0Ptr->cmd_reserve1=m_cmd_reserve1;
    m_sett0Ptr->cmd_reserve2=m_cmd_reserve2;
    m_sett0Ptr->cmd_reserve3=m_cmd_reserve3;

    m_publisher_sett0.publish(m_sett0Ptr);
}

/**************************************当天毫秒转时:分:秒.毫秒*********************************************/
QString UDPSenderWidget::formatTime(int ms)
{
    QTime current_time=QTime::fromMSecsSinceStartOfDay(ms);
    return current_time.toString("HH:mm:ss.zzz");
//    int ss = 1000;
//    int mi = ss * 60;
//    int hh = mi * 60;
//    int dd = hh * 24;

//    long day = ms / dd;
//    long hour = (ms - day * dd) / hh;
//    long minute = (ms - day * dd - hour * hh) / mi;
//    long second = (ms - day * dd - hour * hh - minute * mi) / ss;
//    long milliSecond = ms - day * dd - hour * hh - minute * mi - second * ss;

//    QString hou = QString::number(hour,10);
//    QString min = QString::number(minute,10);
//    QString sec = QString::number(second,10);
//    QString msec = QString::number(milliSecond,10);

//    //qDebug() << "minute:" << min << "second" << sec << "ms" << msec <<endl;
//    return hou + ":" + min + ":" + sec +"." + msec;
}


void UDPSenderWidget::udpServerReadError()
{
    appendUdpServer(1, QString("发生错误,原因 : %1").arg(ServerudpSocket->errorString()));
}

void UDPSenderWidget::appendUdpServer(quint8 type, QString msg)
{
    if (countUdpServer > msgMaxCount) {
        ui->txtDataUdpServer->clear();
        countUdpServer = 0;
    }

    QString str;

    if (type == 0) {
        str = ">> 发送 :";
        ui->txtDataUdpServer->setTextColor(QColor("dodgerblue"));
    } else if (type == 1) {
        str = "<< 接收 :";
        ui->txtDataUdpServer->setTextColor(QColor("red"));
    }

    ui->txtDataUdpServer->append(QString("时间[%1] %2 %3").arg(TIMEMS).arg(str).arg(msg));
    countUdpServer++;
}

/**************************************读取配置文件*********************************************/
void UDPSenderWidget::readSettings()
{
    QSettings settings("Config",QSettings::IniFormat);

    ui->lineEdit_ip3->setText(settings.value("UDP/UDP_IP3").toString());
    ui->lineEdit_zuboIP1->setText(settings.value("UDP/UDP_IP1").toString());
    ui->lineEdit_zuboIP2->setText(settings.value("UDP/UDP_IP2").toString());
    ui->lineEdit_sendport->setText(settings.value("UDP/sendport").toString());
    ui->lineEdit_localport->setText(settings.value("UDP/localport").toString());
    ui->txtUdpListenPort->setText(settings.value("UDP/listenport").toString());
    ui->lineEdit_from->setText(settings.value("UDP/source").toString());
    ui->lineEdit_to->setText(settings.value("UDP/target").toString());
    ui->lineEdit_renwuid->setText(settings.value("UDP/renwuid").toString());

}

/**************************************写入配置文件*********************************************/
void UDPSenderWidget::writeSettins()
{
    QSettings settings("Config",QSettings::IniFormat);

    settings.beginGroup("UDP");

    settings.setValue("UDP_IP3",ui->lineEdit_ip3->text());
    settings.setValue("UDP_IP1",ui->lineEdit_zuboIP1->text());
    settings.setValue("UDP_IP2",ui->lineEdit_zuboIP2->text());
    settings.setValue("sendport",ui->lineEdit_sendport->text());
    settings.setValue("localport",ui->lineEdit_localport->text());
    settings.setValue("listenport",ui->txtUdpListenPort->text());
    settings.setValue("source",ui->lineEdit_from->text());
    settings.setValue("target",ui->lineEdit_to->text());
    settings.setValue("renwuid",ui->lineEdit_renwuid->text());

    settings.endGroup();

}

/**************************************槽函数-监听按钮*********************************************/
void UDPSenderWidget::on_btnUdpListen_clicked()
{
    if (ui->btnUdpListen->text() == "监听")
    {

        bool ok = ServerudpSocket->bind(ui->txtUdpListenPort->text().toInt());

        if (ok) {
            ui->btnUdpListen->setText("停止");
            appendUdpServer(0, "监听成功");
            ui->txtUdpListenPort->setEnabled(false);
        } else {
            appendUdpServer(1, "监听失败,请检查端口是否被占用");
            ui->txtUdpListenPort->setEnabled(true);
        }
    }
    else
    {
        ServerudpSocket->abort();
        ui->btnUdpListen->setText("监听");
        appendUdpServer(0, "停止监听成功");
        ui->txtUdpListenPort->setEnabled(true);
    }
}

/**************************************槽函数-清空按钮*********************************************/
void UDPSenderWidget::on_btnClearUdpServer_clicked()
{
    ui->txtDataUdpServer->clear();
}

/**************************************用于发送UDP数据*********************************************/
void UDPSenderWidget::UDP_writeDatagram(const char *data, qint64 len)
{
    int send_ret=ClientudpSocket->writeDatagram(data,len,QHostAddress(m_ip_3),m_port.toInt());
    ClientudpSocket->writeDatagram(data,len,QHostAddress(m_ip_1),m_port.toInt());
    ClientudpSocket->writeDatagram(data,len,QHostAddress(m_ip_2),m_port.toInt());

}

/***************************************************************
 **************************发送数据信息**************************
 ***************************************************************/
// 1.链监信息
void UDPSenderWidget::send_lianjian_new()
{
    char send_lianjian_data[UDPDATA_FIRM_SIZE+LIANJIAN_DATA_SIZE];
    memset(send_lianjian_data,0,sizeof(send_lianjian_data));
    /* 1、UDP Ver*/
    send_lianjian_data[0] = 0x80;
    /* 2、任务ID*/
    send_lianjian_data[1] = array_renwuid[1]; //0x00;
    send_lianjian_data[2] = array_renwuid[0]; //0x00;
    /* 3、信源*/
//    send_lianjian_data[3] = 0x00;
//    send_lianjian_data[4] = 0x01;
//    send_lianjian_data[5] = 0x0D;
//    send_lianjian_data[6] = 0x6B;
//    send_lianjian_data[3] = 0x00;
//    send_lianjian_data[4] = 0x38;
//    send_lianjian_data[5] = 0x01;
//    send_lianjian_data[6] = 0x60;

    send_lianjian_data[3] = array_source[3];  //0x00
    send_lianjian_data[4] = array_source[2];  //0x38
    send_lianjian_data[5] = array_source[1];  //0x01
    send_lianjian_data[6] = array_source[0];  //0x60
    /* 4、信宿*/
    send_lianjian_data[7] = array_target[3];  //0x00;
    send_lianjian_data[8] = array_target[2];  //0x01;
    send_lianjian_data[9] = array_target[1];  //0x21;
    send_lianjian_data[10] = array_target[0]; //0x20;
    /* 5、BID */
//    send_lianjian_data[11] = 0x00;
//    send_lianjian_data[12] = 0x02;
//    send_lianjian_data[13] = 0x01;
//    send_lianjian_data[14] = 0x01;

    send_lianjian_data[11] = 0x01;
    send_lianjian_data[12] = 0x01;
    send_lianjian_data[13] = 0x02;
    send_lianjian_data[14] = 0x00;
    /* 6、Counter */
    memcpy(send_lianjian_data+15,int2char_little(lianjian_counter),4);
    lianjian_counter++;
    /* 7、flag */
    send_lianjian_data[19] = 0x00;
    /* 8、reserve */
    send_lianjian_data[20] = 0x00;
    send_lianjian_data[21] = 0x00;
    send_lianjian_data[22] = 0x00;
    send_lianjian_data[23] = 0x00;
    /* 9、data */
    memcpy(send_lianjian_data+24,get_data(),2);
    /* 10、time */
    memcpy(send_lianjian_data+26,get_time(),4);
    /* 11、datalength */
    send_lianjian_data[30] = LIANJIAN_DATA_SIZE%256;           //先传低位
    send_lianjian_data[31] = LIANJIAN_DATA_SIZE/256;           //再传高位
    /* 12、data */
    memcpy(send_lianjian_data+32,get_time(),4);

//    int send_ret=ClientudpSocket->writeDatagram(send_lianjian_data,UDPDATA_FIRM_SIZE+LIANJIAN_DATA_SIZE,QHostAddress(m_ip_danbo),m_port.toInt());
//    ClientudpSocket->writeDatagram(send_lianjian_data,UDPDATA_FIRM_SIZE+LIANJIAN_DATA_SIZE,QHostAddress(m_ip_zubo),m_port.toInt());
//    ClientudpSocket->writeDatagram(send_lianjian_data,UDPDATA_FIRM_SIZE+LIANJIAN_DATA_SIZE,QHostAddress(m_ip_zubo2),m_port.toInt());
    UDP_writeDatagram(send_lianjian_data,UDPDATA_FIRM_SIZE+LIANJIAN_DATA_SIZE);
    //qDebug()<<"send_lianjian_data:"<<send_lianjian_data;
}

// 2.T0信息
void UDPSenderWidget::send_T0_new()
{
    char send_T_data[UDPDATA_FIRM_SIZE+T0_DATA_SIZE];
    memset(send_T_data,0,sizeof(send_T_data));
    /* 1、UDP Ver*/
    send_T_data[0] = 0x80;
    /* 2、任务ID*/
    send_T_data[1] = array_renwuid[1];//0x00;
    send_T_data[2] = array_renwuid[0];//0x00;
    /* 3、信源*/
//    send_T_data[3] = 0x6B;
//    send_T_data[4] = 0x0D;
//    send_T_data[5] = 0x01;
//    send_T_data[6] = 0x00;
//    send_T_data[3] = 0x00;
//    send_T_data[4] = 0x01;
//    send_T_data[5] = 0x0D;
//    send_T_data[6] = 0x6B;
    send_T_data[3] = array_source[3];  //0x00
    send_T_data[4] = array_source[2];  //0x38
    send_T_data[5] = array_source[1];  //0x01
    send_T_data[6] = array_source[0];  //0x60
    /* 4、信宿*/
    send_T_data[7] = array_target[3];  //0x00;
    send_T_data[8] = array_target[2];  //0x01;
    send_T_data[9] = array_target[1];  //0x21;
    send_T_data[10] = array_target[0]; //0x20;
    /* 5、BID */
//    send_T_data[11] = 0x00;
//    send_T_data[12] = 0x01;
//    send_T_data[13] = 0x01;
//    send_T_data[14] = 0x00;
    send_T_data[11] = 0x00;
    send_T_data[12] = 0x01;
    send_T_data[13] = 0x01;
    send_T_data[14] = 0x00;
    /* 6、Counter */
    memcpy(send_T_data+15,int2char_little(T0_counter),4);
    T0_counter++;
    /* 7、flag */
    send_T_data[19] = 0x00;
    /* 8、reserve */
    send_T_data[20] = 0x00;
    send_T_data[21] = 0x00;
    send_T_data[22] = 0x00;
    send_T_data[23] = 0x00;
    /* 9、data */
    memcpy(send_T_data+24,get_data(),2);
    /* 10、time */
    memcpy(send_T_data+26,get_time(),4);
    /* 11、datalength */
    send_T_data[30] = T0_DATA_SIZE%256;           //先传低位
    send_T_data[31] = T0_DATA_SIZE/256;           //再传高位
    /* 12、data */
    memcpy(send_T_data+32,int2char_little(m_T0),4);

//    int send_ret=ClientudpSocket->writeDatagram(send_T_data,UDPDATA_FIRM_SIZE+T0_DATA_SIZE,QHostAddress(m_ip_danbo),m_port.toInt());
//    ClientudpSocket->writeDatagram(send_T_data,UDPDATA_FIRM_SIZE+T0_DATA_SIZE,QHostAddress(m_ip_zubo),m_port.toInt());
//    ClientudpSocket->writeDatagram(send_T_data,UDPDATA_FIRM_SIZE+T0_DATA_SIZE,QHostAddress(m_ip_zubo2),m_port.toInt());
    UDP_writeDatagram(send_T_data,UDPDATA_FIRM_SIZE+T0_DATA_SIZE);

}

// 3.实时信息
void UDPSenderWidget::send_realtimedata_new()
{
    double x,y,z,vx,vy,vz;
    Blh2XYZ(m_vs->latitude,m_vs->longitude,(double)m_vs->height,&x,&y,&z);
    Speed2XYZ((double)m_vs->vehicle_speed,(double)m_vs->azimuth,m_vs->latitude,m_vs->longitude,&vx,&vy,&vz);
//    qDebug()<<"x y z:"<<x<<y<<z;
//    qDebug()<<"vx vy vz:"<<vx<<vy<<vz;
    char send_real_data[UDPDATA_FIRM_SIZE+REALTIME_DATA_SIZE];
    memset(send_real_data,0,sizeof(send_real_data));
    /* 1、UDP Ver*/
    send_real_data[0] = 0x80;
    /* 2、任务ID*/
    send_real_data[1] = array_renwuid[1];//0x00;
    send_real_data[2] = array_renwuid[0];//0x00;
    /* 3、信源*/
    send_real_data[3] = array_source[3];
    send_real_data[4] = array_source[2];
    send_real_data[5] = array_source[1];
    send_real_data[6] = array_source[0];
    /* 4、信宿*/
    send_real_data[7] = array_target[3];
    send_real_data[8] = array_target[2];
    send_real_data[9] = array_target[1];
    send_real_data[10] = array_target[0];
    /* 5、BID */
//    send_real_data[11] = 0x00;
//    send_real_data[12] = 0x2A;
//    send_real_data[13] = 0x01;
//    send_real_data[14] = 0x16;
    send_real_data[11] = 0x16;
    send_real_data[12] = 0x01;
    send_real_data[13] = 0x2A;
    send_real_data[14] = 0x00;
    /* 6、Counter */
    memcpy(send_real_data+15,int2char_little(Realtime_counter),4);
    Realtime_counter++;
    /* 7、flag */
    send_real_data[19] = 0x00;
    /* 8、reserve */
    send_real_data[20] = 0x00;
    send_real_data[21] = 0x00;
    send_real_data[22] = 0x00;
    send_real_data[23] = 0x00;
    /* 9、data */
    memcpy(send_real_data+24,get_data(),2);
    /* 10、time */
    memcpy(send_real_data+26,get_time(),4);
    /* 11、datalength */
    send_real_data[30] = REALTIME_DATA_SIZE%256;           //先传低位
    send_real_data[31] = REALTIME_DATA_SIZE/256;           //再传高位
    /* 12、data */
    memcpy(send_real_data+32,get_time(),4);

    memcpy(send_real_data+36,int2char_little(x),4);
    memcpy(send_real_data+40,int2char_little(y),4);
    memcpy(send_real_data+44,int2char_little(z),4);
    memcpy(send_real_data+48,int2char_little(vx),4);
    memcpy(send_real_data+52,int2char_little(vy),4);
    memcpy(send_real_data+56,int2char_little(vz),4);

//    int send_ret=ClientudpSocket->writeDatagram(send_real_data,UDPDATA_FIRM_SIZE+REALTIME_DATA_SIZE,QHostAddress(m_ip_danbo),m_port.toInt());
//    ClientudpSocket->writeDatagram(send_real_data,UDPDATA_FIRM_SIZE+REALTIME_DATA_SIZE,QHostAddress(m_ip_zubo),m_port.toInt());
//    ClientudpSocket->writeDatagram(send_real_data,UDPDATA_FIRM_SIZE+REALTIME_DATA_SIZE,QHostAddress(m_ip_zubo2),m_port.toInt());

    UDP_writeDatagram(send_real_data,UDPDATA_FIRM_SIZE+REALTIME_DATA_SIZE);

}

// 4.车体状态信息
void UDPSenderWidget::send_vehicleststus_new()
{
    char send_vs_data[UDPDATA_FIRM_SIZE+VEHICLESTATUS_DATA_SIZE];
    memset(send_vs_data,0,sizeof(send_vs_data));
    /* 1、UDP Ver*/
    send_vs_data[0] = 0x80;
    /* 2、任务ID*/
    send_vs_data[1] = array_renwuid[1];//0x00;
    send_vs_data[2] = array_renwuid[0];//0x00;
    /* 3、信源*/
    send_vs_data[3] = array_source[3];
    send_vs_data[4] = array_source[2];
    send_vs_data[5] = array_source[1];
    send_vs_data[6] = array_source[0];
    /* 4、信宿*/
    send_vs_data[7] = array_target[3];
    send_vs_data[8] = array_target[2];
    send_vs_data[9] = array_target[1];
    send_vs_data[10] = array_target[0];
    /* 5、BID */
//    send_vs_data[11] = 0x00;
//    send_vs_data[12] = 0x02;
//    send_vs_data[13] = 0x05;
//    send_vs_data[14] = 0x32;
    send_vs_data[11] = 0x32;
    send_vs_data[12] = 0x05;
    send_vs_data[13] = 0x02;
    send_vs_data[14] = 0x00;
    /* 6、Counter */
    memcpy(send_vs_data+15,int2char_little(Vs_counter),4);
    Vs_counter++;
    /* 7、flag */
    send_vs_data[19] = 0x00;
    /* 8、reserve */
    send_vs_data[20] = 0x00;
    send_vs_data[21] = 0x00;
    send_vs_data[22] = 0x00;
    send_vs_data[23] = 0x00;
    /* 9、data */
    memcpy(send_vs_data+24,get_data(),2);
    /* 10、time */
    memcpy(send_vs_data+26,get_time(),4);
    /* 11、datalength */
    send_vs_data[30] = VEHICLESTATUS_DATA_SIZE%256;           //先传低位
    send_vs_data[31] = VEHICLESTATUS_DATA_SIZE/256;           //再传高位
    /* 12、data */
    memcpy(send_vs_data+32,get_time(),4);
    memcpy(send_vs_data+36,int2char_little(m_vs->longitude*3600),4);     //longtitude
    memcpy(send_vs_data+40,int2char_little(m_vs->latitude*3600),4);     //latitude
    send_vs_data[44]=m_vs->vehicle_speed;     //vehicle_speed
    send_vs_data[45]=m_vs->control_status;    //control_status

//    int send_ret=ClientudpSocket->writeDatagram(send_vs_data,UDPDATA_FIRM_SIZE+VEHICLESTATUS_DATA_SIZE,QHostAddress(m_ip_danbo),m_port.toInt());
//    ClientudpSocket->writeDatagram(send_vs_data,UDPDATA_FIRM_SIZE+VEHICLESTATUS_DATA_SIZE,QHostAddress(m_ip_zubo),m_port.toInt());
//    ClientudpSocket->writeDatagram(send_vs_data,UDPDATA_FIRM_SIZE+VEHICLESTATUS_DATA_SIZE,QHostAddress(m_ip_zubo2),m_port.toInt());

    UDP_writeDatagram(send_vs_data,UDPDATA_FIRM_SIZE+VEHICLESTATUS_DATA_SIZE);
}

char* UDPSenderWidget::get_time()
{
    int alltime=0;
    if(m_gps->gps_millisecond>0)
    {
        QString strBuffer;
        QDateTime time;
        strBuffer = GPSTIME_STR;
        time = QDateTime::fromString(strBuffer, "yyyy/MM/dd HH:mm:ss.zzz");
        long time_1980=time.toMSecsSinceEpoch();
        QDateTime datetime=QDateTime::fromMSecsSinceEpoch(time_1980+m_gps->gps_millisecond);

        QTime realtime=datetime.time();
        alltime=realtime.msecsSinceStartOfDay()*10;
    }
    else
    {
        QTime current_time =QTime::currentTime();
//        int hour = current_time.hour();//当前的小时
//        int minute = current_time.minute();//当前的分
//        int second = current_time.second();//当前的秒
//        int msec = current_time.msec();//当前的毫秒
        alltime=current_time.msecsSinceStartOfDay()*10;

    }
    return(int2char_little(alltime));

}

char* UDPSenderWidget::get_data()
{
    short date_day=0;
    if(m_gps->gps_millisecond>0)
    {
        QString strBuffer;
        QDateTime time;
        strBuffer = GPSTIME_STR;
        time = QDateTime::fromString(strBuffer, "yyyy/MM/dd HH:mm:ss.zzz");
        long time_1980=time.toMSecsSinceEpoch();
        QDateTime datetime=QDateTime::fromMSecsSinceEpoch(time_1980+m_gps->gps_millisecond);

        QDate realdate=datetime.date();
        QDate date_2000(2000,1,1);
        date_day=realdate.toJulianDay()-date_2000.toJulianDay();
    }
    else
    {
        QDate date_2000(2000,1,1);
        QDate current_data=QDate::currentDate();
        date_day=current_data.toJulianDay()-date_2000.toJulianDay();
    }

    return(short2char_little(date_day));

}


/*************************************************
Function: hexStringtoByteArray()
Description: 十六进制字串转化为十六进制编码
Calls: formatString()
Called By:
Input: hex->待转化的十六进制字串
Output: NULL
Return: QByteArray
Others: NULL
*************************************************/
QByteArray UDPSenderWidget::hexStringtoByteArray(QString hex)
{
    QByteArray ret;
    hex=hex.trimmed();
    formatString(hex,2,' ');
    QStringList sl=hex.split(" ");
    foreach(QString s,sl)
    {
        if(!s.isEmpty())
            ret.append((char)s.toInt(0,16)&0xFF);
    }
    return ret;
}


/*************************************************
Function: formatString()
Description: 将十六进制字串每字节中间加空格分隔
Calls:
Called By:hexStringtoByteArray()
Input: org->待处理的字串
       n->间隔数默认为2
       ch->分隔标志，在此取空格
Output: NULL
Return: void
Others: NULL
*************************************************/
void UDPSenderWidget::formatString(QString &org, int n=2, const QChar &ch=QChar(' '))
{
    int size= org.size();
    int space= qRound(size*1.0/n+0.5)-1;
    if(space<=0)
        return;
    for(int i=0,pos=n;i<space;++i,pos+=(n+1))
    {
        org.insert(pos,ch);
    }
}


QString UDPSenderWidget::ByteArrayToHexString(QByteArray data)
{
    QString ret(data.toHex().toUpper());
//    int len = ret.length()/2;
//    qDebug()<<len;
//    for(int i=1;i<len;i++)
//    {
//        qDebug()<<i;
//        ret.insert(2*i+i-1," ");
//    }

    return ret;
}

QByteArray UDPSenderWidget::ByteArrayReserve(QByteArray _array, int n)
{
    int m=(n+1)/2;
    for(int i=0;i<m;i++)
    {
      int j=n-1-i;
      uchar temp=_array[i];
          _array[i]=_array[j];
          _array[j]=temp;
    }

    return _array;

}


/*
 *
 * 已知：
    经度 = L （o）
    纬度 = B （o）
    高度 = H （m）

    速度 = speed （km/h）
    航向 = yaw （o）

求取：
    地心直角坐标系XYZ

    地心直角坐标系VxVyVz
 * /
/*****大地坐标系转换为WGS84地心空间直角坐标系*****/
//B,L,H 大地坐标,单位是：度;X,Y,Z 地心空间直角坐标系，单位为：米
//B=纬度，L=经度，H=高度
void UDPSenderWidget::Blh2XYZ(double B, double L, double H, double *x, double *y, double *z)
{
    //大地坐标系转换为WGS84坐标系
    B = B*PI / 180;
    L = L*PI / 180;
    double a = 6378137.0;
    double b = 6356752.314;                          //a：长轴，b：短轴
    double ee = (a*a - b*b) / (a*a);                 // ee：e平方,e:偏心率
    double w = sqrt(1 - ee*sin(B)*sin(B));
    double N = a / w;

    *x = ((N + H)*cos(B)*cos(L))*10;                //单位为 0.1m
    *y = ((N + H)*cos(B)*sin(L))*10;                //单位为 0.1m
    *z = ((N - N*ee + H)*sin(B))*10;                //单位为 0.1m
}

void UDPSenderWidget::Speed2XYZ(double speed, double yaw, double B, double L, double *vx, double *vy, double *vz)
{
    B = B*PI / 180;
    L = L*PI / 180;
    yaw = yaw*PI / 180;

    double Vu = 0;
    double Ve = speed*cos(yaw)/3.6;
    double Vn = speed*sin(yaw)/3.6;

    *vx = ((Vu*cos(B) - Vn*sin(B))*cos(L) - Ve*sin(L))*100000.0/3600.0;
    *vy = ((Vu*cos(B) - Vn*sin(B))*sin(L) + Ve*cos(L))*100000.0/3600.0;
    *vz = (Vu*sin(B) + Vn*cos(B))*100000.0/3600.0;
}

