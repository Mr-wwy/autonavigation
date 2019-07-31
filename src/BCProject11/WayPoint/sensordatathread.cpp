#include "sensordatathread.h"
#include "CommonDefinition.h"
#include "cv_bridge/cv_bridge.h"
#include <QDebug>

sensordatathread::sensordatathread()
{
    stop_sig=true;
}

sensordatathread::~sensordatathread()
{
    if(this->isRunning())
    {
        stop();
    }

    //terminate();
    quit();
    wait();
}
void sensordatathread::init()
{
    m_subscriber_VehicleStatus = m_nodeHandle.subscribe("VehicleStatus", 10, &sensordatathread::VehicleStatus_callback, this);
}

void sensordatathread::VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &gp)
{
    emit globalpose_readed(gp);
}

void sensordatathread::stop()
{
    stop_sig=false;
}

void sensordatathread::run()
{
    while(stop_sig)
    {
        ros::spinOnce();
        usleep(100000);                  //设置接受频率  100ms
    }
}
