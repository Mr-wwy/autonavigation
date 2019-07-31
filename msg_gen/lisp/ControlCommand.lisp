; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude ControlCommand.msg.html

(cl:defclass <ControlCommand> (roslisp-msg-protocol:ros-message)
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
   (cmd_steer
    :reader cmd_steer
    :initarg :cmd_steer
    :type cl:fixnum
    :initform 0)
   (cmd_velocity
    :reader cmd_velocity
    :initarg :cmd_velocity
    :type cl:fixnum
    :initform 0)
   (cmd_curvature
    :reader cmd_curvature
    :initarg :cmd_curvature
    :type cl:fixnum
    :initform 0)
   (cmd_force_start
    :reader cmd_force_start
    :initarg :cmd_force_start
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
   (cmd_reset
    :reader cmd_reset
    :initarg :cmd_reset
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
    :initform 0))
)

(cl:defclass ControlCommand (<ControlCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ControlCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ControlCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<ControlCommand> is deprecated: use autonavigation-msg:ControlCommand instead.")))

(cl:ensure-generic-function 'unique_key-val :lambda-list '(m))
(cl:defmethod unique_key-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:unique_key-val is deprecated.  Use autonavigation-msg:unique_key instead.")
  (unique_key m))

(cl:ensure-generic-function 'gps_week-val :lambda-list '(m))
(cl:defmethod gps_week-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_week-val is deprecated.  Use autonavigation-msg:gps_week instead.")
  (gps_week m))

(cl:ensure-generic-function 'gps_millisecond-val :lambda-list '(m))
(cl:defmethod gps_millisecond-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_millisecond-val is deprecated.  Use autonavigation-msg:gps_millisecond instead.")
  (gps_millisecond m))

(cl:ensure-generic-function 'cmd_millisecond-val :lambda-list '(m))
(cl:defmethod cmd_millisecond-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_millisecond-val is deprecated.  Use autonavigation-msg:cmd_millisecond instead.")
  (cmd_millisecond m))

(cl:ensure-generic-function 'cmd_steer-val :lambda-list '(m))
(cl:defmethod cmd_steer-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_steer-val is deprecated.  Use autonavigation-msg:cmd_steer instead.")
  (cmd_steer m))

(cl:ensure-generic-function 'cmd_velocity-val :lambda-list '(m))
(cl:defmethod cmd_velocity-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_velocity-val is deprecated.  Use autonavigation-msg:cmd_velocity instead.")
  (cmd_velocity m))

(cl:ensure-generic-function 'cmd_curvature-val :lambda-list '(m))
(cl:defmethod cmd_curvature-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_curvature-val is deprecated.  Use autonavigation-msg:cmd_curvature instead.")
  (cmd_curvature m))

(cl:ensure-generic-function 'cmd_force_start-val :lambda-list '(m))
(cl:defmethod cmd_force_start-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_force_start-val is deprecated.  Use autonavigation-msg:cmd_force_start instead.")
  (cmd_force_start m))

(cl:ensure-generic-function 'cmd_task_mode-val :lambda-list '(m))
(cl:defmethod cmd_task_mode-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_task_mode-val is deprecated.  Use autonavigation-msg:cmd_task_mode instead.")
  (cmd_task_mode m))

(cl:ensure-generic-function 'cmd_hand_brake-val :lambda-list '(m))
(cl:defmethod cmd_hand_brake-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_hand_brake-val is deprecated.  Use autonavigation-msg:cmd_hand_brake instead.")
  (cmd_hand_brake m))

(cl:ensure-generic-function 'cmd_throttle-val :lambda-list '(m))
(cl:defmethod cmd_throttle-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_throttle-val is deprecated.  Use autonavigation-msg:cmd_throttle instead.")
  (cmd_throttle m))

(cl:ensure-generic-function 'cmd_brake-val :lambda-list '(m))
(cl:defmethod cmd_brake-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_brake-val is deprecated.  Use autonavigation-msg:cmd_brake instead.")
  (cmd_brake m))

(cl:ensure-generic-function 'cmd_shift-val :lambda-list '(m))
(cl:defmethod cmd_shift-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_shift-val is deprecated.  Use autonavigation-msg:cmd_shift instead.")
  (cmd_shift m))

(cl:ensure-generic-function 'cmd_ignition-val :lambda-list '(m))
(cl:defmethod cmd_ignition-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_ignition-val is deprecated.  Use autonavigation-msg:cmd_ignition instead.")
  (cmd_ignition m))

(cl:ensure-generic-function 'cmd_light-val :lambda-list '(m))
(cl:defmethod cmd_light-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_light-val is deprecated.  Use autonavigation-msg:cmd_light instead.")
  (cmd_light m))

(cl:ensure-generic-function 'cmd_reset-val :lambda-list '(m))
(cl:defmethod cmd_reset-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reset-val is deprecated.  Use autonavigation-msg:cmd_reset instead.")
  (cmd_reset m))

(cl:ensure-generic-function 'cmd_reserve2-val :lambda-list '(m))
(cl:defmethod cmd_reserve2-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve2-val is deprecated.  Use autonavigation-msg:cmd_reserve2 instead.")
  (cmd_reserve2 m))

(cl:ensure-generic-function 'cmd_reserve3-val :lambda-list '(m))
(cl:defmethod cmd_reserve3-val ((m <ControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve3-val is deprecated.  Use autonavigation-msg:cmd_reserve3 instead.")
  (cmd_reserve3 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ControlCommand>) ostream)
  "Serializes a message object of type '<ControlCommand>"
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
  (cl:let* ((signed (cl:slot-value msg 'cmd_steer)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_velocity)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'cmd_velocity)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'cmd_curvature)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_force_start)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_task_mode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_hand_brake)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_throttle)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_brake)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_shift)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_ignition)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_light)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reset)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve3)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ControlCommand>) istream)
  "Deserializes a message object of type '<ControlCommand>"
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
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'cmd_steer) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_velocity)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'cmd_velocity)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'cmd_curvature) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_force_start)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_task_mode)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_hand_brake)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_throttle)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_brake)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_shift)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_ignition)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_light)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reset)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve3)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ControlCommand>)))
  "Returns string type for a message object of type '<ControlCommand>"
  "autonavigation/ControlCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ControlCommand)))
  "Returns string type for a message object of type 'ControlCommand"
  "autonavigation/ControlCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ControlCommand>)))
  "Returns md5sum for a message object of type '<ControlCommand>"
  "eb8863d18189796aa503b7d213a2f475")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ControlCommand)))
  "Returns md5sum for a message object of type 'ControlCommand"
  "eb8863d18189796aa503b7d213a2f475")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ControlCommand>)))
  "Returns full string definition for message of type '<ControlCommand>"
  (cl:format cl:nil "#对应结构体Autonavigation_Control_Command~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周~%uint64     gps_millisecond     #取GPS周的毫秒级时间~%uint64     cmd_millisecond     #T0 时间~%int16      cmd_steer           #单位0.01度，前轮转角，左转为正~%uint16     cmd_velocity        #期望速度cm/s~%int8       cmd_curvature       #单位0.005，期望曲率~%uint8      cmd_force_start     #1：强制开始发车~%uint8      cmd_task_mode       #任务模式1：遥控模式2：自主模式~%uint8      cmd_hand_brake      #0：松开手刹, 1：拉紧手刹~%uint8      cmd_throttle        #油门量命令，百分比~%uint8      cmd_brake           #刹车量命令，百分比~%uint8      cmd_shift           #换档命令~%uint8      cmd_ignition        #0：熄火1：点火~%uint8      cmd_light           #灯光~%uint8      cmd_reset           #复位~%uint8      cmd_reserve2        #预留~%uint8      cmd_reserve3 ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ControlCommand)))
  "Returns full string definition for message of type 'ControlCommand"
  (cl:format cl:nil "#对应结构体Autonavigation_Control_Command~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周~%uint64     gps_millisecond     #取GPS周的毫秒级时间~%uint64     cmd_millisecond     #T0 时间~%int16      cmd_steer           #单位0.01度，前轮转角，左转为正~%uint16     cmd_velocity        #期望速度cm/s~%int8       cmd_curvature       #单位0.005，期望曲率~%uint8      cmd_force_start     #1：强制开始发车~%uint8      cmd_task_mode       #任务模式1：遥控模式2：自主模式~%uint8      cmd_hand_brake      #0：松开手刹, 1：拉紧手刹~%uint8      cmd_throttle        #油门量命令，百分比~%uint8      cmd_brake           #刹车量命令，百分比~%uint8      cmd_shift           #换档命令~%uint8      cmd_ignition        #0：熄火1：点火~%uint8      cmd_light           #灯光~%uint8      cmd_reset           #复位~%uint8      cmd_reserve2        #预留~%uint8      cmd_reserve3 ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ControlCommand>))
  (cl:+ 0
     4
     4
     8
     8
     2
     2
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
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ControlCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'ControlCommand
    (cl:cons ':unique_key (unique_key msg))
    (cl:cons ':gps_week (gps_week msg))
    (cl:cons ':gps_millisecond (gps_millisecond msg))
    (cl:cons ':cmd_millisecond (cmd_millisecond msg))
    (cl:cons ':cmd_steer (cmd_steer msg))
    (cl:cons ':cmd_velocity (cmd_velocity msg))
    (cl:cons ':cmd_curvature (cmd_curvature msg))
    (cl:cons ':cmd_force_start (cmd_force_start msg))
    (cl:cons ':cmd_task_mode (cmd_task_mode msg))
    (cl:cons ':cmd_hand_brake (cmd_hand_brake msg))
    (cl:cons ':cmd_throttle (cmd_throttle msg))
    (cl:cons ':cmd_brake (cmd_brake msg))
    (cl:cons ':cmd_shift (cmd_shift msg))
    (cl:cons ':cmd_ignition (cmd_ignition msg))
    (cl:cons ':cmd_light (cmd_light msg))
    (cl:cons ':cmd_reset (cmd_reset msg))
    (cl:cons ':cmd_reserve2 (cmd_reserve2 msg))
    (cl:cons ':cmd_reserve3 (cmd_reserve3 msg))
))
