; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude ProcessLog.msg.html

(cl:defclass <ProcessLog> (roslisp-msg-protocol:ros-message)
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
   (proc_name
    :reader proc_name
    :initarg :proc_name
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (proc_log
    :reader proc_log
    :initarg :proc_log
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass ProcessLog (<ProcessLog>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ProcessLog>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ProcessLog)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<ProcessLog> is deprecated: use autonavigation-msg:ProcessLog instead.")))

(cl:ensure-generic-function 'unique_key-val :lambda-list '(m))
(cl:defmethod unique_key-val ((m <ProcessLog>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:unique_key-val is deprecated.  Use autonavigation-msg:unique_key instead.")
  (unique_key m))

(cl:ensure-generic-function 'gps_week-val :lambda-list '(m))
(cl:defmethod gps_week-val ((m <ProcessLog>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_week-val is deprecated.  Use autonavigation-msg:gps_week instead.")
  (gps_week m))

(cl:ensure-generic-function 'gps_millisecond-val :lambda-list '(m))
(cl:defmethod gps_millisecond-val ((m <ProcessLog>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_millisecond-val is deprecated.  Use autonavigation-msg:gps_millisecond instead.")
  (gps_millisecond m))

(cl:ensure-generic-function 'proc_name-val :lambda-list '(m))
(cl:defmethod proc_name-val ((m <ProcessLog>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:proc_name-val is deprecated.  Use autonavigation-msg:proc_name instead.")
  (proc_name m))

(cl:ensure-generic-function 'proc_log-val :lambda-list '(m))
(cl:defmethod proc_log-val ((m <ProcessLog>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:proc_log-val is deprecated.  Use autonavigation-msg:proc_log instead.")
  (proc_log m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ProcessLog>) ostream)
  "Serializes a message object of type '<ProcessLog>"
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
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'proc_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'proc_name))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'proc_log))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'proc_log))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ProcessLog>) istream)
  "Deserializes a message object of type '<ProcessLog>"
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
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'proc_name) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'proc_name)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'proc_log) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'proc_log)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ProcessLog>)))
  "Returns string type for a message object of type '<ProcessLog>"
  "autonavigation/ProcessLog")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ProcessLog)))
  "Returns string type for a message object of type 'ProcessLog"
  "autonavigation/ProcessLog")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ProcessLog>)))
  "Returns md5sum for a message object of type '<ProcessLog>"
  "de5e88702431d5bc2e2ab4f4b2fbbf08")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ProcessLog)))
  "Returns md5sum for a message object of type 'ProcessLog"
  "de5e88702431d5bc2e2ab4f4b2fbbf08")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ProcessLog>)))
  "Returns full string definition for message of type '<ProcessLog>"
  (cl:format cl:nil "~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期~%uint64     gps_millisecond     #GPS毫秒，以周的零点开始的毫秒数~%uint8[]    proc_name           #进程名称~%uint8[]    proc_log            #日志信息~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ProcessLog)))
  "Returns full string definition for message of type 'ProcessLog"
  (cl:format cl:nil "~%~%uint32     unique_key          #自主行驶载车唯一标识，用于区分载车的id~%uint32     gps_week            #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期~%uint64     gps_millisecond     #GPS毫秒，以周的零点开始的毫秒数~%uint8[]    proc_name           #进程名称~%uint8[]    proc_log            #日志信息~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ProcessLog>))
  (cl:+ 0
     4
     4
     8
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'proc_name) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'proc_log) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ProcessLog>))
  "Converts a ROS message object to a list"
  (cl:list 'ProcessLog
    (cl:cons ':unique_key (unique_key msg))
    (cl:cons ':gps_week (gps_week msg))
    (cl:cons ':gps_millisecond (gps_millisecond msg))
    (cl:cons ':proc_name (proc_name msg))
    (cl:cons ':proc_log (proc_log msg))
))
