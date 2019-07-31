; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude TrackerCMD.msg.html

(cl:defclass <TrackerCMD> (roslisp-msg-protocol:ros-message)
  ((DesiredCurvature
    :reader DesiredCurvature
    :initarg :DesiredCurvature
    :type cl:float
    :initform 0.0)
   (DesiredVelocity
    :reader DesiredVelocity
    :initarg :DesiredVelocity
    :type cl:float
    :initform 0.0)
   (VehicleCommand
    :reader VehicleCommand
    :initarg :VehicleCommand
    :type cl:integer
    :initform 0)
   (YError
    :reader YError
    :initarg :YError
    :type cl:float
    :initform 0.0)
   (HeadingError
    :reader HeadingError
    :initarg :HeadingError
    :type cl:float
    :initform 0.0)
   (ControlMode
    :reader ControlMode
    :initarg :ControlMode
    :type cl:integer
    :initform 0)
   (SteerEnable
    :reader SteerEnable
    :initarg :SteerEnable
    :type cl:integer
    :initform 0)
   (BrakeFuelEnable
    :reader BrakeFuelEnable
    :initarg :BrakeFuelEnable
    :type cl:integer
    :initform 0))
)

(cl:defclass TrackerCMD (<TrackerCMD>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TrackerCMD>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TrackerCMD)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<TrackerCMD> is deprecated: use autonavigation-msg:TrackerCMD instead.")))

(cl:ensure-generic-function 'DesiredCurvature-val :lambda-list '(m))
(cl:defmethod DesiredCurvature-val ((m <TrackerCMD>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredCurvature-val is deprecated.  Use autonavigation-msg:DesiredCurvature instead.")
  (DesiredCurvature m))

(cl:ensure-generic-function 'DesiredVelocity-val :lambda-list '(m))
(cl:defmethod DesiredVelocity-val ((m <TrackerCMD>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredVelocity-val is deprecated.  Use autonavigation-msg:DesiredVelocity instead.")
  (DesiredVelocity m))

(cl:ensure-generic-function 'VehicleCommand-val :lambda-list '(m))
(cl:defmethod VehicleCommand-val ((m <TrackerCMD>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:VehicleCommand-val is deprecated.  Use autonavigation-msg:VehicleCommand instead.")
  (VehicleCommand m))

(cl:ensure-generic-function 'YError-val :lambda-list '(m))
(cl:defmethod YError-val ((m <TrackerCMD>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:YError-val is deprecated.  Use autonavigation-msg:YError instead.")
  (YError m))

(cl:ensure-generic-function 'HeadingError-val :lambda-list '(m))
(cl:defmethod HeadingError-val ((m <TrackerCMD>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:HeadingError-val is deprecated.  Use autonavigation-msg:HeadingError instead.")
  (HeadingError m))

(cl:ensure-generic-function 'ControlMode-val :lambda-list '(m))
(cl:defmethod ControlMode-val ((m <TrackerCMD>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ControlMode-val is deprecated.  Use autonavigation-msg:ControlMode instead.")
  (ControlMode m))

(cl:ensure-generic-function 'SteerEnable-val :lambda-list '(m))
(cl:defmethod SteerEnable-val ((m <TrackerCMD>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:SteerEnable-val is deprecated.  Use autonavigation-msg:SteerEnable instead.")
  (SteerEnable m))

(cl:ensure-generic-function 'BrakeFuelEnable-val :lambda-list '(m))
(cl:defmethod BrakeFuelEnable-val ((m <TrackerCMD>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:BrakeFuelEnable-val is deprecated.  Use autonavigation-msg:BrakeFuelEnable instead.")
  (BrakeFuelEnable m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TrackerCMD>) ostream)
  "Serializes a message object of type '<TrackerCMD>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'DesiredCurvature))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'DesiredVelocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'VehicleCommand)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'YError))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'HeadingError))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'ControlMode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'SteerEnable)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'BrakeFuelEnable)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TrackerCMD>) istream)
  "Deserializes a message object of type '<TrackerCMD>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'DesiredCurvature) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'DesiredVelocity) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'VehicleCommand) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'YError) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'HeadingError) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'ControlMode) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'SteerEnable) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'BrakeFuelEnable) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TrackerCMD>)))
  "Returns string type for a message object of type '<TrackerCMD>"
  "autonavigation/TrackerCMD")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TrackerCMD)))
  "Returns string type for a message object of type 'TrackerCMD"
  "autonavigation/TrackerCMD")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TrackerCMD>)))
  "Returns md5sum for a message object of type '<TrackerCMD>"
  "a81e0c287c880465e69aa04676c74a46")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TrackerCMD)))
  "Returns md5sum for a message object of type 'TrackerCMD"
  "a81e0c287c880465e69aa04676c74a46")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TrackerCMD>)))
  "Returns full string definition for message of type '<TrackerCMD>"
  (cl:format cl:nil "float64 DesiredCurvature~%float64 DesiredVelocity~%int32 VehicleCommand~%float64 YError~%float64 HeadingError~%int32 ControlMode~%int32 SteerEnable~%int32 BrakeFuelEnable~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TrackerCMD)))
  "Returns full string definition for message of type 'TrackerCMD"
  (cl:format cl:nil "float64 DesiredCurvature~%float64 DesiredVelocity~%int32 VehicleCommand~%float64 YError~%float64 HeadingError~%int32 ControlMode~%int32 SteerEnable~%int32 BrakeFuelEnable~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TrackerCMD>))
  (cl:+ 0
     8
     8
     4
     8
     8
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TrackerCMD>))
  "Converts a ROS message object to a list"
  (cl:list 'TrackerCMD
    (cl:cons ':DesiredCurvature (DesiredCurvature msg))
    (cl:cons ':DesiredVelocity (DesiredVelocity msg))
    (cl:cons ':VehicleCommand (VehicleCommand msg))
    (cl:cons ':YError (YError msg))
    (cl:cons ':HeadingError (HeadingError msg))
    (cl:cons ':ControlMode (ControlMode msg))
    (cl:cons ':SteerEnable (SteerEnable msg))
    (cl:cons ':BrakeFuelEnable (BrakeFuelEnable msg))
))
