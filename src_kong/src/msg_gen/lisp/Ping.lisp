; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude Ping.msg.html

(cl:defclass <Ping> (roslisp-msg-protocol:ros-message)
  ((rtt
    :reader rtt
    :initarg :rtt
    :type cl:fixnum
    :initform 0)
   (ip
    :reader ip
    :initarg :ip
    :type cl:string
    :initform "")
   (hostname
    :reader hostname
    :initarg :hostname
    :type cl:string
    :initform ""))
)

(cl:defclass Ping (<Ping>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Ping>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Ping)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<Ping> is deprecated: use autonavigation-msg:Ping instead.")))

(cl:ensure-generic-function 'rtt-val :lambda-list '(m))
(cl:defmethod rtt-val ((m <Ping>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:rtt-val is deprecated.  Use autonavigation-msg:rtt instead.")
  (rtt m))

(cl:ensure-generic-function 'ip-val :lambda-list '(m))
(cl:defmethod ip-val ((m <Ping>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ip-val is deprecated.  Use autonavigation-msg:ip instead.")
  (ip m))

(cl:ensure-generic-function 'hostname-val :lambda-list '(m))
(cl:defmethod hostname-val ((m <Ping>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:hostname-val is deprecated.  Use autonavigation-msg:hostname instead.")
  (hostname m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Ping>) ostream)
  "Serializes a message object of type '<Ping>"
  (cl:let* ((signed (cl:slot-value msg 'rtt)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'ip))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'ip))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'hostname))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'hostname))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Ping>) istream)
  "Deserializes a message object of type '<Ping>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'rtt) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'ip) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'ip) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'hostname) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'hostname) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Ping>)))
  "Returns string type for a message object of type '<Ping>"
  "autonavigation/Ping")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Ping)))
  "Returns string type for a message object of type 'Ping"
  "autonavigation/Ping")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Ping>)))
  "Returns md5sum for a message object of type '<Ping>"
  "75aba3b103915cf20d8819537e224ba3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Ping)))
  "Returns md5sum for a message object of type 'Ping"
  "75aba3b103915cf20d8819537e224ba3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Ping>)))
  "Returns full string definition for message of type '<Ping>"
  (cl:format cl:nil "#ping发送网络延迟~%int16 rtt #网络延迟~%string ip #ip~%string hostname #主机名~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Ping)))
  "Returns full string definition for message of type 'Ping"
  (cl:format cl:nil "#ping发送网络延迟~%int16 rtt #网络延迟~%string ip #ip~%string hostname #主机名~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Ping>))
  (cl:+ 0
     2
     4 (cl:length (cl:slot-value msg 'ip))
     4 (cl:length (cl:slot-value msg 'hostname))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Ping>))
  "Converts a ROS message object to a list"
  (cl:list 'Ping
    (cl:cons ':rtt (rtt msg))
    (cl:cons ':ip (ip msg))
    (cl:cons ':hostname (hostname msg))
))
