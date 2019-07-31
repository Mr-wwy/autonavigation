/* Auto-generated by genmsg_cpp for file /home/abc/ros_autonavigation_ws/src/autonavigation/msg/Light.msg */
#ifndef AUTONAVIGATION_MESSAGE_LIGHT_H
#define AUTONAVIGATION_MESSAGE_LIGHT_H
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
struct Light_ {
  typedef Light_<ContainerAllocator> Type;

  Light_()
  : pos_flag(0)
  , x(0)
  , y(0)
  , forward_light_type(0)
  , left_light_type(0)
  , right_light_type(0)
  , uturn_light_type(0)
  {
  }

  Light_(const ContainerAllocator& _alloc)
  : pos_flag(0)
  , x(0)
  , y(0)
  , forward_light_type(0)
  , left_light_type(0)
  , right_light_type(0)
  , uturn_light_type(0)
  {
  }

  typedef uint8_t _pos_flag_type;
  uint8_t pos_flag;

  typedef int32_t _x_type;
  int32_t x;

  typedef int32_t _y_type;
  int32_t y;

  typedef uint8_t _forward_light_type_type;
  uint8_t forward_light_type;

  typedef uint8_t _left_light_type_type;
  uint8_t left_light_type;

  typedef uint8_t _right_light_type_type;
  uint8_t right_light_type;

  typedef uint8_t _uturn_light_type_type;
  uint8_t uturn_light_type;


  typedef boost::shared_ptr< ::autonavigation::Light_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::Light_<ContainerAllocator>  const> ConstPtr;
}; // struct Light
typedef  ::autonavigation::Light_<std::allocator<void> > Light;

typedef boost::shared_ptr< ::autonavigation::Light> LightPtr;
typedef boost::shared_ptr< ::autonavigation::Light const> LightConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::Light_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::Light_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::Light_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::Light_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::Light_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3902b131172341878751daf0048c8941";
  }

  static const char* value(const  ::autonavigation::Light_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3902b13117234187ULL;
  static const uint64_t static_value2 = 0x8751daf0048c8941ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::Light_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/Light";
  }

  static const char* value(const  ::autonavigation::Light_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::Light_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 pos_flag            #位置是否起作用\n\
int32 x\n\
int32 y\n\
uint8 forward_light_type  #直行灯信息\n\
uint8 left_light_type     #左转灯信息\n\
uint8 right_light_type    #右转灯信息\n\
uint8 uturn_light_type    #U Turn灯信息\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::Light_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::Light_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::Light_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.pos_flag);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.forward_light_type);
    stream.next(m.left_light_type);
    stream.next(m.right_light_type);
    stream.next(m.uturn_light_type);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Light_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::Light_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::Light_<ContainerAllocator> & v) 
  {
    s << indent << "pos_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_flag);
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "forward_light_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.forward_light_type);
    s << indent << "left_light_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left_light_type);
    s << indent << "right_light_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.right_light_type);
    s << indent << "uturn_light_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.uturn_light_type);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_LIGHT_H

