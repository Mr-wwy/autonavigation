#include "tachometer.h"
#include "ui_tachometer.h"
#include<QPainter>
#include<QImage>
#include <QDebug>

Tachometer::Tachometer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tachometer)
{
    ui->setupUi(this);
  //  ui->label->setStyleSheet("border-image:url(:/KM/image/ZSB.png)");
    m_pointX = 180;
    m_pointY = 205;
    m_degreespeed=0;
}

void Tachometer::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(QColor(115,115,115,255),3));
    painter.drawEllipse(QPointF(180,205), 150, 150);
    painter.setPen(QPen(QColor(168,168,168,255),3));
    painter.drawEllipse(QPointF(180,205), 152, 152);
    painter.setBrush(QBrush(Qt::red));
    painter.setPen(QPen(Qt::red));
    painter.translate(m_pointX,m_pointY);
    painter.rotate(-40.91+32.727*m_degreespeed);
    //每一小格为180/22=8.1818
    static const QPointF points[3] = {QPointF(180,200), QPointF(70, 205), QPointF(180, 210)};
    painter.translate((0 - m_pointX),(0-m_pointY));
    painter.drawPolygon(points, 3);
}
void Tachometer::change_tachometer(float temp,int engineStatus_temp,int handBrake_temp)
{
    m_degreespeed = temp/10.0;
    ui->lcdNumber->display(m_degreespeed*1000);
    if(engineStatus_temp==1)
    {
        ui->label_4->hide();
    }
    else if(engineStatus_temp==0)
    {
        ui->label_4->show();
    }
    if(handBrake_temp==0)
    {
        ui->label_3->hide();
    }
    else if(handBrake_temp==1)
    {
        ui->label_3->show();
    }
    update();
}
Tachometer::~Tachometer()
{
    delete ui;
}
