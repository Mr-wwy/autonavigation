; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude Light.msg.html

(cl:defclass <Light> (roslisp-msg-protocol:ros-message)
  ((pos_flag
    :reader pos_flag
    :initarg :pos_flag
    :type cl:fixnum
    :initform 0)
   (x
    :reader x
    :initarg :x
    :type cl:integer
    :initform 0)
   (y
    :reader y
    :initarg :y
    :type cl:integer
    :initform 0)
   (forward_light_type
    :reader forward_light_type
    :initarg :forward_light_type
    :type cl:fixnum
    :initform 0)
   (left_light_type
    :reader left_light_type
    :initarg :left_light_type
    :type cl:fixnum
    :initform 0)
   (right_light_type
    :reader right_light_type
    :initarg :right_light_type
    :type cl:fixnum
    :initform 0)
   (uturn_light_type
    :reader uturn_light_type
    :initarg :uturn_light_type
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Light (<Light>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Light>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Light)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<Light> is deprecated: use autonavigation-msg:Light instead.")))

(cl:ensure-generic-function 'pos_flag-val :lambda-list '(m))
(cl:defmethod pos_flag-val ((m <Light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pos_flag-val is deprecated.  Use autonavigation-msg:pos_flag instead.")
  (pos_flag m))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <Light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:x-val is deprecated.  Use autonavigation-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <Light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:y-val is deprecated.  Use autonavigation-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'forward_light_type-val :lambda-list '(m))
(cl:defmethod forward_light_type-val ((m <Light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:forward_light_type-val is deprecated.  Use autonavigation-msg:forward_light_type instead.")
  (forward_light_type m))

(cl:ensure-generic-function 'left_light_type-val :lambda-list '(m))
(cl:defmethod left_light_type-val ((m <Light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:left_light_type-val is deprecated.  Use autonavigation-msg:left_light_type instead.")
  (left_light_type m))

(cl:ensure-generic-function 'right_light_type-val :lambda-list '(m))
(cl:defmethod right_light_type-val ((m <Light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:right_light_type-val is deprecated.  Use autonavigation-msg:right_light_type instead.")
  (right_light_type m))

(cl:ensure-generic-function 'uturn_light_type-val :lambda-list '(m))
(cl:defmethod uturn_light_type-val ((m <Light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:uturn_light_type-val is deprecated.  Use autonavigation-msg:uturn_light_type instead.")
  (uturn_light_type m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Light>) ostream)
  "Serializes a message object of type '<Light>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pos_flag)) ostream)
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
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'forward_light_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'left_light_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'right_light_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'uturn_light_type)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Light>) istream)
  "Deserializes a message object of type '<Light>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pos_flag)) (cl:read-byte istream))
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
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'forward_light_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'left_light_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'right_light_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'uturn_light_type)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Light>)))
  "Returns string type for a message object of type '<Light>"
  "autonavigation/Light")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Light)))
  "Returns string type for a message object of type 'Light"
  "autonavigation/Light")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Light>)))
  "Returns md5sum for a message object of type '<Light>"
  "3902b131172341878751daf0048c8941")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Light)))
  "Returns md5sum for a message object of type 'Light"
  "3902b131172341878751daf0048c8941")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Light>)))
  "Returns full string definition for message of type '<Light>"
  (cl:format cl:nil "uint8 pos_flag            #位置是否起作用~%int32 x~%int32 y~%uint8 forward_light_type  #直行灯信息~%uint8 left_light_type     #左转灯信息~%uint8 right_light_type    #右转灯信息~%uint8 uturn_light_type    #U Turn灯信息~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Light)))
  "Returns full string definition for message of type 'Light"
  (cl:format cl:nil "uint8 pos_flag            #位置是否起作用~%int32 x~%int32 y~%uint8 forward_light_type  #直行灯信息~%uint8 left_light_type     #左转灯信息~%uint8 right_light_type    #右转灯信息~%uint8 uturn_light_type    #U Turn灯信息~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Light>))
  (cl:+ 0
     1
     4
     4
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Light>))
  "Converts a ROS message object to a list"
  (cl:list 'Light
    (cl:cons ':pos_flag (pos_flag msg))
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':forward_light_type (forward_light_type msg))
    (cl:cons ':left_light_type (left_light_type msg))
    (cl:cons ':right_light_type (right_light_type msg))
    (cl:cons ':uturn_light_type (uturn_light_type msg))
))
