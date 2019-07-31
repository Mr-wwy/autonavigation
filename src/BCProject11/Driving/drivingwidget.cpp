#include "drivingwidget.h"
#include "ui_drivingwidget.h"

#include "CommonMd5.h"

#include <QPainter>
#include <QDebug>
#include <QIcon>
#include <QFont>
#include <QValidator>
#include <QMessageBox>
#include <QStandardPaths>
#include <QByteArray>
#include <QFrame>
#include <QSettings>

#include "speed.h"
#include "tachometer.h"
#include "leftfunction.h"
#include "rightfunction.h"
#include "oiltable.h"
#include "fps.h"
#include "watertemperature.h"
#include "map_localization.h"
#include "wheel.h"
#include "myindicator.h"
#include "taskmode.h"
#include "gpsmillisecond.h"
#include "setspeed.h"
#include "leftdisplay.h"
#include "operatehelp.h"

DrivingWidget::DrivingWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DrivingWidget)
{
    ui->setupUi(this);

    this->setFocusPolicy(Qt::StrongFocus);
    this->setWindowTitle(tr("遥控驾驶"));
    this->setWindowIcon(QIcon(":/KM/image/Automatic_drive.jpg"));
    this->setWindowState(Qt::WindowMaximized);
    this->setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);

    desktopWidget = QApplication::desktop();
//    QRect deskRect = desktopWidget->availableGeometry();    //获取可用桌面大小
//    connect(desktopWidget,SIGNAL(resized(int)),this,SLOT(resized_slot(int)));

    QRect screenRect = desktopWidget->screenGeometry();        //获取设备屏幕大小

    g_nActScreenX = screenRect.width() > 1440 ? screenRect.width() : 1440;
    g_nActScreenY = screenRect.height() > 900 ? screenRect.height() : 900;

    /*******************************初始化**********************************/
//    username=QStandardPaths::writableLocation(QStandardPaths::HomeLocation);
//    filepath=username+"/Autonomoustaskfile.txt";
    filepath.clear();
    readSettings();//读取配置文件

//    qDebug()<<"Fx:"<<Fx<<" Fy:"<<Fy<<" Cx:"<<Cx<<" Cy:"<<Cy;
//    qDebug()<<"R:"<<R[0]<<R[1]<<R[2]<<R[3]<<R[4]<<R[5]<<R[6]<<R[7]<<R[8];
//    qDebug()<<"T:"<<T[0]<<T[1]<<T[2];

    logitech_isconnect=false;    //逻辑是否连接
    is_showline=false;           //是否显示路线

    m_unique_key=0;          //自主行驶载车唯一标识，用于区分载车的id
    m_gps_week=0;             //GPS周
    m_gps_millisecond=0;  //取GPS周的毫秒级时间
    m_cmd_millisecond=0;  //发送的T0时刻-gps毫秒
    m_steer=0;                    //单位0.01度，前轮转角，左转为正
    m_velocity=0;                //期望速度cm/s
    m_curvature=0;            //单位0.005，期望曲率
    m_force_start=0;           //1：强制开始发车
    m_task_mode=1;           //任务模式1：遥控模式  2：自主模式  3: T0  4: 自主文件校验
    m_hand_brake=0;         //0：松开手刹, 1：拉紧手刹
    m_throttle=0;                //油门量命令，百分比
    m_brake=0;                   //刹车量命令，百分比
    m_shift=0;                     //换档命令0:P,1:R,2:N,3:D,4:S,5:L
    m_ignition=0;               //0：熄火1：点火
    m_light=0;                    //灯光
    m_reset=0;                    //复位
    m_reserve2=0;                 //record  0:不记录   1：开始记录
    m_reserve3=0;

    m_sts_mode=0;
    m_md5_str.clear();
    m_controllable1=0;
    m_controlstatus=1;

    m_rtt=-1;

    //MSG数据初始化
    RCPtr=boost::make_shared<autonavigation::ControlCommand>();
    m_recvWPCPtr=boost::make_shared<autonavigation::RecvWayPoints>();

    //初始化界面控件
    initialWidget();

    has_help=false;
    connect(ui->action_tip,SIGNAL(triggered(bool)),this,SLOT(action_tip_slot(bool)));
    ui->action->setText("123");

    /***************qt传递参数时，是自定义的类型就要注册*************************/
    qRegisterMetaType<autonavigation::VehicleStatus::ConstPtr>("autonavigation::VehicleStatus::ConstPtr");
    qRegisterMetaType<autonavigation::Logitech::ConstPtr>("autonavigation::Logitech::ConstPtr");
    qRegisterMetaType<autonavigation::Ping::ConstPtr>("autonavigation::Ping::ConstPtr");
    qRegisterMetaType<autonavigation::RecvWayPoints::ConstPtr>("autonavigation::RecvWayPoints::ConstPtr");

    connect(&m_sensorDataThread,SIGNAL(VehicleStatus_readed(autonavigation::VehicleStatus::ConstPtr)),this,SLOT(VehicleStatus_data(autonavigation::VehicleStatus::ConstPtr)));
    connect(&m_recvimagethread,SIGNAL(VideoImage_readed(QImage)),this,SLOT(VideoImage_data(QImage)));
    connect(&m_recvlogitechthread,SIGNAL(Logitech_readed(autonavigation::Logitech::ConstPtr)),this,SLOT(Logitech_data(autonavigation::Logitech::ConstPtr)));
    connect(&m_recvpingthread,SIGNAL(Ping_readed(autonavigation::Ping::ConstPtr)),this,SLOT(Ping_data(autonavigation::Ping::ConstPtr)));
    connect(&m_recvwaypointsthread,SIGNAL(WayPoints_readed(autonavigation::RecvWayPoints::ConstPtr)),this,SLOT(WayPoints_data(autonavigation::RecvWayPoints::ConstPtr)));


    m_sensorDataThread.start();
    m_sendcmdthread.start();
//    m_timerCheck=new QTimer(this);
//    m_timerCheck->setInterval(2000);
//    connect(m_timerCheck,SIGNAL(timeout()),this,SLOT(timeout_slot()));
//    m_timerCheck->start();

    sendControlCommand();//初始化发送指令
    show_status();//显示初始状态
    control_status(m_controllable1);//显示初始控制状态
}


void DrivingWidget::timerEvent(QTimerEvent *event)
{


}

DrivingWidget::~DrivingWidget()
{
    writeSettings();

    delete ui;
}

/*************************************初始化界面控件*********************************************/
void DrivingWidget::initialWidget()
{
    /**************************声明界面显示控件**************************/
    SPeed=new Speed(this);
    TAchometer=new Tachometer(this);
    //OIltable=new OilTable(this);
    FPs=new Fps(this);
    RIghtfunction=new RightFunction(this);
    LEftfunction=new LeftFunction(this);
    //WAtertemperature=new WaterTemperature(this);

    m_leftdisplay=new LeftDisplay(this);
    m_map=new Map_Localization(this,filepath);
    m_taskmode=new TaskMode(this);
    m_wheel_s=new Wheel(this);

    m_indicatorBrake_s=new MyIndicator(this);
    m_indicatorBrake_r=new MyIndicator(this);
    m_indicatorThrottle_s=new MyIndicator(this);
    m_indicatorThrottle_r=new MyIndicator(this);
    m_labelBrake=new QLabel(this);
    m_labelThrottle=new QLabel(this);

    m_label_net1=new QLabel(this);
    m_label_net2=new QLabel(this);
    m_label_file1=new QLabel(this);
    m_label_file2=new QLabel(this);
    m_label_message=new QLabel(this);

    m_label_wheel1=new QLabel(this);
    m_label_wheel2=new QLabel(this);
    m_label_throttle1=new QLabel(this);
    m_label_throttle2=new QLabel(this);
    m_label_brake1=new QLabel(this);
    m_label_brake2=new QLabel(this);
    m_label_shift1=new QLabel(this);
    m_label_shift2=new QLabel(this);
    m_label_handbrake1=new QLabel(this);
    m_label_handbrake2=new QLabel(this);
    m_label_ignition1=new QLabel(this);
    m_label_ignition2=new QLabel(this);
    m_label_logitech1=new QLabel(this);
    m_label_logitech2=new QLabel(this);


    /*****************************排放界面控件位置*******************************/
    //WAtertemperature->setGeometry(g_nActScreenX-840,g_nActScreenY-350,400,400);
    LEftfunction->setGeometry(g_nActScreenX-400,0,400,80);
    m_leftdisplay->setGeometry(10,150,330,150);
    RIghtfunction->setGeometry(g_nActScreenX-500,150,350,180);
    SPeed->setGeometry(260,g_nActScreenY-445,400,400);
    TAchometer->setGeometry(g_nActScreenX-650,g_nActScreenY-450,400,400);
    //OIltable->setGeometry(g_nActScreenX-840,g_nActScreenY-540,400,400);
    FPs->setGeometry(0,0,100,100);
    m_taskmode->setGeometry(g_nActScreenX/2-350,0,700,80);
    m_map->setGeometry(20,g_nActScreenY-370,260,260);
    m_wheel_s->setGeometry(g_nActScreenX-290,g_nActScreenY-390,150,150);
    //m_wheel_r->setGeometry(g_nActScreenX/2-60,g_nActScreenY-250,120,120);

    m_indicatorBrake_s->setGeometry(g_nActScreenX-270,g_nActScreenY-230,10,120);
    m_indicatorBrake_r->setGeometry(g_nActScreenX-250,g_nActScreenY-230,10,120);
    m_indicatorThrottle_s->SetForeColor(QColor(5,255,5,200));
    m_indicatorThrottle_r->SetForeColor(QColor(5,255,5,200));

    m_indicatorThrottle_s->setGeometry(g_nActScreenX-190,g_nActScreenY-230,10,120);
    m_indicatorThrottle_r->setGeometry(g_nActScreenX-170,g_nActScreenY-230,10,120);
    m_indicatorBrake_s->SetForeColor(QColor(255,5,5,200));
    m_indicatorBrake_r->SetForeColor(QColor(255,5,5,200));


    m_labelBrake->setGeometry(g_nActScreenX-260,g_nActScreenY-110,15,15);
    m_labelBrake->setText(tr("B"));

    m_labelThrottle->setGeometry(g_nActScreenX-180,g_nActScreenY-110,15,15);
    m_labelThrottle->setText(tr("T"));

//    QFont m_font1("意大利体",15,50);
//    m_label_millisecond->setGeometry(g_nActScreenX-490,150,90,30);
//    m_label_millisecond->setFont(m_font1);
//    m_label_millisecond->setText(tr("T0:"));

//    QRegExp number_rx("[0-9]+$");//非负整数
//    QRegExpValidator *rxValidator=new QRegExpValidator(number_rx,this);
//    m_LE_millisecond->setValidator(rxValidator);

    QFrame *line = new QFrame(this);//Qt的horizontal line 和vertical line 是由QFame实现的：
    line->setGeometry(QRect(0, g_nActScreenY-80, g_nActScreenX, 2));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    line->setStyleSheet("background-color: white");
    line->raise();

    QFont m_font2(tr("意大利体"),12,50);
    m_label_net1->setGeometry(20,g_nActScreenY-80,70,50);
    m_label_net1->setFont(m_font2);
    m_label_net1->setText(tr("网络:"));

    m_label_net2->setGeometry(90,g_nActScreenY-70,30,30);
    //m_label_net2->setScaledContents(true);

    m_label_file1->setGeometry(140,g_nActScreenY-80,40,50);
    m_label_file1->setFont(m_font2);
    m_label_file1->setText(tr("文件:"));

    m_label_file2->setGeometry(180,g_nActScreenY-70,30,30);
    //m_label_file2->setScaledContents(true);

    m_label_ignition1->setGeometry(230,g_nActScreenY-80,70,50);
    m_label_ignition1->setFont(m_font2);
    m_label_ignition1->setText(tr("点火:"));

    m_label_ignition2->setGeometry(300,g_nActScreenY-70,30,30);
    //m_label_ignition2->setScaledContents(true);

    m_label_wheel1->setGeometry(350,g_nActScreenY-80,50,50);
    m_label_wheel1->setFont(m_font2);
    m_label_wheel1->setText(tr("方向盘:"));

    m_label_wheel2->setGeometry(405,g_nActScreenY-70,30,30);

    m_label_brake1->setGeometry(450,g_nActScreenY-80,50,50);
    m_label_brake1->setFont(m_font2);
    m_label_brake1->setText(tr("刹车:"));

    m_label_brake2->setGeometry(500,g_nActScreenY-70,30,30);


    m_label_throttle1->setGeometry(550,g_nActScreenY-80,70,50);
    m_label_throttle1->setFont(m_font2);
    m_label_throttle1->setText(tr("油门:"));

    m_label_throttle2->setGeometry(620,g_nActScreenY-70,30,30);


    m_label_handbrake1->setGeometry(670,g_nActScreenY-80,90,50);
    m_label_handbrake1->setFont(m_font2);
    m_label_handbrake1->setText(tr("手刹:"));

    m_label_handbrake2->setGeometry(760,g_nActScreenY-70,30,30);


    m_label_shift1->setGeometry(810,g_nActScreenY-80,50,50);
    m_label_shift1->setFont(m_font2);
    m_label_shift1->setText(tr("档位:"));

    m_label_shift2->setGeometry(860,g_nActScreenY-70,30,30);


    m_label_logitech1->setGeometry(910,g_nActScreenY-80,70,50);
    m_label_logitech1->setFont(m_font2);
    m_label_logitech1->setText(tr("罗技:"));

    m_label_logitech2->setGeometry(980,g_nActScreenY-70,30,30);

    logitech_status(0);


    m_label_message->setGeometry(g_nActScreenX-300,g_nActScreenY-80,300,50);
    m_label_message->setFont(m_font2);

}

void DrivingWidget::action_tip_slot(bool)
{
    if(has_help)
    {

        m_operatehelp->raise();
    }
    else
    {
        m_operatehelp=new OperateHelp();
        connect(m_operatehelp,SIGNAL(destroyed(QObject*)),this,SLOT(operatehelp_destoryed(QObject*)));
        m_operatehelp->show();
        m_operatehelp->move(geometry().x()+(width()-m_operatehelp->width())/2,
                        geometry().y()+(height()-m_operatehelp->height())/2);
        has_help=true;
    }
}

void DrivingWidget::operatehelp_destoryed(QObject *)
{
    has_help=false;
}

/*************************************处理VehicleStatus数据*********************************************/
void DrivingWidget::VehicleStatus_data(const autonavigation::VehicleStatus::ConstPtr &gp)
{
    m_gps_week=gp->gps_week;
    m_gps_millisecond=gp->gps_millisecond;
    m_controlstatus=gp->control_status;

    m_taskmode->change_taskmode(m_mode,m_controlstatus);

    //m_wheel_r->wheel_rotate(gp->steer*540/3000);
    m_indicatorBrake_r->setValue(gp->brake);
    m_indicatorThrottle_r->setValue(gp->throttle);

    SPeed->change_Speed(abs(gp->vehicle_speed),gp->shift);
    TAchometer->change_tachometer(gp->engine_speed,gp->engine_status,gp->handbrake);

    //FPs->change_fps(gp->time_delay);
    //qDebug()<<"time_delay:"<<gp->time_delay;

    LEftfunction->change_LeftFunction(gp->travel_distance);
    RIghtfunction->change_right(gp->gps_week,gp->gps_millisecond,gp->latitude,gp->longitude,
                                gp->gaussX,gp->gaussY,gp->azimuth,gp->pitch,gp->roll);

//    qDebug()<<"lati:"<<gp->latitude;
//    qDebug()<<"longti:"<<gp->longitude;

    m_leftdisplay->setRecordStatusAndEnable(gp->reserve3,gp->enable);

    //OIltable->change_oiltable(gp->fuel);
    //WAtertemperature->change_watertem(gp->water_temperature);
    m_map->change_Map_Localization(gp->gaussX,gp->gaussY,gp->azimuth*100,gp->unique_key);

    m_controllable1=gp->controllable1;
    control_status(m_controllable1);

    m_sts_mode=gp->sts_mode;
    if(m_sts_mode)
    {
        QString s;
        QString _md5_str;
        for(int i=0; i<gp->md5_str.size(); i++)
        {
            s= QString("%1").arg(gp->md5_str[i],0,16);
            if(s == "0")
            {
                 s="00";
            }
            _md5_str.append(s);
        }
        if(QString::compare(m_md5_str,_md5_str,Qt::CaseSensitive)!=0)
        {
            m_md5_str=_md5_str;
        }
//        qDebug()<<"vehiclestatus.md5="<<_md5_str;
    }

}

/*************************************处理VideoImage数据*********************************************/
void DrivingWidget::VideoImage_data(QImage image)
{
    if(is_showline)
    {
        cv::Mat addmat;
        addmat=QImage2cvMat(image);
        drawTrackline(addmat,m_recvWPCPtr);
        ui->label->setPixmap(QPixmap::fromImage(cvMat2QImage(addmat)));
    }
    else
    {
        ui->label->setPixmap(QPixmap::fromImage(image));
    }

}

/*************************************处理Logitech数据*********************************************/
void DrivingWidget::Logitech_data(const autonavigation::Logitech::ConstPtr &lg)
{
    logitech_status(lg->ConcatenonSignal);

    if(lg->ConcatenonSignal)
    {
        //Logitech设备连接成功
        logitech_isconnect=true;
//        qDebug()<<"logitech="<<lg->SteeringWheel;
        m_steer=lg->SteeringWheel;
        m_brake=lg->Brake;
        m_throttle=lg->SasPedal;
        //点火和熄火
        if(lg->Ignition!=0)
        {
            if(lg->Ignition==1)
            {
                m_ignition=1;
            }
            else if(lg->Ignition==2)
            {
                m_ignition=0;
            }
        }
        //手刹
        if(lg->HandBrake!=0)
        {
            if(lg->HandBrake==1)
            {
                m_hand_brake=1;
            }
            else if(lg->HandBrake==2)
            {
                m_hand_brake=0;
            }
        }

        //换档
        if(lg->StickShift!=0)
        {
            if(lg->StickShift==7)
            {
                //减档
                if(lg->ShiftPaddlesL!=0&&m_shift>0)
                {
                    m_shift-=1;
                }
                //升档
                if(lg->ShiftPaddlesR!=0&&m_shift<5)
                {
                    m_shift+=1;
                }
            }
            else if(lg->StickShift==6)
            {
                m_shift=0;
            }
            else
            {
                m_shift=lg->StickShift;
            }
        }

    }
    else
    {
        //Logitech设备未连接
        logitech_isconnect=false;

    }

    sendControlCommand();

}
/*************************************处理Ping数据*********************************************/
void DrivingWidget::Ping_data(const autonavigation::Ping::ConstPtr &ping)
{
//    qDebug()<<"ping.rtt"<<ping->rtt;
    m_rtt=ping->rtt;
    FPs->change_fps(ping->rtt);
    show_status();

}

/*************************************处理RecvWayPoints数据*********************************************/
void DrivingWidget::WayPoints_data(const autonavigation::RecvWayPoints::ConstPtr &waypoints)
{
    m_recvWPCPtr=waypoints;
}

/*************************************QImage转cv::Mat*********************************************/
Mat DrivingWidget::QImage2cvMat(QImage image)
{
    cv::Mat mat;
    switch(image.format())
    {
    case QImage::Format_ARGB32:
    case QImage::Format_RGB32:
    case QImage::Format_ARGB32_Premultiplied:
        mat = cv::Mat(image.height(), image.width(), CV_8UC4, (void*)image.bits(), image.bytesPerLine());
        break;
    case QImage::Format_RGB888:
        mat = cv::Mat(image.height(), image.width(), CV_8UC3, (void*)image.bits(), image.bytesPerLine());
        cv::cvtColor(mat, mat, CV_BGR2RGB);
        break;
    case QImage::Format_Indexed8:
        mat = cv::Mat(image.height(), image.width(), CV_8UC1, (void*)image.bits(), image.bytesPerLine());
        break;
    }
    return mat;

}

/*************************************cv::Mat转QImage*********************************************/
QImage DrivingWidget::cvMat2QImage(const cv::Mat& mat)
{
    // 8-bits unsigned, NO. OF CHANNELS = 1
     if(mat.type() == CV_8UC1)
     {
         QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
         // Set the color table (used to translate colour indexes to qRgb values)
         image.setColorCount(256);
         for(int i = 0; i < 256; i++)
         {
             image.setColor(i, qRgb(i, i, i));
         }
         // Copy input Mat
         uchar *pSrc = mat.data;
         for(int row = 0; row < mat.rows; row ++)
         {
             uchar *pDest = image.scanLine(row);
             memcpy(pDest, pSrc, mat.cols);
             pSrc += mat.step;
         }
         return image;
     }
     // 8-bits unsigned, NO. OF CHANNELS = 3
     else if(mat.type() == CV_8UC3)
     {
         // Copy input Mat
         const uchar *pSrc = (const uchar*)mat.data;
         // Create QImage with same dimensions as input Mat
         QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
         return image.rgbSwapped();
     }
     else if(mat.type() == CV_8UC4)
     {
         // Copy input Mat
         const uchar *pSrc = (const uchar*)mat.data;
         // Create QImage with same dimensions as input Mat
         QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
         return image.copy();
     }
     else
     {
         return QImage();
     }
}

/*************************************绘制路点*********************************************/
void DrivingWidget::drawTrackline(Mat &mat, const autonavigation::RecvWayPoints::ConstPtr &waypoints)
{
    double vX = 0, vY = 0, vZ = 0;
    double cX = 0, cY = 0, cZ = 0;
    double xx = 0, yy = 0;
    int UU = 0, VV = 0;

//    double R[9] = {0, -1, 0, 0, 0, -1, 1, 0, 0};
//    double T[3] = {0, 2.0, -5.0};

////    double K[5] = {0, 0, 0, 0, 0};
//    double Fx = 200, Fy = 200, Cx = 360, Cy = 360;

    for(int i=0;i<waypoints->waypointnumA;i++)
    {
        vX = waypoints->Apx[i]/100.0;
        vY = waypoints->Apy[i]/100.0;
        vZ = 0;
        // Ex: RT
        cX = R[0]*vX + R[1]*vY + R[2]*vZ + T[0];
        cY = R[3]*vX + R[4]*vY + R[5]*vZ + T[1];
        cZ = R[6]*vX + R[7]*vY + R[8]*vZ + T[2];
        if(cZ<=0)
        {
            continue;
        }
        // In: K
        xx = cX/cZ;
        yy = cY/cZ;
        UU = Fx*xx + Cx;
        VV = Fy*yy + Cy;
        //
        cv::Point dot;
        dot.x=UU;
        dot.y=VV;
        cv::circle(mat,dot,2, Scalar(0, 255, 0));
    }

    for(int i=0;i<waypoints->waypointnumB;i++)
    {
        vX = waypoints->Bpx[i]/100.0;
        vY = waypoints->Bpy[i]/100.0;
        vZ = 0;
        // Ex: RT
        cX = R[0]*vX + R[1]*vY + R[2]*vZ + T[0];
        cY = R[3]*vX + R[4]*vY + R[5]*vZ + T[1];
        cZ = R[6]*vX + R[7]*vY + R[8]*vZ + T[2];
        if(cZ<=0)
        {
            continue;
        }
        // In: K
        xx = cX/cZ;
        yy = cY/cZ;
        UU = Fx*xx + Cx;
        VV = Fy*yy + Cy;
        //
        cv::Point dot;
        dot.x=UU;
        dot.y=VV;
        cv::circle(mat,dot,2, Scalar(255, 0, 0));
    }
}

/*************************************响应键盘事件*********************************************/
void DrivingWidget::keyPressEvent(QKeyEvent *event)
{
    int key_value=event->key();
    m_mode=-1;
    switch (key_value)
    {
        //油门
        case Qt::Key_Up:
        case Qt::Key_W:
        if(logitech_isconnect)
        {
            return;
        }
        if(m_throttle>=100)
            return;
        if(m_brake>0)
        {
            m_brake=0;
            m_throttle=0;
        }
        else
        {
            m_brake=0;
            m_throttle+=5;
        }
        break;
        //刹车
        case Qt::Key_Down:
        case Qt::Key_S:
        if(logitech_isconnect)
        {
            return;
        }
        if(m_brake>=100)
            return;
        if(m_throttle>0)
        {
            m_throttle=0;
            m_brake=0;
        }
        else
        {
            m_throttle=0;
            m_brake+=5;
        }
        break;
        //左转
        case Qt::Key_Left:
        case Qt::Key_A:
        if(logitech_isconnect)
        {
            return;
        }
        if(m_steer<=-450)
            return;
        m_steer-=10;
        break;
        //右转
        case Qt::Key_Right:
        case Qt::Key_D:
        if(logitech_isconnect)
        {
            return;
        }
        if(m_steer>=450)
            return;
        m_steer+=10;
        break;
        //点火和熄火
        case Qt::Key_Enter:
        case Qt::Key_Return:
        if(logitech_isconnect)
        {
            return;
        }
        if(m_ignition==0)//此时处于熄火状态
        {
            m_ignition=1;
        }
        else//此时处于点火状态
        {
            m_ignition=0;
        }
        break;
        //手刹
        case Qt::Key_Space:
        if(logitech_isconnect)
        {
            return;
        }
        if(m_hand_brake==0)
        {
            m_hand_brake=1;
        }
        else
        {
            m_hand_brake=0;
        }
        break;
        case Qt::Key_Equal:  // 加档
        if(logitech_isconnect)
        {
            return;
        }
        if(m_shift>=5)
            return;
        m_shift+=1;
        break;
        case Qt::Key_Minus:  // 减档
        if(logitech_isconnect)
        {
            return;
        }
        if(m_shift<=0)
            return;
        m_shift-=1;
        break;
        case Qt::Key_R:      //复位
        m_reset=1;
//        if(m_enable>0)
//        {
//            m_reset=1;
//        }
        break;
        case Qt::Key_L:      //是否显示路线
        is_showline=!is_showline;
        break;
        case Qt::Key_F:      //是否强制启动
        if(m_force_start==0)
        {
           m_force_start=1;
        }
        else
        {
           m_force_start=0;
        }
        break;
        case Qt::Key_C:      //是否开始记录
        if(m_reserve2==0)
        {
            m_reserve2=1;
        }
        else
        {
            m_reserve2=0;
        }
        m_leftdisplay->setRecordCommand(m_reserve2);
        break;
        //切换任务模式   m_task_mode=0：人工模式 1：遥控模式  2：自主模式  3: T0  4: 自主文件校验
        case Qt::Key_F1:
        m_task_mode=1;  //遥控模式
        m_mode=1;
        m_sendcmdthread.restart();
        break;
        case Qt::Key_F2:
        m_task_mode=0;  //人工模式
        m_mode=0;
        //m_sendcmdthread.pause();
        break;
        case Qt::Key_F3:
        m_task_mode=2;  //自主模式
        m_mode=2;
        m_sendcmdthread.restart();
        break;
        case Qt::Key_F4:
        m_task_mode=3;
        m_mode=3;
        m_sendcmdthread.restart();
        break;
        case Qt::Key_F5:
        m_task_mode=4;
        m_mode=4;
        m_sendcmdthread.restart();
        break;
        case Qt::Key_F6:
        m_mode=6;
        break;

        default:
        break;
    }

    sendControlCommand();

    if(m_mode>=0)
    {
        change_taskmode(m_mode);
    }

}

void DrivingWidget::keyReleaseEvent(QKeyEvent *event)
{
    int key_value=event->key();
    switch (key_value) {
    case Qt::Key_R:
        m_reset=0;
        break;
    default:
        break;
    }

    sendControlCommand();
}

void DrivingWidget::closeEvent(QCloseEvent *event)
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

/*************************************发送控制指令ControlCommand*********************************************/
void DrivingWidget::sendControlCommand()
{
    //m_taskmode->change_taskmode(m_task_mode);
    m_taskmode->change_taskmode(m_mode,m_controlstatus);
    m_wheel_s->wheel_rotate(m_steer,m_shift);
    m_indicatorBrake_s->setValue(m_brake);
    m_indicatorThrottle_s->setValue(m_throttle);

    RCPtr->unique_key=m_unique_key;
    RCPtr->gps_week=m_gps_week;
    RCPtr->gps_millisecond=m_gps_millisecond;
    RCPtr->cmd_millisecond=m_cmd_millisecond;
    RCPtr->cmd_steer=-m_steer*2500/450;//左转为正，右转为负
    RCPtr->cmd_velocity=m_velocity;
    RCPtr->cmd_curvature=m_curvature;
    RCPtr->cmd_force_start=m_force_start;
    RCPtr->cmd_task_mode=m_task_mode;
    RCPtr->cmd_hand_brake=m_hand_brake;
    RCPtr->cmd_throttle=m_throttle;
    RCPtr->cmd_brake=m_brake;
    RCPtr->cmd_shift=m_shift;
    RCPtr->cmd_ignition=m_ignition;
    RCPtr->cmd_light=m_light;
    RCPtr->cmd_reset=m_reset;
    RCPtr->cmd_reserve2=m_reserve2;
    RCPtr->cmd_reserve3=m_reserve3;

    m_sendcmdthread.SendCMD(RCPtr);

}

/*************************************检测自主任务文件MD5值*********************************************/
int DrivingWidget::checkoutmd5(QString _md5)
{
    openssl_md5 m_md5;
    QByteArray ba=filepath.toLocal8Bit();
    char *path=ba.data();
    if( m_md5.init(path)<1)
    {
        return -1;//文件打开失败
    }

    int size=m_md5.getFileSize(path);
    m_md5.updateAll();
    m_md5.final();
    unsigned char *md5_value= (unsigned char *)m_md5.getResult();
//    qDebug()<<"size="<<size;
//    qDebug()<<"md5_value"<<md5_value;
    QString md5_str;
    QString s;
    for (int i = 0; i < MD5_SUM_LEN; i++)
    {
           s= QString("%1").arg(md5_value[i],0,16);
           if(s == "0")
           {
                s="00";
           }
           md5_str.append(s);
    }
//   qDebug()<<"md5_str"<<md5_str;

   if(QString::compare(_md5,md5_str,Qt::CaseSensitive)==0)//Qt::CaseInsensitive表示对大小写不敏感    Qt::CaseSensitive表示敏感
   {
       return 1;//MD5匹配成功
   }
   else
   {
       return 0;//MD5匹配不成功
   }

}

/*************************************切换模式*********************************************/
void DrivingWidget::change_taskmode(int mode)
{
    if(mode==1)
    {
          QMessageBox::information(this,"Tip","进入遥控模式");
    }
    else if(mode==2)
    {
          QMessageBox::information(this,"Tip","进入自主模式");
    }
    else if(mode==3)
    {
            m_gpsmillisecond=new Gpsmillisecond();
            connect(m_gpsmillisecond,SIGNAL(gpsmillisecond(QString)),this,SLOT(gpsmillisecond_slot(QString)));
            //让弹出的窗口显示在主窗口中间
            m_gpsmillisecond->move(this->geometry().center()-m_gpsmillisecond->geometry().center());
            m_gpsmillisecond->show();

    }
    else if(mode==4)
    {
        usleep(500000);//等待目标返回自主文件MD5值
        int checkout_value=checkoutmd5(m_md5_str);
        if(checkout_value==-1)
        {
            QMessageBox::information(this,"Warning!","File open failed.");
            m_md5_str.clear();
        }
        else if(checkout_value==0)
        {
            QMessageBox::information(this,"Warning!","File MD5 match failed.");
            m_md5_str.clear();
        }
        else
        {
            QMessageBox::information(this,"Tip","File MD5 match successful.");
        }

        show_status();

    }
    else if(mode==0)
    {
        QMessageBox::information(this,"Tip","进入人工模式");

    }
    else if(mode==6)
    {
        m_setspeed=new SetSpeed;
        connect(m_setspeed,SIGNAL(setspeed_clicked_signal(int)),this,SLOT(setspeed_surebtn_clicked_slot(int)));
        //让弹出的窗口显示在主窗口中间
        m_setspeed->move(this->geometry().center()-m_setspeed->geometry().center());
        m_setspeed->show();

    }
    else
    {

    }

}

void DrivingWidget::setspeed_surebtn_clicked_slot(int _speed)
{
    m_velocity=_speed;
    m_leftdisplay->setSpeed(_speed);

    sendControlCommand();
}

/***********************************槽函数-处理接受的gpsmillisecond数据**********************************************/
void DrivingWidget::gpsmillisecond_slot(QString gm)
{
    m_cmd_millisecond=gm.toLong();
    RIghtfunction->setTime_T0(gm);

    sendControlCommand();
}

/*************************************显示状态*********************************************/
void DrivingWidget::show_status()
{
    QString message;

    if(m_rtt<0)
    {
        m_label_net2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_net2->setToolTip("连接失败，请检查网络连接。");
        message.append("网络未连接  ");

        control_status(0);
    }
    else
    {
        m_label_net2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_net2->setToolTip("网络连接成功。");
    }

    if(m_md5_str.isEmpty())
    {
        m_label_file2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_file2->setToolTip("自主文件未检测，请按F5键进行自主文件检测。");
        message.append("自主文件未检测 ");
    }
    else
    {
        m_label_file2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_file2->setToolTip("自主文件检测成功。");
    }

    if(message.isEmpty())
    {

    }
    else
    {
            m_label_message->setStyleSheet("color: rgb(250, 10, 30);");
            m_label_message->setText(message);
    }

}

/*************************************显示可控状态*********************************************/
void DrivingWidget::control_status(UINT8 control)
{
    //Bit8：方向盘 Bit7：油门 Bit6：刹车 Bit5：档位 Bit4：手刹 Bit3：点火 Bit2：熄火 Bit1：预留 相应位为1表示受方舱控制
    // Bit1：预留
    if((control&0x01)!=0)
    {

    }
    else
    {

    }

   //Bit2：熄火
    if((control&0x02)!=0)
    {

    }
    else
    {

    }

   //Bit3：点火
    if((control&0x04)!=0)
    {
        m_label_ignition2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_ignition2->setToolTip("点火/熄火有效");
    }
    else
    {
        m_label_ignition2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_ignition2->setToolTip("点火/熄火无效");
    }

    //Bit4：手刹
    if((control&0x08)!=0)
    {
        m_label_handbrake2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_handbrake2->setToolTip("手刹有效");

    }
    else
    {
        m_label_handbrake2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_handbrake2->setToolTip("手刹无效");

    }

    // Bit5：档位
    if((control&0x10)!=0)
    {
        m_label_shift2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_shift2->setToolTip("档位有效");

    }
    else
    {
        m_label_shift2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_shift2->setToolTip("档位无效");
    }

   //Bit6：刹车
    if((control&0x20)!=0)
    {
        m_label_brake2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_brake2->setToolTip("刹车有效");
    }
    else
    {
        m_label_brake2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_brake2->setToolTip("刹车无效");
    }

    //Bit7：油门
    if((control&0x40)!=0)
    {
        m_label_throttle2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_throttle2->setToolTip("油门有效");

    }
    else
    {
        m_label_throttle2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_throttle2->setToolTip("油门无效");
    }

    //Bit8：方向盘
    if((control&0x80)!=0)
    {
        m_label_wheel2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_wheel2->setToolTip("方向盘有效");

    }
    else
    {
        m_label_wheel2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_wheel2->setToolTip("方向盘无效");
    }
}

void DrivingWidget::logitech_status(int status)
{
    if(status)
    {
        m_label_logitech2->setStyleSheet("image: url(:/KM/image/circle_green.svg);");
        m_label_logitech2->setToolTip("力反馈方向盘设备连接成功");
    }
    else
    {
        m_label_logitech2->setStyleSheet("image: url(:/KM/image/circle_grey.svg);");
        m_label_logitech2->setToolTip("力反馈方向盘设备未连接");
    }

}

/****************************读取配置文件********************************/
void DrivingWidget::readSettings()
{
    QSettings settings(tr("Config"),QSettings::IniFormat);

    filepath=settings.value("Driving/AutoTaskFile").toString();
    Fx=settings.value("Driving/Fx",539.4193).toDouble();
    Fy=settings.value("Driving/Fy",732.2728).toDouble();
    Cx=settings.value("Driving/Cx",437.1132).toDouble();
    Cy=settings.value("Driving/Cy",-12.9011).toDouble();

    int size_R=settings.beginReadArray("R");
    //qDebug()<<"size_R:"<<size_R;
    for(int i=0;i<=size_R;++i)
    {
        settings.setArrayIndex(i);
        R[0]=settings.value("0",-0.1821).toDouble();
        R[1]=settings.value("1",-0.9831).toDouble();
        R[2]=settings.value("2",0.0174).toDouble();
        R[3]=settings.value("3",0.0924).toDouble();
        R[4]=settings.value("4",-0.0347).toDouble();
        R[5]=settings.value("5",-0.9951).toDouble();
        R[6]=settings.value("6",0.9789).toDouble();
        R[7]=settings.value("7",-0.1796).toDouble();
        R[8]=settings.value("8",0.0971).toDouble();

    }
    settings.endArray();

    int size_T=settings.beginReadArray("T");
    for(int i=0;i<=size_T;++i)
    {
        settings.setArrayIndex(i);
        T[0]=settings.value("0",0.3427).toDouble();
        T[1]=settings.value("0",2.4717).toDouble();
        T[2]=settings.value("0",-3.0944).toDouble();
    }
    settings.endArray();

//    QFile autotaskfile(filepath);
//    if(!autotaskfile.exists())
//    {
//        qDebug()<<"file dose not exist.";
//    }

}

/****************************写入配置文件********************************/
void DrivingWidget::writeSettings()
{
    QSettings settings(tr("Config"),QSettings::IniFormat);

    settings.beginGroup("Driving");
    settings.setValue(tr("AutoTaskFile"),filepath);
    settings.setValue(tr("Fx"),Fx);
    settings.setValue(tr("Fy"),Fy);
    settings.setValue(tr("Cx"),Cx);
    settings.setValue(tr("Cy"),Cy);
    settings.endGroup();

    settings.beginWriteArray("R");
    for(int i=0;i<1;++i)
    {
        settings.setArrayIndex(i);

        settings.setValue("0",R[0]);
        settings.setValue("1",R[1]);
        settings.setValue("2",R[2]);
        settings.setValue("3",R[3]);
        settings.setValue("4",R[4]);
        settings.setValue("5",R[5]);
        settings.setValue("6",R[6]);
        settings.setValue("7",R[7]);
        settings.setValue("8",R[8]);
    }
    settings.endArray();

    settings.beginWriteArray("T");
    for(int i=0;i<1;++i)
    {
        settings.setArrayIndex(i);

        settings.setValue("0",T[0]);
        settings.setValue("1",T[1]);
        settings.setValue("2",T[2]);
    }
    settings.endArray();

}










