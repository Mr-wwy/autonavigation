#ifndef OPERATEHELP_H
#define OPERATEHELP_H

#include <QWidget>
#include <QKeyEvent>

namespace Ui {
class OperateHelp;
}

class OperateHelp : public QWidget
{
    Q_OBJECT

public:
    explicit OperateHelp(QWidget *parent = 0);
    ~OperateHelp();

protected:
    void keyPressEvent(QKeyEvent *event);

private slots:

    void on_pushButton_close_clicked();

private:
    Ui::OperateHelp *ui;
};

#endif // OPERATEHELP_H
