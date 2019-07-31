#include "recvgpstime.h"


#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

RecvGpsTimeThread::RecvGpsTimeThread()
{
    init();

}

RecvGpsTimeThread::~RecvGpsTimeThread()
{
    terminate();                            //须用terninate()函数终止，因为它含有回调函数
    quit();
    wait();
}

int RecvGpsTimeThread::init()
{
    m_subscriber_gpstime = m_nodeHandle_gpstime.subscribe(GPSTIME, 10, &RecvGpsTimeThread::GpsTime_callback, this);

}

void RecvGpsTimeThread::run()
{
    //     ros::spin();
    ros::MultiThreadedSpinner spinner(7); // Use 7 threads
    spinner.spin(); // spin() will not return until the node has been shutdown

}

void RecvGpsTimeThread::GpsTime_callback(const autonavigation::GpsTime::ConstPtr &gps)
{
    // ROS_INFO("GpsTime_callback start");
    emit GpsTime_readed(gps);
}
