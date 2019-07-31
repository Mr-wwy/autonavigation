#include "speed.h"
#include "ui_speed.h"
#include<QPainter>
#include<QImage>
#include <QDebug>
#include <QLCDNumber>

Speed::Speed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Speed)
{
    ui->setupUi(this);
  //  ui->label->setStyleSheet("border-image:url(:/KM/image/MPH.png)");
    m_pointX = 185;
    m_pointY = 200;
    m_degreespeed=0;
}

void Speed::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(QColor(115,115,115,255),3));
    painter.drawEllipse(QPointF(185,200), 150, 150);
    painter.setPen(QPen(QColor(168,168,168,255),3));
    painter.drawEllipse(QPointF(185,200), 152, 152);
    painter.setBrush(QBrush(Qt::red));
    painter.setPen(QPen(Qt::red));
    painter.translate(m_pointX,m_pointY);
    if(m_degreespeed<=20)
    {
        painter.rotate(-36+0.6*m_degreespeed);
    }
    else
    {
        painter.rotate(-36+12+1.2*(m_degreespeed-20));
    }

    //
    static const QPointF points[3] = {QPointF(185,195), QPointF(70, 200), QPointF(185, 205)};
    painter.translate((0 - m_pointX),(0-m_pointY));
    painter.drawPolygon(points, 3);
}

void Speed::change_Speed(qreal temp,int temp_shift)
{
    m_degreespeed=temp;
    ui->lcdNumber->display(temp);
    //换档命令0:P,1:R,2:N,3:D,4:S,5:L
    if(temp_shift==0)
    {
        ui->label_3->setText("P");
    }
    else if(temp_shift==1)
    {
        ui->label_3->setText("R");
    }
    else if(temp_shift==2)
    {
        ui->label_3->setText("N");
    }
    else if(temp_shift==3)
    {
        ui->label_3->setText("D");
    }
    else if(temp_shift==4)
    {
        ui->label_3->setText("S");
    }
    else if(temp_shift==5)
    {
        ui->label_3->setText("L");
    }

    this->update();

}
Speed::~Speed()
{
    delete ui;
}
