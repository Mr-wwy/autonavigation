#ifndef SETSPEED_H
#define SETSPEED_H

#include <QWidget>
#include <QKeyEvent>

namespace Ui {
class SetSpeed;
}

class SetSpeed : public QWidget
{
    Q_OBJECT

public:

    explicit SetSpeed(QWidget *parent = 0);
    ~SetSpeed();

protected:
    void keyPressEvent(QKeyEvent *event);

signals:
    void setspeed_clicked_signal(int _speed);

private slots:
    void on_cancleBtn_clicked();

    void on_sureBtn_clicked();

private:
    Ui::SetSpeed *ui;
};

#endif // SETSPEED_H
