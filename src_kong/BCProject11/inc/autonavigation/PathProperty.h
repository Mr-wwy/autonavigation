/* Auto-generated by genmsg_cpp for file /home/base/ros_autonavigation_ws/src/autonavigation/msg/PathProperty.msg */
#ifndef AUTONAVIGATION_MESSAGE_PATHPROPERTY_H
#define AUTONAVIGATION_MESSAGE_PATHPROPERTY_H
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

#include "autonavigation/WayPoint.h"
#include "autonavigation/WayPoint.h"

namespace autonavigation
{
template <class ContainerAllocator>
struct PathProperty_ {
  typedef PathProperty_<ContainerAllocator> Type;

  PathProperty_()
  : left_boundary()
  , right_boundary()
  , direction(0)
  {
  }

  PathProperty_(const ContainerAllocator& _alloc)
  : left_boundary(_alloc)
  , right_boundary(_alloc)
  , direction(0)
  {
  }

  typedef  ::autonavigation::WayPoint_<ContainerAllocator>  _left_boundary_type;
   ::autonavigation::WayPoint_<ContainerAllocator>  left_boundary;

  typedef  ::autonavigation::WayPoint_<ContainerAllocator>  _right_boundary_type;
   ::autonavigation::WayPoint_<ContainerAllocator>  right_boundary;

  typedef int32_t _direction_type;
  int32_t direction;


  typedef boost::shared_ptr< ::autonavigation::PathProperty_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::PathProperty_<ContainerAllocator>  const> ConstPtr;
}; // struct PathProperty
typedef  ::autonavigation::PathProperty_<std::allocator<void> > PathProperty;

typedef boost::shared_ptr< ::autonavigation::PathProperty> PathPropertyPtr;
typedef boost::shared_ptr< ::autonavigation::PathProperty const> PathPropertyConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::PathProperty_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::PathProperty_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::PathProperty_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::PathProperty_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::PathProperty_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e5513d10a16a565d2f690143b65fbdcd";
  }

  static const char* value(const  ::autonavigation::PathProperty_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe5513d10a16a565dULL;
  static const uint64_t static_value2 = 0x2f690143b65fbdcdULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::PathProperty_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/PathProperty";
  }

  static const char* value(const  ::autonavigation::PathProperty_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::PathProperty_<ContainerAllocator> > {
  static const char* value() 
  {
    return "WayPoint left_boundary\n\
WayPoint right_boundary\n\
int32    direction\n\
\n\
\n\
================================================================================\n\
MSG: autonavigation/WayPoint\n\
int32 x\n\
int32 y\n\
int32 z\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::PathProperty_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::PathProperty_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::PathProperty_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.left_boundary);
    stream.next(m.right_boundary);
    stream.next(m.direction);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PathProperty_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::PathProperty_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::PathProperty_<ContainerAllocator> & v) 
  {
    s << indent << "left_boundary: ";
s << std::endl;
    Printer< ::autonavigation::WayPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.left_boundary);
    s << indent << "right_boundary: ";
s << std::endl;
    Printer< ::autonavigation::WayPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.right_boundary);
    s << indent << "direction: ";
    Printer<int32_t>::stream(s, indent + "  ", v.direction);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_PATHPROPERTY_H

