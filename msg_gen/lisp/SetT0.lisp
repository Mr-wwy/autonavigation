; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude SetT0.msg.html

(cl:defclass <SetT0> (roslisp-msg-protocol:ros-message)
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
    :initform 0))
)

(cl:defclass SetT0 (<SetT0>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetT0>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetT0)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<SetT0> is deprecated: use autonavigation-msg:SetT0 instead.")))

(cl:ensure-generic-function 'unique_key-val :lambda-list '(m))
(cl:defmethod unique_key-val ((m <SetT0>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:unique_key-val is deprecated.  Use autonavigation-msg:unique_key instead.")
  (unique_key m))

(cl:ensure-generic-function 'gps_week-val :lambda-list '(m))
(cl:defmethod gps_week-val ((m <SetT0>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_week-val is deprecated.  Use autonavigation-msg:gps_week instead.")
  (gps_week m))

(cl:ensure-generic-function 'gps_millisecond-val :lambda-list '(m))
(cl:defmethod gps_millisecond-val ((m <SetT0>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_millisecond-val is deprecated.  Use autonavigation-msg:gps_millisecond instead.")
  (gps_millisecond m))

(cl:ensure-generic-function 'cmd_millisecond-val :lambda-list '(m))
(cl:defmethod cmd_millisecond-val ((m <SetT0>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_millisecond-val is deprecated.  Use autonavigation-msg:cmd_millisecond instead.")
  (cmd_millisecond m))

(cl:ensure-generic-function 'cmd_reserve1-val :lambda-list '(m))
(cl:defmethod cmd_reserve1-val ((m <SetT0>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve1-val is deprecated.  Use autonavigation-msg:cmd_reserve1 instead.")
  (cmd_reserve1 m))

(cl:ensure-generic-function 'cmd_reserve2-val :lambda-list '(m))
(cl:defmethod cmd_reserve2-val ((m <SetT0>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve2-val is deprecated.  Use autonavigation-msg:cmd_reserve2 instead.")
  (cmd_reserve2 m))

(cl:ensure-generic-function 'cmd_reserve3-val :lambda-list '(m))
(cl:defmethod cmd_reserve3-val ((m <SetT0>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve3-val is deprecated.  Use autonavigation-msg:cmd_reserve3 instead.")
  (cmd_reserve3 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetT0>) ostream)
  "Serializes a message object of type '<SetT0>"
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
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve3)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetT0>) istream)
  "Deserializes a message object of type '<SetT0>"
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
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve3)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetT0>)))
  "Returns string type for a message object of type '<SetT0>"
  "autonavigation/SetT0")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetT0)))
  "Returns string type for a message object of type 'SetT0"
  "autonavigation/SetT0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetT0>)))
  "Returns md5sum for a message object of type '<SetT0>"
  "9ae7495e5be2c0bedf8ce7469cc06a96")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetT0)))
  "Returns md5sum for a message object of type 'SetT0"
  "9ae7495e5be2c0bedf8ce7469cc06a96")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetT0>)))
  "Returns full string definition for message of type '<SetT0>"
  (cl:format cl:nil "#~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周~%uint64     gps_millisecond     #取GPS周的毫秒级时间~%uint64     cmd_millisecond     #T0 时间~%uint8      cmd_reserve1        #预留~%uint8      cmd_reserve2        #预留~%uint8      cmd_reserve3 ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetT0)))
  "Returns full string definition for message of type 'SetT0"
  (cl:format cl:nil "#~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周~%uint64     gps_millisecond     #取GPS周的毫秒级时间~%uint64     cmd_millisecond     #T0 时间~%uint8      cmd_reserve1        #预留~%uint8      cmd_reserve2        #预留~%uint8      cmd_reserve3 ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetT0>))
  (cl:+ 0
     4
     4
     8
     8
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetT0>))
  "Converts a ROS message object to a list"
  (cl:list 'SetT0
    (cl:cons ':unique_key (unique_key msg))
    (cl:cons ':gps_week (gps_week msg))
    (cl:cons ':gps_millisecond (gps_millisecond msg))
    (cl:cons ':cmd_millisecond (cmd_millisecond msg))
    (cl:cons ':cmd_reserve1 (cmd_reserve1 msg))
    (cl:cons ':cmd_reserve2 (cmd_reserve2 msg))
    (cl:cons ':cmd_reserve3 (cmd_reserve3 msg))
))
