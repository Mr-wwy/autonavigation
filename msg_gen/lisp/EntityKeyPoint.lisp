; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude EntityKeyPoint.msg.html

(cl:defclass <EntityKeyPoint> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:integer
    :initform 0)
   (y
    :reader y
    :initarg :y
    :type cl:integer
    :initform 0)
   (direction
    :reader direction
    :initarg :direction
    :type cl:integer
    :initform 0)
   (type
    :reader type
    :initarg :type
    :type cl:integer
    :initform 0))
)

(cl:defclass EntityKeyPoint (<EntityKeyPoint>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EntityKeyPoint>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EntityKeyPoint)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<EntityKeyPoint> is deprecated: use autonavigation-msg:EntityKeyPoint instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <EntityKeyPoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:x-val is deprecated.  Use autonavigation-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <EntityKeyPoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:y-val is deprecated.  Use autonavigation-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <EntityKeyPoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:direction-val is deprecated.  Use autonavigation-msg:direction instead.")
  (direction m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <EntityKeyPoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:type-val is deprecated.  Use autonavigation-msg:type instead.")
  (type m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EntityKeyPoint>) ostream)
  "Serializes a message object of type '<EntityKeyPoint>"
  (cl:let* ((signed (cl:slot-value msg 'x)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'y)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'direction)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'type)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EntityKeyPoint>) istream)
  "Deserializes a message object of type '<EntityKeyPoint>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'x) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'y) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
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
      (cl:setf (cl:slot-value msg 'type) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EntityKeyPoint>)))
  "Returns string type for a message object of type '<EntityKeyPoint>"
  "autonavigation/EntityKeyPoint")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EntityKeyPoint)))
  "Returns string type for a message object of type 'EntityKeyPoint"
  "autonavigation/EntityKeyPoint")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EntityKeyPoint>)))
  "Returns md5sum for a message object of type '<EntityKeyPoint>"
  "7a9140b1be6ec243afada729627b204c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EntityKeyPoint)))
  "Returns md5sum for a message object of type 'EntityKeyPoint"
  "7a9140b1be6ec243afada729627b204c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EntityKeyPoint>)))
  "Returns full string definition for message of type '<EntityKeyPoint>"
  (cl:format cl:nil "int32 x~%int32 y~%int32 direction   #  0-36000，道路方向~%int32 type        #  0: 当前路口， 1: 左出口点， 2：右出口点， 3： 直行出口点~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EntityKeyPoint)))
  "Returns full string definition for message of type 'EntityKeyPoint"
  (cl:format cl:nil "int32 x~%int32 y~%int32 direction   #  0-36000，道路方向~%int32 type        #  0: 当前路口， 1: 左出口点， 2：右出口点， 3： 直行出口点~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EntityKeyPoint>))
  (cl:+ 0
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EntityKeyPoint>))
  "Converts a ROS message object to a list"
  (cl:list 'EntityKeyPoint
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':direction (direction msg))
    (cl:cons ':type (type msg))
))
