; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude RemoteCmd.msg.html

(cl:defclass <RemoteCmd> (roslisp-msg-protocol:ros-message)
  ((RemoteMode
    :reader RemoteMode
    :initarg :RemoteMode
    :type cl:integer
    :initform 0)
   (RemoteSteerEnable
    :reader RemoteSteerEnable
    :initarg :RemoteSteerEnable
    :type cl:integer
    :initform 0)
   (RemoteBrakeFuelEnable
    :reader RemoteBrakeFuelEnable
    :initarg :RemoteBrakeFuelEnable
    :type cl:integer
    :initform 0)
   (RemoteSteerAngle
    :reader RemoteSteerAngle
    :initarg :RemoteSteerAngle
    :type cl:float
    :initform 0.0)
   (RemoteSpeed
    :reader RemoteSpeed
    :initarg :RemoteSpeed
    :type cl:float
    :initform 0.0)
   (RemoteTransPos
    :reader RemoteTransPos
    :initarg :RemoteTransPos
    :type cl:integer
    :initform 0))
)

(cl:defclass RemoteCmd (<RemoteCmd>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RemoteCmd>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RemoteCmd)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<RemoteCmd> is deprecated: use autonavigation-msg:RemoteCmd instead.")))

(cl:ensure-generic-function 'RemoteMode-val :lambda-list '(m))
(cl:defmethod RemoteMode-val ((m <RemoteCmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:RemoteMode-val is deprecated.  Use autonavigation-msg:RemoteMode instead.")
  (RemoteMode m))

(cl:ensure-generic-function 'RemoteSteerEnable-val :lambda-list '(m))
(cl:defmethod RemoteSteerEnable-val ((m <RemoteCmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:RemoteSteerEnable-val is deprecated.  Use autonavigation-msg:RemoteSteerEnable instead.")
  (RemoteSteerEnable m))

(cl:ensure-generic-function 'RemoteBrakeFuelEnable-val :lambda-list '(m))
(cl:defmethod RemoteBrakeFuelEnable-val ((m <RemoteCmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:RemoteBrakeFuelEnable-val is deprecated.  Use autonavigation-msg:RemoteBrakeFuelEnable instead.")
  (RemoteBrakeFuelEnable m))

(cl:ensure-generic-function 'RemoteSteerAngle-val :lambda-list '(m))
(cl:defmethod RemoteSteerAngle-val ((m <RemoteCmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:RemoteSteerAngle-val is deprecated.  Use autonavigation-msg:RemoteSteerAngle instead.")
  (RemoteSteerAngle m))

(cl:ensure-generic-function 'RemoteSpeed-val :lambda-list '(m))
(cl:defmethod RemoteSpeed-val ((m <RemoteCmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:RemoteSpeed-val is deprecated.  Use autonavigation-msg:RemoteSpeed instead.")
  (RemoteSpeed m))

(cl:ensure-generic-function 'RemoteTransPos-val :lambda-list '(m))
(cl:defmethod RemoteTransPos-val ((m <RemoteCmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:RemoteTransPos-val is deprecated.  Use autonavigation-msg:RemoteTransPos instead.")
  (RemoteTransPos m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RemoteCmd>) ostream)
  "Serializes a message object of type '<RemoteCmd>"
  (cl:let* ((signed (cl:slot-value msg 'RemoteMode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'RemoteSteerEnable)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'RemoteBrakeFuelEnable)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'RemoteSteerAngle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'RemoteSpeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'RemoteTransPos)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RemoteCmd>) istream)
  "Deserializes a message object of type '<RemoteCmd>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'RemoteMode) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'RemoteSteerEnable) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'RemoteBrakeFuelEnable) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'RemoteSteerAngle) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'RemoteSpeed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'RemoteTransPos) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RemoteCmd>)))
  "Returns string type for a message object of type '<RemoteCmd>"
  "autonavigation/RemoteCmd")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RemoteCmd)))
  "Returns string type for a message object of type 'RemoteCmd"
  "autonavigation/RemoteCmd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RemoteCmd>)))
  "Returns md5sum for a message object of type '<RemoteCmd>"
  "653101b3557f16a0d9f858f840aed2dc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RemoteCmd)))
  "Returns md5sum for a message object of type 'RemoteCmd"
  "653101b3557f16a0d9f858f840aed2dc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RemoteCmd>)))
  "Returns full string definition for message of type '<RemoteCmd>"
  (cl:format cl:nil "int32 RemoteMode~%int32 RemoteSteerEnable~%int32 RemoteBrakeFuelEnable~%float32 RemoteSteerAngle~%float32 RemoteSpeed~%int32 RemoteTransPos~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RemoteCmd)))
  "Returns full string definition for message of type 'RemoteCmd"
  (cl:format cl:nil "int32 RemoteMode~%int32 RemoteSteerEnable~%int32 RemoteBrakeFuelEnable~%float32 RemoteSteerAngle~%float32 RemoteSpeed~%int32 RemoteTransPos~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RemoteCmd>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RemoteCmd>))
  "Converts a ROS message object to a list"
  (cl:list 'RemoteCmd
    (cl:cons ':RemoteMode (RemoteMode msg))
    (cl:cons ':RemoteSteerEnable (RemoteSteerEnable msg))
    (cl:cons ':RemoteBrakeFuelEnable (RemoteBrakeFuelEnable msg))
    (cl:cons ':RemoteSteerAngle (RemoteSteerAngle msg))
    (cl:cons ':RemoteSpeed (RemoteSpeed msg))
    (cl:cons ':RemoteTransPos (RemoteTransPos msg))
))
