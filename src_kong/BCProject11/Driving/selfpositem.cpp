#include "selfpositem.h"

#include <QStyleOptionGraphicsItem>
#include <QPainterPath>
#include <QGraphicsEffect>
#include <QDebug>

#include "globaldata.h"

SelfPosItem::SelfPosItem(const QColor &color, QPointF currentPos, QPointF start, qreal angle)
{

    m_left=SCENE_LEFT;
    m_top=SCENE_TOP;
    m_width=SCENE_WIDTH;
    m_height=SCENE_HEIGHT;

    this->m_color=color;
    this->m_start=start;
    this->m_angle=angle;

    this->m_selfpos=currentPos;

    //setFlags(ItemIsSelectable | ItemIsMovable);
    setAcceptHoverEvents(true);

}

SelfPosItem::~SelfPosItem()
{

}

QRectF SelfPosItem::boundingRect() const
{
     return QRectF(m_left,m_top, m_width, m_height);
}

QPainterPath SelfPosItem::shape() const
{
    QPainterPath path;
    path.addRect(14, 14, 82, 42);
    return path;
}

void SelfPosItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);

    const qreal lod = option->levelOfDetailFromTransform(painter->worldTransform());//根据缩放比例来重绘item的详细内容

    qreal lod_scale=1/lod;

    painter->setPen(Qt::NoPen);
    painter->setBrush(QBrush(m_color));
    QPointF center;
    center=m_selfpos;
    painter->drawEllipse(center,5*lod_scale,5*lod_scale);//画圆

    //画箭头表示方向
    QPointF indicator_1(center.x()+2*lod_scale,center.y()+3*lod_scale);
    QPointF indicator_2(center.x()+15*lod_scale,center.y());
    QPointF indicator_3(center.x()+2*lod_scale,center.y()-3*lod_scale);

    QPointF m_indicator[4]=
    {
        center,
        indicator_1,
        indicator_2,
        indicator_3
    };

    painter->translate( center);
//    painter->rotate(0.0);  //上北下南
//    painter->rotate(m_angle);
    painter->rotate(m_angle);
    //qDebug()<<"m_angle:"<<m_angle;

    painter->translate(-center.x(),-center.y());
    painter->drawConvexPolygon(m_indicator,4);

    //画白色圆环
    //painter->setPen(QPen(QColor(255,255,255,255),2*lod_scale));
    //painter->drawEllipse(center,7*lod_scale,7*lod_scale);
}

void SelfPosItem::repaint(const QColor &color, QPointF currentPos, QPointF start, qreal angle)
{
    this->m_color=color;
    this->m_start=start;
    this->m_angle=angle;

    this->m_selfpos=currentPos;

    this->update();
}

void SelfPosItem::resetRect(qreal re_left, qreal re_top, qreal re_width, qreal re_height)
{
    prepareGeometryChange();
    m_left=re_left;
    m_top=re_top;
    m_width=re_width;
    m_height=re_height;

    //由于SelfPosItem在scene中是删除后在添加的，重新改变boundingRect()可能效果不理想，可以使用全局变量定义QRectF();
}





































