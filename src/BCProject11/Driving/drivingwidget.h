#ifndef DRIVINGWIDGET_H
#define DRIVINGWIDGET_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QKeyEvent>
#include <QDesktopWidget>
#include <QTimer>
#include <QCloseEvent>

#include "math.h"
#include "CommonDefinition.h"

#include "sensordatathread.h"
#include "recvimagethread.h"
#include "recvlogitechthread.h"
#include "recvpingthread.h"
#include "recvwaypointsthread.h"
#include "sendcmdthread.h"

class Speed;
class Tachometer;
class LeftFunction;
class RightFunction;
class OilTable;
class Fps;
class WaterTemperature;
class Map_Localization;
class Wheel;
class MyIndicator;
class TaskMode;
class Gpsmillisecond;
class SetSpeed;
class LeftDisplay;
class OperateHelp;

namespace Ui {
class DrivingWidget;
}

class DrivingWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit DrivingWidget(QWidget *parent = 0);
    ~DrivingWidget();

    void timerEvent(QTimerEvent* event);

protected:
    void keyPressEvent(QKeyEvent *event);

    void keyReleaseEvent(QKeyEvent *event);

    void closeEvent(QCloseEvent *event);

private slots:
    void VehicleStatus_data(const autonavigation::VehicleStatus::ConstPtr &gp);
    void VideoImage_data(QImage image);
    void Logitech_data(const autonavigation::Logitech::ConstPtr &lg);
    void Ping_data(const autonavigation::Ping::ConstPtr &ping);
    void WayPoints_data(const autonavigation::RecvWayPoints::ConstPtr &waypoints);

    void gpsmillisecond_slot(QString gm);

    void setspeed_surebtn_clicked_slot(int _speed);

    void action_tip_slot(bool);

    void operatehelp_destoryed(QObject*);

//    void resized_slot(int screen);
public:
    void initialWidget();

    void sendControlCommand();

    int checkoutmd5(QString _md5);

    void change_taskmode(int mode);

    void show_status();

    void control_status(UINT8 control);

    void logitech_status(int status);

    void readSettings();

    void writeSettings();

    Mat QImage2cvMat(QImage image);

    QImage cvMat2QImage(const cv::Mat& mat);

    void drawTrackline(cv::Mat& mat,const autonavigation::RecvWayPoints::ConstPtr &waypoints);

private:
    Ui::DrivingWidget *ui;

    int m_udpSockfd;
    SensordataThread m_sensorDataThread;                 //接受数据线程，包括VehicleStatus、QImage、Logitech和Ping
    RecvImageThread m_recvimagethread;
    RecvLogitechThread m_recvlogitechthread;
    RecvPingThread m_recvpingthread;
    RecvWayPointsThread m_recvwaypointsthread;
    SendCMDThread m_sendcmdthread;                       //发送数据线程，只有ControlCommand


    QDesktopWidget *desktopWidget;

    Speed *SPeed;
    Tachometer *TAchometer;
    LeftFunction *LEftfunction;
    //OilTable *OIltable;
    Fps *FPs;
    RightFunction *RIghtfunction;
    //WaterTemperature *WAtertemperature;
    TaskMode *m_taskmode;
    Map_Localization *m_map;
    Wheel *m_wheel_s;
    MyIndicator *m_indicatorBrake_s;
    MyIndicator *m_indicatorBrake_r;
    MyIndicator *m_indicatorThrottle_s;
    MyIndicator *m_indicatorThrottle_r;
    Gpsmillisecond *m_gpsmillisecond;
    SetSpeed *m_setspeed;
    LeftDisplay *m_leftdisplay;
    OperateHelp *m_operatehelp;

    QLabel *m_labelThrottle;
    QLabel *m_labelBrake;

//    QLabel *m_label_millisecond;
//    QLabel *m_LA_millisecond;

    QLabel *m_label_net1;
    QLabel *m_label_net2;
    QLabel *m_label_file1;
    QLabel *m_label_file2;
    QLabel *m_label_message;
    QLabel *m_label_ignition1;
    QLabel *m_label_ignition2;
    QLabel *m_label_wheel1;
    QLabel *m_label_wheel2;
    QLabel *m_label_brake1;
    QLabel *m_label_brake2;
    QLabel *m_label_throttle1;
    QLabel *m_label_throttle2;
    QLabel *m_label_shift1;
    QLabel *m_label_shift2;
    QLabel *m_label_handbrake1;
    QLabel *m_label_handbrake2;

    QLabel *m_label_logitech1;
    QLabel *m_label_logitech2;

    int   g_nActScreenX;
    int   g_nActScreenY;

    QString filepath;

    bool logitech_isconnect;
    bool is_showline;
    bool has_help;
    int m_mode;

    //相机内参
    double R[9];
    double T[3];

    //double K[5];
    double Fx, Fy , Cx, Cy;

    //MSG数据
    autonavigation::ControlCommandPtr RCPtr;
    autonavigation::RecvWayPointsConstPtr m_recvWPCPtr;

/***********************Ping参数**************************/
    INT16 m_rtt;                                   //网络延迟-单位ms

/***********************VehicleStatus参数**************************/
    UINT8        m_sts_mode;              //0-默认状态, 1-md5文件校验结果,2-
    QString      m_md5_str;               //md5文件校验值
    UINT8        m_controllable1;         //Bit8：方向盘 Bit7：油门 Bit6：刹车 Bit5：档位 Bit4：手刹 Bit3：点火 Bit2：熄火 Bit1：预留 相应位为1表示受方舱控制
    UINT8        m_enable;                //能否自主
    UINT8        m_controlstatus;         //控制状态  0:人工模式 1：遥控模式  2：自主模式

/***********************ControlCommand参数**************************/
    UINT32  m_unique_key;          //自主行驶载车唯一标识，用于区分载车的id
    UINT32  m_gps_week;             //GPS周
    UINT64  m_gps_millisecond;     //取GPS周的毫秒级时间
    UINT64  m_cmd_millisecond;     //指控方舱的系统时间，用于判断数据是否更新
    INT16   m_steer;                    //单位0.01度，前轮转角，左转为正，右转为负
    UINT16  m_velocity;                //期望速度cm/s
    INT8     m_curvature;            //单位0.005，期望曲率
    UINT8    m_force_start;           //1：强制开始发车
    UINT8    m_task_mode;           //任务模式0:人工模式 1：遥控模式  2：自主模式  3: T0  4: 自主文件校验
    UINT8    m_hand_brake;         //0：松开手刹, 1：拉紧手刹
    UINT8    m_throttle;                //油门量命令，百分比
    UINT8    m_brake;                   //刹车量命令，百分比
    UINT8    m_shift;                     //换档命令0:P,1:R,2:N,3:D,4:S,5:L
    UINT8    m_ignition;               //0：熄火1：点火
    UINT8    m_light;                    //灯光
    UINT8    m_reset;                    //复位
    UINT8    m_reserve2;                 //record  0:不记录   1：开始记录
    UINT8    m_reserve3;                 //预留


};


#endif // DRIVINGWIDGET_H
