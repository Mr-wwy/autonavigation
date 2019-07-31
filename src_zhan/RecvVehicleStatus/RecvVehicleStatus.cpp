#include "VehicleStatusInput.h"



int main(int argc, char* argv[])
{

    ros::init(argc, argv, "RecvVehicleStatus");

    autonavigation::init();

    boost::shared_ptr<VehicleStatusInput> _pt = boost::make_shared<VehicleStatusInput>();

    if (_pt->init())
    {
        _pt->process();
    }

    ROS_INFO("RecvVehicleStatus end!");
    return 0;
}

