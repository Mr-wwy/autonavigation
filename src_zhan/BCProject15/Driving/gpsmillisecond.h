#ifndef DRIVING_GPSMILLISECOND_H_
#define DRIVING_GPSMILLISECOND_H_

#include <QWidget>
#include <QDateTime>

class QKeyEvent;
namespace Ui {
class Gpsmillisecond;
}

class Gpsmillisecond : public QWidget
{
    Q_OBJECT

public:
    explicit Gpsmillisecond(QWidget *parent = 0);
    ~Gpsmillisecond();

protected:
    void keyPressEvent(QKeyEvent *event);

private slots:
    void on_OkBtn_clicked();

    void dateTimeChanged_slot(QDateTime _datetime);
    void editingFinished_slot();

signals:
    void gpsmillisecond(QString gm);

private:
    Ui::Gpsmillisecond *ui;
};

#endif // DRIVING_GPSMILLISECOND_H_
