#ifndef LEFTDISPLAY_H
#define LEFTDISPLAY_H

#include <QWidget>

namespace Ui {
class LeftDisplay;
}

class LeftDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit LeftDisplay(QWidget *parent = 0);
    ~LeftDisplay();

    void change_data(int _recordstatus, int _speed, short _enable);

    void setRecordStatusAndEnable(int _recordstatus, short _enable);

    void setSpeed(int _speed);

    void setRecordCommand(int _recordcommand);

private:
    Ui::LeftDisplay *ui;
};

#endif // LEFTDISPLAY_H
