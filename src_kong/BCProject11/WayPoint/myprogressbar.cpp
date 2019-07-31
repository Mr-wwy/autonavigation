#include "myprogressbar.h"
#include "ui_myprogressbar.h"

extern QString fileName;

MyProgressbar::MyProgressbar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyProgressbar)
{
   ui->setupUi(this);
   ui->label_name->setFocusPolicy(Qt::NoFocus);
   ui->progressBar->setTextVisible(true);

   this->setWindowModality(Qt::NonModal);
   this->setAttribute(Qt::WA_QuitOnClose);    //关闭后自动退出

}

MyProgressbar::~MyProgressbar()
{
    delete ui;
}

void MyProgressbar::setLabelText(QString text)
{
    ui->label_name->setText(text);
}

void MyProgressbar::setValue(int value)
{
    ui->progressBar->setValue(value);
}


