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

void LeftFunction::change_LeftFunction(int temp)
{
    QString temp_str_T=QString("%1m").arg(temp);
    ui->label_m->setText(temp_str_T);
}

LeftFunction::~LeftFunction()
{
    delete ui;
}
