#ifndef SETTIME_H
#define SETTIME_H

#include <QWidget>
#include <QKeyEvent>

namespace Ui {
class SetTime;
}

class SetTime : public QWidget
{
    Q_OBJECT

public:
    explicit SetTime(QWidget *parent = 0, int set_time=0);
    ~SetTime();

protected:
    void keyPressEvent(QKeyEvent *event);

signals:
    void settime_signals(int set_time);

private slots:

    void on_sureBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::SetTime *ui;
};

#endif // SETTIME_H
