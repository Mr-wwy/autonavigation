#ifndef DRIVING_TACHOMETER_H_
#define DRIVING_TACHOMETER_H_

#include <QWidget>

namespace Ui {
class Tachometer;
}

class Tachometer : public QWidget
{
    Q_OBJECT

public:
    explicit Tachometer(QWidget *parent = 0);
    void paintEvent(QPaintEvent* event);
    void change_tachometer(float temp,int engineStatus_temp,int handBrake_temp);
    ~Tachometer();

private:
    Ui::Tachometer *ui;
    qreal m_degreespeed;
    int m_pointX;
    int m_pointY;
};

#endif // DRIVING_TACHOMETER_H_
