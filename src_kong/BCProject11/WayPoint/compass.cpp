#include "compass.h"

Compass::Compass(QWidget *parent) : QWidget(parent)
{
    m_value=0;
    m_circlecolor=QColor(136,138,133,250);

    resetParameters();

}

Compass::~Compass()
{

}

void Compass::resetParameters()
{

    int min_size=width()<height() ? width() : height();

    m_radius=0.1*min_size;
    m_length=0.58*min_size;

}

void Compass::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    resetParameters();   //新建设置大小即setGeometry()后需要重新设置变量

    drawArrow(&painter);
    drawCircle(&painter);

}

void Compass::drawArrow(QPainter *painter)
{
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);

    painter->setPen(Qt::NoPen);
    painter->translate(this->rect().center());

    painter->rotate(-90.0);  //上北下南

    painter->rotate(m_value);

    QPointF points[3]={QPointF(0.0,-m_radius/2),QPointF(0.0,m_radius/2),QPointF(m_length,0.0)};
    painter->setBrush(QBrush(Qt::red));
    painter->drawPolygon(points,3);

    painter->rotate(180);
    painter->setBrush(QBrush(Qt::blue));
    painter->drawPolygon(points,3);

    painter->restore();

}

void Compass::drawCircle(QPainter *painter)
{
    painter->save();

    painter->setRenderHint(QPainter::Antialiasing);

    painter->setPen(Qt::NoPen);
    painter->translate(this->rect().center());

    painter->setBrush(QBrush(m_circlecolor));
    painter->drawEllipse(QPoint(0.0,0.0),m_radius*0.7,m_radius*0.7);

    painter->restore();


}

void Compass::setRotate(qreal value)
{
    m_value=value;
    this->update();

}

void Compass::setCircleColor(QColor color)
{
    m_circlecolor=color;
    this->update();
}





































































































