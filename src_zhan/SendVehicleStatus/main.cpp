#include <iostream>
#include "sendvehiclestatus.h"

using namespace std;

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "SendVehicleStatus");
    //autonavigation::init();

    boost::shared_ptr<SendVehicleStatusOutput> _pt = boost::make_shared<SendVehicleStatusOutput>();

    //ROS_INFO("argc:%d",argc);

    if (argc >= 2)
    {
        _pt->setTargetIP(argv[1]);
        //ROS_INFO("argv[1]:%s",argv[1]);
    }

    if (argc >= 3)
    {
        _pt->setTargetPort(atoi(argv[2]));
        //ROS_INFO("argv[2]:%s",argv[2]);
    }

    if (_pt->init())
    {
        _pt->process();
    }

    ROS_INFO("SendControlCommand end!");
    return 0;
}
