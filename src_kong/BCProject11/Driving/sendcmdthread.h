#ifndef DRIVING_SENDCMDTHREAD_H_
#define DRIVING_SENDCMDTHREAD_H_

#include <QThread>
#include <QMutex>
#include <ros/ros.h>
#include "autonavigation/VehicleStatus.h"
#include "autonavigation/ControlCommand.h"


class SendCMDThread : public QThread
{
    Q_OBJECT

public:
    SendCMDThread();
    ~SendCMDThread();

protected:
    void run();

public:
    void initial();
    void stop();

    void pause();
    void restart();

    void SendCMD(autonavigation::ControlCommandPtr _RCPtr);


private:
    QMutex m_lock;

    ros::NodeHandle m_nodeHandle;
    ros::Publisher m_publisher;

    autonavigation::ControlCommandPtr RCPtr;

};

#endif //DRIVING_SENDCMDTHREAD_H_

/*
uint32    unique_key;                 //自主行驶载车唯一标识，用于区分载车的id
uint32    gps_week;                    //GPS周
uint64    gps_millisecond;         //取GPS周的毫秒级时间
uint64    cmd_millisecond;        //指控方舱的系统时间，用于判断数据是否更新
int16      cmd_steer;                    //单位0.01度，前轮转角，左转为正
uint16    cmd_velocity;              //期望速度cm/s
int8        cmd_curvature;             //单位0.005，期望曲率
uint8      cmd_force_start;          //1：强制开始发车
uint8      cmd_task_mode;          //任务模式1：遥控模式2：自主模式
uint8      cmd_hand_brake;        //0：松开手刹, 1：拉紧手刹
uint8      cmd_throttle;               //油门量命令，百分比
uint8      cmd_brake;                  //刹车量命令，百分比
uint8      cmd_shift;                    //换档命令
uint8      cmd_ignition;              //0：熄火1：点火
uint8      cmd_light;                   //灯光
*/



































