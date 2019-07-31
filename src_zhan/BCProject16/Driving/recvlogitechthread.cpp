#include "recvlogitechthread.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

RecvLogitechThread::RecvLogitechThread()
{
    init();

}

RecvLogitechThread::~RecvLogitechThread()
{
    terminate();                            //须用terninate()函数终止，因为它含有回调函数
    quit();
    wait();
}

int RecvLogitechThread::init()
{
    m_subscriber_logitech = m_nodeHandle_lg.subscribe(LOGITECH, 10, &RecvLogitechThread::Logitech_callback, this);

}

void RecvLogitechThread::run()
{
    //     ros::spin();
    ros::MultiThreadedSpinner spinner(7); // Use 7 threads
    spinner.spin(); // spin() will not return until the node has been shutdown

}

void RecvLogitechThread::Logitech_callback(const autonavigation::Logitech::ConstPtr &lg)
{
    // ROS_INFO("Logitech_callback start");
     emit Logitech_readed(lg);
}
