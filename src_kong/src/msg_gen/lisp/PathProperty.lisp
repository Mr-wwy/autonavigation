; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude PathProperty.msg.html

(cl:defclass <PathProperty> (roslisp-msg-protocol:ros-message)
  ((left_boundary
    :reader left_boundary
    :initarg :left_boundary
    :type autonavigation-msg:WayPoint
    :initform (cl:make-instance 'autonavigation-msg:WayPoint))
   (right_boundary
    :reader right_boundary
    :initarg :right_boundary
    :type autonavigation-msg:WayPoint
    :initform (cl:make-instance 'autonavigation-msg:WayPoint))
   (direction
    :reader direction
    :initarg :direction
    :type cl:integer
    :initform 0))
)

(cl:defclass PathProperty (<PathProperty>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PathProperty>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PathProperty)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<PathProperty> is deprecated: use autonavigation-msg:PathProperty instead.")))

(cl:ensure-generic-function 'left_boundary-val :lambda-list '(m))
(cl:defmethod left_boundary-val ((m <PathProperty>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:left_boundary-val is deprecated.  Use autonavigation-msg:left_boundary instead.")
  (left_boundary m))

(cl:ensure-generic-function 'right_boundary-val :lambda-list '(m))
(cl:defmethod right_boundary-val ((m <PathProperty>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:right_boundary-val is deprecated.  Use autonavigation-msg:right_boundary instead.")
  (right_boundary m))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <PathProperty>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:direction-val is deprecated.  Use autonavigation-msg:direction instead.")
  (direction m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PathProperty>) ostream)
  "Serializes a message object of type '<PathProperty>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_boundary) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_boundary) ostream)
  (cl:let* ((signed (cl:slot-value msg 'direction)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PathProperty>) istream)
  "Deserializes a message object of type '<PathProperty>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_boundary) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_boundary) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'direction) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PathProperty>)))
  "Returns string type for a message object of type '<PathProperty>"
  "autonavigation/PathProperty")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PathProperty)))
  "Returns string type for a message object of type 'PathProperty"
  "autonavigation/PathProperty")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PathProperty>)))
  "Returns md5sum for a message object of type '<PathProperty>"
  "e5513d10a16a565d2f690143b65fbdcd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PathProperty)))
  "Returns md5sum for a message object of type 'PathProperty"
  "e5513d10a16a565d2f690143b65fbdcd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PathProperty>)))
  "Returns full string definition for message of type '<PathProperty>"
  (cl:format cl:nil "WayPoint left_boundary~%WayPoint right_boundary~%int32    direction~%~%~%================================================================================~%MSG: autonavigation/WayPoint~%int32 x~%int32 y~%int32 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PathProperty)))
  "Returns full string definition for message of type 'PathProperty"
  (cl:format cl:nil "WayPoint left_boundary~%WayPoint right_boundary~%int32    direction~%~%~%================================================================================~%MSG: autonavigation/WayPoint~%int32 x~%int32 y~%int32 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PathProperty>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_boundary))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_boundary))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PathProperty>))
  "Converts a ROS message object to a list"
  (cl:list 'PathProperty
    (cl:cons ':left_boundary (left_boundary msg))
    (cl:cons ':right_boundary (right_boundary msg))
    (cl:cons ':direction (direction msg))
))
