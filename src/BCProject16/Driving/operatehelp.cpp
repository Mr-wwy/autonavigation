#include "operatehelp.h"
#include "ui_operatehelp.h"

OperateHelp::OperateHelp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OperateHelp)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());
    this->setWindowTitle(tr("提示"));
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMinMaxButtonsHint);
    this->setFocusPolicy(Qt::StrongFocus);

    this->raise();

    this->setAttribute(Qt::WA_DeleteOnClose);//退出时自动delete自己
    this->setAttribute(Qt::WA_QuitOnClose,false);
    //this->setWindowModality(Qt::ApplicationModal);//设置模式，在弹出子窗口后使得父窗口不可用

    ui->textEdit_message->setReadOnly(true);

    QString helpstr;
    helpstr.append(tr("键盘操作：\n"
                      "F1键：遥控模式\n"
                      "F2键：人工模式\n"
                      "F3键：自主模式\n"
                      "F4键：手动设置T0\n"
                      "F5键：检验自主文件\n"
                      "F6键：设置最大期望速度\n"
                      "F7键：设置启动时间\n"
                      "A/左键：左转\n"
                      "D/右键：右转\n"
                      "W/上键：油门\n"
                      "S/下键：刹车\n"
                      "Enter键:点火/熄火\n"
                      "空格键：拉手刹/送手刹\n"
                      "减号键（-）：减挡\n"
                      "等号键（=）：加档\n"
                      "L键：是否显示路点信息\n"
                      "R键：复位键\n"
                      "C键：是否记录\n"
                      "F键：强制发车\n"));

    QString cautionstr;
    cautionstr.append(tr("注意：\n"
                         "在罗技方向盘设备正常工作状态下键盘A/左键、D/右键、W/上键、S/下键、"
                         "Enter键、空格键、减号键（-）、等号键（=）不起作用，以罗技方向盘设备优先"));

    ui->textEdit_message->append(helpstr);
    ui->textEdit_message->append(cautionstr);

}

OperateHelp::~OperateHelp()
{
    delete ui;
}

void OperateHelp::on_pushButton_close_clicked()
{
    this->close();

}

void OperateHelp::keyPressEvent(QKeyEvent *event)
{
    int _value=event->key();
    switch (_value) {
    case Qt::Key_Enter:
    case Qt::Key_Return:
        on_pushButton_close_clicked();
        break;
    default:
        break;
    }
}
