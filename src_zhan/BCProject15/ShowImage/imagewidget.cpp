#include "imagewidget.h"
#include "ui_imagewidget.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

#include <QCursor>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QSettings>

#define BORDER_WIDTH 1
#define BORDER_HEIGHT 1

ImageWidget::ImageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("Camera");
    this->setWindowIcon(QIcon(":/picture/camera.png"));

    fullscreen_ID=0;

    m_isloginin_1=false;
    m_isloginin_2=false;
    m_isloginin_3=false;
    m_isloginin_4=false;

    m_cameraIP1.clear();
    m_cameraIP2.clear();
    m_cameraIP3.clear();
    m_cameraIP4.clear();

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

    /******************************Label初始化*********************************/
    label_camera1=new QLabel(this);
    label_camera1->setObjectName("label_camera1");
    label_camera1->setScaledContents(true);
    label_camera1->setGeometry(0,0,this->width()/2,this->height()/2);
    label_camera1->setContextMenuPolicy(Qt::CustomContextMenu);
    label_camera1->setPixmap(QPixmap(":/picture/black.jpg"));
    label_camera1->setFrameShape(QFrame::StyledPanel);
    label_camera1->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(133, 133, 133);");
//    label_camera1->move(BORDER_WIDTH,BORDER_HEIGHT);
//    label_camera1->resize(label_camera1->size().width()-2*BORDER_WIDTH,label_camera1->size().height()-2*BORDER_HEIGHT);


    label_camera2=new QLabel(this);
    label_camera2->setObjectName("label_camera2");
    label_camera2->setScaledContents(true);
    label_camera2->setGeometry(this->width()/2,0,this->width()/2+width()%2,this->height()/2);
    label_camera2->setContextMenuPolicy(Qt::CustomContextMenu);
    label_camera2->setPixmap(QPixmap(":/picture/black.jpg"));
    label_camera2->setFrameShape(QLabel::Box);
    label_camera2->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(133, 133, 133);");


    label_camera3=new QLabel(this);
    label_camera3->setObjectName("label_camera3");
    label_camera3->setScaledContents(true);
    label_camera3->setGeometry(0,this->height()/2,this->width()/2,this->height()/2+height()%2);
    label_camera3->setContextMenuPolicy(Qt::CustomContextMenu);
    label_camera3->setPixmap(QPixmap(":/picture/black.jpg"));
    label_camera3->setFrameShape(QLabel::Box);
    label_camera3->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(133, 133, 133);");


    label_camera4=new QLabel(this);
    label_camera4->setObjectName("label_camera4");
    label_camera4->setScaledContents(true);
    label_camera4->setGeometry(this->width()/2,this->height()/2,this->width()/2+width()%2,this->height()/2+height()%2);
    label_camera4->setContextMenuPolicy(Qt::CustomContextMenu);
    label_camera4->setPixmap(QPixmap(":/picture/black.jpg"));
    label_camera4->setFrameShape(QLabel::Box);
    label_camera4->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(133, 133, 133);");


    connect(label_camera1,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(label1_customContextMenuRequested(QPoint)));
    connect(label_camera2,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(label2_customContextMenuRequested(QPoint)));
    connect(label_camera3,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(label3_customContextMenuRequested(QPoint)));
    connect(label_camera4,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(label4_customContextMenuRequested(QPoint)));


     /*****************************自定义右键快捷菜单******************************/
    camera_menu1=new QMenu(this);
    action_camera1_open=new QAction(QIcon(":/picture/camera_open.png"),tr("打开"),this);
    action_camera1_close=new QAction(QIcon(":/picture/camera_close.png"),tr("关闭"),this);
    action_camera1_save=new QAction(QIcon(":/picture/video.png"),tr("录像"),this);
    camera_menu1->addAction(action_camera1_open);
    camera_menu1->addAction(action_camera1_close);
    camera_menu1->addAction(action_camera1_save);
    action_camera1_close->setEnabled(false);
    action_camera1_save->setEnabled(false);
    if(!isValidIP(m_cameraIP1))
    {
        action_camera1_open->setEnabled(false);
        label_camera1->setToolTip(tr("配置文件参数CameraIP1输入有误"));
        label_camera1->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(230, 5, 5);");
    }

    camera_menu2=new QMenu(this);
    action_camera2_open=new QAction(QIcon(":/picture/camera_open.png"),tr("打开"),this);
    action_camera2_close=new QAction(QIcon(":/picture/camera_close.png"),tr("关闭"),this);
    action_camera2_save=new QAction(QIcon(":/picture/video.png"),tr("录像"),this);
    camera_menu2->addAction(action_camera2_open);
    camera_menu2->addAction(action_camera2_close);
    camera_menu2->addAction(action_camera2_save);
    action_camera2_close->setEnabled(false);
    action_camera2_save->setEnabled(false);
    if(!isValidIP(m_cameraIP2))
    {
        action_camera2_open->setEnabled(false);
        label_camera2->setToolTip(tr("配置文件参数CameraIP2输入有误"));
        label_camera2->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(230, 5, 5);");
    }


    camera_menu3=new QMenu(this);
    action_camera3_open=new QAction(QIcon(":/picture/camera_open.png"),tr("打开"),this);
    action_camera3_close=new QAction(QIcon(":/picture/camera_close.png"),tr("关闭"),this);
    action_camera3_save=new QAction(QIcon(":/picture/video.png"),tr("录像"),this);
    camera_menu3->addAction(action_camera3_open);
    camera_menu3->addAction(action_camera3_close);
    camera_menu3->addAction(action_camera3_save);
    action_camera3_close->setEnabled(false);
    action_camera3_save->setEnabled(false);
    if(!isValidIP(m_cameraIP3))
    {
        action_camera3_open->setEnabled(false);
        label_camera3->setToolTip(tr("配置文件参数CameraIP3输入有误"));
        label_camera3->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(230, 5, 5);");
    }

    camera_menu4=new QMenu(this);
    action_camera4_open=new QAction(QIcon(":/picture/camera_open.png"),tr("打开"),this);
    action_camera4_close=new QAction(QIcon(":/picture/camera_close.png"),tr("关闭"),this);
    action_camera4_save=new QAction(QIcon(":/picture/video.png"),tr("录像"),this);
    camera_menu4->addAction(action_camera4_open);
    camera_menu4->addAction(action_camera4_close);
    camera_menu4->addAction(action_camera4_save);
    action_camera4_close->setEnabled(false);
    action_camera4_save->setEnabled(false);
    if(!isValidIP(m_cameraIP4))
    {
        action_camera4_open->setEnabled(false);
        label_camera4->setToolTip(tr("配置文件参数CameraIP4输入有误"));
        label_camera4->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(230, 5, 5);");
    }


    connect(action_camera1_open,SIGNAL(triggered()),this,SLOT(action_camera1_open_slot()));
    connect(action_camera1_close,SIGNAL(triggered()),this,SLOT(action_camera1_close_slot()));
    connect(action_camera1_save,SIGNAL(triggered(bool)),this,SLOT(action_camera1_save_slot(bool)));

    connect(action_camera2_open,SIGNAL(triggered()),this,SLOT(action_camera2_open_slot()));
    connect(action_camera2_close,SIGNAL(triggered()),this,SLOT(action_camera2_close_slot()));
    connect(action_camera2_save,SIGNAL(triggered(bool)),this,SLOT(action_camera2_save_slot(bool)));

    connect(action_camera3_open,SIGNAL(triggered()),this,SLOT(action_camera3_open_slot()));
    connect(action_camera3_close,SIGNAL(triggered()),this,SLOT(action_camera3_close_slot()));
    connect(action_camera3_save,SIGNAL(triggered(bool)),this,SLOT(action_camera3_save_slot(bool)));

    connect(action_camera4_open,SIGNAL(triggered()),this,SLOT(action_camera4_open_slot()));
    connect(action_camera4_close,SIGNAL(triggered()),this,SLOT(action_camera4_close_slot()));
    connect(action_camera4_save,SIGNAL(triggered(bool)),this,SLOT(action_camera4_save_slot(bool)));



    /***************qt传递参数时，是自定义的类型就要注册*************************/
    //qRegisterMetaType<autonavigation::VideoImage::ConstPtr>("autonavigation::VideoImage::ConstPtr");
    //由于在线程中已经将自定义的类型(autonavigation::VideoImage::ConstPtr)的数据转化为QImage,所以qt的信号与槽函数传递数据类型是QImage，故不需要注册

//    m_recvimagethread1=new RecvImageThread(VIDEOIMAGE1);
//    connect(m_recvimagethread1,SIGNAL(Image_data_readed(QImage)),this,SLOT(deal_VideoImage_data1(QImage)));

//    m_recvimagethread2=new RecvImageThread(VIDEOIMAGE2);
//    //m_revcamerathread2->start();
//    connect(m_recvimagethread2,SIGNAL(Image_data_readed(QImage)),this,SLOT(deal_VideoImage_data2(QImage)));

//    m_recvimagethread3=new RecvImageThread(VIDEOIMAGE3);
//    //m_revcamerathread3->start();
//    connect(m_recvimagethread3,SIGNAL(Image_data_readed(QImage)),this,SLOT(deal_VideoImage_data3(QImage)));

//    m_recvimagethread4=new RecvImageThread(VIDEOIMAGE4);
//    //m_revcamerathread4->start();
//    connect(m_recvimagethread4,SIGNAL(Image_data_readed(QImage)),this,SLOT(deal_VideoImage_data4(QImage)));

//    m_recvimagethread1->start();//在ros中，对于多线程的回调函数，只需要一个ros::spin()或ros::spinonce()


    init_NET_DVR();          //初始化NET_DVR

    m_conhccamerathread1=new ConHCCameraThread(m_cameraIP1.toStdString().c_str(),username,password,"VideoImage1",1,13,15,(HWND)label_camera1->winId());
    m_conhccamerathread2=new ConHCCameraThread2(m_cameraIP2.toStdString().c_str(),username,password,"VideoImage2",1,12,11,(HWND)label_camera2->winId());
    m_conhccamerathread3=new ConHCCameraThread3(m_cameraIP3.toStdString().c_str(),username,password,"VideoImage3",1,12,11,(HWND)label_camera3->winId());
    m_conhccamerathread4=new ConHCCameraThread4(m_cameraIP4.toStdString().c_str(),username,password,"VideoImage4",1,13,15,(HWND)label_camera4->winId());

    //qDebug()<<"13";
    //帧率太低的话，录像后无法播放，实测帧率必须大于10帧/s,录像后才能播放

    connect(m_conhccamerathread1,SIGNAL(saveSignals(int)),this,SLOT(thread1_save_slot(int)));
    connect(m_conhccamerathread2,SIGNAL(saveSignals(int)),this,SLOT(thread2_save_slot(int)));
    connect(m_conhccamerathread3,SIGNAL(saveSignals(int)),this,SLOT(thread3_save_slot(int)));
    connect(m_conhccamerathread4,SIGNAL(saveSignals(int)),this,SLOT(thread4_save_slot(int)));

    connect(m_conhccamerathread1,SIGNAL(openCameraSignals(int)),this,SLOT(thread1_open_slot(int)));
    connect(m_conhccamerathread2,SIGNAL(openCameraSignals(int)),this,SLOT(thread2_open_slot(int)));
    connect(m_conhccamerathread3,SIGNAL(openCameraSignals(int)),this,SLOT(thread3_open_slot(int)));
    connect(m_conhccamerathread4,SIGNAL(openCameraSignals(int)),this,SLOT(thread4_open_slot(int)));

}

ImageWidget::~ImageWidget()
{
    m_conhccamerathread1->stopRealPlay();
    m_conhccamerathread2->stopRealPlay();
    m_conhccamerathread3->stopRealPlay();
    m_conhccamerathread4->stopRealPlay();

    m_conhccamerathread1->stop();
    m_conhccamerathread2->stop();
    m_conhccamerathread3->stop();
    m_conhccamerathread4->stop();

    usleep(200000);

    writeSettings();
    delete m_conhccamerathread1;
    delete m_conhccamerathread2;
    delete m_conhccamerathread3;
    delete m_conhccamerathread4;

//    delete m_recvimagethread1;
//    delete m_recvimagethread2;
//    delete m_recvimagethread3;
//    delete m_recvimagethread4;
    //清除海康SDK配置
    NET_DVR_Cleanup();      //使用一次就行，重复调用会出现程序异常

    delete ui;
}

void ImageWidget::init_NET_DVR()
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


void ImageWidget::resizeEvent(QResizeEvent *event)
{
    //QWidget变换大小后，重新设置QLabel大小
    switch(fullscreen_ID)
    {
          case 0: label_camera1->setGeometry(0,0,this->width()/2,this->height()/2);
                  label_camera2->setGeometry(this->width()/2,0,this->width()/2+width()%2,this->height()/2);
                  label_camera3->setGeometry(0,this->height()/2,this->width()/2,this->height()/2+height()%2);
                  label_camera4->setGeometry(this->width()/2,this->height()/2,this->width()/2+width()%2,this->height()/2+height()%2);
                  fullscreen_ID=0;
                  break;
          case 1: label_camera1->setGeometry(0,0,this->width(),this->height());
                       label_camera1->raise();
                       fullscreen_ID=1;
                       break;
          case 2: label_camera2->setGeometry(0,0,this->width(),this->height());
                       label_camera2->raise();
                       fullscreen_ID=2;
                       break;
          case 3: label_camera3->setGeometry(0,0,this->width(),this->height());
                       label_camera3->raise();
                       fullscreen_ID=3;
                       break;
          case 4: label_camera4->setGeometry(0,0,this->width(),this->height());
                       label_camera4->raise();
                       fullscreen_ID=4;
                       break;
           default: fullscreen_ID=0;
                       break;

    }

}

void ImageWidget::closeEvent(QCloseEvent *event)
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


//void ImageWidget::deal_VideoImage_data1(QImage image)
//{
//    label_camera1->setPixmap(QPixmap::fromImage(image));
//}

//void ImageWidget::deal_VideoImage_data2(QImage image)
//{
//    label_camera2->setPixmap(QPixmap::fromImage(image));
//}

//void ImageWidget::deal_VideoImage_data3(QImage image)
//{
//    label_camera3->setPixmap(QPixmap::fromImage(image));
//}

//void ImageWidget::deal_VideoImage_data4(QImage image)
//{
//    label_camera4->setPixmap(QPixmap::fromImage(image));
//}

void ImageWidget::mouseDoubleClickEvent(QMouseEvent *e)
{
    if(e->button()!=Qt::LeftButton)
        return;

    //获取鼠标点击的控件
    int mouse_x=QCursor::pos().x();
    int mouse_y=QCursor::pos().y();
    QWidget* widget1=QApplication::widgetAt(mouse_x,mouse_y);
    QLabel* clicked_label=static_cast<QLabel*>(widget1);
    QString label_name=clicked_label->objectName();

    if(fullscreen_ID<=0)
    {
         clicked_label->setGeometry(0,0,this->width(),this->height());
         //将双击的label放到最上层
         clicked_label->raise();//Raises this widget to the top of the parent widget's stack.//See also lower() and stackUnder().
         if( label_name=="label_camera1")
         {
                fullscreen_ID=1;
                m_conhccamerathread1->resetHKandconnectHK(0);
         }
         else if( label_name=="label_camera2")
         {
               fullscreen_ID=2;
               m_conhccamerathread2->resetHKandconnectHK(0);
         }
         else if( label_name=="label_camera3")
         {
               fullscreen_ID=3;
               m_conhccamerathread3->resetHKandconnectHK(0);
         }
         else if( label_name=="label_camera4")
         {
               fullscreen_ID=4;
               m_conhccamerathread4->resetHKandconnectHK(0);
         }
    }
    else
    {
        if(fullscreen_ID==1)
        {
            m_conhccamerathread1->resetHKandconnectHK(1);
        }
        else if(fullscreen_ID==2)
        {
            m_conhccamerathread2->resetHKandconnectHK(1);
        }
        else if(fullscreen_ID==3)
        {
            m_conhccamerathread3->resetHKandconnectHK(1);
        }
        else if(fullscreen_ID==4)
        {
            m_conhccamerathread4->resetHKandconnectHK(1);
        }
        label_camera1->setGeometry(0,0,this->width()/2,this->height()/2);
        label_camera2->setGeometry(this->width()/2,0,this->width()/2+width()%2,this->height()/2);
        label_camera3->setGeometry(0,this->height()/2,this->width()/2,this->height()/2+height()%2);
        label_camera4->setGeometry(this->width()/2,this->height()/2,this->width()/2+width()%2,this->height()/2+height()%2);

        fullscreen_ID=0;

    }

}


void ImageWidget::label1_customContextMenuRequested(QPoint pos)
{
    camera_menu1->exec(QCursor::pos());
}

void ImageWidget::label2_customContextMenuRequested(QPoint pos)
{
    camera_menu2->exec(QCursor::pos());
}

void ImageWidget::label3_customContextMenuRequested(QPoint pos)
{
    camera_menu3->exec(QCursor::pos());
}

void ImageWidget::label4_customContextMenuRequested(QPoint pos)
{
    camera_menu4->exec(QCursor::pos());
}

void ImageWidget::thread1_open_slot(int _open)
{
    if(_open>0)
    {
        action_camera1_open->setEnabled(false);
        action_camera1_close->setEnabled(true);
        action_camera1_save->setEnabled(true);
        m_isloginin_1=true;
        label_camera1->setToolTip(tr(""));
    }
    else
    {
        action_camera1_open->setEnabled(true);
        action_camera1_close->setEnabled(false);
        action_camera1_save->setEnabled(false);
        m_isloginin_1=false;
        QMessageBox::warning(this,tr("Warning!"),tr("登录失败，请检查网络连接或修改IP参数。"));
    }
}

void ImageWidget::thread2_open_slot(int _open)
{
    if(_open>0)
    {
        action_camera2_open->setEnabled(false);
        action_camera2_close->setEnabled(true);
        action_camera2_save->setEnabled(true);
        m_isloginin_2=true;
        label_camera2->setToolTip(tr(""));
    }
    else
    {
        action_camera2_open->setEnabled(true);
        action_camera2_close->setEnabled(false);
        action_camera2_save->setEnabled(false);
        m_isloginin_2=false;
        QMessageBox::warning(this,tr("Warning!"),tr("登录失败，请检查网络连接或修改IP参数。"));
    }

}

void ImageWidget::thread3_open_slot(int _open)
{
    if(_open>0)
    {
        action_camera3_open->setEnabled(false);
        action_camera3_close->setEnabled(true);
        action_camera3_save->setEnabled(true);
        m_isloginin_3=true;
        label_camera3->setToolTip(tr(""));
    }
    else
    {
        action_camera3_open->setEnabled(true);
        action_camera3_close->setEnabled(false);
        action_camera3_save->setEnabled(false);
        m_isloginin_3=false;
        QMessageBox::warning(this,tr("Warning!"),tr("登录失败，请检查网络连接或修改IP参数。"));
    }
}

void ImageWidget::thread4_open_slot(int _open)
{
    if(_open>0)
    {
        action_camera4_open->setEnabled(false);
        action_camera4_close->setEnabled(true);
        action_camera4_save->setEnabled(true);
        m_isloginin_4=true;
        label_camera4->setToolTip(tr(""));
    }
    else
    {
        action_camera4_open->setEnabled(true);
        action_camera4_close->setEnabled(false);
        action_camera4_save->setEnabled(false);
        m_isloginin_4=false;
        QMessageBox::warning(this,tr("Warning!"),tr("登录失败，请检查网络连接或修改IP参数。"));
    }
}

void ImageWidget::thread1_save_slot(int _save)
{
    if(_save>0)
    {
        label_camera1->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(0, 220, 13);");
        action_camera1_save->setText(tr("停止录像"));

    }
    else
    {
        label_camera1->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(133, 133, 133);");
        action_camera1_save->setText(tr("录像"));
    }
}

void ImageWidget::thread2_save_slot(int _save)
{
    if(_save>0)
    {
        label_camera2->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(0, 220, 13);");
        action_camera2_save->setText(tr("停止录像"));
    }
    else
    {
        label_camera2->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(133, 133, 133);");
        action_camera2_save->setText(tr("录像"));
    }
}

void ImageWidget::thread3_save_slot(int _save)
{
    if(_save>0)
    {
        label_camera3->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(0, 220, 13);");
        action_camera3_save->setText(tr("停止录像"));
    }
    else
    {
        label_camera3->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(133, 133, 133);");
        action_camera3_save->setText(tr("录像"));
    }
}

void ImageWidget::thread4_save_slot(int _save)
{
    if(_save>0)
    {
        label_camera4->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(0, 220, 13);");
        action_camera4_save->setText(tr("停止录像"));
    }
    else
    {
        label_camera4->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(133, 133, 133);");
        action_camera4_save->setText(tr("录像"));
    }
}


void ImageWidget::action_camera1_open_slot()
{
    if(m_conhccamerathread1->isRunning())
    {
        if(m_isloginin_1)
        {
            m_conhccamerathread1->startRealPlay();
        }
        else
        {
            m_conhccamerathread1->connectHK();
        }

    }
    else
    {
        m_conhccamerathread1->start();
    }
//    action_camera1_close->setEnabled(true);
//    action_camera1_save->setEnabled(true);
//    action_camera1_open->setEnabled(false);
//    label_camera1->setToolTip(tr("正在打开设备，请稍候..."));

}

void ImageWidget::action_camera1_close_slot()
{
    if(m_conhccamerathread1->isRunning())
    {
        m_conhccamerathread1->stopRealPlay();
    }
    action_camera1_close->setEnabled(false);
    action_camera1_save->setEnabled(false);
    action_camera1_open->setEnabled(true);
}

void ImageWidget::action_camera1_save_slot(bool ischeck)
{

    m_conhccamerathread1->saveorstopRealPlay();

}

void ImageWidget::action_camera2_open_slot()
{
    if(m_conhccamerathread2->isRunning())
    {
        if(m_isloginin_2)
        {
            m_conhccamerathread2->startRealPlay();
        }
        else
        {
            m_conhccamerathread2->connectHK();
        }
    }
    else
    {
        m_conhccamerathread2->start();
    }
//    action_camera2_close->setEnabled(true);
//    action_camera2_save->setEnabled(true);
//    action_camera2_open->setEnabled(false);
//    label_camera2->setToolTip(tr("正在打开设备，请稍候..."));


}

void ImageWidget::action_camera2_close_slot()
{
    if(m_conhccamerathread2->isRunning())
    {
        m_conhccamerathread2->stopRealPlay();
    }
    action_camera2_close->setEnabled(false);
    action_camera2_save->setEnabled(false);
    action_camera2_open->setEnabled(true);
}

void ImageWidget::action_camera2_save_slot(bool ischeck)
{
    m_conhccamerathread2->saveorstopRealPlay();
}


void ImageWidget::action_camera3_open_slot()
{
    if(m_conhccamerathread3->isRunning())
    {
        if(m_isloginin_3)
        {
            m_conhccamerathread3->startRealPlay();
        }
        else
        {
            m_conhccamerathread3->connectHK();
        }
    }
    else
    {
        m_conhccamerathread3->start();
    }
//    action_camera3_close->setEnabled(true);
//    action_camera3_save->setEnabled(true);
//    action_camera3_open->setEnabled(false);
//    label_camera3->setToolTip(tr("正在打开设备，请稍候..."));


}

void ImageWidget::action_camera3_close_slot()
{
    if(m_conhccamerathread3->isRunning())
    {
        m_conhccamerathread3->stopRealPlay();
    }
    action_camera3_close->setEnabled(false);
    action_camera3_save->setEnabled(false);
    action_camera3_open->setEnabled(true);
}

void ImageWidget::action_camera3_save_slot(bool ischeck)
{

    m_conhccamerathread3->saveorstopRealPlay();
}


void ImageWidget::action_camera4_open_slot()
{
    if(m_conhccamerathread4->isRunning())
    {
        if(m_isloginin_4)
        {
            m_conhccamerathread4->startRealPlay();
        }
        else
        {
            m_conhccamerathread4->connectHK();
        }
    }
    else
    {
        m_conhccamerathread4->start();
    }
//    action_camera4_close->setEnabled(true);
//    action_camera4_save->setEnabled(true);
//    action_camera4_open->setEnabled(false);
//    label_camera4->setToolTip(tr("正在打开设备，请稍候..."));
}

void ImageWidget::action_camera4_close_slot()
{
    if(m_conhccamerathread4->isRunning())
    {
        m_conhccamerathread4->stopRealPlay();
    }
    action_camera4_close->setEnabled(false);
    action_camera4_save->setEnabled(false);
    action_camera4_open->setEnabled(true);
}

void ImageWidget::action_camera4_save_slot(bool ischeck)
{

    m_conhccamerathread4->saveorstopRealPlay();
}

/*************************检测字符串是否为IP地址***************************/
bool ImageWidget::isValidIP(QString _strip)
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

/****************************读取配置文件********************************/
void ImageWidget::readSettings()
{
    QSettings settings(tr("Config"),QSettings::IniFormat);

    m_cameraIP1=settings.value("Camera/CameraIP1").toString();
    m_cameraIP2=settings.value("Camera/CameraIP2").toString();
    m_cameraIP3=settings.value("Camera/CameraIP3").toString();
    m_cameraIP4=settings.value("Camera/CameraIP4").toString();

}

/****************************写入配置文件********************************/
void ImageWidget::writeSettings()
{
    QSettings settings(tr("Config"),QSettings::IniFormat);

    settings.beginGroup("Camera");
    settings.setValue(tr("CameraIP1"),m_cameraIP1);
    settings.setValue(tr("CameraIP2"),m_cameraIP2);
    settings.setValue(tr("CameraIP3"),m_cameraIP3);
    settings.setValue(tr("CameraIP4"),m_cameraIP4);
    settings.endGroup();

}
