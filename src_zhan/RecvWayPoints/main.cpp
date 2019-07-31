#include "waypoints.h"



int main(int argc, char *argv[])
{
    ros::init(argc, argv, "RecvWayPoints");

    autonavigation::init();

    boost::shared_ptr<WayPoints> _waypoints = boost::make_shared<WayPoints>();

    if (_waypoints->init())
    {
        _waypoints->process();
    }

    ROS_INFO("RecvWayPoints end!");
}
