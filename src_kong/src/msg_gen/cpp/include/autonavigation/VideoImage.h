/* Auto-generated by genmsg_cpp for file /home/wangyi/rosros_autonavigation_ws/src/autonavigation/msg/VideoImage.msg */
#ifndef AUTONAVIGATION_MESSAGE_VIDEOIMAGE_H
#define AUTONAVIGATION_MESSAGE_VIDEOIMAGE_H
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

#include "autonavigation/Image.h"

namespace autonavigation
{
template <class ContainerAllocator>
struct VideoImage_ {
  typedef VideoImage_<ContainerAllocator> Type;

  VideoImage_()
  : unique_key(0)
  , gps_week(0)
  , gps_millisecond(0)
  , video_id(0)
  , image()
  {
  }

  VideoImage_(const ContainerAllocator& _alloc)
  : unique_key(0)
  , gps_week(0)
  , gps_millisecond(0)
  , video_id(0)
  , image(_alloc)
  {
  }

  typedef uint32_t _unique_key_type;
  uint32_t unique_key;

  typedef uint32_t _gps_week_type;
  uint32_t gps_week;

  typedef uint64_t _gps_millisecond_type;
  uint64_t gps_millisecond;

  typedef uint8_t _video_id_type;
  uint8_t video_id;

  typedef  ::autonavigation::Image_<ContainerAllocator>  _image_type;
   ::autonavigation::Image_<ContainerAllocator>  image;


  typedef boost::shared_ptr< ::autonavigation::VideoImage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::VideoImage_<ContainerAllocator>  const> ConstPtr;
}; // struct VideoImage
typedef  ::autonavigation::VideoImage_<std::allocator<void> > VideoImage;

typedef boost::shared_ptr< ::autonavigation::VideoImage> VideoImagePtr;
typedef boost::shared_ptr< ::autonavigation::VideoImage const> VideoImageConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::VideoImage_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::VideoImage_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::VideoImage_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::VideoImage_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::VideoImage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "35f9c475e62c062c5d24b1f849b54e77";
  }

  static const char* value(const  ::autonavigation::VideoImage_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x35f9c475e62c062cULL;
  static const uint64_t static_value2 = 0x5d24b1f849b54e77ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::VideoImage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/VideoImage";
  }

  static const char* value(const  ::autonavigation::VideoImage_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::VideoImage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#视频监控相机输出数据\n\
\n\
uint32       unique_key               #自主行驶载车唯一标识，用于区分载车的id\n\
uint32       gps_week                 #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期\n\
uint64       gps_millisecond          #取GPS周的毫秒级时间，用于自主载车判断是否更新了的数据\n\
uint8        video_id                 #用于判断是哪一路监控视频\n\
Image        image                    #图像数据\n\
\n\
================================================================================\n\
MSG: autonavigation/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
LocalPose   localPose\n\
GpsPosition gpsPos\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
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
";
  }

  static const char* value(const  ::autonavigation::VideoImage_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::VideoImage_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.unique_key);
    stream.next(m.gps_week);
    stream.next(m.gps_millisecond);
    stream.next(m.video_id);
    stream.next(m.image);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct VideoImage_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::VideoImage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::VideoImage_<ContainerAllocator> & v) 
  {
    s << indent << "unique_key: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.unique_key);
    s << indent << "gps_week: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_week);
    s << indent << "gps_millisecond: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.gps_millisecond);
    s << indent << "video_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.video_id);
    s << indent << "image: ";
s << std::endl;
    Printer< ::autonavigation::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.image);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_VIDEOIMAGE_H

