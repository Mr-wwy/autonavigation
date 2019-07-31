#include "myitem.h"

int AA=-100;

extern QLabel *label1;
extern QLabel *label3;
extern QLabel *label5;
extern QLabel *label7;
extern QLabel *label9;
extern QLabel *label11;
extern QLabel *label13;
extern QLabel *label15;
extern QLabel *label17;

Myitem::Myitem()
{
    line_num=-100;
    millisecond=0;
    delta_distance=0;
    longitude=0;
    latitude=0;
    gaussX=0;
    gaussY=0;
    expect_speed=0;
    point_type=0;
    simulation_attribute=0;

    defaultColor=Qt::black;
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFlag(QGraphicsItem::ItemIsSelectable);
    setAcceptHoverEvents(true);

}

Myitem::~Myitem()
{

}

QRectF Myitem::boundingRect() const
{
    qreal adjust=0.5;
    return QRectF(0-adjust/2,0-adjust/2,20+adjust,20+adjust);
}

void Myitem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
    painter->setPen(Qt::NoPen);

    if(option->state & QStyle::State_Selected)
    {
        painter->setPen(QPen(QColor(100,100,100,100)));
        brushColor=Qt::green;

    }
    else
    {
        painter->setPen(QPen(QColor(100,100,100,100)));
        brushColor=defaultColor;
    }

    painter->setPen(Qt::NoPen);
    painter->setBrush(brushColor);

    if(line_num<0)               //是否为标记点
    {
        const qreal lod = option->levelOfDetailFromTransform(painter->worldTransform());//根据缩放比例来重绘item的详细内容
        qreal lod_scale=1/lod;
        AA=0;
        if(lod_scale>1)
        {
            painter->drawEllipse(QPointF(10,10),13*lod_scale,13*lod_scale);
        }
        else
        {
            painter->drawEllipse(QPointF(10,10),13,13);
        }

    }
    else
    {
        //setFlag(QGraphicsItem::ItemIsMovable);          //item跟随鼠标移动
        painter->drawRect(0,0,20,20);

    }

}

void Myitem::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    AA=line_num;

    gaussX=scenePos().x();             //scene中x坐标赋给gaussx
    gaussY=(-1)*scenePos().y();        //scene中y坐标取相反数赋给gaussy

    //setCursor(Qt::OpenHandCursor);
    label1->setText(QString("%1").arg(line_num));
    label3->setText(QString("%1").arg(millisecond));
    label5->setText(QString("%1").arg(delta_distance));
    label7->setText(QString("%1").arg(longitude));
    label9->setText(QString("%1").arg(latitude));
    label11->setText(QString("%1").arg(gaussX));
    label13->setText(QString("%1").arg(gaussY));
    label15->setText(QString("%1").arg(expect_speed));
    label17->setText(QString("%1").arg(point_type));


    setToolTip(QString("guass:(%1,%2)").arg(gaussX).arg(gaussY));
}

//void Myitem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
//{
//    qDebug()<<"myitem::mouseMoveEvent"<<event->lastScenePos();
//}

//void Myitem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
//{
//    qDebug()<<"myitem::mouseReleaseEvent"<<event->lastScenePos();
//}

void Myitem::setColor(const QColor &color)
{
    brushColor=color;
}















