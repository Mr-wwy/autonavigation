#ifndef DRIVING_WATERTEMPERATURE_H_
#define DRIVING_WATERTEMPERATURE_H_

#include <QWidget>

namespace Ui {
class WaterTemperature;
}

class WaterTemperature : public QWidget
{
    Q_OBJECT

public:
    explicit WaterTemperature(QWidget *parent = 0);
    void paintEvent(QPaintEvent* event);
    void change_watertem(qreal temp);
    ~WaterTemperature();

private:
    Ui::WaterTemperature *ui;
    qreal m_degreespeed;
    int m_pointX;
    int m_pointY;
};

#endif // DRIVING_WATERTEMPERATURE_H_
