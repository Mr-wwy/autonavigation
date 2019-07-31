; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude GpsTime.msg.html

(cl:defclass <GpsTime> (roslisp-msg-protocol:ros-message)
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
   (longitude
    :reader longitude
    :initarg :longitude
    :type cl:float
    :initform 0.0)
   (laltitude
    :reader laltitude
    :initarg :laltitude
    :type cl:float
    :initform 0.0)
   (gps_reserve1
    :reader gps_reserve1
    :initarg :gps_reserve1
    :type cl:fixnum
    :initform 0)
   (gps_reserve2
    :reader gps_reserve2
    :initarg :gps_reserve2
    :type cl:fixnum
    :initform 0)
   (gps_reserve3
    :reader gps_reserve3
    :initarg :gps_reserve3
    :type cl:fixnum
    :initform 0)
   (gps_reserve4
    :reader gps_reserve4
    :initarg :gps_reserve4
    :type cl:fixnum
    :initform 0)
   (gps_reserve5
    :reader gps_reserve5
    :initarg :gps_reserve5
    :type cl:fixnum
    :initform 0)
   (gps_reserve6
    :reader gps_reserve6
    :initarg :gps_reserve6
    :type cl:fixnum
    :initform 0))
)

(cl:defclass GpsTime (<GpsTime>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GpsTime>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GpsTime)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<GpsTime> is deprecated: use autonavigation-msg:GpsTime instead.")))

(cl:ensure-generic-function 'unique_key-val :lambda-list '(m))
(cl:defmethod unique_key-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:unique_key-val is deprecated.  Use autonavigation-msg:unique_key instead.")
  (unique_key m))

(cl:ensure-generic-function 'gps_week-val :lambda-list '(m))
(cl:defmethod gps_week-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_week-val is deprecated.  Use autonavigation-msg:gps_week instead.")
  (gps_week m))

(cl:ensure-generic-function 'gps_millisecond-val :lambda-list '(m))
(cl:defmethod gps_millisecond-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_millisecond-val is deprecated.  Use autonavigation-msg:gps_millisecond instead.")
  (gps_millisecond m))

(cl:ensure-generic-function 'longitude-val :lambda-list '(m))
(cl:defmethod longitude-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:longitude-val is deprecated.  Use autonavigation-msg:longitude instead.")
  (longitude m))

(cl:ensure-generic-function 'laltitude-val :lambda-list '(m))
(cl:defmethod laltitude-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:laltitude-val is deprecated.  Use autonavigation-msg:laltitude instead.")
  (laltitude m))

(cl:ensure-generic-function 'gps_reserve1-val :lambda-list '(m))
(cl:defmethod gps_reserve1-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_reserve1-val is deprecated.  Use autonavigation-msg:gps_reserve1 instead.")
  (gps_reserve1 m))

(cl:ensure-generic-function 'gps_reserve2-val :lambda-list '(m))
(cl:defmethod gps_reserve2-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_reserve2-val is deprecated.  Use autonavigation-msg:gps_reserve2 instead.")
  (gps_reserve2 m))

(cl:ensure-generic-function 'gps_reserve3-val :lambda-list '(m))
(cl:defmethod gps_reserve3-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_reserve3-val is deprecated.  Use autonavigation-msg:gps_reserve3 instead.")
  (gps_reserve3 m))

(cl:ensure-generic-function 'gps_reserve4-val :lambda-list '(m))
(cl:defmethod gps_reserve4-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_reserve4-val is deprecated.  Use autonavigation-msg:gps_reserve4 instead.")
  (gps_reserve4 m))

(cl:ensure-generic-function 'gps_reserve5-val :lambda-list '(m))
(cl:defmethod gps_reserve5-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_reserve5-val is deprecated.  Use autonavigation-msg:gps_reserve5 instead.")
  (gps_reserve5 m))

(cl:ensure-generic-function 'gps_reserve6-val :lambda-list '(m))
(cl:defmethod gps_reserve6-val ((m <GpsTime>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_reserve6-val is deprecated.  Use autonavigation-msg:gps_reserve6 instead.")
  (gps_reserve6 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GpsTime>) ostream)
  "Serializes a message object of type '<GpsTime>"
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
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'longitude))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'laltitude))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve5)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve6)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GpsTime>) istream)
  "Deserializes a message object of type '<GpsTime>"
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
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'longitude) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'laltitude) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve5)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_reserve6)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GpsTime>)))
  "Returns string type for a message object of type '<GpsTime>"
  "autonavigation/GpsTime")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GpsTime)))
  "Returns string type for a message object of type 'GpsTime"
  "autonavigation/GpsTime")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GpsTime>)))
  "Returns md5sum for a message object of type '<GpsTime>"
  "83d68f97b802f68fa3f9de2d9684e369")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GpsTime)))
  "Returns md5sum for a message object of type 'GpsTime"
  "83d68f97b802f68fa3f9de2d9684e369")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GpsTime>)))
  "Returns full string definition for message of type '<GpsTime>"
  (cl:format cl:nil "#对应结构体~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周~%uint64     gps_millisecond     #取GPS周的毫秒级时间    ~%float64	   longitude	       #经度，单位为度       ~%float64	   laltitude           #纬度，单位为度 ~%uint8      gps_reserve1        #预留~%uint8      gps_reserve2~%uint8      gps_reserve3~%uint8      gps_reserve4~%uint8      gps_reserve5~%uint8      gps_reserve6~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GpsTime)))
  "Returns full string definition for message of type 'GpsTime"
  (cl:format cl:nil "#对应结构体~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周~%uint64     gps_millisecond     #取GPS周的毫秒级时间    ~%float64	   longitude	       #经度，单位为度       ~%float64	   laltitude           #纬度，单位为度 ~%uint8      gps_reserve1        #预留~%uint8      gps_reserve2~%uint8      gps_reserve3~%uint8      gps_reserve4~%uint8      gps_reserve5~%uint8      gps_reserve6~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GpsTime>))
  (cl:+ 0
     4
     4
     8
     8
     8
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GpsTime>))
  "Converts a ROS message object to a list"
  (cl:list 'GpsTime
    (cl:cons ':unique_key (unique_key msg))
    (cl:cons ':gps_week (gps_week msg))
    (cl:cons ':gps_millisecond (gps_millisecond msg))
    (cl:cons ':longitude (longitude msg))
    (cl:cons ':laltitude (laltitude msg))
    (cl:cons ':gps_reserve1 (gps_reserve1 msg))
    (cl:cons ':gps_reserve2 (gps_reserve2 msg))
    (cl:cons ':gps_reserve3 (gps_reserve3 msg))
    (cl:cons ':gps_reserve4 (gps_reserve4 msg))
    (cl:cons ':gps_reserve5 (gps_reserve5 msg))
    (cl:cons ':gps_reserve6 (gps_reserve6 msg))
))
