#LocalPose msg

float64 time			  
#centimeter  
int32 dr_x
int32 dr_y
int32 dr_z
#0.01degree
int32 dr_heading
int32 dr_roll
int32 dr_pitch		    

#left_front wheel speed,cm/s
int32 lf_speed
#right_front wheel speed,cm/s		    
int32 rf_speed
#left_rear wheel speed,cm/s		    
int32 lr_speed
#right_rear wheel speed,cm/s		    
int32 rr_speed		    

#imu三轴陀螺速度 0.01degree/s
int32 rot_x
int32 rot_y                      
int32 rot_z                      
#imu三轴加速度  0.01m/s^2
int32 acc_x                      
int32 acc_y                      
int32 acc_z                      

int32 batteryState
int32 batteryEnergy           #0-100

#-3000(right)~3000(left) degree  0.01degree/s
int32 steer   
#0(zero)~100(full)                  
int32 brake                 
#0(zero)~100(full)     
int32 fuel      
#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 
int8  trans                      
int8  VehicleState
#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2
int8  mode                       
#dr运行状态
int8 drStatus
#错误状态		    
int8 errorStatus		    
int8 emergency_flag
int8 hardswitch_on

