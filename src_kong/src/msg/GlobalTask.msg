Header      head
LocalPose   localPose
GpsPosition gpsPos


int32             pointNum
GlobalPoint[]     globalPoints

int32             propNum
float64[]         propArrays

GlobalPoint       ReturnGlobalPoint
int32             cType            #当前环境信息
uint8             taskState        #定位错误标志位
uint8             locationSource   #定位选择标志位
uint8             speedLimit       #限速
