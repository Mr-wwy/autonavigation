#include "sendvehiclestatus.h"


SendVehicleStatusOutput::SendVehicleStatusOutput()
{
}

SendVehicleStatusOutput::~SendVehicleStatusOutput()
{
    ::close(m_socket_fd);
}

int SendVehicleStatusOutput::init()
{
    m_subscriber_VehicleStatus = m_nodeHandle.subscribe(VEHICLESTATUS, 10, &SendVehicleStatusOutput::VehicleStatus_callback, this);
    return initUdp();
}

int SendVehicleStatusOutput::process()
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

void SendVehicleStatusOutput::setTargetIP(const char *_ip)
{
    strcpy(m_sendtotarget.deviceIP, _ip);

}

void SendVehicleStatusOutput::setTargetPort(int _port)
{
    m_sendtotarget.devicePort=_port;

}

int SendVehicleStatusOutput::initUdp()
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

void SendVehicleStatusOutput::sendPacket(void* pkg, int size)
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


void SendVehicleStatusOutput::VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &_vsc)
{
    Autonavigation_Vehicle_Status _vs;
    _vs.unique_key            =_vsc->unique_key;
    _vs.gps_week              =_vsc->gps_week;
    _vs.gps_millisecond       =_vsc->gps_millisecond;
    _vs.longitude             =_vsc->longitude;
    _vs.latitude              =_vsc->latitude;
    _vs.gaussX                =_vsc->gaussX;
    _vs.gaussY                =_vsc->gaussY;
    _vs.height                =_vsc->height;
    _vs.azimuth               =_vsc->azimuth;
    _vs.pitch                 =_vsc->pitch;
    _vs.roll                  =_vsc->roll;
    _vs.northVelocity         =_vsc->northVelocity;
    _vs.eastVelocity          =_vsc->eastVelocity;
    _vs.upVelocity            =_vsc->upVelocity;
    _vs.travel_distance       =_vsc->travel_distance;
    _vs.remain_time           =_vsc->remain_time;
    _vs.time_delay            =_vsc->time_delay;
    _vs.steer                 =_vsc->steer;
    _vs.fuel                  =_vsc->fuel;
    _vs.shift                 =_vsc->shift;
    _vs.voltage               =_vsc->voltage;
    _vs.throttle              =_vsc->throttle;
    _vs.brake                 =_vsc->brake;
    _vs.engine_speed          =_vsc->engine_speed;
    _vs.vehicle_speed         =_vsc->vehicle_speed;
    _vs.water_temperature     =_vsc->water_temperature;
    _vs.control_status        =_vsc->control_status;
    _vs.error_status          =_vsc->error_status;
    _vs.barometer1            =_vsc->barometer1;
    _vs.barometer2            =_vsc->barometer2;
    _vs.handbrake             =_vsc->handbrake;
    _vs.engine_status         =_vsc->engine_status;
    _vs.sts_mode              =_vsc->sts_mode;
    _vs.controllable1         =_vsc->controllable1;
    _vs.enable                =_vsc->enable;
    _vs.reserve3              =_vsc->reserve3;
    _vs.reserve4              =_vsc->reserve4;
    _vs.reserve5              =_vsc->reserve5;
    _vs.reserve6              =_vsc->reserve6;
    _vs.reserve7              =_vsc->reserve7;

    for(int i=0;i<MAXNAMLEN;i++)
    {
        _vs.md5_str[i]=_vsc->md5_str[i];
    }

    sendPacket((void*)&_vs, sizeof(_vs));
}
