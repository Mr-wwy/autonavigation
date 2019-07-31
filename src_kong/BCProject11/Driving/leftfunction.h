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
    void paintEvent(QPaintEvent* event);
    void change_LeftFunction(int temp,int remaintime_temp);
    ~LeftFunction();

private:
    Ui::LeftFunction *ui;
};

#endif // DRIVING_LEFTFUNCTION_H_
