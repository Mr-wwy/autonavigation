#ifndef SENDVEHICLESTATUS_H
#define SENDVEHICLESTATUS_H


#include <ros/ros.h>
#include "CommonFunc.h"
#include "CommonMsg.h"
#include "autonavigation/VehicleStatus.h"
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>

struct SendtoTarget
{
    char deviceIP[64];
    int devicePort;

    SendtoTarget()
    {
        reset();
    }


    void reset()
    {
        char *ip = "192.168.1.255";
        memcpy(deviceIP,ip,strlen(ip));

        devicePort=5000;
    }

};

class SendVehicleStatusOutput
{
public:
    SendVehicleStatusOutput();
    ~SendVehicleStatusOutput();

    int init();

    int process();

    void VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &_vsc);

    void setTargetIP(const char* _ip);

    void setTargetPort(int _port);

private:

    int initUdp();

    void sendPacket(void* pkg, int size);

private:

    int m_socket_fd;

    ros::NodeHandle m_nodeHandle;

    ros::Subscriber m_subscriber_VehicleStatus;

    SendtoTarget m_sendtotarget;
};

#endif // SENDVEHICLESTATUS_H
