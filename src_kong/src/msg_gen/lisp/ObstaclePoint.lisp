; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude ObstaclePoint.msg.html

(cl:defclass <ObstaclePoint> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:fixnum
    :initform 0)
   (y
    :reader y
    :initarg :y
    :type cl:fixnum
    :initform 0)
   (type
    :reader type
    :initarg :type
    :type cl:fixnum
    :initform 0))
)

(cl:defclass ObstaclePoint (<ObstaclePoint>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ObstaclePoint>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ObstaclePoint)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<ObstaclePoint> is deprecated: use autonavigation-msg:ObstaclePoint instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <ObstaclePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:x-val is deprecated.  Use autonavigation-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <ObstaclePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:y-val is deprecated.  Use autonavigation-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <ObstaclePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:type-val is deprecated.  Use autonavigation-msg:type instead.")
  (type m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ObstaclePoint>) ostream)
  "Serializes a message object of type '<ObstaclePoint>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'x)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'x)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'y)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'y)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ObstaclePoint>) istream)
  "Deserializes a message object of type '<ObstaclePoint>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'x)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'x)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'y)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'y)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ObstaclePoint>)))
  "Returns string type for a message object of type '<ObstaclePoint>"
  "autonavigation/ObstaclePoint")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ObstaclePoint)))
  "Returns string type for a message object of type 'ObstaclePoint"
  "autonavigation/ObstaclePoint")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ObstaclePoint>)))
  "Returns md5sum for a message object of type '<ObstaclePoint>"
  "0d28ab9595e22062d30f47c355c68c7e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ObstaclePoint)))
  "Returns md5sum for a message object of type 'ObstaclePoint"
  "0d28ab9595e22062d30f47c355c68c7e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ObstaclePoint>)))
  "Returns full string definition for message of type '<ObstaclePoint>"
  (cl:format cl:nil "uint16 x~%uint16 y~%uint8  type~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ObstaclePoint)))
  "Returns full string definition for message of type 'ObstaclePoint"
  (cl:format cl:nil "uint16 x~%uint16 y~%uint8  type~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ObstaclePoint>))
  (cl:+ 0
     2
     2
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ObstaclePoint>))
  "Converts a ROS message object to a list"
  (cl:list 'ObstaclePoint
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':type (type msg))
))
