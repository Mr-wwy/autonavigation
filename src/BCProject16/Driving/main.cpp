#include "drivingwidget.h"
#include <QApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ros::init(argc, argv, "AutomaticDriving");

    QFile file(":/qss/mystyle.qss");
    // 只读方式打开该文件
    file.open(QFile::ReadOnly);
    // 读取文件全部内容，将其转换为QString类型
    QString styleSheet = QLatin1String(file.readAll());
    // 为QApplication设置样式表
    qApp->setStyleSheet(styleSheet);
    file.close();

    DrivingWidget w;
    w.show();
    return a.exec();

}
