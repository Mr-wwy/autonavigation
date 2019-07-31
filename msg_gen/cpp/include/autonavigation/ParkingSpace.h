/* Auto-generated by genmsg_cpp for file /home/abc/ros_autonavigation_ws/src/autonavigation/msg/ParkingSpace.msg */
#ifndef AUTONAVIGATION_MESSAGE_PARKINGSPACE_H
#define AUTONAVIGATION_MESSAGE_PARKINGSPACE_H
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
#include "autonavigation/RoadMarking.h"

namespace autonavigation
{
template <class ContainerAllocator>
struct ParkingSpace_ {
  typedef ParkingSpace_<ContainerAllocator> Type;

  ParkingSpace_()
  : head()
  , localPose()
  , gpsPos()
  , parkNum(0)
  , parkingSpace()
  {
  }

  ParkingSpace_(const ContainerAllocator& _alloc)
  : head(_alloc)
  , localPose(_alloc)
  , gpsPos(_alloc)
  , parkNum(0)
  , parkingSpace(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _head_type;
   ::std_msgs::Header_<ContainerAllocator>  head;

  typedef  ::autonavigation::LocalPose_<ContainerAllocator>  _localPose_type;
   ::autonavigation::LocalPose_<ContainerAllocator>  localPose;

  typedef  ::autonavigation::GpsPosition_<ContainerAllocator>  _gpsPos_type;
   ::autonavigation::GpsPosition_<ContainerAllocator>  gpsPos;

  typedef int32_t _parkNum_type;
  int32_t parkNum;

  typedef std::vector< ::autonavigation::RoadMarking_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::RoadMarking_<ContainerAllocator> >::other >  _parkingSpace_type;
  std::vector< ::autonavigation::RoadMarking_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::RoadMarking_<ContainerAllocator> >::other >  parkingSpace;


  typedef boost::shared_ptr< ::autonavigation::ParkingSpace_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::ParkingSpace_<ContainerAllocator>  const> ConstPtr;
}; // struct ParkingSpace
typedef  ::autonavigation::ParkingSpace_<std::allocator<void> > ParkingSpace;

typedef boost::shared_ptr< ::autonavigation::ParkingSpace> ParkingSpacePtr;
typedef boost::shared_ptr< ::autonavigation::ParkingSpace const> ParkingSpaceConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::ParkingSpace_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::ParkingSpace_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::ParkingSpace_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::ParkingSpace_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::ParkingSpace_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0e32d845eec0b8ebf6def07744b0b294";
  }

  static const char* value(const  ::autonavigation::ParkingSpace_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0e32d845eec0b8ebULL;
  static const uint64_t static_value2 = 0xf6def07744b0b294ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::ParkingSpace_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/ParkingSpace";
  }

  static const char* value(const  ::autonavigation::ParkingSpace_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::ParkingSpace_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header      head\n\
LocalPose   localPose\n\
GpsPosition gpsPos\n\
\n\
int32 parkNum\n\
RoadMarking[] parkingSpace\n\
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
MSG: autonavigation/RoadMarking\n\
#地标的中心点\n\
geometry_msgs/Point posCenter\n\
\n\
#地标的四个顶点\n\
geometry_msgs/Point pointBottomLeft\n\
geometry_msgs/Point pointBottomRight\n\
geometry_msgs/Point pointTopLeft\n\
geometry_msgs/Point pointTopRight\n\
\n\
int32 direction        # 停止线或者斑马线的方向,单位0.01度,与x轴的夹角，逆时针0-36000\n\
int32 width            # 地标的宽度\n\
uint8 sign_type        # 地标的类型,    type = 1,停止线；type = 2, 斑马线；type = 3,直行箭头；type = 4,左转箭头；\n\
                       # type = 5,右转箭头；type = 6,直行左转箭头；type = 7,直行右转箭头；\n\
                       # type = 8,左转掉头箭头；type = 9,掉头箭头；type = 10,菱形；type = 11，泊车位；\n\
\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::ParkingSpace_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::ParkingSpace_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.head);
    stream.next(m.localPose);
    stream.next(m.gpsPos);
    stream.next(m.parkNum);
    stream.next(m.parkingSpace);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ParkingSpace_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::ParkingSpace_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::ParkingSpace_<ContainerAllocator> & v) 
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
    s << indent << "parkNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parkNum);
    s << indent << "parkingSpace[]" << std::endl;
    for (size_t i = 0; i < v.parkingSpace.size(); ++i)
    {
      s << indent << "  parkingSpace[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::RoadMarking_<ContainerAllocator> >::stream(s, indent + "    ", v.parkingSpace[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_PARKINGSPACE_H

