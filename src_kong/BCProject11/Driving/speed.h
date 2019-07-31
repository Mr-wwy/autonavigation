#ifndef DRIVING_SPEED_H_
#define DRIVING_SPEED_H_

#include <QWidget>

#define FIFTY 55
#define THIRTY 35
#define FIVE 5
#define SEVEN 7
#define THREE 3

namespace Ui {
class Speed;
}

class Speed : public QWidget
{
    Q_OBJECT

public:
    explicit Speed(QWidget *parent = 0);
    ~Speed();

    void paintEvent(QPaintEvent* event);
    void change_Speed(qreal temp,int temp_shift);
    void drawIndicator(QPainter *painter);
    void drawMark(QPainter *painter);


private:
    Ui::Speed *ui;
    qreal m_degreespeed;
    int m_pointX;
    int m_pointY;
};

#endif // DRIVING_SPEED_H_
