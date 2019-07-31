#include "udpsenderwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile qss(":/qss/myself.qss");
    if(qss.open(QIODevice::ReadOnly))
        a.setStyleSheet(qss.readAll());

    ros::init(argc, argv, "UDPSender");
    UDPSenderWidget w;
    w.show();

    return a.exec();
}
