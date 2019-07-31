#! /bin/bash  
ps -ef|grep RecvVehicleStatus |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep SendControlCommand |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep DrivingSimulation |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep ShowCameraImage |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep MyPing |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep roscore |grep -v grep|awk  '{print "kill  " $2}' |sh
sleep 1
source /opt/ros/indigo/setup.bash  
nohup roscore >/dev/null 2>&1 &
sleep 1
nohup /home/base/ros_autonavigation_ws/bin/SendControlCommand  >/dev/null 2>&1 &
nohup /home/base/ros_autonavigation_ws/bin/RecvVehicleStatus  >/dev/null 2>&1 &
#nohup /home/base/ros_autonavigation_ws/bin/MyPing 192.168.1.100  >/dev/null 2>&1 &
nohup /home/base/ros_autonavigation_ws/bin/ShowCameraImage  >/dev/null 2>&1 &
nohup /home/base/ros_autonavigation_ws/bin/Driving  >/dev/null 2>&1 &

exit 0


