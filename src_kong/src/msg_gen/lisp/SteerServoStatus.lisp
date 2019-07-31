; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude SteerServoStatus.msg.html

(cl:defclass <SteerServoStatus> (roslisp-msg-protocol:ros-message)
  ((ActualFrontWheelAngle
    :reader ActualFrontWheelAngle
    :initarg :ActualFrontWheelAngle
    :type cl:float
    :initform 0.0)
   (DesiredFrontWheelAngle
    :reader DesiredFrontWheelAngle
    :initarg :DesiredFrontWheelAngle
    :type cl:float
    :initform 0.0)
   (ActualCurvature
    :reader ActualCurvature
    :initarg :ActualCurvature
    :type cl:float
    :initform 0.0)
   (DesiredCurvature
    :reader DesiredCurvature
    :initarg :DesiredCurvature
    :type cl:float
    :initform 0.0)
   (LeftLightFlag
    :reader LeftLightFlag
    :initarg :LeftLightFlag
    :type cl:integer
    :initform 0)
   (RightLightFlag
    :reader RightLightFlag
    :initarg :RightLightFlag
    :type cl:integer
    :initform 0))
)

(cl:defclass SteerServoStatus (<SteerServoStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SteerServoStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SteerServoStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<SteerServoStatus> is deprecated: use autonavigation-msg:SteerServoStatus instead.")))

(cl:ensure-generic-function 'ActualFrontWheelAngle-val :lambda-list '(m))
(cl:defmethod ActualFrontWheelAngle-val ((m <SteerServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ActualFrontWheelAngle-val is deprecated.  Use autonavigation-msg:ActualFrontWheelAngle instead.")
  (ActualFrontWheelAngle m))

(cl:ensure-generic-function 'DesiredFrontWheelAngle-val :lambda-list '(m))
(cl:defmethod DesiredFrontWheelAngle-val ((m <SteerServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredFrontWheelAngle-val is deprecated.  Use autonavigation-msg:DesiredFrontWheelAngle instead.")
  (DesiredFrontWheelAngle m))

(cl:ensure-generic-function 'ActualCurvature-val :lambda-list '(m))
(cl:defmethod ActualCurvature-val ((m <SteerServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ActualCurvature-val is deprecated.  Use autonavigation-msg:ActualCurvature instead.")
  (ActualCurvature m))

(cl:ensure-generic-function 'DesiredCurvature-val :lambda-list '(m))
(cl:defmethod DesiredCurvature-val ((m <SteerServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredCurvature-val is deprecated.  Use autonavigation-msg:DesiredCurvature instead.")
  (DesiredCurvature m))

(cl:ensure-generic-function 'LeftLightFlag-val :lambda-list '(m))
(cl:defmethod LeftLightFlag-val ((m <SteerServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LeftLightFlag-val is deprecated.  Use autonavigation-msg:LeftLightFlag instead.")
  (LeftLightFlag m))

(cl:ensure-generic-function 'RightLightFlag-val :lambda-list '(m))
(cl:defmethod RightLightFlag-val ((m <SteerServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:RightLightFlag-val is deprecated.  Use autonavigation-msg:RightLightFlag instead.")
  (RightLightFlag m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SteerServoStatus>) ostream)
  "Serializes a message object of type '<SteerServoStatus>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'ActualFrontWheelAngle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'DesiredFrontWheelAngle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'ActualCurvature))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'DesiredCurvature))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'LeftLightFlag)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'RightLightFlag)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SteerServoStatus>) istream)
  "Deserializes a message object of type '<SteerServoStatus>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ActualFrontWheelAngle) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'DesiredFrontWheelAngle) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ActualCurvature) (roslisp-utils:decode-double-float-bits bits)))
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
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LeftLightFlag) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'RightLightFlag) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SteerServoStatus>)))
  "Returns string type for a message object of type '<SteerServoStatus>"
  "autonavigation/SteerServoStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SteerServoStatus)))
  "Returns string type for a message object of type 'SteerServoStatus"
  "autonavigation/SteerServoStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SteerServoStatus>)))
  "Returns md5sum for a message object of type '<SteerServoStatus>"
  "da34259b1aca2ad0bb4d7210546aeced")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SteerServoStatus)))
  "Returns md5sum for a message object of type 'SteerServoStatus"
  "da34259b1aca2ad0bb4d7210546aeced")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SteerServoStatus>)))
  "Returns full string definition for message of type '<SteerServoStatus>"
  (cl:format cl:nil "float64 ActualFrontWheelAngle~%float64 DesiredFrontWheelAngle~%float64 ActualCurvature~%float64 DesiredCurvature~%int32   LeftLightFlag~%int32   RightLightFlag~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SteerServoStatus)))
  "Returns full string definition for message of type 'SteerServoStatus"
  (cl:format cl:nil "float64 ActualFrontWheelAngle~%float64 DesiredFrontWheelAngle~%float64 ActualCurvature~%float64 DesiredCurvature~%int32   LeftLightFlag~%int32   RightLightFlag~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SteerServoStatus>))
  (cl:+ 0
     8
     8
     8
     8
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SteerServoStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'SteerServoStatus
    (cl:cons ':ActualFrontWheelAngle (ActualFrontWheelAngle msg))
    (cl:cons ':DesiredFrontWheelAngle (DesiredFrontWheelAngle msg))
    (cl:cons ':ActualCurvature (ActualCurvature msg))
    (cl:cons ':DesiredCurvature (DesiredCurvature msg))
    (cl:cons ':LeftLightFlag (LeftLightFlag msg))
    (cl:cons ':RightLightFlag (RightLightFlag msg))
))
