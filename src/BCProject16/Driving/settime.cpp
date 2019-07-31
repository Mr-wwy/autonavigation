#include "settime.h"
#include "ui_settime.h"


SetTime::SetTime(QWidget *parent, int set_time) :
    QWidget(parent),
    ui(new Ui::SetTime)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());
    this->setWindowTitle(tr(""));
    this->setFocusPolicy(Qt::StrongFocus);

    this->raise();

    this->setAttribute(Qt::WA_DeleteOnClose);//退出时自动delete自己
    this->setWindowModality(Qt::ApplicationModal);//设置模式，在弹出子窗口后使得父窗口不可用

    ui->spinBox_time->setValue(set_time);
}

SetTime::~SetTime()
{
    delete ui;
}

void SetTime::keyPressEvent(QKeyEvent *event)
{
    int key_value=event->key();
    switch (key_value)
    {
    case Qt::Key_Enter:
    case Qt::Key_Return:
             on_sureBtn_clicked();
    break;
    default:
    break;
    }
}

void SetTime::on_sureBtn_clicked()
{
    emit settime_signals(ui->spinBox_time->value());
    this->close();

}

void SetTime::on_cancelBtn_clicked()
{
    this->close();
}
