#ifndef DRIVING_DANGERITEM_H_
#define DRIVING_DANGERITEM_H_

#include <QGraphicsItem>
#include <QObject>

class QPainter;
class QPointF;
class QRectF;

class DangerItem : public QObject,public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)

public:
    DangerItem(const QColor &color,QPointF point,qreal radius);
    ~DangerItem();

    void repaint(const QColor &color,QPointF point,qreal radius);

protected:
    QRectF boundingRect() const;

    QPainterPath shape() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    QColor m_color;

    QPointF m_point;

    qreal m_radius;

    qreal m_left;
    qreal m_top;
    qreal m_width;
    qreal m_height;

};

#endif // DRIVING_DANGERITEM_H_












































