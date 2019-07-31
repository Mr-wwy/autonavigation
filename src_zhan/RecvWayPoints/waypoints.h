#ifndef WAYPOINTS_H
#define WAYPOINTS_H


#include <ros/ros.h>

#include "CommonMsg.h"
#include "CommonFunc.h"

#include "autonavigation/RecvWayPoints.h"

class WayPoints
{
public:
    WayPoints();
    ~WayPoints();

    int init();

    int process();

private:

    int initUdp();

    int setnonblocking(int fd);

    int getPacket(unsigned char* pkg, const int len, const int timeout = 100);

    void setRecvWayPoints(Autonavigation_RecvWayPoints* _v_waypoints, autonavigation::RecvWayPointsPtr& _s_waypoints);

private:
    int m_socket_fd;

    ros::NodeHandle m_nodeHandle;

    ros::Publisher m_publisher;

    autonavigation::RecvWayPointsPtr  m_pRecvWayPoints;
};

#endif // WAYPOINTS_H
