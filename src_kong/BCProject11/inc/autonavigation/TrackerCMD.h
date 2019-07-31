/* Auto-generated by genmsg_cpp for file /home/base/ros_autonavigation_ws/src/autonavigation/msg/TrackerCMD.msg */
#ifndef AUTONAVIGATION_MESSAGE_TRACKERCMD_H
#define AUTONAVIGATION_MESSAGE_TRACKERCMD_H
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
struct TrackerCMD_ {
  typedef TrackerCMD_<ContainerAllocator> Type;

  TrackerCMD_()
  : DesiredCurvature(0.0)
  , DesiredVelocity(0.0)
  , VehicleCommand(0)
  , YError(0.0)
  , HeadingError(0.0)
  , ControlMode(0)
  , SteerEnable(0)
  , BrakeFuelEnable(0)
  {
  }

  TrackerCMD_(const ContainerAllocator& _alloc)
  : DesiredCurvature(0.0)
  , DesiredVelocity(0.0)
  , VehicleCommand(0)
  , YError(0.0)
  , HeadingError(0.0)
  , ControlMode(0)
  , SteerEnable(0)
  , BrakeFuelEnable(0)
  {
  }

  typedef double _DesiredCurvature_type;
  double DesiredCurvature;

  typedef double _DesiredVelocity_type;
  double DesiredVelocity;

  typedef int32_t _VehicleCommand_type;
  int32_t VehicleCommand;

  typedef double _YError_type;
  double YError;

  typedef double _HeadingError_type;
  double HeadingError;

  typedef int32_t _ControlMode_type;
  int32_t ControlMode;

  typedef int32_t _SteerEnable_type;
  int32_t SteerEnable;

  typedef int32_t _BrakeFuelEnable_type;
  int32_t BrakeFuelEnable;


  typedef boost::shared_ptr< ::autonavigation::TrackerCMD_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::TrackerCMD_<ContainerAllocator>  const> ConstPtr;
}; // struct TrackerCMD
typedef  ::autonavigation::TrackerCMD_<std::allocator<void> > TrackerCMD;

typedef boost::shared_ptr< ::autonavigation::TrackerCMD> TrackerCMDPtr;
typedef boost::shared_ptr< ::autonavigation::TrackerCMD const> TrackerCMDConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::TrackerCMD_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::TrackerCMD_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::TrackerCMD_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::TrackerCMD_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::TrackerCMD_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a81e0c287c880465e69aa04676c74a46";
  }

  static const char* value(const  ::autonavigation::TrackerCMD_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa81e0c287c880465ULL;
  static const uint64_t static_value2 = 0xe69aa04676c74a46ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::TrackerCMD_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/TrackerCMD";
  }

  static const char* value(const  ::autonavigation::TrackerCMD_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::TrackerCMD_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 DesiredCurvature\n\
float64 DesiredVelocity\n\
int32 VehicleCommand\n\
float64 YError\n\
float64 HeadingError\n\
int32 ControlMode\n\
int32 SteerEnable\n\
int32 BrakeFuelEnable\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::TrackerCMD_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::autonavigation::TrackerCMD_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::TrackerCMD_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.DesiredCurvature);
    stream.next(m.DesiredVelocity);
    stream.next(m.VehicleCommand);
    stream.next(m.YError);
    stream.next(m.HeadingError);
    stream.next(m.ControlMode);
    stream.next(m.SteerEnable);
    stream.next(m.BrakeFuelEnable);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TrackerCMD_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::TrackerCMD_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::TrackerCMD_<ContainerAllocator> & v) 
  {
    s << indent << "DesiredCurvature: ";
    Printer<double>::stream(s, indent + "  ", v.DesiredCurvature);
    s << indent << "DesiredVelocity: ";
    Printer<double>::stream(s, indent + "  ", v.DesiredVelocity);
    s << indent << "VehicleCommand: ";
    Printer<int32_t>::stream(s, indent + "  ", v.VehicleCommand);
    s << indent << "YError: ";
    Printer<double>::stream(s, indent + "  ", v.YError);
    s << indent << "HeadingError: ";
    Printer<double>::stream(s, indent + "  ", v.HeadingError);
    s << indent << "ControlMode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ControlMode);
    s << indent << "SteerEnable: ";
    Printer<int32_t>::stream(s, indent + "  ", v.SteerEnable);
    s << indent << "BrakeFuelEnable: ";
    Printer<int32_t>::stream(s, indent + "  ", v.BrakeFuelEnable);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_TRACKERCMD_H

