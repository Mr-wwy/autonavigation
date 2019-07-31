#include "VehicleStatusInput.h"

#include <poll.h>
#include <fcntl.h>

VehicleStatusInput::VehicleStatusInput()
{
    m_socket_fd = 0;
}
    

VehicleStatusInput::~VehicleStatusInput()
{
    if (m_socket_fd > 0)
    {
        close(m_socket_fd);

        //shutdown(m_socket_fd, SHUT_RDWR);
    }
}

int VehicleStatusInput::init()
{

    m_publisher = m_nodeHandle.advertise<autonavigation::VehicleStatus>(VEHICLESTATUS, 10);

    m_pVehicleStatus = boost::make_shared<autonavigation::VehicleStatus>();
    
    return initUdp();
}

int VehicleStatusInput::process()
{
    unsigned char _packet[200];

    autonavigation::VehicleStatusPtr   _velicleStatus(new autonavigation::VehicleStatus);

    int _ret = 0;

    int _len = sizeof(Autonavigation_Vehicle_Status);
    //std::cout<<"_len:"<<_len;

    struct Autonavigation_Vehicle_Status _vehicle_sts;

    //循环发送
    while (ros::ok() && autonavigation::ok())
    {
        _ret = getPacket(_packet, _len);

        if (_ret)
        {
            memcpy(&_vehicle_sts, _packet, _len);
            setVehicleStatus(&_vehicle_sts, _velicleStatus);
            m_publisher.publish(_velicleStatus);
            ROS_INFO("publish VehicleStatus!");
        }
    }
    return 1;
}


int VehicleStatusInput::initUdp()
{
    struct sockaddr_in localAddr;
    bzero(&localAddr, sizeof(struct sockaddr_in));
    localAddr.sin_family = AF_INET;
    localAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    localAddr.sin_port = htons(AVS_UDP_PORT);

    m_socket_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if (m_socket_fd == -1)
    {
        return 0;
    }

    const int opt = 1;

    if (setsockopt(m_socket_fd, SOL_SOCKET, SO_BROADCAST, (char*)&opt, sizeof(opt)) == -1)
    {
        close(m_socket_fd);
        return 0;
    }

    if (bind(m_socket_fd, (struct sockaddr*)&localAddr, sizeof(struct sockaddr)) == -1)
    {
        close(m_socket_fd);
        return 0;
    }

    //if (fcntl(m_socket_fd, F_SETFL, O_NONBLOCK|FASYNC) < 0)
    //{
    //    return 0;
    //}

    setnonblocking(m_socket_fd);
    return 1;
}


int VehicleStatusInput::setnonblocking(int fd)
{
    int old_option = fcntl(fd, F_GETFL);
    int new_option = old_option | O_NONBLOCK;
    fcntl(fd, F_SETFL, new_option);

    return old_option;
}

int VehicleStatusInput::getPacket(unsigned char* pkg, const int len, const int timeout)
{
    struct pollfd fds[1];
    fds[0].fd = m_socket_fd;
    fds[0].events = POLLIN;
    const int POLL_TIMEOUT = timeout;    //100 ms

    sockaddr_in sender_address;
    socklen_t sender_address_len = sizeof(sender_address);

    while (1)
    {
        //poll() until input available
        do
        {
            int retval = poll(fds, 1, POLL_TIMEOUT);
            if (retval < 0) 
            {
                if (errno != EINTR)
                {
                    ROS_ERROR("poll() error: %s", strerror(errno));
                }
                return 0;
            }

            if (retval == 0)
            {
                ROS_INFO("poll() timeout");
                return 0;
            }

            if ((fds[0].revents & POLLERR) || (fds[0].revents & POLLHUP) || (fds[0].revents & POLLNVAL))
            {
                ROS_ERROR("poll() reports error");
                return 0;
            }
            
        }while ((fds[0].revents & POLLIN) == 0);

        // Receive packets that should now be available from the 
        // socket using a blocking read.
        int nbytes = recvfrom(m_socket_fd, 
                                  pkg,
                                  len,  
                                  0,
                                  (sockaddr*) &sender_address,
                                  &sender_address_len);

        if (nbytes < 0)
        {
            if (errno != EWOULDBLOCK)
            {
                ROS_INFO("recv fail!");
                return 0;
            }
        }
        else if (nbytes == len)
        {
            // read successful,
            break;
        }

        ROS_INFO("incomplete packet read: %d", nbytes);
        
    }

    return 1;
}


void VehicleStatusInput::setVehicleStatus(Autonavigation_Vehicle_Status* _v, autonavigation::VehicleStatusPtr& _s)
{
    _s->unique_key          = _v->unique_key;
    _s->gps_week            = _v->gps_week;
    _s->gps_millisecond     = _v->gps_millisecond;
    _s->longitude           = _v->longitude;
    _s->latitude            = _v->latitude;
    _s->gaussX              = _v->gaussX;
    _s->gaussY              = _v->gaussY;
    _s->height              = _v->height;
    _s->azimuth             = _v->azimuth;
    _s->pitch               = _v->pitch;
    _s->roll                = _v->roll;
    _s->northVelocity       = _v->northVelocity;
    _s->eastVelocity        = _v->eastVelocity;
    _s->upVelocity          = _v->upVelocity;
    _s->travel_distance     = _v->travel_distance;
    _s->remain_time         = _v->remain_time;
    _s->time_delay          = _v->time_delay;
    _s->steer               = _v->steer;
    _s->fuel                = _v->fuel;
    _s->shift               = _v->shift;
    _s->voltage             = _v->voltage;
    _s->throttle            = _v->throttle;
    _s->brake               = _v->brake;
    _s->engine_speed        = _v->engine_speed;
    _s->vehicle_speed       = _v->vehicle_speed;
    _s->water_temperature   = _v->water_temperature;
    _s->control_status      = _v->control_status;
    _s->error_status        = _v->error_status;
    _s->barometer1          = _v->barometer1;
    _s->barometer2          = _v->barometer2;
    _s->handbrake           = _v->handbrake;
    _s->engine_status       = _v->engine_status;

    _s->sts_mode            = _v->sts_mode;
    _s->controllable1       = _v->controllable1;
    _s->enable              = _v->enable;
    _s->reserve3            = _v->reserve3;
    _s->reserve4            = _v->reserve4;
    _s->reserve5            = _v->reserve5;
    _s->reserve6            = _v->reserve6;
    _s->reserve7            = _v->reserve7;

    _s->md5_str.resize(MD5_STRING_LEN);
    _s->md5_str.assign(_v->md5_str, _v->md5_str + MD5_STRING_LEN);
    if (_v->sts_mode != 0)
    {
        for (int i = 0; i < MD5_STRING_LEN; i++)
        {
            printf("%02x", (unsigned char)_v->md5_str[i]);
        }
        printf("\n");
        for (int i = 0; i < MD5_STRING_LEN; i++)
        {
            printf("%02x", (unsigned char)_s->md5_str[i]);
        }
        printf("\n");
    }
      
}

