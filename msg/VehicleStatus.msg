#对应结构体Autonavigation_Vehicle_Status

uint32     unique_key           #自主行驶载车唯一标识
uint32     gps_week             #GPS周
uint64     gps_millisecond      #GPS毫秒,以周的零点开始的毫秒数
float64    longitude            #经度，单位为度
float64    latitude             #纬度，单位为度
int64      gaussX               #高斯坐标X
int64      gaussY               #高斯坐标Y
int32      height               #距离海平面高度
int32      azimuth              #航向角，单位0.01度，向东为0，逆时针0～36000
int32      pitch                #俯仰角，欧拉角，单位0.01度
int32      roll                 #翻滚角，欧拉角，单位0.01度
int32      northVelocity        #北向速度，单位cm/s
int32      eastVelocity         #东向速度，单位cm/s
int32      upVelocity           #向上速度，单位cm/s
uint32     travel_distance      #T0时刻开始后，前进的里程，单位米
int32      remain_time          #距离T0时刻还有多少时间，单位毫秒
uint32     time_delay           #网络延时，单位毫秒
int16      steer                #单位0.01度，前轮转角，左转为正
uint8      fuel                 #剩余油量，百分比
uint8      shift                #档位
uint8      voltage              #电压
uint8      throttle             #当前使用油门量，百分比
uint8      brake                #当前使用刹车量，百分比
uint8      engine_speed         #单位100转/分钟，发动机转速
uint8      vehicle_speed        #单位km/h，汽车时速
uint8      water_temperature    #汽车水温
uint8      control_status       #控制状态
uint8      error_status         #错误状态
uint8      barometer1           #单位0.1kpa
uint8      barometer2           #单位0.1kpa
uint8      handbrake            #手刹状态    0：手刹放开 1：手刹拉紧
uint8      engine_status        #发动机点火状态  0：发动机熄火  1：发动机运行  
uint8      sts_mode             #0-默认状态, 1-md5文件校验结果
uint8      controllable1        #Bit8：方向盘 Bit7：油门 Bit6：刹车 Bit5：档位 Bit4：手刹 Bit3：点火 Bit2：熄火 Bit1：预留 相应位为1表示受方舱控制 
uint8      enable               #能否进行自主 0：不能  1：能
uint8      reserve3             #record_status
uint8      reserve4 
uint8      reserve5 
uint8      reserve6 
uint8      reserve7 
uint8[]    md5_str              #md5文件校验值

