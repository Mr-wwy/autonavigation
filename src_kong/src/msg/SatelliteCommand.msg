#对应结构体Autonavigation_Satellite_Command
#该命令用于卫星数据链


uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id
uint32     gps_week            #GPS周
uint64     gps_millisecond     #取GPS周的毫秒级时间
uint64     cmd_millisecond     #T0 时间
uint8      cmd_priority        #优先权，0-最高优先级，无条件响应此命令。1-与电台优先级相同，2-低于电台优先级
uint8      cmd_task_mode       #任务模式默认值0，什么都不做，1：遥控模式2：立即进入自主模式3:T0 模式
uint8      cmd_hand_brake      #0：松开手刹, 1：拉紧手刹
uint8      cmd_throttle        #油门量命令，百分比
uint8      cmd_brake           #刹车量命令，百分比
uint8      cmd_shift           #换档命令,0: P, 1: R, 2: N, 3:D, 4: S, 5: L
uint8      cmd_ignition        #0：熄火1：点火
uint8      cmd_light           #灯光
uint8      cmd_reserve1
uint8      cmd_reserve2
uint8      cmd_reserve3
uint8      cmd_reserve4
uint8      cmd_reserve5
uint8      cmd_reserve6
uint8      cmd_reserve7
uint8      cmd_reserve8 



