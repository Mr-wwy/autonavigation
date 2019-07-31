#include "fps.h"
#include "ui_fps.h"
#include <QDebug>

Fps::Fps(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Fps)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("border-image:url(:/KM/image/XH0.png)");
}

void Fps::change_fps(int temp)
{
    if(temp<0)
    {
        ui->label->setStyleSheet("border-image:url(:/KM/image/XH0.png)");
        QString temp_str=QString("Ping:%1").arg(temp);
        ui->label_2->setText(temp_str);
        return;
    }
    else if(temp>=0&&temp<=50)
    {
        ui->label->setStyleSheet("border-image:url(:/KM/image/XH4.png)");
    }
    else if(temp>50&&temp<=200)
    {
        ui->label->setStyleSheet("border-image:url(:/KM/image/XH3.png)");
    }
    else if(temp>200&&temp<=500)
    {
         ui->label->setStyleSheet("border-image:url(:/KM/image/XH2.png)");
    }
    else if(temp>500&&temp<=1000)
    {
        ui->label->setStyleSheet("border-image:url(:/KM/image/XH1.png)");
    }
    else
    {
        ui->label->setStyleSheet("border-image:url(:/KM/image/XH0.png)");
    }
    QString temp_str=QString("Ping:%1ms").arg(temp);
    ui->label_2->setText(temp_str);
}

Fps::~Fps()
{
    delete ui;
}









































































