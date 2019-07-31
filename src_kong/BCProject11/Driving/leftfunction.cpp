#include "leftfunction.h"
#include "ui_leftfunction.h"
#include <QPainter>

LeftFunction::LeftFunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeftFunction)
{
    ui->setupUi(this);
}

void LeftFunction::paintEvent(QPaintEvent *event)
{


}

void LeftFunction::change_LeftFunction(int temp,int remaintime_temp)
{
    QString temp_str_T=QString("%1m").arg(temp);
    ui->label->setText(temp_str_T);
    QString temp_str_R=QString("%1ms").arg(remaintime_temp);
    ui->label_2->setText(temp_str_R);

}

LeftFunction::~LeftFunction()
{
    delete ui;
}
