#include "recvwaypointsthread.h"


#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

RecvWayPointsThread::RecvWayPointsThread()
{

    init();
}

RecvWayPointsThread::~RecvWayPointsThread()
{
    terminate();                            //须用terninate()函数终止，因为它含有回调函数
    quit();
    wait();
}

int RecvWayPointsThread::init()
{
    m_subscriber_waypoints=m_nodeHandle_waypoints.subscribe("RecvWayPoints",10,&RecvWayPointsThread::WayPoints_callback,this);

}

void RecvWayPointsThread::run()
{
    //     ros::spin();
    ros::MultiThreadedSpinner spinner(7); // Use 7 threads
    spinner.spin(); // spin() will not return until the node has been shutdown

}

void RecvWayPointsThread::WayPoints_callback(const autonavigation::RecvWayPoints::ConstPtr &waypoints)
{
    emit WayPoints_readed(waypoints);
}
