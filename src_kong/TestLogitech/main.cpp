#include <iostream>
#include "logitech.h"
#include <ros/ros.h>

using namespace std;

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "Thustmaster");
    boost::shared_ptr<logitech> _pt = boost::make_shared<logitech>();
    if (_pt->init())
    {
        _pt->process();
    }
    return 0;
}
