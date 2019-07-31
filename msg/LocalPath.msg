######下面为一系列宏定义#########

# command to vehicle
#ES:紧急停车；ST：停车；AD_SPEED:前进速度跟踪；AD_DISTANCE:前进定距跟踪；AD_POINT:前进定点停车；
#BK_SPEED:后退速度跟踪；BK_DISTANCE:后退定距跟踪；IG：点火；FO：熄火。

uint16 COMMAND_ES=200
uint16 COMMAND_ST=201
uint16 COMMAND_AD_SPEED=202
uint16 COMMAND_AD_DISTANCE=203
uint16 COMMAND_AD_POINT=204
uint16 COMMAND_BK_SPEED=205
uint16 COMMAND_BK_POINT=206
uint16 COMMAND_IG=207
uint16 COMMAND_FO=208

#系统状态
#RS-直道; RO-避障；RT-弯道；RB-分叉；
#HS-高速直道；HF-高速尾随；HT-高速弯道；HB-高速分叉；
#CN-越野；CO-越野避障
#MC-遥控；MR-遥控侦察
#IT-初始化；EM-异常; FI-终点停车 RD-准就绪 SP-停车
#SG-笔直直行
uint16 SYS_STATE_RS=100
uint16 SYS_STATE_RO=101
uint16 SYS_STATE_RT=102
uint16 SYS_STATE_RB=103
uint16 SYS_STATE_CN=104
uint16 SYS_STATE_CO=105
uint16 SYS_STATE_SG=106
uint16 SYS_STATE_HS=107
uint16 SYS_STATE_HF=108
uint16 SYS_STATE_HT=109
uint16 SYS_STATE_HB=110
uint16 SYS_STATE_RD=111
uint16 SYS_STATE_IT=112
uint16 SYS_STATE_MC=113
uint16 SYS_STATE_MR=114
uint16 SYS_STATE_EM=115
uint16 SYS_STATE_SP=116
uint16 SYS_STATE_FI=117

# plan state #
#PR-得到规划路径    NP-没有道路可通行     EC-紧急情况
#GT-到达目标点       PB－上一次的道路      RR-使用参考路
# WT-waiting       REPLAN 重规划       NORMAL_PLAN
uint16 PLAN_STATE_PR=50
uint16 PLAN_STATE_NP=51
uint16 PLAN_STATE_GT=52
uint16 PLAN_STATE_PB=53
uint16 PLAN_STATE_RR=54
uint16 PLAN_STATE_WT=55
uint16 PLAN_STATE_EC=56
uint16 PLAN_STATE_REPLAN=57
uint16 PLAN_STATE_NORMAL_PLAN=58

####宏定义结束############

##########################
####规划输出消息主体#######
##########################

Header      head
LocalPose   localPose
GpsPosition gpsPos

uint32		        plan_data_id 		                #局部路径规划帧号
LocalCoordinate         plan_frame				#冻结坐标 
uint16                  planOutputMode                          #规划输出模式，0-输出路径，1-输出期望速度和曲率                          
uint16		        is_ok					#路径数据有效标志：0 - 无效 1 - 有效
uint16		        effective_point_num	                #局部路径规划的有效点数目
WayPoint[]	        path	       	                        #局部路径规划点集,ros的Point32类型，单位厘米
PathProperty[]	        path_property
uint16                  vehicle_command		                #系统事件,规划给控制的命令，如点火，
uint16           	sys_state
uint16  	        plan_state				#系统状态  
int32		        speed                                   #速度: 公里/小时
VehicleObj              vehicle2Flo
WayPoint                point2Stop
float64                 expVelocity                             #期望速度，值域0.0~100.0，单位是m/s，double类型
float64                 expCurvature                            #期望曲率，单位是1/m,满足右手规则


