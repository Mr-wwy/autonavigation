#ifndef __VEHICLESTATUSINPUT__
#define __VEHICLESTATUSINPUT__

#include <ros/ros.h>

#include "CommonMsg.h"
#include "CommonFunc.h"
#include "autonavigation/VehicleStatus.h"

class VehicleStatusInput
{
public:
    VehicleStatusInput();
    ~VehicleStatusInput();

    int init();

    int process();

private:

    int initUdp();

    int setnonblocking(int fd);

    int getPacket(unsigned char* pkg, const int len, const int timeout = 100);

    void setVehicleStatus(Autonavigation_Vehicle_Status* _v, autonavigation::VehicleStatusPtr& _s);
    
private:
    int m_socket_fd;

    ros::NodeHandle m_nodeHandle;

    ros::Publisher m_publisher;

    autonavigation::VehicleStatusPtr  m_pVehicleStatus;
};

#endif
