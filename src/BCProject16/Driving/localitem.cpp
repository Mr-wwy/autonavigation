#include "localitem.h"
#include <QPainter>
#include <QPointF>
#include <QRectF>
#include <QDebug>
#include <QPainterPath>
#include <QGraphicsEffect>
#include <QStyleOptionGraphicsItem>
#include "globaldata.h"

LocalLineItem::LocalLineItem(const QColor &color, QVector<QPointF> local,QPointF start)
{
    m_left=SCENE_LEFT;
    m_top=SCENE_TOP;
    m_width=SCENE_WIDTH;
    m_height=SCENE_HEIGHT;

    this->m_color=color;
    this->m_local=local;
    this->m_start=start;

   // setFlags(ItemIsSelectable | ItemIsMovable);
    setAcceptHoverEvents(true);

   /*
    QGraphicsOpacityEffect *oe=new QGraphicsOpacityEffect(this);
    oe->setOpacity(0.5);
    setGraphicsEffect(oe);
    */

    //setOpacity(0.5);////between 0.0 (transparent) and 1.0 (opaque)

}


LocalLineItem::~LocalLineItem()
{

}

QRectF LocalLineItem::boundingRect() const
{
    return QRectF(m_left,m_top, m_width, m_height);

    //return QRectF(-3000,-3000,5000,5000);
}


QPainterPath LocalLineItem::shape() const
{

    QPainterPath path;
    path.addRect(14, 14, 82, 42);
    return path;

}


void LocalLineItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);

    const qreal a = option->levelOfDetailFromTransform(painter->worldTransform());//根据缩放比例来重绘item的详细内容
    qreal a_scale=1/a;

    //painter->setPen(m_color);
    painter->setPen(QPen(m_color,2*a_scale));

    for(int i=0;i<m_local.count()-1;i++)
        painter->drawLine(m_local.at(i),m_local.at(i+1));

}

void LocalLineItem::repaint(const QColor &color, QVector<QPointF> local, QPointF start)
{
    this->m_color=color;
    this->m_local=local;
    this->m_start=start;

    this->update();

}

void LocalLineItem::resetRect(qreal re_left, qreal re_top, qreal re_width, qreal re_height)
{
    prepareGeometryChange();
    m_left=re_left;
    m_top=re_top;
    m_width=re_width;
    m_height=re_height;
}




























































