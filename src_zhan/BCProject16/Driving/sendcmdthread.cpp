#include "sendcmdthread.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"
#include <QDebug>

SendCMDThread::SendCMDThread()
{

    initial();

    RCPtr=boost::make_shared<autonavigation::ControlCommand>();

}

SendCMDThread::~SendCMDThread()
{
    // 请求终止
    requestInterruption();
    quit();
    wait();

}

void SendCMDThread::initial()
{
    m_publisher=m_nodeHandle.advertise<autonavigation::ControlCommand>(CONTROLCOMMAND,10);

}

void SendCMDThread::run()
{
    ros::Rate r(10);
    // 是否请求终止
    while (ros::ok()&&(!isInterruptionRequested()))
    {
        m_lock.lock();

        m_publisher.publish(RCPtr);

        m_lock.unlock();

        r.sleep();
    }
}

void SendCMDThread::stop()
{

}

void SendCMDThread::restart()
{
    m_lock.unlock();
}

void SendCMDThread::pause()
{
    m_lock.tryLock();
    //m_lock.lock();    //如果互斥量是解锁的，那么当前线程就立即占用并锁定它。否则，当前线程就会被阻塞，知道掌握这个互斥量的线程对它解锁为止。

}

void SendCMDThread::SendCMD(autonavigation::ControlCommandPtr _RCPtr)
{
    RCPtr=_RCPtr;

    //m_publisher.publish(RCPtr);
}








































