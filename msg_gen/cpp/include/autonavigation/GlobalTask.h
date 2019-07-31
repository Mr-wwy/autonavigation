/* Auto-generated by genmsg_cpp for file /home/abc/ros_autonavigation_ws/src/autonavigation/msg/GlobalTask.msg */
#ifndef AUTONAVIGATION_MESSAGE_GLOBALTASK_H
#define AUTONAVIGATION_MESSAGE_GLOBALTASK_H
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

#include "std_msgs/Header.h"
#include "autonavigation/LocalPose.h"
#include "autonavigation/GpsPosition.h"
#include "autonavigation/GlobalPoint.h"
#include "autonavigation/GlobalPoint.h"

namespace autonavigation
{
template <class ContainerAllocator>
struct GlobalTask_ {
  typedef GlobalTask_<ContainerAllocator> Type;

  GlobalTask_()
  : head()
  , localPose()
  , gpsPos()
  , pointNum(0)
  , globalPoints()
  , propNum(0)
  , propArrays()
  , ReturnGlobalPoint()
  , cType(0)
  , taskState(0)
  , locationSource(0)
  , speedLimit(0)
  {
  }

  GlobalTask_(const ContainerAllocator& _alloc)
  : head(_alloc)
  , localPose(_alloc)
  , gpsPos(_alloc)
  , pointNum(0)
  , globalPoints(_alloc)
  , propNum(0)
  , propArrays(_alloc)
  , ReturnGlobalPoint(_alloc)
  , cType(0)
  , taskState(0)
  , locationSource(0)
  , speedLimit(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _head_type;
   ::std_msgs::Header_<ContainerAllocator>  head;

  typedef  ::autonavigation::LocalPose_<ContainerAllocator>  _localPose_type;
   ::autonavigation::LocalPose_<ContainerAllocator>  localPose;

  typedef  ::autonavigation::GpsPosition_<ContainerAllocator>  _gpsPos_type;
   ::autonavigation::GpsPosition_<ContainerAllocator>  gpsPos;

  typedef int32_t _pointNum_type;
  int32_t pointNum;

  typedef std::vector< ::autonavigation::GlobalPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::GlobalPoint_<ContainerAllocator> >::other >  _globalPoints_type;
  std::vector< ::autonavigation::GlobalPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::GlobalPoint_<ContainerAllocator> >::other >  globalPoints;

  typedef int32_t _propNum_type;
  int32_t propNum;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _propArrays_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  propArrays;

  typedef  ::autonavigation::GlobalPoint_<ContainerAllocator>  _ReturnGlobalPoint_type;
   ::autonavigation::GlobalPoint_<ContainerAllocator>  ReturnGlobalPoint;

  typedef int32_t _cType_type;
  int32_t cType;

  typedef uint8_t _taskState_type;
  uint8_t taskState;

  typedef uint8_t _locationSource_type;
  uint8_t locationSource;

  typedef uint8_t _speedLimit_type;
  uint8_t speedLimit;


  typedef boost::shared_ptr< ::autonavigation::GlobalTask_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::GlobalTask_<ContainerAllocator>  const> ConstPtr;
}; // struct GlobalTask
typedef  ::autonavigation::GlobalTask_<std::allocator<void> > GlobalTask;

typedef boost::shared_ptr< ::autonavigation::GlobalTask> GlobalTaskPtr;
typedef boost::shared_ptr< ::autonavigation::GlobalTask const> GlobalTaskConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::GlobalTask_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::GlobalTask_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::GlobalTask_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::GlobalTask_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::GlobalTask_<ContainerAllocator> > {
  static const char* value() 
  {
    return "47ce395f9967a1a20f04b3575bee6653";
  }

  static const char* value(const  ::autonavigation::GlobalTask_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x47ce395f9967a1a2ULL;
  static const uint64_t static_value2 = 0x0f04b3575bee6653ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::GlobalTask_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/GlobalTask";
  }

  static const char* value(const  ::autonavigation::GlobalTask_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::GlobalTask_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header      head\n\
LocalPose   localPose\n\
GpsPosition gpsPos\n\
\n\
\n\
int32             pointNum\n\
GlobalPoint[]     globalPoints\n\
\n\
int32             propNum\n\
float64[]         propArrays\n\
\n\
GlobalPoint       ReturnGlobalPoint\n\
int32             cType            #当前环境信息\n\
uint8             taskState        #定位错误标志位\n\
uint8             locationSource   #定位选择标志位\n\
uint8             speedLimit       #限速\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: autonavigation/LocalPose\n\
#LocalPose msg\n\
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
================================================================================\n\
MSG: autonavigation/GpsPosition\n\
#gps info is updated\n\
char          gps_flag               \n\
uint32        gps_week\n\
#millisecond in a week\n\
float64       gps_millisecond   \n\
#经纬度，单位为度     \n\
float64	      longitude		      \n\
float64	      laltitude\n\
#高斯投影位置,cm\n\
float64	      gaussX		      \n\
float64       gaussY\n\
#height,     cm\n\
float64         height  \n\
#欧拉角，单位为0.01度                \n\
int32         pitch                   \n\
int32         roll\n\
#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    \n\
int32         azimuth                 \n\
\n\
#north速度，单位为cm/s\n\
int32         northVelocity           \n\
int32         eastVelocity\n\
int32         upVelocity\n\
#系统运行状态\n\
int32         positionStatus	      \n\
\n\
#imu三轴陀螺速度 0.01degree/s\n\
int32	        rot_x                      \n\
int32           rot_y                      \n\
int32           rot_z                      \n\
\n\
#imu三轴加速度  0.01m/s^2\n\
int32           acc_x                      \n\
int32           acc_y                      \n\
int32           acc_z                      \n\
	\n\
\n\
================================================================================\n\
MSG: autonavigation/GlobalPoint\n\
    float64  x\n\
    float64  y\n\
    int32     envType        #环境描述（停止线，斑马线，行人，交通灯类型）\n\
    int32     actType        #车辆行为描述（停车及持续时间，超车，换道）\n\
    int32     curveRadius    #曲率\n\
    int32     maxSpeed       #限速\n\
    int32     slope          #坡度\n\
    int32     pointId        #全局id号\n\
\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::GlobalTask_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::GlobalTask_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.head);
    stream.next(m.localPose);
    stream.next(m.gpsPos);
    stream.next(m.pointNum);
    stream.next(m.globalPoints);
    stream.next(m.propNum);
    stream.next(m.propArrays);
    stream.next(m.ReturnGlobalPoint);
    stream.next(m.cType);
    stream.next(m.taskState);
    stream.next(m.locationSource);
    stream.next(m.speedLimit);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GlobalTask_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::GlobalTask_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::GlobalTask_<ContainerAllocator> & v) 
  {
    s << indent << "head: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.head);
    s << indent << "localPose: ";
s << std::endl;
    Printer< ::autonavigation::LocalPose_<ContainerAllocator> >::stream(s, indent + "  ", v.localPose);
    s << indent << "gpsPos: ";
s << std::endl;
    Printer< ::autonavigation::GpsPosition_<ContainerAllocator> >::stream(s, indent + "  ", v.gpsPos);
    s << indent << "pointNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pointNum);
    s << indent << "globalPoints[]" << std::endl;
    for (size_t i = 0; i < v.globalPoints.size(); ++i)
    {
      s << indent << "  globalPoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::GlobalPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.globalPoints[i]);
    }
    s << indent << "propNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.propNum);
    s << indent << "propArrays[]" << std::endl;
    for (size_t i = 0; i < v.propArrays.size(); ++i)
    {
      s << indent << "  propArrays[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.propArrays[i]);
    }
    s << indent << "ReturnGlobalPoint: ";
s << std::endl;
    Printer< ::autonavigation::GlobalPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.ReturnGlobalPoint);
    s << indent << "cType: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cType);
    s << indent << "taskState: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.taskState);
    s << indent << "locationSource: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.locationSource);
    s << indent << "speedLimit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.speedLimit);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_GLOBALTASK_H
