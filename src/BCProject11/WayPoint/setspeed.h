#ifndef SETSPEED_H
#define SETSPEED_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class setspeed;
}

class setspeed : public QWidget
{
    Q_OBJECT

public:
    explicit setspeed(QWidget *parent = 0);
    ~setspeed();
    void setspinbox(int speed_max);

private slots:
    void on_pushButton_clicked();

signals:
    void getspeed(int min,int max);

private:
    Ui::setspeed *ui;


};

#endif // SETSPEED_H
