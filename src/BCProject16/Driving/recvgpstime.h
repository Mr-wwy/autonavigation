#ifndef RECVGPSTIME_H
#define RECVGPSTIME_H


#include <QThread>
#include <QDebug>

#include <ros/ros.h>
#include "autonavigation/GpsTime.h"

#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>


class RecvGpsTimeThread : public QThread
{
     Q_OBJECT
public:
    RecvGpsTimeThread();
    ~RecvGpsTimeThread();

    void GpsTime_callback(const autonavigation::GpsTime::ConstPtr &gps);
    int init();

    ros::Subscriber m_subscriber_gpstime;
    ros::NodeHandle m_nodeHandle_gpstime;


protected:
    void run();

signals:
    void GpsTime_readed(const autonavigation::GpsTime::ConstPtr &gps);
};


#endif // RECVGPSTIME_H
