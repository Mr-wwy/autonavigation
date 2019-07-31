#include "leftfunction.h"
#include "ui_leftfunction.h"
#include <QPainter>

LeftFunction::LeftFunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeftFunction)
{
    ui->setupUi(this);
}

LeftFunction::~LeftFunction()
{
    delete ui;
}

void LeftFunction::change_LeftFunction(int distance_guihua, int distance_xingshi, int remaintime_time)
{
    QString temp_str_g=QString("%1m").arg(distance_guihua);
    ui->label_distance_guihua->setText(temp_str_g);
    QString temp_str_x=QString("%1m").arg(distance_xingshi);
    ui->label_distance_xingshi->setText(temp_str_x);
    QString temp_str_t=QString("%1ms").arg(remaintime_time);
    ui->label_time->setText(temp_str_t);
}

void LeftFunction::setDistanceAndTime(int distance_xingshi, int remaintime_time)
{
    QString temp_str_x=QString("%1m").arg(distance_xingshi);
    ui->label_distance_xingshi->setText(temp_str_x);
    QString temp_str_t=QString("%1ms").arg(remaintime_time);
    ui->label_time->setText(temp_str_t);

}

void LeftFunction::setDistance_guihua(int distance_guihua)
{
    QString temp_str_g=QString("%1m").arg(distance_guihua);
    ui->label_distance_guihua->setText(temp_str_g);
}


