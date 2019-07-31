#!/bin/bash
ps -ef|grep RecvVehicleStatus |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep SendControlCommand |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep DrivingSimulation |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep ShowCameraImage |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep MyPing |grep -v grep|awk  '{print "kill  " $2}' |sh
ps -ef|grep roscore |grep -v grep|awk  '{print "kill  " $2}' |sh

exit 0
