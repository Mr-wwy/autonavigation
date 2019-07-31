#include "weapon_navigation.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ros::init(argc,argv,"Weapon_navigation");
    Weapon_navigation w;
    w.show();

    return a.exec();
}
