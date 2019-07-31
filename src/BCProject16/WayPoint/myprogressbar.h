#ifndef MYPROGRESSBAR_H
#define MYPROGRESSBAR_H

#include <QWidget>
#include <QDebug>
#include <QTimer>

namespace Ui {
class MyProgressbar;
}

class MyProgressbar : public QWidget
{
    Q_OBJECT

public:
    explicit MyProgressbar(QWidget *parent = 0);
    ~MyProgressbar();

    void setLabelText(QString text);

    void setValue(int value);

private:
    Ui::MyProgressbar *ui;

};

#endif // MYPROGRESSBAR_H
