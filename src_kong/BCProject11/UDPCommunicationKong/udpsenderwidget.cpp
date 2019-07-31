#include "udpsenderwidget.h"
#include "ui_udpsenderwidget.h"


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

#define GPSTIME_STR "1980/01/06 08:00:00.000"


UDPSenderWidget::UDPSenderWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UDPSenderWidget)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/picture/net1.png"));
    this->setWindowTitle(tr("UDP通信"));
    this->setFixedSize(this->size());

    ui->txtDataUdpServer->setReadOnly(true);

    showenabled(true);


    //MSG数据初始化
    m_cc=boost::make_shared<autonavigation::ControlCommand>();
    m_gp=boost::make_shared<autonavigation::VehicleStatus>();

    initdata();

    //只能输入IP地址
    QRegExp rx("((1?\\d{1,2}|2[0-5]{2})\\.){3}(1?\\d{1,2}|2[0-5]{2})");
    QValidator *validator_IP=new QRegExpValidator(rx,this);
    ui->lineEdit_zuboIP->setValidator(validator_IP);

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
    ui->lineEdit_bid->setValidator(validator_Hx_4);

    /***************qt传递参数时，是自定义的类型就要注册*************************/
    qRegisterMetaType<autonavigation::VehicleStatus::ConstPtr>("autonavigation::VehicleStatus::ConstPtr");
    qRegisterMetaType<autonavigation::ControlCommand::ConstPtr>("autonavigation::ControlCommand::ConstPtr");


    ServerudpSocket = new QUdpSocket(this);
    ServerudpSocket->abort();

    connect(ServerudpSocket, SIGNAL(readyRead()), this, SLOT(udpServerReadData()));
    connect(ServerudpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(udpServerReadError()));

    ClientudpSocket =new QUdpSocket(this);
    ClientudpSocket->abort();
    //ClientudpSocket->bind(24576);
    connect(ClientudpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(clientSocketstate_slot(QAbstractSocket::SocketState)));
    connect(ClientudpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(clientSocketerror_slot(QAbstractSocket::SocketError)));

    connect(&m_recvvehiclestatusthread,SIGNAL(VehicleStatus_readed(autonavigation::VehicleStatus::ConstPtr)),this,SLOT(VehicleStatus_data(autonavigation::VehicleStatus::ConstPtr)));
    connect(&m_recvvehiclestatusthread,SIGNAL(ControlCommand_readed(autonavigation::ControlCommand::ConstPtr)),this,SLOT(ControlCommand_data(autonavigation::ControlCommand::ConstPtr)));

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

//    QString strBuffer;
//    QDateTime time;
//    strBuffer = "2000-01-01 00:00:00";
//    time = QDateTime::fromString(strBuffer, "yyyy-MM-dd hh:mm:ss");
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


}

void UDPSenderWidget::initdata()
{

    msgMaxCount = 50;
    countUdpServer = 0;


    array_source.clear();
    array_target.clear();
    array_bid.clear();


    m_DataHeadBA=dataHeadToByte(m_kongDataHead);

}

void UDPSenderWidget::setWidgetEnable(bool enabled)
{
    ui->txtUdpListenPort->setEnabled(enabled);
    ui->ckHexReceiveUdpServer->setEnabled(enabled);
    ui->btnClearUdpServer->setEnabled(enabled);
    ui->btnUdpListen->setEnabled(enabled);
}

void UDPSenderWidget::timersend_slot()
{

    send_realVehicleStatus();
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

void UDPSenderWidget::clientSocketstate_slot(QAbstractSocket::SocketState state)
{
    qDebug()<<"ClientudpSocket state:"<<state;
}

void UDPSenderWidget::clientSocketerror_slot(QAbstractSocket::SocketError)
{
    qDebug()<<"ClientudpSocket error:"<<ClientudpSocket->errorString();
    appendUdpMsg(2, QString("发生错误,原因 : %1").arg(ClientudpSocket->errorString()));
}

void UDPSenderWidget::showenabled(bool _enable)
{

    ui->lineEdit_zuboIP->setEnabled(_enable);
    ui->lineEdit_sendport->setEnabled(_enable);
    ui->lineEdit_from->setEnabled(_enable);
    ui->lineEdit_to->setEnabled(_enable);
    ui->lineEdit_localport->setEnabled(_enable);
    ui->spinBox_interval->setEnabled(_enable);
    ui->lineEdit_bid->setEnabled(_enable);
    ui->spinBox_mid->setEnabled(_enable);
    ui->spinBox_tid->setEnabled(_enable);


    setWidgetEnable(false);

}

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

            m_ip_zubo.clear();

            m_port.clear();
            //ClientudpSocket->close();
            ClientudpSocket->abort();
        }
        ui->ConnetBtn->setText(tr("连接"));

        showenabled(true);
    }
    else if(ui->ConnetBtn->text()==tr("连接"))
    {

        if(ui->lineEdit_zuboIP->text().isEmpty())
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("组播IP地址为空."));
            return;
        }
        if(!isValidIP(ui->lineEdit_zuboIP->text()))
        {
            QMessageBox::warning(this,tr("Warnning!"),tr("组播IP地址输入有误."));
            ui->lineEdit_zuboIP->setFocus();
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
        m_ip_zubo=ui->lineEdit_zuboIP->text();
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

        if(ui->lineEdit_bid->text().isEmpty())
        {
            array_bid.resize(2);
            array_bid[0]=0x00;
            array_bid[1]=0x00;
        }
        else
        {
            array_bid=hexStringtoByteArray(ui->lineEdit_bid->text());

        }
        if(array_bid.count()<2)
        {
            QMessageBox::warning(this,tr("Warning!"),tr("任务ID输入有误."));
            return;
        }

        bool ok = ClientudpSocket->bind(ui->lineEdit_localport->text().toInt());


        QString text;
        text.clear();
        QByteArray datagram=text.toLatin1();
        int ret=ClientudpSocket->writeDatagram(datagram,datagram.size(),QHostAddress(m_ip_zubo),m_port.toInt());

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
void UDPSenderWidget::VehicleStatus_data(const autonavigation::VehicleStatus::ConstPtr &gp)
{
    m_gp=gp;

    qDebug()<<"m_gp->gps_week:"<<m_gp->gps_week;
    qDebug()<<"m_gp->gps_millisecond:"<<m_gp->gps_millisecond;

    qDebug()<<"m_gp->gps_millisecond:"<<QTime::fromMSecsSinceStartOfDay(m_gp->gps_millisecond);

    QString strBuffer;
    QDateTime time;
    strBuffer = GPSTIME_STR;
    time = QDateTime::fromString(strBuffer, "yyyy/MM/dd HH:mm:ss.zzz");
    long time_1980=time.toMSecsSinceEpoch();
    qDebug()<<"time_1980:"<<time_1980;
    QDateTime datetime=QDateTime::fromMSecsSinceEpoch(time_1980+m_gp->gps_millisecond);

    qDebug()<<"datetime:"<<datetime;


}

/*************************************处理ControlCommand数据*********************************************/
void UDPSenderWidget::ControlCommand_data(const autonavigation::ControlCommand::ConstPtr &cc)
{
    m_cc=cc;
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

    char intchar[4];

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

char* UDPSenderWidget::short2char_little(short _num)
{
    char shortchar[2];

    memset(shortchar,0,2);
//    shortchar[0]=_num/256;      //先传高端
//    shortchar[1]=_num%256;      //后传低端

    shortchar[1]=_num/256;        //后传高端
    shortchar[0]=_num%256;        //先传低端
    return shortchar;
}



void UDPSenderWidget::set_tooltip()
{

   ui->lineEdit_zuboIP->setToolTip(tr("请输入组播地址（224.0.0.0～239.255.255.255）"));
   ui->lineEdit_bid->setToolTip(tr("请输入十六进制字符串，如0101"));

   ui->lineEdit_from->setToolTip(tr("请输入十六进制字符串，如0A0A0A0A"));
   ui->lineEdit_to->setToolTip(tr("请输入十六进制字符串，如0A0A0A0A"));
}


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
        appendUdpMsg(1, str + buffer);

    } while (ServerudpSocket->hasPendingDatagrams());
}

void UDPSenderWidget::decode(QByteArray tempbuf)
{
//    if(tempbuf.mid(11,4)==Lianjian_BID)//链监信息
//    {
//        int lianjian_data=((int)(uchar)tempbuf[24])+((int)(uchar)tempbuf[25])*256;
//        QDate data_2000(2000,1,1);
//        int current_data=data_2000.toJulianDay()+lianjian_data;
//        QDate cur=QDate::fromJulianDay(current_data);
//        //qDebug()<<cur;

//        int lianjian_time=((int)(uchar)tempbuf[35])*(256*256*256)+((int)(uchar)tempbuf[34])*(256*256)+((int)(uchar)tempbuf[33])*256+((int)(uchar)tempbuf[32]);

//    }
//    else if(tempbuf.mid(11,4)==T0_BID)//T0信息
//    {
//        int T0=((int)(uchar)tempbuf[35])*(256*256*256)+((int)(uchar)tempbuf[34])*(256*256)+((int)(uchar)tempbuf[33])*256+((int)(uchar)tempbuf[32]);
//        m_T0=T0;
//    }

}

QString UDPSenderWidget::formatTime(int ms)
{
    int ss = 1000;
    int mi = ss * 60;
    int hh = mi * 60;
    int dd = hh * 24;

    long day = ms / dd;
    long hour = (ms - day * dd) / hh;
    long minute = (ms - day * dd - hour * hh) / mi;
    long second = (ms - day * dd - hour * hh - minute * mi) / ss;
    long milliSecond = ms - day * dd - hour * hh - minute * mi - second * ss;

    QString hou = QString::number(hour,10);
    QString min = QString::number(minute,10);
    QString sec = QString::number(second,10);
    QString msec = QString::number(milliSecond,10);

    //qDebug() << "minute:" << min << "second" << sec << "ms" << msec <<endl;

    return hou + ":" + min + ":" + sec +"." + msec;
}


void UDPSenderWidget::udpServerReadError()
{
    appendUdpMsg(2, QString("发生错误,原因 : %1").arg(ServerudpSocket->errorString()));
}

void UDPSenderWidget::appendUdpMsg(quint8 type, QString msg)
{
    if (countUdpServer > msgMaxCount) {
        ui->txtDataUdpServer->clear();
        countUdpServer = 0;
    }

    QString str;

    if (type == 0) {
        str = ">> 发送 :";
        ui->txtDataUdpServer->setTextColor(QColor("dodgerblue"));
    }
    else if (type == 1)
    {
        str = "<< 接收 :";
        ui->txtDataUdpServer->setTextColor(QColor("red"));
    }
    else if(type ==2)
    {
        str ="";
        ui->txtDataUdpServer->setTextColor(QColor("red"));

    }


    ui->txtDataUdpServer->append(QString("时间[%1] %2 %3").arg(TIMEMS).arg(str).arg(msg));
    countUdpServer++;
}

void UDPSenderWidget::readSettings()
{
    QSettings settings("Config",QSettings::IniFormat);

    ui->lineEdit_zuboIP->setText(settings.value("UDP/zubo_IP").toString());
    ui->lineEdit_sendport->setText(settings.value("UDP/sendport").toString());
    ui->lineEdit_localport->setText(settings.value("UDP/localport").toString());
    ui->txtUdpListenPort->setText(settings.value("UDP/listenport").toString());
    ui->lineEdit_bid->setText(settings.value("UDP/BID").toString());
    ui->spinBox_tid->setValue(settings.value("UDP/TID").toInt());
    ui->spinBox_mid->setValue(settings.value("UDP/MID").toInt());
    ui->lineEdit_from->setText(settings.value("UDP/source").toString());
    ui->lineEdit_to->setText(settings.value("UDP/target").toString());

}

void UDPSenderWidget::writeSettins()
{
    QSettings settings("Config",QSettings::IniFormat);

    settings.beginGroup("UDP");

    settings.setValue("zubo_IP",ui->lineEdit_zuboIP->text());
    settings.setValue("sendport",ui->lineEdit_sendport->text());
    settings.setValue("localport",ui->lineEdit_localport->text());
    settings.setValue("listenport",ui->txtUdpListenPort->text());
    settings.setValue("BID",ui->lineEdit_bid->text());
    settings.setValue("TID",ui->spinBox_tid->value());
    settings.setValue("MID",ui->spinBox_mid->value());
    settings.setValue("source",ui->lineEdit_from->text());
    settings.setValue("target",ui->lineEdit_to->text());

    settings.endGroup();

}

void UDPSenderWidget::on_btnUdpListen_clicked()
{
    if (ui->btnUdpListen->text() == "监听") {

        bool ok = ServerudpSocket->bind(ui->txtUdpListenPort->text().toInt());

        if (ok) {
            ui->btnUdpListen->setText("停止");
            appendUdpMsg(0, "监听成功");
        } else {
            appendUdpMsg(1, "监听失败,请检查端口是否被占用");
        }
    } else {
        ServerudpSocket->abort();
        ui->btnUdpListen->setText("监听");
        appendUdpMsg(0, "停止监听成功");
    }
}

void UDPSenderWidget::on_btnClearUdpServer_clicked()
{
    ui->txtDataUdpServer->clear();
}

/***************************************************************
 **************************发送数据信息**************************
 ***************************************************************/
void UDPSenderWidget::send_realVehicleStatus()
{
    QByteArray realVSBA;

    //length
    m_kongFrameHead.MLen=KONG_FRAMEHEAD_SIZE+KONG_DATAHEAD_SIZE+KONG_DATA_SIZE;

    //Time



    //BID
    m_kongFrameHead.BID=myHelper::big_bytesToShort(array_bid,2);
    //SID
    m_kongFrameHead.SID=myHelper::big_bytesToInt(array_source,4);
    //DID
    m_kongFrameHead.DID=myHelper::big_bytesToInt(array_target,4);

    realVSBA.append(frameHeadToByte(m_kongFrameHead));


    realVSBA.append(m_DataHeadBA);

    m_kongData.TID=ui->spinBox_tid->value();
    m_kongData.MID=ui->spinBox_mid->value();
    m_kongData.Lon=m_gp->longitude*10e6;
    m_kongData.Lat=m_gp->latitude*10e6;
    m_kongData.Alt=m_gp->height;                 //单位有待确定
    m_kongData.GVel=m_gp->vehicle_speed*100;     //速度
    m_kongData.Head=m_gp->azimuth;               //航向


    realVSBA.append(dataToByte(m_kongData));

    ClientudpSocket->writeDatagram(realVSBA, QHostAddress(m_ip_zubo),m_port.toInt());

    qDebug()<<"size:"<<realVSBA.size();

    appendUdpMsg(0, myHelper::byteArrayToHexStr(realVSBA));

}

char* UDPSenderWidget::get_time()
{
    QTime current_time =QTime::currentTime();
    int hour = current_time.hour();//当前的小时
    int minute = current_time.minute();//当前的分
    int second = current_time.second();//当前的秒
    int msec = current_time.msec();//当前的毫秒
    int alltime=(hour*60*60*1000+minute*60*1000+second*1000+msec)*10;

    return(int2char_little(alltime));

}

char* UDPSenderWidget::get_data()
{
    QDate data_2000(2000,1,1);
    QDate current_data=QDate::currentDate();
    int c=data_2000.toJulianDay();
    int b=current_data.toJulianDay();
    //qDebug()<<"b-c:"<<b-c;

    return(short2char_little(b-c));

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


    return ret;
}

/**
 * @brief UDPSenderWidget::frameHeadToByte
 * @param framehead
 * @return
 */
QByteArray UDPSenderWidget::frameHeadToByte(const KONG_FRAMEHEAD& framehead)
{
    QByteArray frameHeadBA;
    frameHeadBA.append(myHelper::little_intToBytes(framehead.BCI));
    frameHeadBA.append(framehead.PWID);
    frameHeadBA.append(framehead.VER);
    frameHeadBA.append(myHelper::little_shortToBytes(framehead.MLen));
    frameHeadBA.append(myHelper::little_shortToBytes(framehead.FI));
    frameHeadBA.append(myHelper::little_intToBytes(framehead.DData));
    frameHeadBA.append(framehead.DTimeHH);
    frameHeadBA.append(framehead.DTimeMM);
    frameHeadBA.append(framehead.DTimeSS);
    frameHeadBA.append(myHelper::little_shortToBytes(framehead.DTimeMS));
    frameHeadBA.append(myHelper::little_shortToBytes(framehead.BID));
    frameHeadBA.append(myHelper::little_intToBytes(framehead.SID));
    frameHeadBA.append(myHelper::little_intToBytes(framehead.DID));
    frameHeadBA.append(framehead.Reserve1);

    return frameHeadBA;

}

/**
 * @brief UDPSenderWidget::dataHeadToByte
 * @param datahead
 * @return
 */
QByteArray UDPSenderWidget::dataHeadToByte(const KONG_DATAHEAD& datahead)
{
    QByteArray dataHeadBA;
    dataHeadBA.append(datahead.SI);
    dataHeadBA.append(myHelper::little_intToBytes(datahead.HID));
    dataHeadBA.append(datahead.TI);
    dataHeadBA.append(datahead.CI);
    dataHeadBA.append(datahead.OID);
    dataHeadBA.append(datahead.Reserve2);
    dataHeadBA.append(datahead.Reserve3);
    dataHeadBA.append(myHelper::little_shortToBytes(datahead.Reserve4));
    dataHeadBA.append(myHelper::little_intToBytes(datahead.Reserve5));

    return dataHeadBA;

}


/**
 * @brief UDPSenderWidget::dataToByte
 * @param data
 * @return
 */
QByteArray UDPSenderWidget::dataToByte(const KONG_DATA& data)
{
    QByteArray dataBA;
    dataBA.append(myHelper::little_shortToBytes(data.TType));
    dataBA.append(myHelper::little_shortToBytes(data.CSID));
    dataBA.append(myHelper::little_intToBytes(data.TCode));
    dataBA.append(data.TID);
    dataBA.append(data.MID);
    dataBA.append(myHelper::little_intToBytes(data.Lon));
    dataBA.append(myHelper::little_intToBytes(data.Lat));
    dataBA.append(myHelper::little_intToBytes(data.Alt));
    dataBA.append(myHelper::little_intToBytes(data.H));
    dataBA.append(myHelper::little_intToBytes(data.BH));
    dataBA.append(myHelper::little_intToBytes(data.GVel));
    dataBA.append(myHelper::little_intToBytes(data.IAS));
    dataBA.append(myHelper::little_intToBytes(data.CAS));
    dataBA.append(myHelper::little_intToBytes(data.TAS));
    dataBA.append(myHelper::little_shortToBytes(data.Head));
    dataBA.append(myHelper::little_shortToBytes(data.Roll));
    dataBA.append(myHelper::little_shortToBytes(data.Pitch));
    dataBA.append(myHelper::little_shortToBytes(data.ClimbRate));
    dataBA.append(myHelper::little_shortToBytes(data.YR));
    dataBA.append(myHelper::little_shortToBytes(data.PR));
    dataBA.append(myHelper::little_shortToBytes(data.RR));
    dataBA.append(myHelper::little_shortToBytes(data.Yaw));
    dataBA.append(myHelper::little_shortToBytes(data.Grade));
    dataBA.append(myHelper::little_intToBytes(data.Reserve3));

    return dataBA;


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
