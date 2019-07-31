#ifndef RECVPINGTHREAD_H
#define RECVPINGTHREAD_H


#include <QThread>
#include <QDebug>

#include <ros/ros.h>
#include <autonavigation/Ping.h>

#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>

class RecvPingThread : public QThread
{
     Q_OBJECT
public:
    RecvPingThread();
    ~RecvPingThread();

    void Ping_callback(const autonavigation::Ping::ConstPtr &ping);

    int init();

    ros::Subscriber m_subscriber_ping;
    ros::NodeHandle m_nodeHandle_ping;

protected:
    void run();

signals:
    void Ping_readed(const autonavigation::Ping::ConstPtr &ping);
};


#endif // RECVPINGTHREAD_H
