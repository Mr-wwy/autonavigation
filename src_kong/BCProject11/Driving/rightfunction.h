#ifndef DRIVING_RIGHTFUNCTION_H_
#define DRIVING_RIGHTFUNCTION_H_

#include <QWidget>

namespace Ui {
class RightFunction;
}

class RightFunction : public QWidget
{
    Q_OBJECT

public:
    explicit RightFunction(QWidget *parent = 0);
    ~RightFunction();

    void paintEvent(QPaintEvent* event);
    void change_right(float gps_week_temp,long gps_mi_temp,double latitude_temp,double longitude_temp,
                      long gaussx_temp,long gaussy_temp,int azimuth_temp,int pitch_temp,
                      int roll_temp);

    void setTime_T0(QString _t0);


private:
    Ui::RightFunction *ui;
};

#endif // DRIVING_RIGHTFUNCTION_H_
