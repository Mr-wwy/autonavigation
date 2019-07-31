#include "leftdisplay.h"
#include "ui_leftdisplay.h"

LeftDisplay::LeftDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeftDisplay)
{
    ui->setupUi(this);

    ui->label_recordstatus2->setText(tr("未记录"));
    ui->label_speed2->setText(tr(""));
    ui->label_recordcmd2->setText(tr("未发送"));
}

LeftDisplay::~LeftDisplay()
{
    delete ui;
}


void LeftDisplay::change_data(int _recordstatus, int _speed ,short _enable)
{
    ui->label_speed2->setText(tr("%1 Km/h").arg(QString::number(_speed)));

    if(_recordstatus==0)
    {
        ui->label_recordstatus2->setText(tr("未记录"));
    }
    else if(_recordstatus==1)
    {
        ui->label_recordstatus2->setText(tr("正在记录"));
    }
    else if(_recordstatus==2)
    {
        ui->label_recordstatus2->setText(tr("记录完成"));
    }

    if(_enable<=0)
    {
        ui->label_enable2->setText(tr("NO"));
    }
    else
    {
        ui->label_enable2->setText(tr("YES"));
    }

}

void LeftDisplay::setSpeed(int _speed)
{
    ui->label_speed2->setText(tr("%1 Km/h").arg(QString::number(_speed)));

}

void LeftDisplay::setRecordStatusAndEnable(int _recordstatus, short _enable)
{
    if(_recordstatus==0)
    {
        ui->label_recordstatus2->setText(tr("未记录"));
    }
    else if(_recordstatus==1)
    {
        ui->label_recordstatus2->setText(tr("正在记录"));
    }
    else if(_recordstatus==2)
    {
        ui->label_recordstatus2->setText(tr("记录完成"));
    }

    if(_enable<=0)
    {
        ui->label_enable2->setText(tr("NO"));
    }
    else
    {
        ui->label_enable2->setText(tr("YES"));
    }

}

void LeftDisplay::setRecordCommand(int _recordcommand)
{
    if(_recordcommand==0)
    {
        ui->label_recordcmd2->setText(tr("未发送"));
    }
    else if(_recordcommand==1)
    {
        ui->label_recordcmd2->setText(tr("已发送"));
    }
}
