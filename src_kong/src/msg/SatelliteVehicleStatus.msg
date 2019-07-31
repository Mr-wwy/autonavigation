#对应结构体Autonavigation_Satellite_Vehicle_Status

uint32     unique_key           #自主行驶载车唯一标识
uint32     gps_week             #GPS周
uint64     gps_millisecond      #GPS毫秒,以周的零点开始的毫秒数
float64    longitude            #经度，单位为度
float64    latitude             #纬度，单位为度
int64      gaussX               #高斯坐标X
int64      gaussY               #高斯坐标Y
int32      azimuth              #航向角，单位0.01度，向东为0，逆时针0～36000
uint32     travel_distance      #T0时刻开始后，前进的里程，单位米
int32      remain_time          #距离T0时刻还有多少时间，单位毫秒
int16      steer                #单位0.01度，前轮转角，左转为正
uint8      fuel                 #剩余油量，百分比
uint8      shift                #档位
uint8      voltage              #电压
uint8      throttle             #当前使用油门量，百分比
uint8      brake                #当前使用刹车量，百分比
uint8      engine_speed         #单位100转/分钟，发动机转速
uint8      vehicle_speed        #单位km/h，汽车时速
uint8      control_status       #控制状态
uint8      handbrake            #手刹状态
uint8      engine_status        #发动机点火状态
uint8      controllable1        #Bit8：方向盘 Bit7：油门 Bit6：刹车 Bit5：档位 Bit4：手刹 Bit3：点火 Bit2：熄火 Bit1：预留 相应位为1表示受方舱控制 

uint8      reserve1             #预留
uint8      reserve2 
uint8      reserve3 


