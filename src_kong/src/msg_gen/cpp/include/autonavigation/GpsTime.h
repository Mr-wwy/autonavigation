/* Auto-generated by genmsg_cpp for file /home/base/ros_autonavigation_ws/src/autonavigation/msg/GpsTime.msg */
#ifndef AUTONAVIGATION_MESSAGE_GPSTIME_H
#define AUTONAVIGATION_MESSAGE_GPSTIME_H
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
struct GpsTime_ {
  typedef GpsTime_<ContainerAllocator> Type;

  GpsTime_()
  : unique_key(0)
  , gps_week(0)
  , gps_millisecond(0)
  , longitude(0.0)
  , laltitude(0.0)
  , gps_reserve1(0)
  , gps_reserve2(0)
  , gps_reserve3(0)
  , gps_reserve4(0)
  , gps_reserve5(0)
  , gps_reserve6(0)
  {
  }

  GpsTime_(const ContainerAllocator& _alloc)
  : unique_key(0)
  , gps_week(0)
  , gps_millisecond(0)
  , longitude(0.0)
  , laltitude(0.0)
  , gps_reserve1(0)
  , gps_reserve2(0)
  , gps_reserve3(0)
  , gps_reserve4(0)
  , gps_reserve5(0)
  , gps_reserve6(0)
  {
  }

  typedef uint32_t _unique_key_type;
  uint32_t unique_key;

  typedef uint32_t _gps_week_type;
  uint32_t gps_week;

  typedef uint64_t _gps_millisecond_type;
  uint64_t gps_millisecond;

  typedef double _longitude_type;
  double longitude;

  typedef double _laltitude_type;
  double laltitude;

  typedef uint8_t _gps_reserve1_type;
  uint8_t gps_reserve1;

  typedef uint8_t _gps_reserve2_type;
  uint8_t gps_reserve2;

  typedef uint8_t _gps_reserve3_type;
  uint8_t gps_reserve3;

  typedef uint8_t _gps_reserve4_type;
  uint8_t gps_reserve4;

  typedef uint8_t _gps_reserve5_type;
  uint8_t gps_reserve5;

  typedef uint8_t _gps_reserve6_type;
  uint8_t gps_reserve6;


  typedef boost::shared_ptr< ::autonavigation::GpsTime_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::GpsTime_<ContainerAllocator>  const> ConstPtr;
}; // struct GpsTime
typedef  ::autonavigation::GpsTime_<std::allocator<void> > GpsTime;

typedef boost::shared_ptr< ::autonavigation::GpsTime> GpsTimePtr;
typedef boost::shared_ptr< ::autonavigation::GpsTime const> GpsTimeConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::GpsTime_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::GpsTime_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::GpsTime_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::GpsTime_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::GpsTime_<ContainerAllocator> > {
  static const char* value() 
  {
    return "83d68f97b802f68fa3f9de2d9684e369";
  }

  static const char* value(const  ::autonavigation::GpsTime_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x83d68f97b802f68fULL;
  static const uint64_t static_value2 = 0xa3f9de2d9684e369ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::GpsTime_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/GpsTime";
  }

  static const char* value(const  ::autonavigation::GpsTime_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::GpsTime_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#对应结构体\n\
\n\
uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id\n\
uint32     gps_week            #GPS周\n\
uint64     gps_millisecond     #取GPS周的毫秒级时间    \n\
float64	   longitude	       #经度，单位为度       \n\
float64	   laltitude           #纬度，单位为度 \n\
uint8      gps_reserve1        #预留\n\
uint8      gps_reserve2\n\
uint8      gps_reserve3\n\
uint8      gps_reserve4\n\
uint8      gps_reserve5\n\
uint8      gps_reserve6\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::GpsTime_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::GpsTime_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::GpsTime_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.unique_key);
    stream.next(m.gps_week);
    stream.next(m.gps_millisecond);
    stream.next(m.longitude);
    stream.next(m.laltitude);
    stream.next(m.gps_reserve1);
    stream.next(m.gps_reserve2);
    stream.next(m.gps_reserve3);
    stream.next(m.gps_reserve4);
    stream.next(m.gps_reserve5);
    stream.next(m.gps_reserve6);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GpsTime_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::GpsTime_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::GpsTime_<ContainerAllocator> & v) 
  {
    s << indent << "unique_key: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.unique_key);
    s << indent << "gps_week: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_week);
    s << indent << "gps_millisecond: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.gps_millisecond);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "laltitude: ";
    Printer<double>::stream(s, indent + "  ", v.laltitude);
    s << indent << "gps_reserve1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_reserve1);
    s << indent << "gps_reserve2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_reserve2);
    s << indent << "gps_reserve3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_reserve3);
    s << indent << "gps_reserve4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_reserve4);
    s << indent << "gps_reserve5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_reserve5);
    s << indent << "gps_reserve6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_reserve6);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_GPSTIME_H

