#ifndef DRIVING_WHEEL_H_
#define DRIVING_WHEEL_H_

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QLabel>

class Wheel :public QWidget
{
    Q_OBJECT

public:
    explicit Wheel(QWidget *parent = 0);
    ~Wheel();

public:
    void paintEvent(QPaintEvent *event);
    void drawTriangle(QPainter* painter);
    void drawCircle(QPainter* painter);
    void drawgradientArc(QPainter *painter, int radius, int startAngle, int angleLength, int arcHeight, QColor color);
    void drawlabel(int shift);

    void wheel_rotate(int steer,int shift);
    void resetVariables();

private:
    int m_Radius;
    int m_outerRadius;
    int m_innerRadius;
    int m_large;
    QPointF m_center;

    int m_steer;
    int m_shift;

    QLabel *m_labelshift;

};

#endif // DRIVING_WHEEL_H_



























































