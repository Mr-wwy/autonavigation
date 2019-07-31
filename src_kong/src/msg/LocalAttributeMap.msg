# obstacle type definition
# 高4位
# 0: 水泥， 1： 砂石, 2: 泥土， 3：草地， 4：未知
# 低4位
# 0： 可通行， 1: 遮挡， 2： 悬挂， 3： 水坑， 4： 危险， 5： 灌木丛，  6： 路牙
# 7： 护栏，   8： 房子， 9： 行人， 10: 车辆，11：负障碍，12：正障碍

Header      head
LocalPose   localPose
GpsPosition gpsPos

int32 mapWidth
int32 mapHeight
int32 gridWidth
int32 gridHeight
int32 vehicleGridX
int32 vehicleGridY
ObstaclePoint[] obstacles

