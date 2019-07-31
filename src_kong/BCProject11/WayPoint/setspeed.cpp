#include "setspeed.h"
#include "ui_setspeed.h"

#include <QMessageBox>

setspeed::setspeed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setspeed)
{
    ui->setupUi(this);

    ui->spinBox_min->setMaximum(200);
    ui->spinBox_max->setMaximum(200);
}

setspeed::~setspeed()
{
    delete ui;
}

void setspeed::setspinbox(int speed_max)
{
    ui->spinBox_min->setMaximum(speed_max);
    ui->spinBox_max->setMaximum(speed_max);
}

void setspeed::on_pushButton_clicked()
{
    if(ui->spinBox_min->value()<=ui->spinBox_max->value())
    {
        emit getspeed(ui->spinBox_min->value(),ui->spinBox_max->value());
    }
    else
    {
        QMessageBox::warning(this,tr("Warning!"),tr("速度输入错误:最小速度大于最大速度"));
        return;
    }
}
