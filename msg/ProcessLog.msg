

uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id
uint32     gps_week            #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期
uint64     gps_millisecond     #GPS毫秒，以周的零点开始的毫秒数
uint8[]    proc_name           #进程名称
uint8[]    proc_log            #日志信息


