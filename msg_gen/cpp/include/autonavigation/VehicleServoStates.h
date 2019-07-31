/* Auto-generated by genmsg_cpp for file /home/abc/ros_autonavigation_ws/src/autonavigation/msg/VehicleServoStates.msg */
#ifndef AUTONAVIGATION_MESSAGE_VEHICLESERVOSTATES_H
#define AUTONAVIGATION_MESSAGE_VEHICLESERVOSTATES_H
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
struct VehicleServoStates_ {
  typedef VehicleServoStates_<ContainerAllocator> Type;

  VehicleServoStates_()
  : control_mode(0)
  , steer_angle(0.0)
  , fuel_value(0.0)
  , brake_value(0.0)
  , trans_position(0)
  , brake_light(0)
  , left_wheel_speed(0.0)
  , right_wheel_speed(0.0)
  {
  }

  VehicleServoStates_(const ContainerAllocator& _alloc)
  : control_mode(0)
  , steer_angle(0.0)
  , fuel_value(0.0)
  , brake_value(0.0)
  , trans_position(0)
  , brake_light(0)
  , left_wheel_speed(0.0)
  , right_wheel_speed(0.0)
  {
  }

  typedef int32_t _control_mode_type;
  int32_t control_mode;

  typedef double _steer_angle_type;
  double steer_angle;

  typedef double _fuel_value_type;
  double fuel_value;

  typedef double _brake_value_type;
  double brake_value;

  typedef int32_t _trans_position_type;
  int32_t trans_position;

  typedef int32_t _brake_light_type;
  int32_t brake_light;

  typedef double _left_wheel_speed_type;
  double left_wheel_speed;

  typedef double _right_wheel_speed_type;
  double right_wheel_speed;


  typedef boost::shared_ptr< ::autonavigation::VehicleServoStates_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::VehicleServoStates_<ContainerAllocator>  const> ConstPtr;
}; // struct VehicleServoStates
typedef  ::autonavigation::VehicleServoStates_<std::allocator<void> > VehicleServoStates;

typedef boost::shared_ptr< ::autonavigation::VehicleServoStates> VehicleServoStatesPtr;
typedef boost::shared_ptr< ::autonavigation::VehicleServoStates const> VehicleServoStatesConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::VehicleServoStates_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::VehicleServoStates_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::VehicleServoStates_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::VehicleServoStates_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::VehicleServoStates_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7014131f2cf55edb95cc01009825b3c2";
  }

  static const char* value(const  ::autonavigation::VehicleServoStates_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7014131f2cf55edbULL;
  static const uint64_t static_value2 = 0x95cc01009825b3c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::VehicleServoStates_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/VehicleServoStates";
  }

  static const char* value(const  ::autonavigation::VehicleServoStates_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::VehicleServoStates_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 control_mode\n\
float64 steer_angle\n\
float64 fuel_value\n\
float64 brake_value\n\
int32 trans_position\n\
int32 brake_light\n\
float64 left_wheel_speed\n\
float64 right_wheel_speed\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::VehicleServoStates_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::VehicleServoStates_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::VehicleServoStates_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.control_mode);
    stream.next(m.steer_angle);
    stream.next(m.fuel_value);
    stream.next(m.brake_value);
    stream.next(m.trans_position);
    stream.next(m.brake_light);
    stream.next(m.left_wheel_speed);
    stream.next(m.right_wheel_speed);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct VehicleServoStates_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::VehicleServoStates_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::VehicleServoStates_<ContainerAllocator> & v) 
  {
    s << indent << "control_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.control_mode);
    s << indent << "steer_angle: ";
    Printer<double>::stream(s, indent + "  ", v.steer_angle);
    s << indent << "fuel_value: ";
    Printer<double>::stream(s, indent + "  ", v.fuel_value);
    s << indent << "brake_value: ";
    Printer<double>::stream(s, indent + "  ", v.brake_value);
    s << indent << "trans_position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.trans_position);
    s << indent << "brake_light: ";
    Printer<int32_t>::stream(s, indent + "  ", v.brake_light);
    s << indent << "left_wheel_speed: ";
    Printer<double>::stream(s, indent + "  ", v.left_wheel_speed);
    s << indent << "right_wheel_speed: ";
    Printer<double>::stream(s, indent + "  ", v.right_wheel_speed);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_VEHICLESERVOSTATES_H

