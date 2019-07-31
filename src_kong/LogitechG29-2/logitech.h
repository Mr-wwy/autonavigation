#ifndef LOGITECH_H
#define LOGITECH_H

#include <unistd.h>
#include <iostream>
#include <fstream>
#include <linux/input.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <poll.h>
#include <sys/time.h>
#include <time.h>

#include <ros/ros.h>

#include <autonavigation/VehicleStatus.h>
#include "autonavigation/Logitech.h"

#define nBitsPerUchar          (sizeof(unsigned char) * 8)
#define nUcharsForNBits(nBits) ((((nBits)-1)/nBitsPerUchar)+1)
#define bitOffsetInUchar(bit)  ((bit)%nBitsPerUchar)
#define ucharIndexForBit(bit)  ((bit)/nBitsPerUchar)
#define ucharValueForBit(bit)  (((unsigned char)(1))<<bitOffsetInUchar(bit))
#define testBit(bit, array)    ((array[ucharIndexForBit(bit)] >> bitOffsetInUchar(bit)) & 1)
#define DEFAULT_AXIS_CODE       ABS_X
const int axis_code = DEFAULT_AXIS_CODE;
const int bxis_code = ABS_Y;
const int cxis_code = ABS_Z;
const int dxis_code = ABS_RZ;
const int autocenter_off = 0;
//Logitech G29 Driving Force Racing Wheel
#define DEVICE_KEY1 "G29"
#define DEVICE_KEY2 "Racing"
#define DEVICE_KEY3 "Wheel"
#define EVENT_KEY   "Handlers"
#define EVENT_LEN    20
#define INPUT_PATH "/dev/input/"
#define DEVICE_PATH "/proc/bus/input/devices"
#define VEHICLESTATUS "VehicleStatus"
#define LOGITECH "Logitech"

class logitech
{
public:
    logitech();
    bool init();
    int findDevice();
    int initDevice();
    int process();
    void turn_deg(double value, double position, double* force);
    int set_force_feedback_effect(double force, double* position);
    int get_event_imitate_data(double *position);
    int processEvent(struct input_event* event,double *position);
    ros::NodeHandle m_nodeHandle;

    ros::Subscriber m_subscriber_VehicleStatus;//订阅者

    ros::Publisher m_publisher_Logitech;//发布者
    void VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &_vs);

    char    m_evnetName[EVENT_LEN];
    autonavigation::LogitechPtr  m_pLogitech;
    int m_deviceHandle;
    int axis_min;
    int axis_max;
    struct ff_effect effect;
    double m_vehicleStatus_steer=0.0;

    int temp_StickShift=0;//P
    int temp_wheel=0;
    int temp_break=0;
    int temp_Clutch=0;
    int temp_SasPedal=0;

    bool isfirst;

    timeval temp_time;
    timeval current_time;
};

#endif // LOGITECH_H
