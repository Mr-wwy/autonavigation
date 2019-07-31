/* Auto-generated by genmsg_cpp for file /home/base/ros_autonavigation_ws/src/autonavigation/msg/LocalPose.msg */
#ifndef AUTONAVIGATION_MESSAGE_LOCALPOSE_H
#define AUTONAVIGATION_MESSAGE_LOCALPOSE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace autonavigation
{
template <class ContainerAllocator>
struct LocalPose_ {
  typedef LocalPose_<ContainerAllocator> Type;

  LocalPose_()
  : time(0.0)
  , dr_x(0)
  , dr_y(0)
  , dr_z(0)
  , dr_heading(0)
  , dr_roll(0)
  , dr_pitch(0)
  , lf_speed(0)
  , rf_speed(0)
  , lr_speed(0)
  , rr_speed(0)
  , rot_x(0)
  , rot_y(0)
  , rot_z(0)
  , acc_x(0)
  , acc_y(0)
  , acc_z(0)
  , batteryState(0)
  , batteryEnergy(0)
  , steer(0)
  , brake(0)
  , fuel(0)
  , trans(0)
  , VehicleState(0)
  , mode(0)
  , drStatus(0)
  , errorStatus(0)
  , emergency_flag(0)
  , hardswitch_on(0)
  {
  }

  LocalPose_(const ContainerAllocator& _alloc)
  : time(0.0)
  , dr_x(0)
  , dr_y(0)
  , dr_z(0)
  , dr_heading(0)
  , dr_roll(0)
  , dr_pitch(0)
  , lf_speed(0)
  , rf_speed(0)
  , lr_speed(0)
  , rr_speed(0)
  , rot_x(0)
  , rot_y(0)
  , rot_z(0)
  , acc_x(0)
  , acc_y(0)
  , acc_z(0)
  , batteryState(0)
  , batteryEnergy(0)
  , steer(0)
  , brake(0)
  , fuel(0)
  , trans(0)
  , VehicleState(0)
  , mode(0)
  , drStatus(0)
  , errorStatus(0)
  , emergency_flag(0)
  , hardswitch_on(0)
  {
  }

  typedef double _time_type;
  double time;

  typedef int32_t _dr_x_type;
  int32_t dr_x;

  typedef int32_t _dr_y_type;
  int32_t dr_y;

  typedef int32_t _dr_z_type;
  int32_t dr_z;

  typedef int32_t _dr_heading_type;
  int32_t dr_heading;

  typedef int32_t _dr_roll_type;
  int32_t dr_roll;

  typedef int32_t _dr_pitch_type;
  int32_t dr_pitch;

  typedef int32_t _lf_speed_type;
  int32_t lf_speed;

  typedef int32_t _rf_speed_type;
  int32_t rf_speed;

  typedef int32_t _lr_speed_type;
  int32_t lr_speed;

  typedef int32_t _rr_speed_type;
  int32_t rr_speed;

  typedef int32_t _rot_x_type;
  int32_t rot_x;

  typedef int32_t _rot_y_type;
  int32_t rot_y;

  typedef int32_t _rot_z_type;
  int32_t rot_z;

  typedef int32_t _acc_x_type;
  int32_t acc_x;

  typedef int32_t _acc_y_type;
  int32_t acc_y;

  typedef int32_t _acc_z_type;
  int32_t acc_z;

  typedef int32_t _batteryState_type;
  int32_t batteryState;

  typedef int32_t _batteryEnergy_type;
  int32_t batteryEnergy;

  typedef int32_t _steer_type;
  int32_t steer;

  typedef int32_t _brake_type;
  int32_t brake;

  typedef int32_t _fuel_type;
  int32_t fuel;

  typedef int8_t _trans_type;
  int8_t trans;

  typedef int8_t _VehicleState_type;
  int8_t VehicleState;

  typedef int8_t _mode_type;
  int8_t mode;

  typedef int8_t _drStatus_type;
  int8_t drStatus;

  typedef int8_t _errorStatus_type;
  int8_t errorStatus;

  typedef int8_t _emergency_flag_type;
  int8_t emergency_flag;

  typedef int8_t _hardswitch_on_type;
  int8_t hardswitch_on;


  typedef boost::shared_ptr< ::autonavigation::LocalPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::LocalPose_<ContainerAllocator>  const> ConstPtr;
}; // struct LocalPose
typedef  ::autonavigation::LocalPose_<std::allocator<void> > LocalPose;

typedef boost::shared_ptr< ::autonavigation::LocalPose> LocalPosePtr;
typedef boost::shared_ptr< ::autonavigation::LocalPose const> LocalPoseConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::LocalPose_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::LocalPose_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::LocalPose_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::LocalPose_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::LocalPose_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c9d9e5e43ed9aff0048c010992c53a52";
  }

  static const char* value(const  ::autonavigation::LocalPose_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc9d9e5e43ed9aff0ULL;
  static const uint64_t static_value2 = 0x048c010992c53a52ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::LocalPose_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/LocalPose";
  }

  static const char* value(const  ::autonavigation::LocalPose_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::LocalPose_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#LocalPose msg\n\
\n\
float64 time			  \n\
#centimeter  \n\
int32 dr_x\n\
int32 dr_y\n\
int32 dr_z\n\
#0.01degree\n\
int32 dr_heading\n\
int32 dr_roll\n\
int32 dr_pitch		    \n\
\n\
#left_front wheel speed,cm/s\n\
int32 lf_speed\n\
#right_front wheel speed,cm/s		    \n\
int32 rf_speed\n\
#left_rear wheel speed,cm/s		    \n\
int32 lr_speed\n\
#right_rear wheel speed,cm/s		    \n\
int32 rr_speed		    \n\
\n\
#imu三轴陀螺速度 0.01degree/s\n\
int32 rot_x\n\
int32 rot_y                      \n\
int32 rot_z                      \n\
#imu三轴加速度  0.01m/s^2\n\
int32 acc_x                      \n\
int32 acc_y                      \n\
int32 acc_z                      \n\
\n\
int32 batteryState\n\
int32 batteryEnergy           #0-100\n\
\n\
#-3000(right)~3000(left) degree  0.01degree/s\n\
int32 steer   \n\
#0(zero)~100(full)                  \n\
int32 brake                 \n\
#0(zero)~100(full)     \n\
int32 fuel      \n\
#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 \n\
int8  trans                      \n\
int8  VehicleState\n\
#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2\n\
int8  mode                       \n\
#dr运行状态\n\
int8 drStatus\n\
#错误状态		    \n\
int8 errorStatus		    \n\
int8 emergency_flag\n\
int8 hardswitch_on\n\
\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::LocalPose_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::LocalPose_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::LocalPose_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.time);
    stream.next(m.dr_x);
    stream.next(m.dr_y);
    stream.next(m.dr_z);
    stream.next(m.dr_heading);
    stream.next(m.dr_roll);
    stream.next(m.dr_pitch);
    stream.next(m.lf_speed);
    stream.next(m.rf_speed);
    stream.next(m.lr_speed);
    stream.next(m.rr_speed);
    stream.next(m.rot_x);
    stream.next(m.rot_y);
    stream.next(m.rot_z);
    stream.next(m.acc_x);
    stream.next(m.acc_y);
    stream.next(m.acc_z);
    stream.next(m.batteryState);
    stream.next(m.batteryEnergy);
    stream.next(m.steer);
    stream.next(m.brake);
    stream.next(m.fuel);
    stream.next(m.trans);
    stream.next(m.VehicleState);
    stream.next(m.mode);
    stream.next(m.drStatus);
    stream.next(m.errorStatus);
    stream.next(m.emergency_flag);
    stream.next(m.hardswitch_on);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LocalPose_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::LocalPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::LocalPose_<ContainerAllocator> & v) 
  {
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "dr_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dr_x);
    s << indent << "dr_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dr_y);
    s << indent << "dr_z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dr_z);
    s << indent << "dr_heading: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dr_heading);
    s << indent << "dr_roll: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dr_roll);
    s << indent << "dr_pitch: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dr_pitch);
    s << indent << "lf_speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lf_speed);
    s << indent << "rf_speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rf_speed);
    s << indent << "lr_speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lr_speed);
    s << indent << "rr_speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rr_speed);
    s << indent << "rot_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rot_x);
    s << indent << "rot_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rot_y);
    s << indent << "rot_z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rot_z);
    s << indent << "acc_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.acc_x);
    s << indent << "acc_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.acc_y);
    s << indent << "acc_z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.acc_z);
    s << indent << "batteryState: ";
    Printer<int32_t>::stream(s, indent + "  ", v.batteryState);
    s << indent << "batteryEnergy: ";
    Printer<int32_t>::stream(s, indent + "  ", v.batteryEnergy);
    s << indent << "steer: ";
    Printer<int32_t>::stream(s, indent + "  ", v.steer);
    s << indent << "brake: ";
    Printer<int32_t>::stream(s, indent + "  ", v.brake);
    s << indent << "fuel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fuel);
    s << indent << "trans: ";
    Printer<int8_t>::stream(s, indent + "  ", v.trans);
    s << indent << "VehicleState: ";
    Printer<int8_t>::stream(s, indent + "  ", v.VehicleState);
    s << indent << "mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "drStatus: ";
    Printer<int8_t>::stream(s, indent + "  ", v.drStatus);
    s << indent << "errorStatus: ";
    Printer<int8_t>::stream(s, indent + "  ", v.errorStatus);
    s << indent << "emergency_flag: ";
    Printer<int8_t>::stream(s, indent + "  ", v.emergency_flag);
    s << indent << "hardswitch_on: ";
    Printer<int8_t>::stream(s, indent + "  ", v.hardswitch_on);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_LOCALPOSE_H
