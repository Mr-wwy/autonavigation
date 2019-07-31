#include "bcwidget.h"
#include "ui_bcwidget.h"

#include <QDebug>
#include <QFile>
#include <QMessageBox>
#include <QStandardPaths>

BCWidget::BCWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BCWidget)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowTitle(tr("指控方舱管理软件"));
    this->setWindowIcon(QIcon(":/images/manager.png"));

    //userhome=QStandardPaths::writableLocation(QStandardPaths::HomeLocation);

    m_cameraprocess=new QProcess(this);
    m_drivingprocess=new QProcess(this);
    m_pointprocess=new QProcess(this);
    m_rqtbagprocess=new QProcess(this);
    m_udpsenderprocess=new QProcess(this);

    //connect(m_cameraprocess,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(cameraprocess_finished(int,QProcess::ExitStatus)));
    connect(m_cameraprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(cameraprocess_error(QProcess::ProcessError)));

    //connect(m_drivingprocess,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(drivingprocess_finished(int,QProcess::ExitStatus)));
    connect(m_drivingprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(drivingprocess_error(QProcess::ProcessError)));

    //connect(m_pointprocess,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(pointprocess_finished(int,QProcess::ExitStatus)));
    connect(m_pointprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(pointprocess_error(QProcess::ProcessError)));

    //connect(m_rqtbagprocess,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(rqtbagprocess_finished(int,QProcess::ExitStatus)));
    connect(m_rqtbagprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(rqtbagprocess_error(QProcess::ProcessError)));

    //connect(m_udpsenderprocess,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(udpsenderprocess_finished(int,QProcess::ExitStatus)));
    connect(m_udpsenderprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(udpsenderprocess_error(QProcess::ProcessError)));
}

BCWidget::~BCWidget()
{

    disconnect(m_cameraprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(cameraprocess_error(QProcess::ProcessError)));
    disconnect(m_drivingprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(drivingprocess_error(QProcess::ProcessError)));
    disconnect(m_pointprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(pointprocess_error(QProcess::ProcessError)));
    disconnect(m_rqtbagprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(rqtbagprocess_error(QProcess::ProcessError)));
    disconnect(m_udpsenderprocess,SIGNAL(error(QProcess::ProcessError)),this,SLOT(udpsenderprocess_error(QProcess::ProcessError)));

    if(m_drivingprocess->state()==QProcess::Running)
    {
        m_drivingprocess->close();
    }
    if(m_cameraprocess->state()==QProcess::Running)
    {
        m_cameraprocess->close();
    }
    if(m_pointprocess->state()==QProcess::Running)
    {
        m_pointprocess->close();
    }
    if(m_rqtbagprocess->state()==QProcess::Running)
    {
        m_rqtbagprocess->close();
    }

    if(m_udpsenderprocess->state()==QProcess::Running)
    {
        m_udpsenderprocess->close();
    }

    delete m_drivingprocess;
    delete m_cameraprocess;
    delete m_pointprocess;
    delete m_rqtbagprocess;
    delete m_udpsenderprocess;

    delete ui;
}

void BCWidget::on_DrivingBtn_clicked()
{
    if(m_drivingprocess->state()==QProcess::NotRunning)
    {
        QString str="./Driving";
        QFile driving(str);
        if(!driving.exists())
        {
            QMessageBox::warning(this,"Warnning!",str+" does not exist.");
        }
        else
        {
            m_drivingprocess->start(str);
        }
    }
}

void BCWidget::on_CameraBtn_clicked()
{
    //qDebug()<<"m_cameraprocess->state:"<<m_cameraprocess->state();
    if(m_cameraprocess->state()==QProcess::NotRunning)
    {
        QString str="./ShowImage";
        QFile driving(str);
        if(!driving.exists())
        {
            QMessageBox::warning(this,"Warnning!",str+" does not exist.");
        }
        else
        {
            m_cameraprocess->start(str);
        }
    }
}

void BCWidget::on_PointBtn_clicked()
{
    if(m_pointprocess->state()==QProcess::NotRunning)
    {
        QString str="./WayPoint";
        QFile driving(str);
        if(!driving.exists())
        {
            QMessageBox::warning(this,"Warnning!",str+" does not exist.");
        }
        else
        {
            m_pointprocess->start(str);
        }
    }

}


void BCWidget::on_RqtBagBtn_clicked()
{
    //qDebug()<<"m_rqtbagprocess->state:"<<m_rqtbagprocess->state();
    if(m_rqtbagprocess->state()==QProcess::NotRunning)
    {
        QString str="rqt_bag";
        m_rqtbagprocess->start(str);
    }

}

void BCWidget::on_CenterBtn_clicked()
{
    if(m_udpsenderprocess->state()==QProcess::NotRunning)
    {
        QString str="./UDPSender";
        QFile driving(str);
        if(!driving.exists())
        {
            QMessageBox::warning(this,"Warnning!",str+" does not exist.");
        }
        else
        {
            m_udpsenderprocess->start(str);
        }
    }

}

void BCWidget::on_ExitBtn_clicked()
{
    this->close();

}

//void BCWidget::cameraprocess_finished(int , QProcess::ExitStatus)
//{

//}

//void BCWidget::drivingprocess_finished(int, QProcess::ExitStatus)
//{

//}

//void BCWidget::pointprocess_finished(int, QProcess::ExitStatus)
//{

//}

//void BCWidget::rqtbagprocess_finished(int a, QProcess::ExitStatus status)
//{
////        qDebug()<<"a:"<<a;
////        qDebug()<<"status:"<<status;

//}

//void BCWidget::udpsenderprocess_finished(int, QProcess::ExitStatus)
//{

//}

void BCWidget::cameraprocess_error(QProcess::ProcessError error)
{
    show_error(tr("camera"),error);
}

void BCWidget::drivingprocess_error(QProcess::ProcessError error)
{
    show_error(tr("driving"),error);
}

void BCWidget::pointprocess_error(QProcess::ProcessError error)
{
    show_error(tr("point"),error);
}

void BCWidget::rqtbagprocess_error(QProcess::ProcessError error)
{
    show_error(tr("rqt_bag"),error);
}

void BCWidget::udpsenderprocess_error(QProcess::ProcessError error)
{
    show_error(tr("udpsender"),error);
}

void BCWidget::show_error(QString str, QProcess::ProcessError error)
{
    switch (error) {
    case QProcess::FailedToStart:
        QMessageBox::warning(this,"Warnning!","FailedToStart");
        break;
    case QProcess::Crashed:
        QMessageBox::warning(this,"Warnning!","Crashed");
        break;
    case QProcess::Timedout:
        QMessageBox::warning(this,"Warnning!","Timedout");
        break;
    case QProcess::WriteError:
        QMessageBox::warning(this,"Warnning!","WriteError");
        break;
    case QProcess::ReadError:
        QMessageBox::warning(this,"Warnning!","ReadError");
        break;
    case QProcess::UnknownError:
        QMessageBox::warning(this,"Warnning!","UnknownError");
        break;
    default:
        break;
    }
}


