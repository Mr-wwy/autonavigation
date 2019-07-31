#ifndef COMPASS_H
#define COMPASS_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

class Compass : public QWidget
{
    Q_OBJECT

public:
    explicit Compass(QWidget *parent=0);
    ~Compass();

protected:
    void paintEvent(QPaintEvent *event);

public:
    void drawArrow(QPainter* painter);
    void drawCircle(QPainter* painter);

    void resetParameters();

    void setCircleColor(QColor color);
    void setRotate(qreal value);

private:
    qreal m_value;

    qreal m_radius;
    qreal m_length;

    QColor m_circlecolor;

};

#endif // COMPASS_H
