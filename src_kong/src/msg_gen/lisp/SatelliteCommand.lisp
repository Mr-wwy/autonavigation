; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude SatelliteCommand.msg.html

(cl:defclass <SatelliteCommand> (roslisp-msg-protocol:ros-message)
  ((unique_key
    :reader unique_key
    :initarg :unique_key
    :type cl:integer
    :initform 0)
   (gps_week
    :reader gps_week
    :initarg :gps_week
    :type cl:integer
    :initform 0)
   (gps_millisecond
    :reader gps_millisecond
    :initarg :gps_millisecond
    :type cl:integer
    :initform 0)
   (cmd_millisecond
    :reader cmd_millisecond
    :initarg :cmd_millisecond
    :type cl:integer
    :initform 0)
   (cmd_priority
    :reader cmd_priority
    :initarg :cmd_priority
    :type cl:fixnum
    :initform 0)
   (cmd_task_mode
    :reader cmd_task_mode
    :initarg :cmd_task_mode
    :type cl:fixnum
    :initform 0)
   (cmd_hand_brake
    :reader cmd_hand_brake
    :initarg :cmd_hand_brake
    :type cl:fixnum
    :initform 0)
   (cmd_throttle
    :reader cmd_throttle
    :initarg :cmd_throttle
    :type cl:fixnum
    :initform 0)
   (cmd_brake
    :reader cmd_brake
    :initarg :cmd_brake
    :type cl:fixnum
    :initform 0)
   (cmd_shift
    :reader cmd_shift
    :initarg :cmd_shift
    :type cl:fixnum
    :initform 0)
   (cmd_ignition
    :reader cmd_ignition
    :initarg :cmd_ignition
    :type cl:fixnum
    :initform 0)
   (cmd_light
    :reader cmd_light
    :initarg :cmd_light
    :type cl:fixnum
    :initform 0)
   (cmd_reserve1
    :reader cmd_reserve1
    :initarg :cmd_reserve1
    :type cl:fixnum
    :initform 0)
   (cmd_reserve2
    :reader cmd_reserve2
    :initarg :cmd_reserve2
    :type cl:fixnum
    :initform 0)
   (cmd_reserve3
    :reader cmd_reserve3
    :initarg :cmd_reserve3
    :type cl:fixnum
    :initform 0)
   (cmd_reserve4
    :reader cmd_reserve4
    :initarg :cmd_reserve4
    :type cl:fixnum
    :initform 0)
   (cmd_reserve5
    :reader cmd_reserve5
    :initarg :cmd_reserve5
    :type cl:fixnum
    :initform 0)
   (cmd_reserve6
    :reader cmd_reserve6
    :initarg :cmd_reserve6
    :type cl:fixnum
    :initform 0)
   (cmd_reserve7
    :reader cmd_reserve7
    :initarg :cmd_reserve7
    :type cl:fixnum
    :initform 0)
   (cmd_reserve8
    :reader cmd_reserve8
    :initarg :cmd_reserve8
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SatelliteCommand (<SatelliteCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SatelliteCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SatelliteCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<SatelliteCommand> is deprecated: use autonavigation-msg:SatelliteCommand instead.")))

(cl:ensure-generic-function 'unique_key-val :lambda-list '(m))
(cl:defmethod unique_key-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:unique_key-val is deprecated.  Use autonavigation-msg:unique_key instead.")
  (unique_key m))

(cl:ensure-generic-function 'gps_week-val :lambda-list '(m))
(cl:defmethod gps_week-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_week-val is deprecated.  Use autonavigation-msg:gps_week instead.")
  (gps_week m))

(cl:ensure-generic-function 'gps_millisecond-val :lambda-list '(m))
(cl:defmethod gps_millisecond-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_millisecond-val is deprecated.  Use autonavigation-msg:gps_millisecond instead.")
  (gps_millisecond m))

(cl:ensure-generic-function 'cmd_millisecond-val :lambda-list '(m))
(cl:defmethod cmd_millisecond-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_millisecond-val is deprecated.  Use autonavigation-msg:cmd_millisecond instead.")
  (cmd_millisecond m))

(cl:ensure-generic-function 'cmd_priority-val :lambda-list '(m))
(cl:defmethod cmd_priority-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_priority-val is deprecated.  Use autonavigation-msg:cmd_priority instead.")
  (cmd_priority m))

(cl:ensure-generic-function 'cmd_task_mode-val :lambda-list '(m))
(cl:defmethod cmd_task_mode-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_task_mode-val is deprecated.  Use autonavigation-msg:cmd_task_mode instead.")
  (cmd_task_mode m))

(cl:ensure-generic-function 'cmd_hand_brake-val :lambda-list '(m))
(cl:defmethod cmd_hand_brake-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_hand_brake-val is deprecated.  Use autonavigation-msg:cmd_hand_brake instead.")
  (cmd_hand_brake m))

(cl:ensure-generic-function 'cmd_throttle-val :lambda-list '(m))
(cl:defmethod cmd_throttle-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_throttle-val is deprecated.  Use autonavigation-msg:cmd_throttle instead.")
  (cmd_throttle m))

(cl:ensure-generic-function 'cmd_brake-val :lambda-list '(m))
(cl:defmethod cmd_brake-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_brake-val is deprecated.  Use autonavigation-msg:cmd_brake instead.")
  (cmd_brake m))

(cl:ensure-generic-function 'cmd_shift-val :lambda-list '(m))
(cl:defmethod cmd_shift-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_shift-val is deprecated.  Use autonavigation-msg:cmd_shift instead.")
  (cmd_shift m))

(cl:ensure-generic-function 'cmd_ignition-val :lambda-list '(m))
(cl:defmethod cmd_ignition-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_ignition-val is deprecated.  Use autonavigation-msg:cmd_ignition instead.")
  (cmd_ignition m))

(cl:ensure-generic-function 'cmd_light-val :lambda-list '(m))
(cl:defmethod cmd_light-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_light-val is deprecated.  Use autonavigation-msg:cmd_light instead.")
  (cmd_light m))

(cl:ensure-generic-function 'cmd_reserve1-val :lambda-list '(m))
(cl:defmethod cmd_reserve1-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve1-val is deprecated.  Use autonavigation-msg:cmd_reserve1 instead.")
  (cmd_reserve1 m))

(cl:ensure-generic-function 'cmd_reserve2-val :lambda-list '(m))
(cl:defmethod cmd_reserve2-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve2-val is deprecated.  Use autonavigation-msg:cmd_reserve2 instead.")
  (cmd_reserve2 m))

(cl:ensure-generic-function 'cmd_reserve3-val :lambda-list '(m))
(cl:defmethod cmd_reserve3-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve3-val is deprecated.  Use autonavigation-msg:cmd_reserve3 instead.")
  (cmd_reserve3 m))

(cl:ensure-generic-function 'cmd_reserve4-val :lambda-list '(m))
(cl:defmethod cmd_reserve4-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve4-val is deprecated.  Use autonavigation-msg:cmd_reserve4 instead.")
  (cmd_reserve4 m))

(cl:ensure-generic-function 'cmd_reserve5-val :lambda-list '(m))
(cl:defmethod cmd_reserve5-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve5-val is deprecated.  Use autonavigation-msg:cmd_reserve5 instead.")
  (cmd_reserve5 m))

(cl:ensure-generic-function 'cmd_reserve6-val :lambda-list '(m))
(cl:defmethod cmd_reserve6-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve6-val is deprecated.  Use autonavigation-msg:cmd_reserve6 instead.")
  (cmd_reserve6 m))

(cl:ensure-generic-function 'cmd_reserve7-val :lambda-list '(m))
(cl:defmethod cmd_reserve7-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve7-val is deprecated.  Use autonavigation-msg:cmd_reserve7 instead.")
  (cmd_reserve7 m))

(cl:ensure-generic-function 'cmd_reserve8-val :lambda-list '(m))
(cl:defmethod cmd_reserve8-val ((m <SatelliteCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve8-val is deprecated.  Use autonavigation-msg:cmd_reserve8 instead.")
  (cmd_reserve8 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SatelliteCommand>) ostream)
  "Serializes a message object of type '<SatelliteCommand>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'unique_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'unique_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'unique_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'unique_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_week)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'gps_week)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'gps_week)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'gps_week)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'cmd_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'cmd_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'cmd_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'cmd_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'cmd_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'cmd_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'cmd_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_priority)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_task_mode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_hand_brake)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_throttle)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_brake)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_shift)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_ignition)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_light)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve5)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve6)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve7)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve8)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SatelliteCommand>) istream)
  "Deserializes a message object of type '<SatelliteCommand>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'unique_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'unique_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'unique_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'unique_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_week)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'gps_week)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'gps_week)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'gps_week)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'cmd_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'cmd_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'cmd_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'cmd_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'cmd_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'cmd_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'cmd_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_priority)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_task_mode)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_hand_brake)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_throttle)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_brake)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_shift)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_ignition)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_light)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve5)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve6)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve7)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve8)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SatelliteCommand>)))
  "Returns string type for a message object of type '<SatelliteCommand>"
  "autonavigation/SatelliteCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SatelliteCommand)))
  "Returns string type for a message object of type 'SatelliteCommand"
  "autonavigation/SatelliteCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SatelliteCommand>)))
  "Returns md5sum for a message object of type '<SatelliteCommand>"
  "76a796826c5946696132c32a06bd9d85")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SatelliteCommand)))
  "Returns md5sum for a message object of type 'SatelliteCommand"
  "76a796826c5946696132c32a06bd9d85")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SatelliteCommand>)))
  "Returns full string definition for message of type '<SatelliteCommand>"
  (cl:format cl:nil "#对应结构体Autonavigation_Satellite_Command~%#该命令用于卫星数据链~%~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周~%uint64     gps_millisecond     #取GPS周的毫秒级时间~%uint64     cmd_millisecond     #T0 时间~%uint8      cmd_priority        #优先权，0-最高优先级，无条件响应此命令。1-与电台优先级相同，2-低于电台优先级~%uint8      cmd_task_mode       #任务模式默认值0，什么都不做，1：遥控模式2：立即进入自主模式3:T0 模式~%uint8      cmd_hand_brake      #0：松开手刹, 1：拉紧手刹~%uint8      cmd_throttle        #油门量命令，百分比~%uint8      cmd_brake           #刹车量命令，百分比~%uint8      cmd_shift           #换档命令,0: P, 1: R, 2: N, 3:D, 4: S, 5: L~%uint8      cmd_ignition        #0：熄火1：点火~%uint8      cmd_light           #灯光~%uint8      cmd_reserve1~%uint8      cmd_reserve2~%uint8      cmd_reserve3~%uint8      cmd_reserve4~%uint8      cmd_reserve5~%uint8      cmd_reserve6~%uint8      cmd_reserve7~%uint8      cmd_reserve8 ~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SatelliteCommand)))
  "Returns full string definition for message of type 'SatelliteCommand"
  (cl:format cl:nil "#对应结构体Autonavigation_Satellite_Command~%#该命令用于卫星数据链~%~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周~%uint64     gps_millisecond     #取GPS周的毫秒级时间~%uint64     cmd_millisecond     #T0 时间~%uint8      cmd_priority        #优先权，0-最高优先级，无条件响应此命令。1-与电台优先级相同，2-低于电台优先级~%uint8      cmd_task_mode       #任务模式默认值0，什么都不做，1：遥控模式2：立即进入自主模式3:T0 模式~%uint8      cmd_hand_brake      #0：松开手刹, 1：拉紧手刹~%uint8      cmd_throttle        #油门量命令，百分比~%uint8      cmd_brake           #刹车量命令，百分比~%uint8      cmd_shift           #换档命令,0: P, 1: R, 2: N, 3:D, 4: S, 5: L~%uint8      cmd_ignition        #0：熄火1：点火~%uint8      cmd_light           #灯光~%uint8      cmd_reserve1~%uint8      cmd_reserve2~%uint8      cmd_reserve3~%uint8      cmd_reserve4~%uint8      cmd_reserve5~%uint8      cmd_reserve6~%uint8      cmd_reserve7~%uint8      cmd_reserve8 ~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SatelliteCommand>))
  (cl:+ 0
     4
     4
     8
     8
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SatelliteCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'SatelliteCommand
    (cl:cons ':unique_key (unique_key msg))
    (cl:cons ':gps_week (gps_week msg))
    (cl:cons ':gps_millisecond (gps_millisecond msg))
    (cl:cons ':cmd_millisecond (cmd_millisecond msg))
    (cl:cons ':cmd_priority (cmd_priority msg))
    (cl:cons ':cmd_task_mode (cmd_task_mode msg))
    (cl:cons ':cmd_hand_brake (cmd_hand_brake msg))
    (cl:cons ':cmd_throttle (cmd_throttle msg))
    (cl:cons ':cmd_brake (cmd_brake msg))
    (cl:cons ':cmd_shift (cmd_shift msg))
    (cl:cons ':cmd_ignition (cmd_ignition msg))
    (cl:cons ':cmd_light (cmd_light msg))
    (cl:cons ':cmd_reserve1 (cmd_reserve1 msg))
    (cl:cons ':cmd_reserve2 (cmd_reserve2 msg))
    (cl:cons ':cmd_reserve3 (cmd_reserve3 msg))
    (cl:cons ':cmd_reserve4 (cmd_reserve4 msg))
    (cl:cons ':cmd_reserve5 (cmd_reserve5 msg))
    (cl:cons ':cmd_reserve6 (cmd_reserve6 msg))
    (cl:cons ':cmd_reserve7 (cmd_reserve7 msg))
    (cl:cons ':cmd_reserve8 (cmd_reserve8 msg))
))
