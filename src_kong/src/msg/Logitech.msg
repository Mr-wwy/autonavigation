#罗技力G27反馈方向盘

int16 SteeringWheel #规定右正左负值变化：0-540 
uint8 Clutch #离合器值：0-100，放松状态为0
uint8 Brake #刹车值:0-100，放松状态为0
uint8 SasPedal #油门值:0-100,放松状态为0
uint8 ShiftPaddlesL #左换档拨片定义为降档,空状态为0,按下为1
uint8 ShiftPaddlesR #右换档拨片定义为升档，空状态为0,按下为1
uint8 Ignition #点火为1,熄火为2,空状态为0
uint8 HandBrake #松手刹为1,拉手刹为2,空状态为0
uint8 StickShift #自动档，由十字架上下按键操作 0为P，1为R，2为N，3为D,4为S, 5为L 6为空档，7为切换到换档拨片
uint8 CrossL #十字架左键
uint8 CrossR #十字架右键
uint8 ManualTransmission #手动档换档杆:第一排依次为1,3,5档，第二排依次为2,4,6,R档
uint8[]  WheelFunctionKey #方向盘6个红色功能键 
uint8 ConcatenonSignal #未连接初始值为0,连接成功为1
uint8 cmd_reserve2 #预留
uint8 cmd_reserve3 #预留
uint8 cmd_reserve4 #预留
uint8 cmd_reserve5 #预留
