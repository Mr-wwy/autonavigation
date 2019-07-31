#ifndef DRIVING_LOCALITEM_H_
#define DRIVING_LOCALITEM_H_

#include <QGraphicsItem>
#include <QObject>
#include <QVector>

class QPainter;
class QPointF;
class QRectF;


class LocalLineItem : public QObject,public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)

public:
    LocalLineItem(const QColor &color,QVector<QPointF> local,QPointF start);
    ~LocalLineItem();

   void resetRect(qreal re_left,qreal re_top,qreal re_width,qreal re_height);

   void repaint(const QColor &color,QVector<QPointF> local,QPointF start);

protected:
    QRectF boundingRect() const;
    QPainterPath shape() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


private:
    QColor m_color;

    QVector<QPointF> m_local;

    QPointF m_start;

    qreal m_left;
    qreal m_top;
    qreal m_width;
    qreal m_height;


};

#endif DRIVING_LOCALITEM_H_








































