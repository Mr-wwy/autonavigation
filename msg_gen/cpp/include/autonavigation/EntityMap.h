/* Auto-generated by genmsg_cpp for file /home/abc/ros_autonavigation_ws/src/autonavigation/msg/EntityMap.msg */
#ifndef AUTONAVIGATION_MESSAGE_ENTITYMAP_H
#define AUTONAVIGATION_MESSAGE_ENTITYMAP_H
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

#include "std_msgs/Header.h"
#include "autonavigation/LocalPose.h"
#include "autonavigation/GpsPosition.h"
#include "autonavigation/VehicleObj.h"
#include "autonavigation/PedestrianObj.h"
#include "autonavigation/LaneObj.h"
#include "autonavigation/FarStaticObj.h"
#include "autonavigation/EntityKeyPoint.h"
#include "autonavigation/RoadMarking.h"
#include "autonavigation/RoadMarking.h"
#include "autonavigation/Sign.h"
#include "autonavigation/Light.h"

namespace autonavigation
{
template <class ContainerAllocator>
struct EntityMap_ {
  typedef EntityMap_<ContainerAllocator> Type;

  EntityMap_()
  : head()
  , localPose()
  , gpsPos()
  , vehicleNum(0)
  , vehicles()
  , vehicleLane()
  , pedestrianNum(0)
  , pedestrians()
  , pedestrianLane()
  , laneNum(0)
  , lanes()
  , currentLane(0)
  , farObjectNum(0)
  , farStaticObjects()
  , keyPoints()
  , keyPointNum(0)
  , parkSpace()
  , parkSpaceNum(0)
  , roadMarkingNum(0)
  , roadMarkings()
  , signNum(0)
  , signs()
  , lightNum(0)
  , lights()
  {
  }

  EntityMap_(const ContainerAllocator& _alloc)
  : head(_alloc)
  , localPose(_alloc)
  , gpsPos(_alloc)
  , vehicleNum(0)
  , vehicles(_alloc)
  , vehicleLane(_alloc)
  , pedestrianNum(0)
  , pedestrians(_alloc)
  , pedestrianLane(_alloc)
  , laneNum(0)
  , lanes(_alloc)
  , currentLane(0)
  , farObjectNum(0)
  , farStaticObjects(_alloc)
  , keyPoints(_alloc)
  , keyPointNum(0)
  , parkSpace(_alloc)
  , parkSpaceNum(0)
  , roadMarkingNum(0)
  , roadMarkings(_alloc)
  , signNum(0)
  , signs(_alloc)
  , lightNum(0)
  , lights(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _head_type;
   ::std_msgs::Header_<ContainerAllocator>  head;

  typedef  ::autonavigation::LocalPose_<ContainerAllocator>  _localPose_type;
   ::autonavigation::LocalPose_<ContainerAllocator>  localPose;

  typedef  ::autonavigation::GpsPosition_<ContainerAllocator>  _gpsPos_type;
   ::autonavigation::GpsPosition_<ContainerAllocator>  gpsPos;

  typedef int32_t _vehicleNum_type;
  int32_t vehicleNum;

  typedef std::vector< ::autonavigation::VehicleObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::VehicleObj_<ContainerAllocator> >::other >  _vehicles_type;
  std::vector< ::autonavigation::VehicleObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::VehicleObj_<ContainerAllocator> >::other >  vehicles;

  typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _vehicleLane_type;
  std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  vehicleLane;

  typedef int32_t _pedestrianNum_type;
  int32_t pedestrianNum;

  typedef std::vector< ::autonavigation::PedestrianObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::PedestrianObj_<ContainerAllocator> >::other >  _pedestrians_type;
  std::vector< ::autonavigation::PedestrianObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::PedestrianObj_<ContainerAllocator> >::other >  pedestrians;

  typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _pedestrianLane_type;
  std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  pedestrianLane;

  typedef int32_t _laneNum_type;
  int32_t laneNum;

  typedef std::vector< ::autonavigation::LaneObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::LaneObj_<ContainerAllocator> >::other >  _lanes_type;
  std::vector< ::autonavigation::LaneObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::LaneObj_<ContainerAllocator> >::other >  lanes;

  typedef int32_t _currentLane_type;
  int32_t currentLane;

  typedef int32_t _farObjectNum_type;
  int32_t farObjectNum;

  typedef std::vector< ::autonavigation::FarStaticObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::FarStaticObj_<ContainerAllocator> >::other >  _farStaticObjects_type;
  std::vector< ::autonavigation::FarStaticObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::FarStaticObj_<ContainerAllocator> >::other >  farStaticObjects;

  typedef std::vector< ::autonavigation::EntityKeyPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::EntityKeyPoint_<ContainerAllocator> >::other >  _keyPoints_type;
  std::vector< ::autonavigation::EntityKeyPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::EntityKeyPoint_<ContainerAllocator> >::other >  keyPoints;

  typedef int32_t _keyPointNum_type;
  int32_t keyPointNum;

  typedef std::vector< ::autonavigation::RoadMarking_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::RoadMarking_<ContainerAllocator> >::other >  _parkSpace_type;
  std::vector< ::autonavigation::RoadMarking_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::RoadMarking_<ContainerAllocator> >::other >  parkSpace;

  typedef int32_t _parkSpaceNum_type;
  int32_t parkSpaceNum;

  typedef int32_t _roadMarkingNum_type;
  int32_t roadMarkingNum;

  typedef std::vector< ::autonavigation::RoadMarking_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::RoadMarking_<ContainerAllocator> >::other >  _roadMarkings_type;
  std::vector< ::autonavigation::RoadMarking_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::RoadMarking_<ContainerAllocator> >::other >  roadMarkings;

  typedef int32_t _signNum_type;
  int32_t signNum;

  typedef std::vector< ::autonavigation::Sign_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::Sign_<ContainerAllocator> >::other >  _signs_type;
  std::vector< ::autonavigation::Sign_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::Sign_<ContainerAllocator> >::other >  signs;

  typedef int32_t _lightNum_type;
  int32_t lightNum;

  typedef std::vector< ::autonavigation::Light_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::Light_<ContainerAllocator> >::other >  _lights_type;
  std::vector< ::autonavigation::Light_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autonavigation::Light_<ContainerAllocator> >::other >  lights;


  typedef boost::shared_ptr< ::autonavigation::EntityMap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonavigation::EntityMap_<ContainerAllocator>  const> ConstPtr;
}; // struct EntityMap
typedef  ::autonavigation::EntityMap_<std::allocator<void> > EntityMap;

typedef boost::shared_ptr< ::autonavigation::EntityMap> EntityMapPtr;
typedef boost::shared_ptr< ::autonavigation::EntityMap const> EntityMapConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::autonavigation::EntityMap_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::autonavigation::EntityMap_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace autonavigation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::autonavigation::EntityMap_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::autonavigation::EntityMap_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::autonavigation::EntityMap_<ContainerAllocator> > {
  static const char* value() 
  {
    return "65c3b05b724f5c39ffa07415395ba91f";
  }

  static const char* value(const  ::autonavigation::EntityMap_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x65c3b05b724f5c39ULL;
  static const uint64_t static_value2 = 0xffa07415395ba91fULL;
};

template<class ContainerAllocator>
struct DataType< ::autonavigation::EntityMap_<ContainerAllocator> > {
  static const char* value() 
  {
    return "autonavigation/EntityMap";
  }

  static const char* value(const  ::autonavigation::EntityMap_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::autonavigation::EntityMap_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header      head\n\
LocalPose   localPose\n\
GpsPosition gpsPos\n\
\n\
int32        vehicleNum\n\
VehicleObj[] vehicles\n\
int8[]       vehicleLane\n\
int32        pedestrianNum\n\
PedestrianObj[] pedestrians\n\
int8[]       pedestrianLane\n\
\n\
int32        laneNum\n\
LaneObj[]    lanes\n\
int32        currentLane\n\
\n\
# static obstacles, 50m farther \n\
int32 farObjectNum\n\
FarStaticObj[] farStaticObjects \n\
\n\
EntityKeyPoint[] keyPoints\n\
int32  keyPointNum\n\
\n\
RoadMarking[] parkSpace\n\
int32  parkSpaceNum\n\
\n\
int32 roadMarkingNum\n\
RoadMarking[] roadMarkings\n\
\n\
int32 signNum      \n\
Sign[] signs\n\
\n\
int32 lightNum      \n\
Light[] lights\n\
\n\
\n\
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
================================================================================\n\
MSG: autonavigation/VehicleObj\n\
#ID num\n\
int32 ID       \n\
# position, cm\n\
int32 centerX\n\
int32 centerY\n\
# cm/s\n\
int32 speed        \n\
# 0.01degree   \n\
int32 speedDirection  \n\
int32 height         \n\
# car, truck, bicycle, big obj, small obj, unknown obj \n\
int32 vehclass     \n\
\n\
geometry_msgs/Polygon vehPolygon      \n\
\n\
int32   vertexNumber\n\
int32[] vertexX\n\
int32[] vertexY\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Polygon\n\
#A specification of a polygon where the first and last points are assumed to be connected\n\
Point32[] points\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: autonavigation/PedestrianObj\n\
#ID num\n\
int32 ID       \n\
# position, cm\n\
int32 centerX         \n\
int32 centerY\n\
#radius\n\
int32 radius\n\
# cm/s\n\
int32 speed        \n\
# 0.01degree , 0-36000 \n\
int32 direction  \n\
int32 height\n\
\n\
\n\
================================================================================\n\
MSG: autonavigation/LaneObj\n\
int32 ID\n\
int32 laneSeq                # 0,1,-1,2,-2,-3,3, from left to right\n\
int32 laneType               # 0: white real, 1:yellow real, 2: white dotted, 3: yellow dotted, 4: predicted\n\
int32 laneProb               # 0-100, probability\n\
int32 lanePtNum\n\
geometry_msgs/Point[]  lanePoint\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: autonavigation/FarStaticObj\n\
int32 VertexNumber\n\
int32[] ConvexX  # do not need many vertex points\n\
int32[] ConvexY\n\
int32 CenterX\n\
int32 CenterY\n\
\n\
\n\
================================================================================\n\
MSG: autonavigation/EntityKeyPoint\n\
int32 x\n\
int32 y\n\
int32 direction   #  0-36000，道路方向\n\
int32 type        #  0: 当前路口， 1: 左出口点， 2：右出口点， 3： 直行出口点\n\
\n\
\n\
================================================================================\n\
MSG: autonavigation/RoadMarking\n\
#地标的中心点\n\
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
MSG: autonavigation/Sign\n\
uint8 pos_flag       #  交通标志位置信息 \n\
int32 x              #  x坐标，厘米为单位\n\
int32 y              #  y坐标，厘米为单位\n\
uint8 sign_type      #  交通标志类型信息\n\
\n\
\n\
#\n\
# pos_flag\n\
#  0: 没有位置信息\n\
#  1: 位置信息有效\n\
\n\
# sign_type:\n\
#  0：无路标        \n\
#  1：禁止左转\n\
#  2：禁止右转\n\
#  3：禁止直行\n\
#  4：禁止向左和向右\n\
#  5：禁止向左和直行\n\
#  6：禁止向右和直行\n\
#  7：禁止驶入\n\
#  8：停车\n\
#  9： 前方学校 （减速）       \n\
#  10：注意行人 （减速）       \n\
#  11：路面不平 （减速）      \n\
#  12：路面施工 （减速）\n\
#  13：直行\n\
#  14：向左转\n\
#  15：向右转\n\
#  16：直行和左转\n\
#  17：直行和右转\n\
#  18：向左和向右\n\
#  19：靠右行驶        \n\
#  20：靠左行驶        \n\
#  21：鸣喇叭 ------- 无    \n\
#  22：环岛行驶 ------- 无     \n\
#  23：人行横道        \n\
#  24：允许掉头        \n\
#  25：停车位          \n\
#  26：禁止掉头  \n\
#  27：限速10公里 （减速）\n\
#  28：解除限速10公里 ------- 无\n\
#  29：限速15公里\n\
#  30：限速20公里\n\
#  31：限速25公里\n\
#  32: 三角修车标志\n\
\n\
================================================================================\n\
MSG: autonavigation/Light\n\
uint8 pos_flag            #位置是否起作用\n\
int32 x\n\
int32 y\n\
uint8 forward_light_type  #直行灯信息\n\
uint8 left_light_type     #左转灯信息\n\
uint8 right_light_type    #右转灯信息\n\
uint8 uturn_light_type    #U Turn灯信息\n\
\n\
";
  }

  static const char* value(const  ::autonavigation::EntityMap_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::autonavigation::EntityMap_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.head);
    stream.next(m.localPose);
    stream.next(m.gpsPos);
    stream.next(m.vehicleNum);
    stream.next(m.vehicles);
    stream.next(m.vehicleLane);
    stream.next(m.pedestrianNum);
    stream.next(m.pedestrians);
    stream.next(m.pedestrianLane);
    stream.next(m.laneNum);
    stream.next(m.lanes);
    stream.next(m.currentLane);
    stream.next(m.farObjectNum);
    stream.next(m.farStaticObjects);
    stream.next(m.keyPoints);
    stream.next(m.keyPointNum);
    stream.next(m.parkSpace);
    stream.next(m.parkSpaceNum);
    stream.next(m.roadMarkingNum);
    stream.next(m.roadMarkings);
    stream.next(m.signNum);
    stream.next(m.signs);
    stream.next(m.lightNum);
    stream.next(m.lights);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct EntityMap_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonavigation::EntityMap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::autonavigation::EntityMap_<ContainerAllocator> & v) 
  {
    s << indent << "head: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.head);
    s << indent << "localPose: ";
s << std::endl;
    Printer< ::autonavigation::LocalPose_<ContainerAllocator> >::stream(s, indent + "  ", v.localPose);
    s << indent << "gpsPos: ";
s << std::endl;
    Printer< ::autonavigation::GpsPosition_<ContainerAllocator> >::stream(s, indent + "  ", v.gpsPos);
    s << indent << "vehicleNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.vehicleNum);
    s << indent << "vehicles[]" << std::endl;
    for (size_t i = 0; i < v.vehicles.size(); ++i)
    {
      s << indent << "  vehicles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::VehicleObj_<ContainerAllocator> >::stream(s, indent + "    ", v.vehicles[i]);
    }
    s << indent << "vehicleLane[]" << std::endl;
    for (size_t i = 0; i < v.vehicleLane.size(); ++i)
    {
      s << indent << "  vehicleLane[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.vehicleLane[i]);
    }
    s << indent << "pedestrianNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pedestrianNum);
    s << indent << "pedestrians[]" << std::endl;
    for (size_t i = 0; i < v.pedestrians.size(); ++i)
    {
      s << indent << "  pedestrians[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::PedestrianObj_<ContainerAllocator> >::stream(s, indent + "    ", v.pedestrians[i]);
    }
    s << indent << "pedestrianLane[]" << std::endl;
    for (size_t i = 0; i < v.pedestrianLane.size(); ++i)
    {
      s << indent << "  pedestrianLane[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.pedestrianLane[i]);
    }
    s << indent << "laneNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.laneNum);
    s << indent << "lanes[]" << std::endl;
    for (size_t i = 0; i < v.lanes.size(); ++i)
    {
      s << indent << "  lanes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::LaneObj_<ContainerAllocator> >::stream(s, indent + "    ", v.lanes[i]);
    }
    s << indent << "currentLane: ";
    Printer<int32_t>::stream(s, indent + "  ", v.currentLane);
    s << indent << "farObjectNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.farObjectNum);
    s << indent << "farStaticObjects[]" << std::endl;
    for (size_t i = 0; i < v.farStaticObjects.size(); ++i)
    {
      s << indent << "  farStaticObjects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::FarStaticObj_<ContainerAllocator> >::stream(s, indent + "    ", v.farStaticObjects[i]);
    }
    s << indent << "keyPoints[]" << std::endl;
    for (size_t i = 0; i < v.keyPoints.size(); ++i)
    {
      s << indent << "  keyPoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::EntityKeyPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.keyPoints[i]);
    }
    s << indent << "keyPointNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.keyPointNum);
    s << indent << "parkSpace[]" << std::endl;
    for (size_t i = 0; i < v.parkSpace.size(); ++i)
    {
      s << indent << "  parkSpace[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::RoadMarking_<ContainerAllocator> >::stream(s, indent + "    ", v.parkSpace[i]);
    }
    s << indent << "parkSpaceNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parkSpaceNum);
    s << indent << "roadMarkingNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.roadMarkingNum);
    s << indent << "roadMarkings[]" << std::endl;
    for (size_t i = 0; i < v.roadMarkings.size(); ++i)
    {
      s << indent << "  roadMarkings[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::RoadMarking_<ContainerAllocator> >::stream(s, indent + "    ", v.roadMarkings[i]);
    }
    s << indent << "signNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.signNum);
    s << indent << "signs[]" << std::endl;
    for (size_t i = 0; i < v.signs.size(); ++i)
    {
      s << indent << "  signs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::Sign_<ContainerAllocator> >::stream(s, indent + "    ", v.signs[i]);
    }
    s << indent << "lightNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lightNum);
    s << indent << "lights[]" << std::endl;
    for (size_t i = 0; i < v.lights.size(); ++i)
    {
      s << indent << "  lights[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonavigation::Light_<ContainerAllocator> >::stream(s, indent + "    ", v.lights[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // AUTONAVIGATION_MESSAGE_ENTITYMAP_H
