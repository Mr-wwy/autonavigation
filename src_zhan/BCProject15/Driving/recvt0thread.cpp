#include "recvt0thread.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

RecvT0Thread::RecvT0Thread()
{

    init();
}

RecvT0Thread::~RecvT0Thread()
{
    terminate();                            //须用terninate()函数终止，因为它含有回调函数
    quit();
    wait();
}

int RecvT0Thread::init()
{
    m_subscriber_sett0=m_nodeHandle_sett0.subscribe(SETT0,10,&RecvT0Thread::SetT0_callback,this);

}

void RecvT0Thread::run()
{
    //     ros::spin();
    ros::MultiThreadedSpinner spinner(7); // Use 7 threads
    spinner.spin(); // spin() will not return until the node has been shutdown

}

void RecvT0Thread::SetT0_callback(const autonavigation::SetT0::ConstPtr &sett0)
{
    emit sett0_readed(sett0);

}
