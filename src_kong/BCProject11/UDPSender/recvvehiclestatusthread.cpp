#include "recvvehiclestatusthread.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

RecvVehicleStatusThread::RecvVehicleStatusThread()
{
    is_stop=false;

    init();

}

RecvVehicleStatusThread::~RecvVehicleStatusThread()
{

    terminate();
    quit();
    wait();
}

void RecvVehicleStatusThread::init()
{
    m_subscriber_VehicleStatus = m_nodeHandle_vs.subscribe(VEHICLESTATUS, 10, &RecvVehicleStatusThread::VehicleStatus_callback, this);
    m_subscriber_ControlCommand = m_nodeHandle_cc.subscribe(CONTROLCOMMAND, 10, &RecvVehicleStatusThread::ControlCommand_callBack, this);
    m_subscriber_ping = m_nodeHandle_ping.subscribe("ping", 10, &RecvVehicleStatusThread::Ping_callBack, this);

}

void RecvVehicleStatusThread::run()
{
/*
    ros::Rate r(10);//ros::Rate 设置频率
    while(ros::ok())
    {
        //判断是否停止
        if(is_stop)
            break;

         r.sleep();
         ros::spinOnce();//触发回调函数
    }
    */

    //ros::MultiThreadedSpinner spinner(3); // Use 3 threads
     //spinner.spin(); // spin() will not return until the node has been shutdown

      ros::spin();

}

void RecvVehicleStatusThread::stop()
{
    is_stop=true;

}

void RecvVehicleStatusThread::VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &gp)
{
    emit VehicleStatus_readed(gp);
}

void RecvVehicleStatusThread::ControlCommand_callBack(const autonavigation::ControlCommand::ConstPtr &cc)
{
    emit ControlCommand_readed(cc);
}

void RecvVehicleStatusThread::Ping_callBack(const autonavigation::Ping::ConstPtr &ping)
{
    emit ping_readed(ping);
}

