#ifndef __CONTROLCOMMANDOUTPUT__
#define __CONTROLCOMMANDOUTPUT__


#include <ros/ros.h>
#include "CommonFunc.h"
#include "CommonMsg.h"
#include "autonavigation/ControlCommand.h"
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>

class ControlCommandOutput
{
public:
    ControlCommandOutput();
    ~ControlCommandOutput();

    int init();

    int process();

    void ControlCommand_callback(const autonavigation::ControlCommand::ConstPtr &_cc);
private:

    int initUdp();

    void sendPacket(void* pkg, int size);
    
private:

    int m_socket_fd;

    ros::NodeHandle m_nodeHandle;

    ros::Subscriber m_subscriber_ControlCommand;
};

#endif