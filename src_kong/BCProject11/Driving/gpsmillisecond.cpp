#include "gpsmillisecond.h"
#include "ui_gpsmillisecond.h"

#include <QKeyEvent>
#include <QDebug>

Gpsmillisecond::Gpsmillisecond(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gpsmillisecond)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowTitle(tr("请输入T0时刻:"));
    this->setFocusPolicy(Qt::StrongFocus);

    this->raise();

    this->setAttribute(Qt::WA_DeleteOnClose);//退出时自动delete自己
    this->setWindowModality(Qt::ApplicationModal);//设置模式，在弹出子窗口后使得父窗口不可用

    ui->dateTimeEdit_gps->setDisplayFormat("yyyy/MM/dd HH-mm-ss");
    ui->dateTimeEdit_gps->setCalendarPopup(true);
    ui->dateTimeEdit_gps->setToolTip(tr("输入值需大于主界面显示的gps毫秒"));


    ui->label_gpsms->setToolTip("输入值需大于主界面显示的gps毫秒");

    connect(ui->dateTimeEdit_gps,SIGNAL(dateTimeChanged(QDateTime)),this,SLOT(dateTimeChanged_slot(QDateTime)));
    connect(ui->dateTimeEdit_gps,SIGNAL(editingFinished()),this,SLOT(editingFinished_slot()));

}

Gpsmillisecond::~Gpsmillisecond()
{
    delete ui;
}

void Gpsmillisecond::on_OkBtn_clicked()
{

//    long datetime=ui->dateTimeEdit_gps->dateTime().toTime_t();
//    qDebug()<<"datetime--"<<datetime;
//    qDebug()<<QDateTime::fromTime_t(datetime).toString("yyyy-MM-dd hh:mm:ss");
    emit gpsmillisecond(ui->label_gpsms->text());
    this->close();
}

void Gpsmillisecond::dateTimeChanged_slot(QDateTime _datetime)
{

}

void Gpsmillisecond::editingFinished_slot()
{
    //获得自1970-01-01T00:00:00至今的秒数并将这个秒数转成日期
    long datetime=ui->dateTimeEdit_gps->dateTime().toTime_t();
    ui->label_gpsms->setText(QString::number(datetime*1000));

}

void Gpsmillisecond::keyPressEvent(QKeyEvent *event)
{
    int key_value=event->key();
    switch (key_value)
    {
    case Qt::Key_Enter:
    case Qt::Key_Return:
             on_OkBtn_clicked();
    break;
    default:
    break;
    }

}



























