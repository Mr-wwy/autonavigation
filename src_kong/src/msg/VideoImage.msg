#视频监控相机输出数据

uint32       unique_key               #自主行驶载车唯一标识，用于区分载车的id
uint32       gps_week                 #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期
uint64       gps_millisecond          #取GPS周的毫秒级时间，用于自主载车判断是否更新了的数据
uint8        video_id                 #用于判断是哪一路监控视频
Image        image                    #图像数据
