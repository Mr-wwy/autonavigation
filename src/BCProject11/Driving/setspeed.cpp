#include "setspeed.h"
#include "ui_setspeed.h"

SetSpeed::SetSpeed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetSpeed)
{
    ui->setupUi(this);   
    this->setFixedSize(this->size());
    this->setWindowTitle(tr("设置期望速度"));
    this->setFocusPolicy(Qt::StrongFocus);

    this->raise();

    this->setAttribute(Qt::WA_DeleteOnClose);//退出时自动delete自己
    this->setWindowModality(Qt::ApplicationModal);//设置模式，在弹出子窗口后使得父窗口不可用

    ui->spinBox_speed->setRange(0,200);
}

SetSpeed::~SetSpeed()
{
    delete ui;
}


void SetSpeed::on_cancleBtn_clicked()
{
    this->close();
}

void SetSpeed::on_sureBtn_clicked()
{
    emit setspeed_clicked_signal(ui->spinBox_speed->value());

    this->close();
}

void SetSpeed::keyPressEvent(QKeyEvent *event)
{
    int _value=event->key();
    switch (_value) {
    case Qt::Key_Enter:
    case Qt::Key_Return:
        on_sureBtn_clicked();
        break;
    default:
        break;
    }
}
