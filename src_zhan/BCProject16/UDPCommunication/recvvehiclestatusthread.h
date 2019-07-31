#ifndef RECVVEHICLESTATUSTHREAD_H
#define RECVVEHICLESTATUSTHREAD_H


#include <QThread>
#include <QDebug>
#include <QLabel>

#include "CommonMsg.h"

#include <ros/ros.h>
#include "autonavigation/VehicleStatus.h"
#include "autonavigation/ControlCommand.h"
#include "autonavigation/GpsTime.h"

class RecvVehicleStatusThread : public QThread
{
     Q_OBJECT
public:
    RecvVehicleStatusThread();
    ~RecvVehicleStatusThread();

    void VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &gp);
    void ControlCommand_callBack(const autonavigation::ControlCommand::ConstPtr &cc);
    void GpsTime_callback(const autonavigation::GpsTime::ConstPtr &gps);

    void init();

    void stop();

    ros::Subscriber m_subscriber_VehicleStatus;

    ros::NodeHandle m_nodeHandle_vs;

    ros::Subscriber m_subscriber_ControlCommand;

    ros::NodeHandle m_nodeHandle_cc;

    ros::Subscriber m_subscriber_gps;

    ros::NodeHandle m_nodeHandle_gps;

protected:
    void run();

signals:
    void VehicleStatus_readed(const autonavigation::VehicleStatus::ConstPtr &gp);
    void ControlCommand_readed(const autonavigation::ControlCommand::ConstPtr &cc);
    void GpsTime_readed(const autonavigation::GpsTime::ConstPtr &gps);

public:
    bool is_stop;
};


#endif // RECVVEHICLESTATUSTHREAD_H
