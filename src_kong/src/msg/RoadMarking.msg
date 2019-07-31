#地标的中心点
geometry_msgs/Point posCenter

#地标的四个顶点
geometry_msgs/Point pointBottomLeft
geometry_msgs/Point pointBottomRight
geometry_msgs/Point pointTopLeft
geometry_msgs/Point pointTopRight

int32 direction        # 停止线或者斑马线的方向,单位0.01度,与x轴的夹角，逆时针0-36000
int32 width            # 地标的宽度
uint8 sign_type        # 地标的类型,    type = 1,停止线；type = 2, 斑马线；type = 3,直行箭头；type = 4,左转箭头；
                       # type = 5,右转箭头；type = 6,直行左转箭头；type = 7,直行右转箭头；
                       # type = 8,左转掉头箭头；type = 9,掉头箭头；type = 10,菱形；type = 11，泊车位；


