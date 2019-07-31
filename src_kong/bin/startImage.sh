#!/bin/bash
nohup /home/base/ros_autonavigation_ws/bin/RecvImage 192.168.1.61 admin alv123456 VideoImage1 1 17 15  >/dev/null 2>&1 &
nohup /home/base/ros_autonavigation_ws/bin/RecvImage 192.168.1.62 admin alv123456 VideoImage2 1 10 11  >/dev/null 2>&1 &
nohup /home/base/ros_autonavigation_ws/bin/RecvImage 192.168.1.63 admin alv123456 VideoImage3 1 10 11  >/dev/null 2>&1 &
nohup /home/base/ros_autonavigation_ws/bin/RecvImage 192.168.1.64 admin alv123456 VideoImage4 1 10 11  >/dev/null 2>&1 &

exit 0

