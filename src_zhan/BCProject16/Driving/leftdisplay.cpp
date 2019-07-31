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

    before_status=0;
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
        ui->label_recordstatus2->setText(tr("已保存"));
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

void LeftDisplay::setEnable(short _enable)
{

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

void LeftDisplay::setRecordStatus_status(int _recordstatus)
{
//    if(_recordstatus==0)
//    {
//        ui->label_recordstatus2->setText(tr("未记录"));
//    }
//    else if(_recordstatus==1)
//    {
//        ui->label_recordstatus2->setText(tr("正在记录"));
//    }
//    else if(_recordstatus==2)
//    {
//        ui->label_recordstatus2->setText(tr("已保存"));
//    }

    if((_recordstatus==0)&&(before_status>_recordstatus))
    {
        ui->label_recordstatus2->setText(tr("已保存"));
        before_status=_recordstatus;
    }

    if((_recordstatus==1)&&(before_status<_recordstatus))
    {
        ui->label_recordstatus2->setText(tr("正在记录"));
        before_status=_recordstatus;
    }
}

void LeftDisplay::setRecordStatus_count(int c_count)
{
    if(c_count==0)
    {
        ui->label_recordstatus2->setText(tr("未记录"));
    }
    else if(c_count==1)
    {
        ui->label_recordstatus2->setText(tr("正在记录"));
    }
    else if(c_count==2)
    {
        ui->label_recordstatus2->setText(tr("已保存"));
    }

}
