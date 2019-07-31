#include "waypoints.h"

#include <poll.h>
#include <fcntl.h>

#define NUM RECV_WAYPOINTS_NUM*4*4+100

WayPoints::WayPoints()
{
    m_socket_fd = 0;

}

WayPoints::~WayPoints()
{
    if (m_socket_fd > 0)
    {
        close(m_socket_fd);

        //shutdown(m_socket_fd, SHUT_RDWR);
    }

}

int WayPoints::init()
{
    m_publisher = m_nodeHandle.advertise<autonavigation::RecvWayPoints>("RecvWayPoints", 10);

    m_pRecvWayPoints = boost::make_shared<autonavigation::RecvWayPoints>();

    return initUdp();

}

int WayPoints::process()
{
    unsigned char _packet[NUM];

    autonavigation::RecvWayPointsPtr   _waypoints(new autonavigation::RecvWayPoints);

    int _ret = 0;

    int _len = sizeof(Autonavigation_RecvWayPoints);
    std::cout<<"_len:"<<_len;

    struct Autonavigation_RecvWayPoints _waypoints_sts;

    //循环发送
    while (ros::ok() && autonavigation::ok())
    {
        _ret = getPacket(_packet, _len);

        if (_ret)
        {
            memcpy(&_waypoints_sts, _packet, _len);
            setRecvWayPoints(&_waypoints_sts, _waypoints);
            m_publisher.publish(_waypoints);
            ROS_INFO("publish RecvWayPoints!");
        }
    }
    return 1;
}

int WayPoints::initUdp()
{
    struct sockaddr_in localAddr;
    bzero(&localAddr, sizeof(struct sockaddr_in));
    localAddr.sin_family = AF_INET;
    localAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    localAddr.sin_port = htons(ACC_UDP_PORT_WAYPOINT);

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

int WayPoints::setnonblocking(int fd)
{
    int old_option = fcntl(fd, F_GETFL);
    int new_option = old_option | O_NONBLOCK;
    fcntl(fd, F_SETFL, new_option);

    return old_option;
}

int WayPoints::getPacket(unsigned char *pkg, const int len, const int timeout)
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

void WayPoints::setRecvWayPoints(Autonavigation_RecvWayPoints *_v_waypoints, autonavigation::RecvWayPointsPtr &_s_waypoints)
{
    _s_waypoints->waypointnumA=_v_waypoints->waypointnumA;

    _s_waypoints->Apx.resize(RECV_WAYPOINTS_NUM,0);
    _s_waypoints->Apx.assign(_v_waypoints->Apx,_v_waypoints->Apx+RECV_WAYPOINTS_NUM);

    _s_waypoints->Apy.resize(RECV_WAYPOINTS_NUM,0);
    _s_waypoints->Apy.assign(_v_waypoints->Apy,_v_waypoints->Apy+RECV_WAYPOINTS_NUM);

    _s_waypoints->waypointnumB=_v_waypoints->waypointnumB;

    _s_waypoints->Bpx.resize(RECV_WAYPOINTS_NUM,0);
    _s_waypoints->Bpx.assign(_v_waypoints->Bpx,_v_waypoints->Bpx+RECV_WAYPOINTS_NUM);

    _s_waypoints->Bpy.resize(RECV_WAYPOINTS_NUM,0);
    _s_waypoints->Bpy.assign(_v_waypoints->Bpy,_v_waypoints->Bpy+RECV_WAYPOINTS_NUM);

}











