#ifndef RECVLOGITECHTHREAD_H
#define RECVLOGITECHTHREAD_H


#include <QThread>
#include <QDebug>

#include <ros/ros.h>
#include "autonavigation/Logitech.h"

#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>


class RecvLogitechThread : public QThread
{
     Q_OBJECT
public:
    RecvLogitechThread();
    ~RecvLogitechThread();

    void Logitech_callback(const autonavigation::Logitech::ConstPtr &lg);
    int init();

    ros::Subscriber m_subscriber_logitech;
    ros::NodeHandle m_nodeHandle_lg;


protected:
    void run();

signals:
    void Logitech_readed(const autonavigation::Logitech::ConstPtr &lg);
};

#endif // RECVLOGITECHTHREAD_H
