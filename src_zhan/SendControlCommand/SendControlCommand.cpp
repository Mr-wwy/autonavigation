#include "ControlCommandOutput.h"


int main(int argc, char* argv[])
{

    ros::init(argc, argv, "SendControlCommand");
    //autonavigation::init();

    boost::shared_ptr<ControlCommandOutput> _pt = boost::make_shared<ControlCommandOutput>();

    if (_pt->init())
    {
        _pt->process();
    }

    ROS_INFO("SendControlCommand end!");
    return 0;
}

