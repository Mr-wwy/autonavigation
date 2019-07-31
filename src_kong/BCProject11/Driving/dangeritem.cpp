#include "dangeritem.h"

#include <QPainter>
#include <QPointF>
#include <QRectF>
#include <QPainterPath>
#include <QGraphicsEffect>
#include <QStyleOptionGraphicsItem>

#include "globaldata.h"

DangerItem::DangerItem(const QColor &color, QPointF point, qreal radius)
{

    m_left=SCENE_LEFT;
    m_top=SCENE_TOP;
    m_width=SCENE_WIDTH;
    m_height=SCENE_HEIGHT;

    m_color=color;
    m_point=point;
    m_radius=radius;

}

DangerItem::~DangerItem()
{

}

QRectF DangerItem::boundingRect() const
{
    return QRectF(m_left,m_top, m_width, m_height);
}

QPainterPath DangerItem::shape() const
{
    QPainterPath path;
    path.addRect(14, 14, 82, 42);
    return path;
}

void DangerItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);

//    const qreal b = option->levelOfDetailFromTransform(painter->worldTransform());//根据缩放比例来重绘item的详细内容
//    qreal b_scale=1/b;

    QPointF center;
    center=m_point;

    // 设置渐变色
    QRadialGradient radial(center,1.5*m_radius);
     radial.setColorAt(0, m_color);
     radial.setColorAt(1, Qt::white);

     painter->setPen(Qt::NoPen);
     painter->setBrush(QBrush(radial));

//    painter->setPen(Qt::NoPen);
//    painter->setBrush(QBrush(m_color));
//    painter->drawEllipse(center,5,5);//画圆

    painter->setOpacity(0.75);
    painter->drawEllipse(center,m_radius,m_radius);//画圆

}

void DangerItem::repaint(const QColor &color, QPointF point, qreal radius)
{
    m_color=color;
    m_point=point;
    m_radius=radius;

    this->update();

}


