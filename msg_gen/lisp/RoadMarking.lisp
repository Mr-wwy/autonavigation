; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude RoadMarking.msg.html

(cl:defclass <RoadMarking> (roslisp-msg-protocol:ros-message)
  ((posCenter
    :reader posCenter
    :initarg :posCenter
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (pointBottomLeft
    :reader pointBottomLeft
    :initarg :pointBottomLeft
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (pointBottomRight
    :reader pointBottomRight
    :initarg :pointBottomRight
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (pointTopLeft
    :reader pointTopLeft
    :initarg :pointTopLeft
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (pointTopRight
    :reader pointTopRight
    :initarg :pointTopRight
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (direction
    :reader direction
    :initarg :direction
    :type cl:integer
    :initform 0)
   (width
    :reader width
    :initarg :width
    :type cl:integer
    :initform 0)
   (sign_type
    :reader sign_type
    :initarg :sign_type
    :type cl:fixnum
    :initform 0))
)

(cl:defclass RoadMarking (<RoadMarking>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RoadMarking>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RoadMarking)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<RoadMarking> is deprecated: use autonavigation-msg:RoadMarking instead.")))

(cl:ensure-generic-function 'posCenter-val :lambda-list '(m))
(cl:defmethod posCenter-val ((m <RoadMarking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:posCenter-val is deprecated.  Use autonavigation-msg:posCenter instead.")
  (posCenter m))

(cl:ensure-generic-function 'pointBottomLeft-val :lambda-list '(m))
(cl:defmethod pointBottomLeft-val ((m <RoadMarking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pointBottomLeft-val is deprecated.  Use autonavigation-msg:pointBottomLeft instead.")
  (pointBottomLeft m))

(cl:ensure-generic-function 'pointBottomRight-val :lambda-list '(m))
(cl:defmethod pointBottomRight-val ((m <RoadMarking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pointBottomRight-val is deprecated.  Use autonavigation-msg:pointBottomRight instead.")
  (pointBottomRight m))

(cl:ensure-generic-function 'pointTopLeft-val :lambda-list '(m))
(cl:defmethod pointTopLeft-val ((m <RoadMarking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pointTopLeft-val is deprecated.  Use autonavigation-msg:pointTopLeft instead.")
  (pointTopLeft m))

(cl:ensure-generic-function 'pointTopRight-val :lambda-list '(m))
(cl:defmethod pointTopRight-val ((m <RoadMarking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pointTopRight-val is deprecated.  Use autonavigation-msg:pointTopRight instead.")
  (pointTopRight m))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <RoadMarking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:direction-val is deprecated.  Use autonavigation-msg:direction instead.")
  (direction m))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <RoadMarking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:width-val is deprecated.  Use autonavigation-msg:width instead.")
  (width m))

(cl:ensure-generic-function 'sign_type-val :lambda-list '(m))
(cl:defmethod sign_type-val ((m <RoadMarking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:sign_type-val is deprecated.  Use autonavigation-msg:sign_type instead.")
  (sign_type m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RoadMarking>) ostream)
  "Serializes a message object of type '<RoadMarking>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'posCenter) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pointBottomLeft) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pointBottomRight) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pointTopLeft) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pointTopRight) ostream)
  (cl:let* ((signed (cl:slot-value msg 'direction)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'width)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sign_type)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RoadMarking>) istream)
  "Deserializes a message object of type '<RoadMarking>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'posCenter) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pointBottomLeft) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pointBottomRight) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pointTopLeft) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pointTopRight) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'direction) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'width) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sign_type)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RoadMarking>)))
  "Returns string type for a message object of type '<RoadMarking>"
  "autonavigation/RoadMarking")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RoadMarking)))
  "Returns string type for a message object of type 'RoadMarking"
  "autonavigation/RoadMarking")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RoadMarking>)))
  "Returns md5sum for a message object of type '<RoadMarking>"
  "ea0621a9ad4999a280afb0f6a81de50e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RoadMarking)))
  "Returns md5sum for a message object of type 'RoadMarking"
  "ea0621a9ad4999a280afb0f6a81de50e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RoadMarking>)))
  "Returns full string definition for message of type '<RoadMarking>"
  (cl:format cl:nil "#地标的中心点~%geometry_msgs/Point posCenter~%~%#地标的四个顶点~%geometry_msgs/Point pointBottomLeft~%geometry_msgs/Point pointBottomRight~%geometry_msgs/Point pointTopLeft~%geometry_msgs/Point pointTopRight~%~%int32 direction        # 停止线或者斑马线的方向,单位0.01度,与x轴的夹角，逆时针0-36000~%int32 width            # 地标的宽度~%uint8 sign_type        # 地标的类型,    type = 1,停止线；type = 2, 斑马线；type = 3,直行箭头；type = 4,左转箭头；~%                       # type = 5,右转箭头；type = 6,直行左转箭头；type = 7,直行右转箭头；~%                       # type = 8,左转掉头箭头；type = 9,掉头箭头；type = 10,菱形；type = 11，泊车位；~%~%~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RoadMarking)))
  "Returns full string definition for message of type 'RoadMarking"
  (cl:format cl:nil "#地标的中心点~%geometry_msgs/Point posCenter~%~%#地标的四个顶点~%geometry_msgs/Point pointBottomLeft~%geometry_msgs/Point pointBottomRight~%geometry_msgs/Point pointTopLeft~%geometry_msgs/Point pointTopRight~%~%int32 direction        # 停止线或者斑马线的方向,单位0.01度,与x轴的夹角，逆时针0-36000~%int32 width            # 地标的宽度~%uint8 sign_type        # 地标的类型,    type = 1,停止线；type = 2, 斑马线；type = 3,直行箭头；type = 4,左转箭头；~%                       # type = 5,右转箭头；type = 6,直行左转箭头；type = 7,直行右转箭头；~%                       # type = 8,左转掉头箭头；type = 9,掉头箭头；type = 10,菱形；type = 11，泊车位；~%~%~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RoadMarking>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'posCenter))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pointBottomLeft))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pointBottomRight))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pointTopLeft))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pointTopRight))
     4
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RoadMarking>))
  "Converts a ROS message object to a list"
  (cl:list 'RoadMarking
    (cl:cons ':posCenter (posCenter msg))
    (cl:cons ':pointBottomLeft (pointBottomLeft msg))
    (cl:cons ':pointBottomRight (pointBottomRight msg))
    (cl:cons ':pointTopLeft (pointTopLeft msg))
    (cl:cons ':pointTopRight (pointTopRight msg))
    (cl:cons ':direction (direction msg))
    (cl:cons ':width (width msg))
    (cl:cons ':sign_type (sign_type msg))
))
