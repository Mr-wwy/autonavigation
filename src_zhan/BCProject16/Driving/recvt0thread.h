#ifndef RECVT0THREAD_H
#define RECVT0THREAD_H



#include <QThread>
#include <QDebug>

#include <ros/ros.h>
#include <autonavigation/SetT0.h>

#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>

class RecvT0Thread : public QThread
{
     Q_OBJECT
public:
    RecvT0Thread();
    ~RecvT0Thread();

    void SetT0_callback(const autonavigation::SetT0::ConstPtr &sett0);

    int init();

    ros::Subscriber m_subscriber_sett0;
    ros::NodeHandle m_nodeHandle_sett0;

protected:
    void run();

signals:
    void sett0_readed(const autonavigation::SetT0::ConstPtr &sett0);
};


#endif // RECVT0THREAD_H
