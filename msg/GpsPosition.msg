#gps info is updated
char          gps_flag               
uint32        gps_week
#millisecond in a week
float64       gps_millisecond   
#经纬度，单位为度     
float64	      longitude		      
float64	      laltitude
#高斯投影位置,cm
float64	      gaussX		      
float64       gaussY
#height,     cm
float64         height  
#欧拉角，单位为0.01度                
int32         pitch                   
int32         roll
#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    
int32         azimuth                 

#north速度，单位为cm/s
int32         northVelocity           
int32         eastVelocity
int32         upVelocity
#系统运行状态
int32         positionStatus	      

#imu三轴陀螺速度 0.01degree/s
int32	        rot_x                      
int32           rot_y                      
int32           rot_z                      

#imu三轴加速度  0.01m/s^2
int32           acc_x                      
int32           acc_y                      
int32           acc_z                      
	
