#ifndef RECVWAYPOINTSTHREAD_H
#define RECVWAYPOINTSTHREAD_H

#include <QThread>
#include <QDebug>

#include <ros/ros.h>
#include <autonavigation/RecvWayPoints.h>

#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>

class RecvWayPointsThread : public QThread
{
     Q_OBJECT
public:
    RecvWayPointsThread();
    ~RecvWayPointsThread();

    void WayPoints_callback(const autonavigation::RecvWayPoints::ConstPtr &waypoints);

    int init();

    ros::Subscriber m_subscriber_waypoints;
    ros::NodeHandle m_nodeHandle_waypoints;

protected:
    void run();

signals:
    void WayPoints_readed(const autonavigation::RecvWayPoints::ConstPtr &waypoints);
};


#endif // RECVWAYPOINTSTHREAD_H
