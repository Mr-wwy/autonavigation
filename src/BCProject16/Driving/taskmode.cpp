#include "taskmode.h"
#include "ui_taskmode.h"

TaskMode::TaskMode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TaskMode)
{
    ui->setupUi(this);
}

TaskMode::~TaskMode()
{
    delete ui;
}


void TaskMode::change_taskmode(int _taskmode_r, int _taskmode_s)
{
    if(_taskmode_r==1)
    {
        ui->label_taskmode->setText(QString::fromLocal8Bit("请求遥控模式"));

    }
    else if(_taskmode_r==2)
    {
        ui->label_taskmode->setText(QString::fromLocal8Bit("请求自主模式"));
    }
    else if(_taskmode_r==0)
    {
         ui->label_taskmode->setText(QString::fromLocal8Bit("请求人工模式"));

    }
    else
    {

    }

    if(_taskmode_s==0)
    {
        ui->label_taskmode_2->setText(tr("实际人工模式"));
    }
    else if(_taskmode_s==1)
    {
        ui->label_taskmode_2->setText(tr("实际遥控模式"));
    }
    else if(_taskmode_s==2)
    {
        ui->label_taskmode_2->setText(tr("实际自主模式"));
    }
}

