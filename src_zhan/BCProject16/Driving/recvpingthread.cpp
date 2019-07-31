#include "recvpingthread.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

RecvPingThread::RecvPingThread()
{

    init();
}

RecvPingThread::~RecvPingThread()
{
    terminate();                            //须用terninate()函数终止，因为它含有回调函数
    quit();
    wait();
}

int RecvPingThread::init()
{
    m_subscriber_ping=m_nodeHandle_ping.subscribe("ping",10,&RecvPingThread::Ping_callback,this);

}

void RecvPingThread::run()
{
    //     ros::spin();
    ros::MultiThreadedSpinner spinner(7); // Use 7 threads
    spinner.spin(); // spin() will not return until the node has been shutdown

}

void RecvPingThread::Ping_callback(const autonavigation::Ping::ConstPtr &ping)
{
    emit Ping_readed(ping);

}
