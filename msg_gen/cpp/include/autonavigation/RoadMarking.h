/* Auto-generated by genmsg_cpp for file /home/abc/ros_autonavigation_ws/src/autonavigation/msg/RoadMarking.msg */
#ifndef AUTONAVIGATION_MESSAGE_ROADMARKING_H
#define AUTONAVIGATION_MESSAGE_ROADMARKING_H
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

#include "geometry_msgs/Point.h"
#include "geometry_msgs/Point.h"
#include "geometry_msgs/Point.h"
#include "geometry_msgs/Point.h"
#include "geometry_msgs/Point.h"

namespace autonavigation
{
template <class ContainerAllocator>
struct RoadMarking_ {
  typedef RoadMarking_<ContainerAllocator> Type;

  RoadMarking_()
  : posCenter()
  , pointBottomLeft()
  , pointBottomRight()
  , pointTopLeft()
  , pointTopRight()
  , direction(0)
  , width(0)
  , sign_type(0)
  {
  }

  RoadMarking_(const ContainerAllocator& _alloc)
  : posCenter(_alloc)
  , pointBottomLeft(_alloc)
  , pointBottomRight(_alloc)
  , pointTopLeft(_alloc)
  , pointTopRight(_alloc)
  , direction(0)
  , width(0)
  , sign_type(0)
  {
  }

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _posCenter_type;
   ::geometry_msgs::Point_<ContainerAllocator>  posCenter;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pointBottomLeft_type;
   ::geometry_msgs::Point_<ContainerAllocator>  pointBottomLeft;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pointBottomRight_type;
   ::geometry_msgs::Point_<ContainerAllocator>  pointBottomRight;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pointTopLeft_type;
   ::geometry_msgs::Point_<ContainerAllocator>  pointTopLeft;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pointTopRight_type;
   ::geometry_msgs::Point_<ContainerAllocator>  pointTopRight;

  typedef int32_t _direction_type;
  int32_t direction;

  typedef int32_t _width_type;
  int32_t width;

  typedef uint8_t _sign_type_type;
  uint8_t sign_type;


  typedef boost::shared_ptr< ::autonavigation::RoadMarking_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::RoadMarking_<ContainerAllocator>  const> ConstPtr;
}; // struct RoadMarking
typedef  ::autonavigation::RoadMarking_<std::allocator<void> > RoadMarking;

typedef boost::shared_ptr< ::autonavigation::RoadMarking> RoadMarkingPtr;
typedef boost::shared_ptr< ::autonavigation::RoadMarking const> RoadMarkingConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::RoadMarking_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::RoadMarking_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::RoadMarking_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::RoadMarking_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::RoadMarking_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ea0621a9ad4999a280afb0f6a81de50e";
  }

  static const char* value(const  ::autonavigation::RoadMarking_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xea0621a9ad4999a2ULL;
  static const uint64_t static_value2 = 0x80afb0f6a81de50eULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::RoadMarking_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/RoadMarking";
  }

  static const char* value(const  ::autonavigation::RoadMarking_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::RoadMarking_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#地标的中心点\n\
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

  static const char* value(const  ::autonavigation::RoadMarking_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::RoadMarking_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::RoadMarking_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.posCenter);
    stream.next(m.pointBottomLeft);
    stream.next(m.pointBottomRight);
    stream.next(m.pointTopLeft);
    stream.next(m.pointTopRight);
    stream.next(m.direction);
    stream.next(m.width);
    stream.next(m.sign_type);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RoadMarking_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::RoadMarking_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::RoadMarking_<ContainerAllocator> & v) 
  {
    s << indent << "posCenter: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.posCenter);
    s << indent << "pointBottomLeft: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pointBottomLeft);
    s << indent << "pointBottomRight: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pointBottomRight);
    s << indent << "pointTopLeft: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pointTopLeft);
    s << indent << "pointTopRight: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pointTopRight);
    s << indent << "direction: ";
    Printer<int32_t>::stream(s, indent + "  ", v.direction);
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "sign_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sign_type);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_ROADMARKING_H
