#include "oiltable.h"
#include "ui_oiltable.h"
#include<QPainter>
#include<QImage>
#include <QDebug>

OilTable::OilTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OilTable)
{
    ui->setupUi(this);
    m_pointX = 185;
    m_pointY = 209;
    m_degreespeed=0;
 //   ui->label->setStyleSheet("border-image:url(:/KM/image/YL.png)");
}

void OilTable::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(QColor(115,115,115,255),3));
    painter.drawEllipse(QPointF(184,200), 50, 50);
    painter.setPen(QPen(QColor(168,168,168,255),3));
    painter.drawEllipse(QPointF(184,200), 52, 52);
    painter.setPen(QPen(Qt::red,3));
    painter.translate(m_pointX,m_pointY);
    painter.rotate(-50+m_degreespeed);
    QPoint point1(185,209);
    QPoint point2(184,158);
    painter.translate((0 - m_pointX),(0-m_pointY));
    painter.drawLine(point1,point2);
}

void OilTable::change_oiltable(qreal temp)
{
    m_degreespeed = temp;
    update();
}
OilTable::~OilTable()
{
    delete ui;
}
