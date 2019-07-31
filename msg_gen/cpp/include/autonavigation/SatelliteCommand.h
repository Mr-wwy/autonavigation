/* Auto-generated by genmsg_cpp for file /home/abc/ros_autonavigation_ws/src/autonavigation/msg/SatelliteCommand.msg */
#ifndef AUTONAVIGATION_MESSAGE_SATELLITECOMMAND_H
#define AUTONAVIGATION_MESSAGE_SATELLITECOMMAND_H
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
struct SatelliteCommand_ {
  typedef SatelliteCommand_<ContainerAllocator> Type;

  SatelliteCommand_()
  : unique_key(0)
  , gps_week(0)
  , gps_millisecond(0)
  , cmd_millisecond(0)
  , cmd_priority(0)
  , cmd_task_mode(0)
  , cmd_hand_brake(0)
  , cmd_throttle(0)
  , cmd_brake(0)
  , cmd_shift(0)
  , cmd_ignition(0)
  , cmd_light(0)
  , cmd_reserve1(0)
  , cmd_reserve2(0)
  , cmd_reserve3(0)
  , cmd_reserve4(0)
  , cmd_reserve5(0)
  , cmd_reserve6(0)
  , cmd_reserve7(0)
  , cmd_reserve8(0)
  {
  }

  SatelliteCommand_(const ContainerAllocator& _alloc)
  : unique_key(0)
  , gps_week(0)
  , gps_millisecond(0)
  , cmd_millisecond(0)
  , cmd_priority(0)
  , cmd_task_mode(0)
  , cmd_hand_brake(0)
  , cmd_throttle(0)
  , cmd_brake(0)
  , cmd_shift(0)
  , cmd_ignition(0)
  , cmd_light(0)
  , cmd_reserve1(0)
  , cmd_reserve2(0)
  , cmd_reserve3(0)
  , cmd_reserve4(0)
  , cmd_reserve5(0)
  , cmd_reserve6(0)
  , cmd_reserve7(0)
  , cmd_reserve8(0)
  {
  }

  typedef uint32_t _unique_key_type;
  uint32_t unique_key;

  typedef uint32_t _gps_week_type;
  uint32_t gps_week;

  typedef uint64_t _gps_millisecond_type;
  uint64_t gps_millisecond;

  typedef uint64_t _cmd_millisecond_type;
  uint64_t cmd_millisecond;

  typedef uint8_t _cmd_priority_type;
  uint8_t cmd_priority;

  typedef uint8_t _cmd_task_mode_type;
  uint8_t cmd_task_mode;

  typedef uint8_t _cmd_hand_brake_type;
  uint8_t cmd_hand_brake;

  typedef uint8_t _cmd_throttle_type;
  uint8_t cmd_throttle;

  typedef uint8_t _cmd_brake_type;
  uint8_t cmd_brake;

  typedef uint8_t _cmd_shift_type;
  uint8_t cmd_shift;

  typedef uint8_t _cmd_ignition_type;
  uint8_t cmd_ignition;

  typedef uint8_t _cmd_light_type;
  uint8_t cmd_light;

  typedef uint8_t _cmd_reserve1_type;
  uint8_t cmd_reserve1;

  typedef uint8_t _cmd_reserve2_type;
  uint8_t cmd_reserve2;

  typedef uint8_t _cmd_reserve3_type;
  uint8_t cmd_reserve3;

  typedef uint8_t _cmd_reserve4_type;
  uint8_t cmd_reserve4;

  typedef uint8_t _cmd_reserve5_type;
  uint8_t cmd_reserve5;

  typedef uint8_t _cmd_reserve6_type;
  uint8_t cmd_reserve6;

  typedef uint8_t _cmd_reserve7_type;
  uint8_t cmd_reserve7;

  typedef uint8_t _cmd_reserve8_type;
  uint8_t cmd_reserve8;


  typedef boost::shared_ptr< ::autonavigation::SatelliteCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::SatelliteCommand_<ContainerAllocator>  const> ConstPtr;
}; // struct SatelliteCommand
typedef  ::autonavigation::SatelliteCommand_<std::allocator<void> > SatelliteCommand;

typedef boost::shared_ptr< ::autonavigation::SatelliteCommand> SatelliteCommandPtr;
typedef boost::shared_ptr< ::autonavigation::SatelliteCommand const> SatelliteCommandConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::SatelliteCommand_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::SatelliteCommand_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::SatelliteCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::SatelliteCommand_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::SatelliteCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "76a796826c5946696132c32a06bd9d85";
  }

  static const char* value(const  ::autonavigation::SatelliteCommand_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x76a796826c594669ULL;
  static const uint64_t static_value2 = 0x6132c32a06bd9d85ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::SatelliteCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/SatelliteCommand";
  }

  static const char* value(const  ::autonavigation::SatelliteCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::SatelliteCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#对应结构体Autonavigation_Satellite_Command\n\
#该命令用于卫星数据链\n\
\n\
\n\
uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id\n\
uint32     gps_week            #GPS周\n\
uint64     gps_millisecond     #取GPS周的毫秒级时间\n\
uint64     cmd_millisecond     #T0 时间\n\
uint8      cmd_priority        #优先权，0-最高优先级，无条件响应此命令。1-与电台优先级相同，2-低于电台优先级\n\
uint8      cmd_task_mode       #任务模式默认值0，什么都不做，1：遥控模式2：立即进入自主模式3:T0 模式\n\
uint8      cmd_hand_brake      #0：松开手刹, 1：拉紧手刹\n\
uint8      cmd_throttle        #油门量命令，百分比\n\
uint8      cmd_brake           #刹车量命令，百分比\n\
uint8      cmd_shift           #换档命令,0: P, 1: R, 2: N, 3:D, 4: S, 5: L\n\
uint8      cmd_ignition        #0：熄火1：点火\n\
uint8      cmd_light           #灯光\n\
uint8      cmd_reserve1\n\
uint8      cmd_reserve2\n\
uint8      cmd_reserve3\n\
uint8      cmd_reserve4\n\
uint8      cmd_reserve5\n\
uint8      cmd_reserve6\n\
uint8      cmd_reserve7\n\
uint8      cmd_reserve8 \n\
\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::SatelliteCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::SatelliteCommand_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::SatelliteCommand_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.unique_key);
    stream.next(m.gps_week);
    stream.next(m.gps_millisecond);
    stream.next(m.cmd_millisecond);
    stream.next(m.cmd_priority);
    stream.next(m.cmd_task_mode);
    stream.next(m.cmd_hand_brake);
    stream.next(m.cmd_throttle);
    stream.next(m.cmd_brake);
    stream.next(m.cmd_shift);
    stream.next(m.cmd_ignition);
    stream.next(m.cmd_light);
    stream.next(m.cmd_reserve1);
    stream.next(m.cmd_reserve2);
    stream.next(m.cmd_reserve3);
    stream.next(m.cmd_reserve4);
    stream.next(m.cmd_reserve5);
    stream.next(m.cmd_reserve6);
    stream.next(m.cmd_reserve7);
    stream.next(m.cmd_reserve8);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SatelliteCommand_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::SatelliteCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::SatelliteCommand_<ContainerAllocator> & v) 
  {
    s << indent << "unique_key: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.unique_key);
    s << indent << "gps_week: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_week);
    s << indent << "gps_millisecond: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.gps_millisecond);
    s << indent << "cmd_millisecond: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.cmd_millisecond);
    s << indent << "cmd_priority: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_priority);
    s << indent << "cmd_task_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_task_mode);
    s << indent << "cmd_hand_brake: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_hand_brake);
    s << indent << "cmd_throttle: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_throttle);
    s << indent << "cmd_brake: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_brake);
    s << indent << "cmd_shift: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_shift);
    s << indent << "cmd_ignition: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_ignition);
    s << indent << "cmd_light: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_light);
    s << indent << "cmd_reserve1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_reserve1);
    s << indent << "cmd_reserve2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_reserve2);
    s << indent << "cmd_reserve3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_reserve3);
    s << indent << "cmd_reserve4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_reserve4);
    s << indent << "cmd_reserve5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_reserve5);
    s << indent << "cmd_reserve6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_reserve6);
    s << indent << "cmd_reserve7: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_reserve7);
    s << indent << "cmd_reserve8: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_reserve8);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_SATELLITECOMMAND_H

