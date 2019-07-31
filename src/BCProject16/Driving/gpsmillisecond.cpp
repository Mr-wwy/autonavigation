#include "gpsmillisecond.h"
#include "ui_gpsmillisecond.h"

#include "CommonMsg.h"

#include <QKeyEvent>
#include <QDebug>

Gpsmillisecond::Gpsmillisecond(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gpsmillisecond)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowTitle(tr("手动T0:"));
    this->setFocusPolicy(Qt::StrongFocus);

    this->raise();

    this->setAttribute(Qt::WA_DeleteOnClose);//退出时自动delete自己
    this->setWindowModality(Qt::ApplicationModal);//设置模式，在弹出子窗口后使得父窗口不可用

    ui->dateTimeEdit_gps->setDisplayFormat("yyyy/MM/dd HH:mm:ss.zzz");
    ui->dateTimeEdit_gps->setCalendarPopup(true);
    //ui->dateTimeEdit_gps->setToolTip(tr("输入值需大于主界面显示的gps毫秒"));
    ui->dateTimeEdit_gps->setMinimumDateTime(QDateTime::fromString("2000/01/01 00:00:00.000", "yyyy/MM/dd HH:mm:ss.zzz"));

    ui->dateTimeEdit_gps->setDateTime(QDateTime::currentDateTime());


    //ui->label_gpsms->setToolTip("输入值需大于主界面显示的gps毫秒");

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
//    qDebug()<<"datetime:"<<datetime;

//    QDateTime date_time=QDateTime::fromTime_t(datetime);
//    qDebug()<<"date_time.date():"<<date_time.date();
//    qDebug()<<"date_time.time():"<<date_time.time();
//    //qDebug()<<QDateTime::fromTime_t(datetime).toString("yyyy/MM/dd HH:mm:ss");

//    qDebug()<<"data:"<<QDateTime::fromTime_t(datetime).toString("yyyy/MM/dd");
//    qDebug()<<"time:"<<QDateTime::fromTime_t(datetime).toString("hh:mm:ss");

    emit gpsmillisecond(ui->label_gpsms->text());
    this->close();
}

void Gpsmillisecond::dateTimeChanged_slot(QDateTime _datetime)
{

}

void Gpsmillisecond::editingFinished_slot()
{
    QString strBuffer;
    QDateTime time;
    strBuffer = GPSTIME_STR;
    time = QDateTime::fromString(strBuffer, "yyyy/MM/dd HH:mm:ss.zzz");
    long time_1980=time.toMSecsSinceEpoch();

    //获得自1970-01-01T00:00:00.000至今的毫秒数并将这个毫秒数转成日期
    long datetime=ui->dateTimeEdit_gps->dateTime().toMSecsSinceEpoch();
//    qDebug()<<"datetime:"<<datetime;
//    qDebug()<<"abc:"<<ui->dateTimeEdit_gps->dateTime().toString("yyyy/MM/dd HH:mm:ss.zzz");
    ui->label_gpsms->setText(QString::number(datetime-time_1980));

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



























