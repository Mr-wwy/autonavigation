#include "pointwidget.h"
#include <QApplication>
#include <ros/ros.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QFile qss(":/qss/myself.qss");
    if(qss.open(QIODevice::ReadOnly))
        a.setStyleSheet(qss.readAll());

    ros::init(argc,argv,"LoadFile");
    PointWidget w;
    w.setWindowTitle("路点编辑");
    w.show();
    return a.exec();
}
