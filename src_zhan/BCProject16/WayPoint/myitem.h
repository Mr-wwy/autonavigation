#ifndef MYITEM_H
#define MYITEM_H

#include <unistd.h>

#include <QGraphicsItem>
#include <QGraphicsObject>
#include <QPainter>
#include <QCursor>
#include <QKeyEvent>
#include <QGraphicsSceneEvent>
#include <QGraphicsSceneContextMenuEvent>
#include <QMenu>
#include <QStyleOptionGraphicsItem>
#include <QDebug>
#include <QLabel>

class Myitem : public QGraphicsObject   //public QGraphicsItem
{
  //  Q_OBJECT
public:
    Myitem();
    ~Myitem();

protected:
    QRectF boundingRect() const;

    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);

    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);

    //void mouseMoveEvent(QGraphicsSceneMouseEvent *event);         //与setFlag(QGraphicsItem::ItemIsMovable)会发生冲突

    //void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);      //与setFlag(QGraphicsItem::ItemIsMovable)会发生冲突

public:
    QColor brushColor;
    QColor defaultColor;
    void setColor(const QColor &color);

    int    line_num;
    long    millisecond;
    int    delta_distance;
    double    longitude;
    double    latitude;
    long    gaussX;
    long    gaussY;
    int    expect_speed;
    int    point_type;
    int simulation_attribute;
};

#endif // MYITEM_H
