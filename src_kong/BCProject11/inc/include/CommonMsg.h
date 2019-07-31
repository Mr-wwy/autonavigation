#ifndef __COMMONMSG__
#define __COMMONMSG__



#include <boost/cstdint.hpp>

#define AVS_UDP_PORT 4500
#define ACC_UDP_PORT 4501
#define ACC_WIRELESS_NETMASK  0xC0A801FF    //192.168.1.255
//#define ACC_WIRELESS_NETMASK  0xC0A800FF    //192.168.0.255

#define VEHICLESTATUS "VehicleStatus"
#define CONTROLCOMMAND "ControlCommand"
#define VIDEOIMAGE1 "VideoImage1"
#define VIDEOIMAGE2 "VideoImage2"
#define VIDEOIMAGE3 "VideoImage3"
#define VIDEOIMAGE4 "VideoImage4"
#define LOGITECH "Logitech"

#define MD5_STRING_LEN 16    //md5 校验得到的字符串长度，固定为16字节

//车体上报的状态接口
struct Autonavigation_Vehicle_Status
{

    boost::uint32_t     unique_key;    //自主行驶载车唯一标识
    boost::uint32_t     gps_week;    //GPS周
    boost::uint64_t     gps_millisecond;    //GPS毫秒,以周的零点开始的毫秒数
    double              longitude;    //经度，单位为度
    double              latitude;    //纬度，单位为度
    boost::int64_t      gaussX;    //高斯坐标X
    boost::int64_t      gaussY;    //高斯坐标Y
    boost::int32_t      height;    //距离海平面高度
    boost::int32_t      azimuth;    //航向角，单位0.01度，向东为0，逆时针0～36000
    boost::int32_t      pitch;    //俯仰角，欧拉角，单位0.01度
    boost::int32_t      roll;    //翻滚角，欧拉角，单位0.01度
    boost::int32_t      northVelocity;    //北向速度，单位cm/s
    boost::int32_t      eastVelocity;    //东向速度，单位cm/s
    boost::int32_t      upVelocity;    //向上速度，单位cm/s
    boost::uint32_t     travel_distance;    //T0时刻开始后，前进的里程，单位米
    boost::int32_t      remain_time;    //距离T0时刻还有多少时间，单位毫秒
    boost::uint32_t     time_delay;    //网络延时，单位毫秒
    
    boost::int16_t      steer;    //单位0.01度，前轮转角，左转为正
    boost::uint8_t      fuel;    //剩余油量，百分比
    boost::uint8_t      shift;    //档位
    boost::uint8_t      voltage;    //电压
    boost::uint8_t      throttle;    //当前使用油门量，百分比
    boost::uint8_t      brake;    //当前使用刹车量，百分比
    boost::uint8_t      engine_speed;    //单位100转/分钟，发动机转速
    
    boost::uint8_t      vehicle_speed;    //单位km/h，汽车时速
    boost::uint8_t      water_temperature;    //汽车水温
    boost::uint8_t      control_status;    //控制状态
    boost::uint8_t      error_status;    //错误状态
    boost::uint8_t      barometer1;    //单位0.1kpa
    boost::uint8_t      barometer2;    //单位0.1kpa
    boost::uint8_t      handbrake;    //手刹状态
    boost::uint8_t      engine_status;    //发动机点火状态

    boost::uint8_t      sts_mode;    //0-默认状态, 1-md5文件校验结果
    boost::uint8_t      controllable1;    //Bit8：方向盘 Bit7：油门 Bit6：刹车 Bit5：档位 Bit4：手刹 Bit3：点火 Bit2：熄火 Bit1：预留 相应位为1表示受方舱控制 
    boost::uint8_t      enable;          //能否自主  0：否  1：能
    boost::uint8_t      reserve3;
    boost::uint8_t      reserve4;
    boost::uint8_t      reserve5;
    boost::uint8_t      reserve6;
    boost::uint8_t      reserve7;

    boost::uint8_t      md5_str[MD5_STRING_LEN];    //md5文件校验值
    
};


//遥控命令接口
struct Autonavigation_Control_Command
{
    boost::uint32_t     unique_key;    //自主行驶载车唯一标识，用于区分载车的id
    boost::uint32_t     gps_week;    //GPS周
    boost::uint64_t     gps_millisecond;    //取GPS周的毫秒级时间
    boost::uint64_t     cmd_millisecond;    //T0时间
    boost::int16_t      cmd_steer;    //单位0.01度，前轮转角，左转为正
    boost::uint16_t     cmd_velocity;    //期望速度cm/s
    boost::int8_t       cmd_curvature;    //单位0.005，期望曲率
    boost::uint8_t      cmd_force_start;    //废弃, 不使用
    boost::uint8_t      cmd_task_mode;    //任务模式默认值0，什么都不做，1：遥控模式2：立即进入自主模式3:T0 模式，4: 自主文件校验
    boost::uint8_t      cmd_hand_brake;    //0：松开手刹, 1：拉紧手刹
    boost::uint8_t      cmd_throttle;    //油门量命令，百分比
    boost::uint8_t      cmd_brake;    //刹车量命令，百分比
    boost::uint8_t      cmd_shift;    //换档命令,0: P, 1: R, 2: N, 3:D, 4: S, 5: L
    boost::uint8_t      cmd_ignition;    //0：熄火1：点火
    boost::uint8_t      cmd_light;    //灯光
    boost::uint8_t      cmd_reset;    //复位
    boost::uint8_t      cmd_reserve2;
    boost::uint8_t      cmd_reserve3;
};


//自主文件类型
struct Autonavigation_File_Type
{
    boost::uint32_t     line_num;    //行号
    boost::uint64_t     millisecond;    //单位：毫秒，时间轴
    boost::uint32_t     delta_distance;    //△S，单位cm，表示与上一个点之间的距离。首行为0，表示起点
    double              longitude;    //经度，单位为度
    double              latitude;    //纬度，单位为度
    boost::uint64_t     gaussX;    //高斯坐标X
    boost::uint64_t     gaussY;    //高斯坐标Y
    boost::uint8_t      expect_speed;    //单位km/h，期望行驶时速
    boost::uint8_t      point_type;    //任务点属性
    
};

//卫星车体上报的状态接口,76bytes
struct Autonavigation_Satellite_Vehicle_Status
{

    boost::uint32_t     unique_key;    //自主行驶载车唯一标识
    boost::uint32_t     gps_week;    //GPS周
    boost::uint64_t     gps_millisecond;    //GPS毫秒,以周的零点开始的毫秒数
    double              longitude;    //经度，单位为度
    double              latitude;    //纬度，单位为度
    boost::int64_t      gaussX;    //高斯坐标X
    boost::int64_t      gaussY;    //高斯坐标Y
    boost::int32_t      azimuth;    //航向角，单位0.01度，向东为0，逆时针0～36000
    boost::uint32_t     travel_distance;    //T0时刻开始后，前进的里程，单位米
    boost::int32_t      remain_time;    //距离T0时刻还有多少时间，单位毫秒
    boost::int16_t      steer;    //单位0.01度，前轮转角，左转为正
    boost::uint8_t      fuel;    //剩余油量，百分比
    boost::uint8_t      shift;    //档位
    boost::uint8_t      voltage;    //电压
    boost::uint8_t      throttle;    //当前使用油门量，百分比
    boost::uint8_t      brake;    //当前使用刹车量，百分比
    boost::uint8_t      engine_speed;    //单位100转/分钟，发动机转速  
    boost::uint8_t      vehicle_speed;    //单位km/h，汽车时速
    boost::uint8_t      control_status;    //控制状态
    boost::uint8_t      handbrake;    //手刹状态
    boost::uint8_t      engine_status;    //发动机点火状态 
    boost::uint8_t      controllable1;    //Bit8：方向盘 Bit7：油门 Bit6：刹车 Bit5：档位 Bit4：手刹 Bit3：点火 Bit2：熄火 Bit1：预留 相应位为1表示受方舱控制 
    boost::uint8_t      reserve1;         //预留
    boost::uint8_t      reserve2;
    boost::uint8_t      reserve3;

};


//卫星遥控命令接口,40bytes
struct Autonavigation_Satellite_Command
{
    boost::uint32_t     unique_key;    //自主行驶载车唯一标识，用于区分载车的id
    boost::uint32_t     gps_week;    //GPS周
    boost::uint64_t     gps_millisecond;    //取GPS周的毫秒级时间
    boost::uint64_t     cmd_millisecond;    //T0时间
    boost::uint8_t      cmd_priority;    //优先权，0-最高优先级，无条件响应此命令。1-与电台优先级相同，2-低于电台优先级
    boost::uint8_t      cmd_task_mode;    //任务模式默认值0，什么都不做，1：遥控模式2：立即进入自主模式3:T0 模式
    boost::uint8_t      cmd_hand_brake;    //0：松开手刹, 1：拉紧手刹
    boost::uint8_t      cmd_throttle;    //油门量命令，百分比
    boost::uint8_t      cmd_brake;    //刹车量命令，百分比
    boost::uint8_t      cmd_shift;    //换档命令,0: P, 1: R, 2: N, 3:D, 4: S, 5: L
    boost::uint8_t      cmd_ignition;    //0：熄火1：点火
    boost::uint8_t      cmd_light;    //灯光
    boost::uint8_t      cmd_reserve1;    //预留
    boost::uint8_t      cmd_reserve2;
    boost::uint8_t      cmd_reserve3;
    boost::uint8_t      cmd_reserve4;
    boost::uint8_t      cmd_reserve5;
    boost::uint8_t      cmd_reserve6;
    boost::uint8_t      cmd_reserve7;
    boost::uint8_t      cmd_reserve8;
    
};
#endif
