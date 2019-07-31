; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude MissionManage.msg.html

(cl:defclass <MissionManage> (roslisp-msg-protocol:ros-message)
  ((current_key
    :reader current_key
    :initarg :current_key
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
   (reserve1
    :reader reserve1
    :initarg :reserve1
    :type cl:fixnum
    :initform 0)
   (reserve2
    :reader reserve2
    :initarg :reserve2
    :type cl:fixnum
    :initform 0)
   (reserve3
    :reader reserve3
    :initarg :reserve3
    :type cl:fixnum
    :initform 0)
   (reserve4
    :reader reserve4
    :initarg :reserve4
    :type cl:fixnum
    :initform 0)
   (reserve5
    :reader reserve5
    :initarg :reserve5
    :type cl:fixnum
    :initform 0)
   (reserve6
    :reader reserve6
    :initarg :reserve6
    :type cl:fixnum
    :initform 0)
   (reserve7
    :reader reserve7
    :initarg :reserve7
    :type cl:fixnum
    :initform 0)
   (reserve8
    :reader reserve8
    :initarg :reserve8
    :type cl:fixnum
    :initform 0))
)

(cl:defclass MissionManage (<MissionManage>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionManage>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionManage)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<MissionManage> is deprecated: use autonavigation-msg:MissionManage instead.")))

(cl:ensure-generic-function 'current_key-val :lambda-list '(m))
(cl:defmethod current_key-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:current_key-val is deprecated.  Use autonavigation-msg:current_key instead.")
  (current_key m))

(cl:ensure-generic-function 'gps_week-val :lambda-list '(m))
(cl:defmethod gps_week-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_week-val is deprecated.  Use autonavigation-msg:gps_week instead.")
  (gps_week m))

(cl:ensure-generic-function 'gps_millisecond-val :lambda-list '(m))
(cl:defmethod gps_millisecond-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_millisecond-val is deprecated.  Use autonavigation-msg:gps_millisecond instead.")
  (gps_millisecond m))

(cl:ensure-generic-function 'reserve1-val :lambda-list '(m))
(cl:defmethod reserve1-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve1-val is deprecated.  Use autonavigation-msg:reserve1 instead.")
  (reserve1 m))

(cl:ensure-generic-function 'reserve2-val :lambda-list '(m))
(cl:defmethod reserve2-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve2-val is deprecated.  Use autonavigation-msg:reserve2 instead.")
  (reserve2 m))

(cl:ensure-generic-function 'reserve3-val :lambda-list '(m))
(cl:defmethod reserve3-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve3-val is deprecated.  Use autonavigation-msg:reserve3 instead.")
  (reserve3 m))

(cl:ensure-generic-function 'reserve4-val :lambda-list '(m))
(cl:defmethod reserve4-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve4-val is deprecated.  Use autonavigation-msg:reserve4 instead.")
  (reserve4 m))

(cl:ensure-generic-function 'reserve5-val :lambda-list '(m))
(cl:defmethod reserve5-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve5-val is deprecated.  Use autonavigation-msg:reserve5 instead.")
  (reserve5 m))

(cl:ensure-generic-function 'reserve6-val :lambda-list '(m))
(cl:defmethod reserve6-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve6-val is deprecated.  Use autonavigation-msg:reserve6 instead.")
  (reserve6 m))

(cl:ensure-generic-function 'reserve7-val :lambda-list '(m))
(cl:defmethod reserve7-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve7-val is deprecated.  Use autonavigation-msg:reserve7 instead.")
  (reserve7 m))

(cl:ensure-generic-function 'reserve8-val :lambda-list '(m))
(cl:defmethod reserve8-val ((m <MissionManage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve8-val is deprecated.  Use autonavigation-msg:reserve8 instead.")
  (reserve8 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionManage>) ostream)
  "Serializes a message object of type '<MissionManage>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'current_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'current_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'current_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'current_key)) ostream)
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
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve5)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve6)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve7)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve8)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionManage>) istream)
  "Deserializes a message object of type '<MissionManage>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'current_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'current_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'current_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'current_key)) (cl:read-byte istream))
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
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve5)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve6)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve7)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve8)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionManage>)))
  "Returns string type for a message object of type '<MissionManage>"
  "autonavigation/MissionManage")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionManage)))
  "Returns string type for a message object of type 'MissionManage"
  "autonavigation/MissionManage")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionManage>)))
  "Returns md5sum for a message object of type '<MissionManage>"
  "e6b03ffe4a0683b6ce7c6780ec3601c5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionManage)))
  "Returns md5sum for a message object of type 'MissionManage"
  "e6b03ffe4a0683b6ce7c6780ec3601c5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionManage>)))
  "Returns full string definition for message of type '<MissionManage>"
  (cl:format cl:nil "uint32       current_key        #当前使用和显示载车的id~%uint32       gps_week           #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期~%uint64       gps_millisecond    #GPS毫秒，以周的零点开始的毫秒数~%uint8        reserve1           #预留~%uint8        reserve2~%uint8        reserve3~%uint8        reserve4~%uint8        reserve5~%uint8        reserve6~%uint8        reserve7~%uint8        reserve8~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionManage)))
  "Returns full string definition for message of type 'MissionManage"
  (cl:format cl:nil "uint32       current_key        #当前使用和显示载车的id~%uint32       gps_week           #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期~%uint64       gps_millisecond    #GPS毫秒，以周的零点开始的毫秒数~%uint8        reserve1           #预留~%uint8        reserve2~%uint8        reserve3~%uint8        reserve4~%uint8        reserve5~%uint8        reserve6~%uint8        reserve7~%uint8        reserve8~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionManage>))
  (cl:+ 0
     4
     4
     8
     1
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionManage>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionManage
    (cl:cons ':current_key (current_key msg))
    (cl:cons ':gps_week (gps_week msg))
    (cl:cons ':gps_millisecond (gps_millisecond msg))
    (cl:cons ':reserve1 (reserve1 msg))
    (cl:cons ':reserve2 (reserve2 msg))
    (cl:cons ':reserve3 (reserve3 msg))
    (cl:cons ':reserve4 (reserve4 msg))
    (cl:cons ':reserve5 (reserve5 msg))
    (cl:cons ':reserve6 (reserve6 msg))
    (cl:cons ':reserve7 (reserve7 msg))
    (cl:cons ':reserve8 (reserve8 msg))
))
