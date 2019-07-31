#include "weapon_navigation.h"
#include "ui_weapon_navigation.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

#include <QCursor>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QSettings>

#define BORDER_WIDTH 2
#define BORDER_HEIGHT 2

Weapon_navigation::Weapon_navigation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Weapon_navigation)
{
    ui->setupUi(this);
    this->setWindowTitle("武器导航");
    this->setWindowIcon(QIcon(":/new/1"));

    m_aim = false;
    box = new QMessageBox;
    m_cameraIP1.clear();

    readSettings();

    /**************如有扩展屏幕则显示到扩展屏幕上，否则显示到主屏上******************/
    QDesktopWidget* desktop = QApplication::desktop();
    int N=desktop->screenCount();
    if(N>=2)
    {
        this->setGeometry(desktop->screenGeometry(1));
    }
    else
    {
        this->setGeometry(desktop->screenGeometry(0));
    }
//    QRect screenRect = desktop->screenGeometry();        //获取设备屏幕大小


    ui->Aim_label->setVisible(false);
    ui->Aim_label->setStyleSheet("QLabel{border-image:url(:/new/aim)}");
    ui->label->setScaledContents(true);
    ui->label->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->label,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(label1_customContextMenuRequested(QPoint)));

     /*****************************自定义右键快捷菜单******************************/
    camera_menu1=new QMenu(this);
    action_camera1_open=new QAction(QIcon(":/new/open"),tr("打开"),this);
    action_camera1_close=new QAction(QIcon(":/new/close"),tr("关闭"),this);
    action_camera1_save=new QAction(QIcon(":/new/video"),tr("录像"),this);
    camera_menu1->addAction(action_camera1_open);
    camera_menu1->addAction(action_camera1_close);
    camera_menu1->addAction(action_camera1_save);
    action_camera1_close->setEnabled(false);
    action_camera1_save->setEnabled(false);
    if(!isValidIP(m_cameraIP1))
    {
        action_camera1_open->setEnabled(false);
        ui->label->setToolTip(tr("配置文件参数CameraIP1输入有误"));
        ui->label->setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(230, 5, 5);");
    }

    connect(action_camera1_open,SIGNAL(triggered()),this,SLOT(action_camera1_open_slot()));
    connect(action_camera1_close,SIGNAL(triggered()),this,SLOT(action_camera1_close_slot()));
    connect(action_camera1_save,SIGNAL(triggered(bool)),this,SLOT(action_camera1_save_slot(bool)));


    init_NET_DVR();          //初始化NET_DVR
    m_conhccamerathread1=new ConHCCameraThread(m_cameraIP1.toStdString().c_str(),username,password,"VideoImage1",1,13,15);

    //qDebug()<<"13";
    //帧率太低的话，录像后无法播放，实测帧率必须大于10帧/s,录像后才能播放
    connect(m_conhccamerathread1,SIGNAL(saveSignals(int)),this,SLOT(thread1_save_slot(int)));
    connect(m_conhccamerathread1,SIGNAL(openCameraSignals(int)),this,SLOT(thread1_open_slot(int)));


    /***************qt传递参数时，是自定义的类型就要注册*************************/
    //qRegisterMetaType<autonavigation::VideoImage::ConstPtr>("autonavigation::VideoImage::ConstPtr");
    //由于在线程中已经将自定义的类型(autonavigation::VideoImage::ConstPtr)的数据转化为QImage,所以qt的信号与槽函数传递数据类型是QImage，故不需要注册
    qRegisterMetaType<sensor_msgs::Joy::ConstPtr>("sensor_msgs::Joy::ConstPtr");
    connect(&m_recvjoy,SIGNAL(Joy_readed(sensor_msgs::Joy::ConstPtr)),this,SLOT(Joy_data(sensor_msgs::Joy::ConstPtr)));

    m_recvimagethread1=new RecvImageThread(VIDEOIMAGE1);
    connect(m_recvimagethread1,SIGNAL(Image_data_readed(QImage)),this,SLOT(deal_VideoImage_data1(QImage)));
    m_recvimagethread1->start();//在ros中，对于多线程的回调函数，只需要一个ros::spin()或ros::spinonce()
}

Weapon_navigation::~Weapon_navigation()
{
    writeSettings();
    delete m_conhccamerathread1;
    delete m_recvimagethread1;

    //清除海康SDK配置
    NET_DVR_Cleanup();      //使用一次就行，重复调用会出现程序异常

    delete ui;
}

void Weapon_navigation::init_NET_DVR()
{
    //init 海康SDK
    if (!NET_DVR_Init())
    {
        QMessageBox::information(this,tr("SDK INITIAL ERROR"), \
            tr("SDK_LAST_ERROR=%1").arg(NET_DVR_GetLastError()));

    }
    else
    {
        qDebug()<<"SDK_INIT";
    }
    //设置连接时间与重连时间
    NET_DVR_SetConnectTime(500, 1);    //毫秒，尝试连接次数
    NET_DVR_SetReconnect(1000, true);    //重连间隔，毫秒；是否重连

    //NET_DVR_SetExceptionCallBack_V30(0, NULL, ExceptionCallBack, NULL);
}

void Weapon_navigation::paintEvent(QPaintEvent *event)
{
    ui->label->setGeometry(0,0,this->width(),this->height());
    g_nActScreenX = this->width()/2-25-about_direction*800;
    g_nActScreenY = this->height()/2-25-around_direction*500;
    if(g_nActScreenX < 0)
        g_nActScreenX = 0;
    if(g_nActScreenY < 0)
        g_nActScreenY = 0;
    if(g_nActScreenX > (this->width()-50))
        g_nActScreenX = (this->width()-50);
    if(g_nActScreenY > (this->height()-50))
        g_nActScreenY = (this->height()-50);
    ui->Aim_label->setGeometry(g_nActScreenX,g_nActScreenY,50,50);
}

void Weapon_navigation::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::information(this,tr("退出程序"),QString(tr("确认退出程序")),
                                QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        event->accept(); // 接受退出信号，程序退出
    }
    else
    {
        event->ignore(); // 忽略退出信号，程序继续进行
    }
}

void Weapon_navigation::deal_VideoImage_data1(QImage image)
{
    ui->label->setPixmap(QPixmap::fromImage(image));
}

void Weapon_navigation::label1_customContextMenuRequested(QPoint pos)
{
    camera_menu1->exec(QCursor::pos());
}

void Weapon_navigation::Joy_data(const sensor_msgs::Joy::ConstPtr &msg)
{
    machine_gun = msg->buttons[1];
    missile = msg->buttons[0];
    about_direction = msg->axes[0];
    around_direction = msg->axes[1];

    this->update();
    if((machine_gun || missile || about_direction || around_direction) && m_aim)
        ui->Aim_label->setVisible(true);
    if(machine_gun || missile)
        ui->Aim_label->setStyleSheet("QLabel{border-image:url(:/new/aim2)}");
    else
        ui->Aim_label->setStyleSheet("QLabel{border-image:url(:/new/aim)}");
//    qDebug() << "machine_gun: " << machine_gun;
//    qDebug() << "missile: " << missile;
    qDebug() << "about_direction: " << about_direction;
    qDebug() << "around_direction: " << around_direction;
}

void Weapon_navigation::thread1_open_slot(int _open)
{
    if(_open>0)
    {
        m_aim = true;
        action_camera1_open->setEnabled(false);
        action_camera1_close->setEnabled(true);
        action_camera1_save->setEnabled(true);
        ui->label->setToolTip(tr(""));
    }
    else
    {
        action_camera1_open->setEnabled(true);
        action_camera1_close->setEnabled(false);
        action_camera1_save->setEnabled(false);
        QMessageBox::warning(this,tr("Warning!"),tr("登录失败，请检查网络连接或修改IP参数。"));
    }
}

void Weapon_navigation::thread1_save_slot(int _save)
{
    if(_save>0)
    {
        ui->label->setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(0, 220, 13);");
        action_camera1_save->setText(tr("停止录像"));
    }
    else
    {
        ui->label->setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(133, 133, 133);");
        action_camera1_save->setText(tr("录像"));
    }
}

void Weapon_navigation::action_camera1_open_slot()
{
    if(m_conhccamerathread1->isRunning())
    {

    }
    else
        m_conhccamerathread1->start();
}

void Weapon_navigation::action_camera1_close_slot()
{
    if(m_conhccamerathread1->isRunning())
        m_conhccamerathread1->stopRealPlay();

    m_aim = false;
    ui->Aim_label->setVisible(false);
    action_camera1_close->setEnabled(false);
    action_camera1_save->setEnabled(false);
    action_camera1_open->setEnabled(true);
}

void Weapon_navigation::action_camera1_save_slot(bool ischeck)
{
    m_conhccamerathread1->saveorstopRealPlay();
}

/*************************检测字符串是否为IP地址***************************/
bool Weapon_navigation::isValidIP(QString _strip)
{
    //IP地址正则表达式
    QRegExp rx("((1?\\d{1,2}|2[0-5]{2})\\.){3}(1?\\d{1,2}|2[0-5]{2})");
    //QRegExp rx2("^([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])$");
    if(rx.exactMatch(_strip))
        return true;
    else
        return false;
}

/****************************读取配置文件********************************/
void Weapon_navigation::readSettings()
{
    QSettings settings(tr("Config"),QSettings::IniFormat);

    m_cameraIP1=settings.value("Camera/CameraIP1").toString();
}

/****************************写入配置文件********************************/
void Weapon_navigation::writeSettings()
{
    QSettings settings(tr("Config"),QSettings::IniFormat);

    settings.beginGroup("Camera");
    settings.setValue(tr("CameraIP1"),m_cameraIP1);
    settings.endGroup();
}
