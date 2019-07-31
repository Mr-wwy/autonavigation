#ifndef RECVJOY_H
#define RECVJOY_H

#include<QThread>
#include<ros/ros.h>
#include <sensor_msgs/Joy.h>

class RecvJoy : public QThread
{
    Q_OBJECT
public:
    RecvJoy();
    ~RecvJoy();

    ros::Subscriber m_subscriber_joy;
    ros::NodeHandle m_nodeHandle_joy;

    int init();
    void Joy_callback(const sensor_msgs::Joy::ConstPtr& msg);

protected:
    void run();

signals:
    void Joy_readed(const sensor_msgs::Joy::ConstPtr& msg);
};

#endif // RECVJOY_H
