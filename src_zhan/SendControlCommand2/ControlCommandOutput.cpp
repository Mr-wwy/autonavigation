#include "ControlCommandOutput.h"


ControlCommandOutput::ControlCommandOutput()
{
}

ControlCommandOutput::~ControlCommandOutput()
{
    ::close(m_socket_fd);
}

int ControlCommandOutput::init()
{
    m_subscriber_ControlCommand = m_nodeHandle.subscribe(CONTROLCOMMAND, 10, &ControlCommandOutput::ControlCommand_callback, this);
    return initUdp();
}

int ControlCommandOutput::process()
{
#if 1
    ros::spin();
#else

    ros::Rate r(50);
    while (ros::ok() && autonavigation::ok())
    {
        r.sleep();
        ros::spinOnce();
    }
#endif
   
    return 1;
}

void ControlCommandOutput::setTargetIP(const char *_ip)
{
    strcpy(m_sendtotarget.deviceIP, _ip);

}

void ControlCommandOutput::setTargetPort(int _port)
{
    m_sendtotarget.devicePort=_port;

}

int ControlCommandOutput::initUdp()
{
    if ((m_socket_fd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
    {
        ROS_ERROR("socket error!");
        return 0;
    }

    const int opt = 1;

    int ret = setsockopt(m_socket_fd, SOL_SOCKET, SO_BROADCAST, (char*)&opt, sizeof(opt));
    if (ret == -1)
    {
        ::close(m_socket_fd);
        return 0;
    }

    //struct sockaddr_in localAddr;
    //bzero(&localAddr, sizeof(struct sockaddr_in));
    //localAddr.sin_family = AF_INET;
    //localAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    //localAddr.sin_port = htons(Vehicle_Local_Port);

    //if (bind(m_socket_fd, (struct sockaddr*)&localAddr, sizeof(struct sockaddr)) == -1)
    //{
    //    ::close(m_socket_fd);
    //    return 0;
    //}
    return 1;
}

void ControlCommandOutput::sendPacket(void* pkg, int size)
{
    if (m_socket_fd <= 0)
    {
        return ;
    }

    struct sockaddr_in addrto;
    bzero(&addrto, sizeof(struct sockaddr_in));
    addrto.sin_family = AF_INET;

    //addrto.sin_addr.s_addr = inet_addr(Vehicle_Input_Addr);PublicNetMask
//    addrto.sin_addr.s_addr = htonl(ACC_WIRELESS_NETMASK);    //在无线数据链中广播
//    addrto.sin_port = htons(ACC_UDP_PORT);
    addrto.sin_addr.s_addr = inet_addr(m_sendtotarget.deviceIP);    //
    addrto.sin_port = htons(m_sendtotarget.devicePort);

//    ROS_INFO("ip:%s",m_sendtotarget.deviceIP);
//    ROS_INFO("port:%d",m_sendtotarget.devicePort);

    if (sendto(m_socket_fd, (void*)pkg, size, 0, (sockaddr*)&addrto, sizeof(addrto)) < 0)    //addrto 目的地址
    {
        ROS_ERROR("sendto error!");
    }
    else
    {
        ROS_INFO("sendto success!");
    }
}


void ControlCommandOutput::ControlCommand_callback(const autonavigation::ControlCommand::ConstPtr &_cc)
{
    Autonavigation_Control_Command _cmd;

    _cmd.unique_key         = _cc->unique_key;
    _cmd.gps_week           = _cc->gps_week;
    _cmd.gps_millisecond    = _cc->gps_millisecond;
    _cmd.cmd_millisecond    = _cc->cmd_millisecond;
    _cmd.cmd_steer          = _cc->cmd_steer;
    _cmd.cmd_velocity       = _cc->cmd_velocity;
    _cmd.cmd_curvature      = _cc->cmd_curvature;
    _cmd.cmd_force_start    = _cc->cmd_force_start;
    _cmd.cmd_task_mode      = _cc->cmd_task_mode;
    _cmd.cmd_hand_brake     = _cc->cmd_hand_brake;
    _cmd.cmd_throttle       = _cc->cmd_throttle;
    _cmd.cmd_brake          = _cc->cmd_brake;
    _cmd.cmd_shift          = _cc->cmd_shift;
    _cmd.cmd_ignition       = _cc->cmd_ignition;
    _cmd.cmd_light          = _cc->cmd_light;
    _cmd.cmd_reset          = _cc->cmd_reset;
    _cmd.cmd_reserve2       = _cc->cmd_reserve2;
    _cmd.cmd_reserve3       = _cc->cmd_reserve3;


    sendPacket((void*)&_cmd, sizeof(_cmd));
}

