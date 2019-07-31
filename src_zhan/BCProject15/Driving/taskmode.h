#ifndef DRIVING_TASKMODE_H_
#define DRIVING_TASKMODE_H_

#include <QWidget>

namespace Ui {
class TaskMode;
}

class TaskMode : public QWidget
{
    Q_OBJECT

public:
    explicit TaskMode(QWidget *parent = 0);
    ~TaskMode();

    void change_taskmode(int _taskmode_r,int _taskmode_s);

private:
    Ui::TaskMode *ui;
};

#endif // DRIVING_TASKMODE_H_
