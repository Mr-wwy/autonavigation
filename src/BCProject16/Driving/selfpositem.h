#ifndef DRIVING_SELFPOSITEM_H_
#define DRIVING_SELFPOSITEM_H_

#include <QGraphicsItem>
#include <QObject>
#include <QPainter>
#include <QVector>
#include <QPointF>


class SelfPosItem : public QObject,public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)

public:
    SelfPosItem(const QColor &color, QPointF currentPos, QPointF start, qreal angle);
    ~SelfPosItem();

    void resetRect(qreal re_left,qreal re_top,qreal re_width,qreal re_height);

    void repaint(const QColor &color, QPointF currentPos, QPointF start, qreal angle);

protected:
    QRectF boundingRect() const;
    QPainterPath shape() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


private:
    QColor m_color;

    QPointF m_start;

    QPointF m_selfpos;

    qreal m_angle;

    qreal m_left;
    qreal m_top;
    qreal m_width;
    qreal m_height;


};

#endif // DRIVING_SELFPOSITEM_H_




















































