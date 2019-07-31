#include "recvjoy.h"

RecvJoy::RecvJoy()
{
    init();
}

RecvJoy::~RecvJoy()
{
    terminate();                            //须用terninate()函数终止，因为它含有回调函数
    quit();
    wait();
}

int RecvJoy::init()
{
    m_subscriber_joy = m_nodeHandle_joy.subscribe("joy", 10, &RecvJoy::Joy_callback, this);

}

void RecvJoy::run()
{
//    ros::spin();
    ros::MultiThreadedSpinner spinner(1); // Use 7 threads
    spinner.spin(); // spin() will not return until the node has been shutdown

}

void RecvJoy::Joy_callback(const sensor_msgs::Joy::ConstPtr& msg)
{
     emit Joy_readed(msg);
}
