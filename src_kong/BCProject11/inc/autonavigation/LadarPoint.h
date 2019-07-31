/* Auto-generated by genmsg_cpp for file /home/base/ros_autonavigation_ws/src/autonavigation/msg/LadarPoint.msg */
#ifndef AUTONAVIGATION_MESSAGE_LADARPOINT_H
#define AUTONAVIGATION_MESSAGE_LADARPOINT_H
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
struct LadarPoint_ {
  typedef LadarPoint_<ContainerAllocator> Type;

  LadarPoint_()
  : x(0)
  , y(0)
  , z(0)
  , angleH(0)
  , angleV(0)
  , realdistance(0)
  , intensity(0)
  , ring(0)
  {
  }

  LadarPoint_(const ContainerAllocator& _alloc)
  : x(0)
  , y(0)
  , z(0)
  , angleH(0)
  , angleV(0)
  , realdistance(0)
  , intensity(0)
  , ring(0)
  {
  }

  typedef uint16_t _x_type;
  uint16_t x;

  typedef uint16_t _y_type;
  uint16_t y;

  typedef int16_t _z_type;
  int16_t z;

  typedef uint16_t _angleH_type;
  uint16_t angleH;

  typedef uint16_t _angleV_type;
  uint16_t angleV;

  typedef uint16_t _realdistance_type;
  uint16_t realdistance;

  typedef uint8_t _intensity_type;
  uint8_t intensity;

  typedef uint8_t _ring_type;
  uint8_t ring;


  typedef boost::shared_ptr< ::autonavigation::LadarPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::LadarPoint_<ContainerAllocator>  const> ConstPtr;
}; // struct LadarPoint
typedef  ::autonavigation::LadarPoint_<std::allocator<void> > LadarPoint;

typedef boost::shared_ptr< ::autonavigation::LadarPoint> LadarPointPtr;
typedef boost::shared_ptr< ::autonavigation::LadarPoint const> LadarPointConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::LadarPoint_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::LadarPoint_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::LadarPoint_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::LadarPoint_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::LadarPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e47b7acf3aa42d31497a6d45f62b364a";
  }

  static const char* value(const  ::autonavigation::LadarPoint_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe47b7acf3aa42d31ULL;
  static const uint64_t static_value2 = 0x497a6d45f62b364aULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::LadarPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/LadarPoint";
  }

  static const char* value(const  ::autonavigation::LadarPoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::LadarPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint16   x         #cm\n\
uint16   y\n\
int16    z\n\
uint16   angleH         #0.01度\n\
uint16   angleV         #0.01度\n\
uint16   realdistance   #cm\n\
uint8    intensity\n\
uint8    ring\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::LadarPoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::LadarPoint_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::LadarPoint_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
    stream.next(m.angleH);
    stream.next(m.angleV);
    stream.next(m.realdistance);
    stream.next(m.intensity);
    stream.next(m.ring);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LadarPoint_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::LadarPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::LadarPoint_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<int16_t>::stream(s, indent + "  ", v.z);
    s << indent << "angleH: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.angleH);
    s << indent << "angleV: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.angleV);
    s << indent << "realdistance: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.realdistance);
    s << indent << "intensity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.intensity);
    s << indent << "ring: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ring);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_LADARPOINT_H

