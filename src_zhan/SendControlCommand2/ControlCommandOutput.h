#ifndef __CONTROLCOMMANDOUTPUT__
#define __CONTROLCOMMANDOUTPUT__


#include <ros/ros.h>
#include "CommonFunc.h"
#include "CommonMsg.h"
#include "autonavigation/ControlCommand.h"
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

        devicePort=ACC_UDP_PORT;
    }

};

class ControlCommandOutput
{
public:
    ControlCommandOutput();
    ~ControlCommandOutput();

    int init();

    int process();

    void ControlCommand_callback(const autonavigation::ControlCommand::ConstPtr &_cc);

    void setTargetIP(const char* _ip);

    void setTargetPort(int _port);

private:

    int initUdp();

    void sendPacket(void* pkg, int size);
    
private:

    int m_socket_fd;

    ros::NodeHandle m_nodeHandle;

    ros::Subscriber m_subscriber_ControlCommand;

    SendtoTarget m_sendtotarget;
};

#endif
