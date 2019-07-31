; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude Sign.msg.html

(cl:defclass <Sign> (roslisp-msg-protocol:ros-message)
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
   (sign_type
    :reader sign_type
    :initarg :sign_type
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Sign (<Sign>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Sign>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Sign)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<Sign> is deprecated: use autonavigation-msg:Sign instead.")))

(cl:ensure-generic-function 'pos_flag-val :lambda-list '(m))
(cl:defmethod pos_flag-val ((m <Sign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pos_flag-val is deprecated.  Use autonavigation-msg:pos_flag instead.")
  (pos_flag m))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <Sign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:x-val is deprecated.  Use autonavigation-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <Sign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:y-val is deprecated.  Use autonavigation-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'sign_type-val :lambda-list '(m))
(cl:defmethod sign_type-val ((m <Sign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:sign_type-val is deprecated.  Use autonavigation-msg:sign_type instead.")
  (sign_type m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Sign>) ostream)
  "Serializes a message object of type '<Sign>"
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
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sign_type)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Sign>) istream)
  "Deserializes a message object of type '<Sign>"
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
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sign_type)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Sign>)))
  "Returns string type for a message object of type '<Sign>"
  "autonavigation/Sign")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Sign)))
  "Returns string type for a message object of type 'Sign"
  "autonavigation/Sign")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Sign>)))
  "Returns md5sum for a message object of type '<Sign>"
  "3513bee1140afeb245ce4576130c04b8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Sign)))
  "Returns md5sum for a message object of type 'Sign"
  "3513bee1140afeb245ce4576130c04b8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Sign>)))
  "Returns full string definition for message of type '<Sign>"
  (cl:format cl:nil "uint8 pos_flag       #  交通标志位置信息 ~%int32 x              #  x坐标，厘米为单位~%int32 y              #  y坐标，厘米为单位~%uint8 sign_type      #  交通标志类型信息~%~%~%#~%# pos_flag~%#  0: 没有位置信息~%#  1: 位置信息有效~%~%# sign_type:~%#  0：无路标        ~%#  1：禁止左转~%#  2：禁止右转~%#  3：禁止直行~%#  4：禁止向左和向右~%#  5：禁止向左和直行~%#  6：禁止向右和直行~%#  7：禁止驶入~%#  8：停车~%#  9： 前方学校 （减速）       ~%#  10：注意行人 （减速）       ~%#  11：路面不平 （减速）      ~%#  12：路面施工 （减速）~%#  13：直行~%#  14：向左转~%#  15：向右转~%#  16：直行和左转~%#  17：直行和右转~%#  18：向左和向右~%#  19：靠右行驶        ~%#  20：靠左行驶        ~%#  21：鸣喇叭 ------- 无    ~%#  22：环岛行驶 ------- 无     ~%#  23：人行横道        ~%#  24：允许掉头        ~%#  25：停车位          ~%#  26：禁止掉头  ~%#  27：限速10公里 （减速）~%#  28：解除限速10公里 ------- 无~%#  29：限速15公里~%#  30：限速20公里~%#  31：限速25公里~%#  32: 三角修车标志~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Sign)))
  "Returns full string definition for message of type 'Sign"
  (cl:format cl:nil "uint8 pos_flag       #  交通标志位置信息 ~%int32 x              #  x坐标，厘米为单位~%int32 y              #  y坐标，厘米为单位~%uint8 sign_type      #  交通标志类型信息~%~%~%#~%# pos_flag~%#  0: 没有位置信息~%#  1: 位置信息有效~%~%# sign_type:~%#  0：无路标        ~%#  1：禁止左转~%#  2：禁止右转~%#  3：禁止直行~%#  4：禁止向左和向右~%#  5：禁止向左和直行~%#  6：禁止向右和直行~%#  7：禁止驶入~%#  8：停车~%#  9： 前方学校 （减速）       ~%#  10：注意行人 （减速）       ~%#  11：路面不平 （减速）      ~%#  12：路面施工 （减速）~%#  13：直行~%#  14：向左转~%#  15：向右转~%#  16：直行和左转~%#  17：直行和右转~%#  18：向左和向右~%#  19：靠右行驶        ~%#  20：靠左行驶        ~%#  21：鸣喇叭 ------- 无    ~%#  22：环岛行驶 ------- 无     ~%#  23：人行横道        ~%#  24：允许掉头        ~%#  25：停车位          ~%#  26：禁止掉头  ~%#  27：限速10公里 （减速）~%#  28：解除限速10公里 ------- 无~%#  29：限速15公里~%#  30：限速20公里~%#  31：限速25公里~%#  32: 三角修车标志~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Sign>))
  (cl:+ 0
     1
     4
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Sign>))
  "Converts a ROS message object to a list"
  (cl:list 'Sign
    (cl:cons ':pos_flag (pos_flag msg))
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':sign_type (sign_type msg))
))
