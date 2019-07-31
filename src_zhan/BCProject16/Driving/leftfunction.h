#ifndef DRIVING_LEFTFUNCTION_H_
#define DRIVING_LEFTFUNCTION_H_

#include <QWidget>

namespace Ui {
class LeftFunction;
}

class LeftFunction : public QWidget
{
    Q_OBJECT

public:
    explicit LeftFunction(QWidget *parent = 0);
    ~LeftFunction();

    void change_LeftFunction(int distance_guihua, int distance_xingshi ,int remaintime_time);
    void setDistanceAndTime(int distance_xingshi, int remaintime_time);
    void setDistance_guihua(int distance_guihua);

private:
    Ui::LeftFunction *ui;
};

#endif // DRIVING_LEFTFUNCTION_H_
