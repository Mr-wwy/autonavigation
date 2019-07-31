#include "rightfunction.h"
#include "ui_rightfunction.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QDateTime>
#include <QDebug>

RightFunction::RightFunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RightFunction)
{
    ui->setupUi(this);

    ui->label_pitch1->hide();
    ui->label_pitch2->hide();
    ui->label_roll1->hide();
    ui->label_roll2->hide();

    ui->label_gpsweek1->hide();
    ui->label_gpsweek2->hide();
    ui->label_gpsms1->hide();
    ui->label_gpsms2->hide();
    ui->label_time->hide();

    ui->label_cmd_t0->hide();
}

RightFunction::~RightFunction()
{
    delete ui;
}

void RightFunction::paintEvent(QPaintEvent *event)
{

}

void RightFunction::change_right(float gps_week_temp,long gps_mi_temp,double latitude_temp,double longitude_temp,
                                 long gaussx_temp,long gaussy_temp,int azimuth_temp,int pitch_temp,
                                 int roll_temp)
{
//    ui->label_time->show();
//    QString temp_str=QString("%1").arg(QString::number(gps_week_temp,'g',6));
//    ui->label_gpsweek2->setText(temp_str);
    /*
    //获得自1970-01-01T00:00:00至今的秒数并将这个秒数转成日期
    long i=QDateTime::currentDateTime().toTime_t();
    qDebug()<<"i--"<<i;
    qDebug()<<QDateTime::fromTime_t(i).toString("yyyy-MM-dd hh:mm:ss");
    */
//    long gps_second=gps_mi_temp/1000;
//    int gps_millisecond=gps_mi_temp%1000;
//    QString time_str=QDateTime::fromTime_t(gps_second).toString("yyyy-MM-dd hh:mm:ss")+":"+QString::number(gps_millisecond);
//    QString gps_mi_temp_str=QString("%1").arg(gps_mi_temp);   //gps毫秒
//    ui->label_gpsms2->setText(gps_mi_temp_str);
//    ui->label_time->setText(time_str);
    QString laltitude_temp_str=QString("%1").arg(QString::number(latitude_temp,'g',10));
    ui->label_latitude->setText(laltitude_temp_str);
    QString longgitude_temp_str=QString("%1").arg(QString::number(longitude_temp,'g',10));
    ui->label_longtitude->setText(longgitude_temp_str);
    QString gauss_temp_str=QString("(%1,%2)").arg(gaussx_temp).arg(gaussy_temp);
    ui->label_gauss2->setText(gauss_temp_str);
    QString azimuth_temp_str=QString("%1").arg(azimuth_temp);
    ui->label_azimuth2->setText(azimuth_temp_str);
//    QString pitch_temp_str=QString("%1").arg(pitch_temp);
//    ui->label_pitch2->setText(pitch_temp_str);
//    QString roll_temp_str=QString("%1").arg(roll_temp);
//    ui->label_roll2->setText(roll_temp_str);
}

void RightFunction::setTime_T0(QString _t0,QString cmd_t0)
{
//    qDebug()<<"_t0:"<<_t0;
//    qDebug()<<"cmd_t0:"<<cmd_t0;
    ui->label_T0_2->setText(_t0);
    if(cmd_t0.toLong()>0)
    {
        ui->label_cmd_t0->show();
        ui->label_cmd_t0->setText(cmd_t0);
    }
}
