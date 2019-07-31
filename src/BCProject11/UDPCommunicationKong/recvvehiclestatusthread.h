#ifndef RECVVEHICLESTATUSTHREAD_H
#define RECVVEHICLESTATUSTHREAD_H


#include <QThread>
#include <QDebug>
#include <QLabel>

#include <ros/ros.h>
#include "autonavigation/VehicleStatus.h"
#include "autonavigation/ControlCommand.h"
#include "autonavigation/Ping.h"

class RecvVehicleStatusThread : public QThread
{
     Q_OBJECT
public:
    RecvVehicleStatusThread();
    ~RecvVehicleStatusThread();

    void VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &gp);
    void ControlCommand_callBack(const autonavigation::ControlCommand::ConstPtr &cc);


    void init();

    void stop();

    ros::Subscriber m_subscriber_VehicleStatus;

    ros::NodeHandle m_nodeHandle_vs;

    ros::Subscriber m_subscriber_ControlCommand;

    ros::NodeHandle m_nodeHandle_cc;


protected:
    void run();

signals:
    void VehicleStatus_readed(const autonavigation::VehicleStatus::ConstPtr &gp);
    void ControlCommand_readed(const autonavigation::ControlCommand::ConstPtr &cc);

public:

    bool is_stop;
};


#endif // RECVVEHICLESTATUSTHREAD_H
