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

    void setEnable( short _enable);

    void setSpeed(int _speed);

    void setRecordCommand(int _recordcommand);

    void setRecordStatus_status(int _recordstatus);

    void setRecordStatus_count(int c_count);
private:
    Ui::LeftDisplay *ui;

    int before_status;
};

#endif // LEFTDISPLAY_H
