#include "imagewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ros::init(argc,argv,"ShowImage");

    ImageWidget w;
    w.show();

    return a.exec();
}
