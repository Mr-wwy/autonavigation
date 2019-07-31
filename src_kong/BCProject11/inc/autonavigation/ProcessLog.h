/* Auto-generated by genmsg_cpp for file /home/base/ros_autonavigation_ws/src/autonavigation/msg/ProcessLog.msg */
#ifndef AUTONAVIGATION_MESSAGE_PROCESSLOG_H
#define AUTONAVIGATION_MESSAGE_PROCESSLOG_H
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
struct ProcessLog_ {
  typedef ProcessLog_<ContainerAllocator> Type;

  ProcessLog_()
  : unique_key(0)
  , gps_week(0)
  , gps_millisecond(0)
  , proc_name()
  , proc_log()
  {
  }

  ProcessLog_(const ContainerAllocator& _alloc)
  : unique_key(0)
  , gps_week(0)
  , gps_millisecond(0)
  , proc_name(_alloc)
  , proc_log(_alloc)
  {
  }

  typedef uint32_t _unique_key_type;
  uint32_t unique_key;

  typedef uint32_t _gps_week_type;
  uint32_t gps_week;

  typedef uint64_t _gps_millisecond_type;
  uint64_t gps_millisecond;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _proc_name_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  proc_name;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _proc_log_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  proc_log;


  typedef boost::shared_ptr< ::autonavigation::ProcessLog_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::ProcessLog_<ContainerAllocator>  const> ConstPtr;
}; // struct ProcessLog
typedef  ::autonavigation::ProcessLog_<std::allocator<void> > ProcessLog;

typedef boost::shared_ptr< ::autonavigation::ProcessLog> ProcessLogPtr;
typedef boost::shared_ptr< ::autonavigation::ProcessLog const> ProcessLogConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::ProcessLog_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::ProcessLog_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::ProcessLog_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::ProcessLog_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::ProcessLog_<ContainerAllocator> > {
  static const char* value() 
  {
    return "de5e88702431d5bc2e2ab4f4b2fbbf08";
  }

  static const char* value(const  ::autonavigation::ProcessLog_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xde5e88702431d5bcULL;
  static const uint64_t static_value2 = 0x2e2ab4f4b2fbbf08ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::ProcessLog_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/ProcessLog";
  }

  static const char* value(const  ::autonavigation::ProcessLog_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::ProcessLog_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id\n\
uint32     gps_week            #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期\n\
uint64     gps_millisecond     #GPS毫秒，以周的零点开始的毫秒数\n\
uint8[]    proc_name           #进程名称\n\
uint8[]    proc_log            #日志信息\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::ProcessLog_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::ProcessLog_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.unique_key);
    stream.next(m.gps_week);
    stream.next(m.gps_millisecond);
    stream.next(m.proc_name);
    stream.next(m.proc_log);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ProcessLog_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::ProcessLog_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::ProcessLog_<ContainerAllocator> & v) 
  {
    s << indent << "unique_key: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.unique_key);
    s << indent << "gps_week: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_week);
    s << indent << "gps_millisecond: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.gps_millisecond);
    s << indent << "proc_name[]" << std::endl;
    for (size_t i = 0; i < v.proc_name.size(); ++i)
    {
      s << indent << "  proc_name[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.proc_name[i]);
    }
    s << indent << "proc_log[]" << std::endl;
    for (size_t i = 0; i < v.proc_log.size(); ++i)
    {
      s << indent << "  proc_log[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.proc_log[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_PROCESSLOG_H

