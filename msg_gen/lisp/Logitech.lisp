; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude Logitech.msg.html

(cl:defclass <Logitech> (roslisp-msg-protocol:ros-message)
  ((SteeringWheel
    :reader SteeringWheel
    :initarg :SteeringWheel
    :type cl:fixnum
    :initform 0)
   (Clutch
    :reader Clutch
    :initarg :Clutch
    :type cl:fixnum
    :initform 0)
   (Brake
    :reader Brake
    :initarg :Brake
    :type cl:fixnum
    :initform 0)
   (SasPedal
    :reader SasPedal
    :initarg :SasPedal
    :type cl:fixnum
    :initform 0)
   (ShiftPaddlesL
    :reader ShiftPaddlesL
    :initarg :ShiftPaddlesL
    :type cl:fixnum
    :initform 0)
   (ShiftPaddlesR
    :reader ShiftPaddlesR
    :initarg :ShiftPaddlesR
    :type cl:fixnum
    :initform 0)
   (Ignition
    :reader Ignition
    :initarg :Ignition
    :type cl:fixnum
    :initform 0)
   (HandBrake
    :reader HandBrake
    :initarg :HandBrake
    :type cl:fixnum
    :initform 0)
   (StickShift
    :reader StickShift
    :initarg :StickShift
    :type cl:fixnum
    :initform 0)
   (CrossL
    :reader CrossL
    :initarg :CrossL
    :type cl:fixnum
    :initform 0)
   (CrossR
    :reader CrossR
    :initarg :CrossR
    :type cl:fixnum
    :initform 0)
   (ManualTransmission
    :reader ManualTransmission
    :initarg :ManualTransmission
    :type cl:fixnum
    :initform 0)
   (WheelFunctionKey
    :reader WheelFunctionKey
    :initarg :WheelFunctionKey
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (ConcatenonSignal
    :reader ConcatenonSignal
    :initarg :ConcatenonSignal
    :type cl:fixnum
    :initform 0)
   (cmd_reserve2
    :reader cmd_reserve2
    :initarg :cmd_reserve2
    :type cl:fixnum
    :initform 0)
   (cmd_reserve3
    :reader cmd_reserve3
    :initarg :cmd_reserve3
    :type cl:fixnum
    :initform 0)
   (cmd_reserve4
    :reader cmd_reserve4
    :initarg :cmd_reserve4
    :type cl:fixnum
    :initform 0)
   (cmd_reserve5
    :reader cmd_reserve5
    :initarg :cmd_reserve5
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Logitech (<Logitech>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Logitech>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Logitech)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<Logitech> is deprecated: use autonavigation-msg:Logitech instead.")))

(cl:ensure-generic-function 'SteeringWheel-val :lambda-list '(m))
(cl:defmethod SteeringWheel-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:SteeringWheel-val is deprecated.  Use autonavigation-msg:SteeringWheel instead.")
  (SteeringWheel m))

(cl:ensure-generic-function 'Clutch-val :lambda-list '(m))
(cl:defmethod Clutch-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:Clutch-val is deprecated.  Use autonavigation-msg:Clutch instead.")
  (Clutch m))

(cl:ensure-generic-function 'Brake-val :lambda-list '(m))
(cl:defmethod Brake-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:Brake-val is deprecated.  Use autonavigation-msg:Brake instead.")
  (Brake m))

(cl:ensure-generic-function 'SasPedal-val :lambda-list '(m))
(cl:defmethod SasPedal-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:SasPedal-val is deprecated.  Use autonavigation-msg:SasPedal instead.")
  (SasPedal m))

(cl:ensure-generic-function 'ShiftPaddlesL-val :lambda-list '(m))
(cl:defmethod ShiftPaddlesL-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ShiftPaddlesL-val is deprecated.  Use autonavigation-msg:ShiftPaddlesL instead.")
  (ShiftPaddlesL m))

(cl:ensure-generic-function 'ShiftPaddlesR-val :lambda-list '(m))
(cl:defmethod ShiftPaddlesR-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ShiftPaddlesR-val is deprecated.  Use autonavigation-msg:ShiftPaddlesR instead.")
  (ShiftPaddlesR m))

(cl:ensure-generic-function 'Ignition-val :lambda-list '(m))
(cl:defmethod Ignition-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:Ignition-val is deprecated.  Use autonavigation-msg:Ignition instead.")
  (Ignition m))

(cl:ensure-generic-function 'HandBrake-val :lambda-list '(m))
(cl:defmethod HandBrake-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:HandBrake-val is deprecated.  Use autonavigation-msg:HandBrake instead.")
  (HandBrake m))

(cl:ensure-generic-function 'StickShift-val :lambda-list '(m))
(cl:defmethod StickShift-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:StickShift-val is deprecated.  Use autonavigation-msg:StickShift instead.")
  (StickShift m))

(cl:ensure-generic-function 'CrossL-val :lambda-list '(m))
(cl:defmethod CrossL-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CrossL-val is deprecated.  Use autonavigation-msg:CrossL instead.")
  (CrossL m))

(cl:ensure-generic-function 'CrossR-val :lambda-list '(m))
(cl:defmethod CrossR-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CrossR-val is deprecated.  Use autonavigation-msg:CrossR instead.")
  (CrossR m))

(cl:ensure-generic-function 'ManualTransmission-val :lambda-list '(m))
(cl:defmethod ManualTransmission-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ManualTransmission-val is deprecated.  Use autonavigation-msg:ManualTransmission instead.")
  (ManualTransmission m))

(cl:ensure-generic-function 'WheelFunctionKey-val :lambda-list '(m))
(cl:defmethod WheelFunctionKey-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:WheelFunctionKey-val is deprecated.  Use autonavigation-msg:WheelFunctionKey instead.")
  (WheelFunctionKey m))

(cl:ensure-generic-function 'ConcatenonSignal-val :lambda-list '(m))
(cl:defmethod ConcatenonSignal-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ConcatenonSignal-val is deprecated.  Use autonavigation-msg:ConcatenonSignal instead.")
  (ConcatenonSignal m))

(cl:ensure-generic-function 'cmd_reserve2-val :lambda-list '(m))
(cl:defmethod cmd_reserve2-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve2-val is deprecated.  Use autonavigation-msg:cmd_reserve2 instead.")
  (cmd_reserve2 m))

(cl:ensure-generic-function 'cmd_reserve3-val :lambda-list '(m))
(cl:defmethod cmd_reserve3-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve3-val is deprecated.  Use autonavigation-msg:cmd_reserve3 instead.")
  (cmd_reserve3 m))

(cl:ensure-generic-function 'cmd_reserve4-val :lambda-list '(m))
(cl:defmethod cmd_reserve4-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve4-val is deprecated.  Use autonavigation-msg:cmd_reserve4 instead.")
  (cmd_reserve4 m))

(cl:ensure-generic-function 'cmd_reserve5-val :lambda-list '(m))
(cl:defmethod cmd_reserve5-val ((m <Logitech>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:cmd_reserve5-val is deprecated.  Use autonavigation-msg:cmd_reserve5 instead.")
  (cmd_reserve5 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Logitech>) ostream)
  "Serializes a message object of type '<Logitech>"
  (cl:let* ((signed (cl:slot-value msg 'SteeringWheel)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Clutch)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Brake)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'SasPedal)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ShiftPaddlesL)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ShiftPaddlesR)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Ignition)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'HandBrake)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StickShift)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CrossL)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CrossR)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ManualTransmission)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'WheelFunctionKey))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'WheelFunctionKey))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ConcatenonSignal)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve5)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Logitech>) istream)
  "Deserializes a message object of type '<Logitech>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'SteeringWheel) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Clutch)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Brake)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'SasPedal)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ShiftPaddlesL)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ShiftPaddlesR)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Ignition)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'HandBrake)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StickShift)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CrossL)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CrossR)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ManualTransmission)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'WheelFunctionKey) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'WheelFunctionKey)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ConcatenonSignal)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_reserve5)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Logitech>)))
  "Returns string type for a message object of type '<Logitech>"
  "autonavigation/Logitech")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Logitech)))
  "Returns string type for a message object of type 'Logitech"
  "autonavigation/Logitech")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Logitech>)))
  "Returns md5sum for a message object of type '<Logitech>"
  "514b52ad33f160a6fe6f8bec1d48757b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Logitech)))
  "Returns md5sum for a message object of type 'Logitech"
  "514b52ad33f160a6fe6f8bec1d48757b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Logitech>)))
  "Returns full string definition for message of type '<Logitech>"
  (cl:format cl:nil "#罗技力G27反馈方向盘~%~%int16 SteeringWheel #规定右正左负值变化：0-540 ~%uint8 Clutch #离合器值：0-100，放松状态为0~%uint8 Brake #刹车值:0-100，放松状态为0~%uint8 SasPedal #油门值:0-100,放松状态为0~%uint8 ShiftPaddlesL #左换档拨片定义为降档,空状态为0,按下为1~%uint8 ShiftPaddlesR #右换档拨片定义为升档，空状态为0,按下为1~%uint8 Ignition #点火为1,熄火为2,空状态为0~%uint8 HandBrake #松手刹为1,拉手刹为2,空状态为0~%uint8 StickShift #自动档，由十字架上下按键操作 0为P，1为R，2为N，3为D,4为S, 5为L 6为空档，7为切换到换档拨片~%uint8 CrossL #十字架左键~%uint8 CrossR #十字架右键~%uint8 ManualTransmission #手动档换档杆:第一排依次为1,3,5档，第二排依次为2,4,6,R档~%uint8[]  WheelFunctionKey #方向盘6个红色功能键 ~%uint8 ConcatenonSignal #未连接初始值为0,连接成功为1~%uint8 cmd_reserve2 #预留~%uint8 cmd_reserve3 #预留~%uint8 cmd_reserve4 #预留~%uint8 cmd_reserve5 #预留~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Logitech)))
  "Returns full string definition for message of type 'Logitech"
  (cl:format cl:nil "#罗技力G27反馈方向盘~%~%int16 SteeringWheel #规定右正左负值变化：0-540 ~%uint8 Clutch #离合器值：0-100，放松状态为0~%uint8 Brake #刹车值:0-100，放松状态为0~%uint8 SasPedal #油门值:0-100,放松状态为0~%uint8 ShiftPaddlesL #左换档拨片定义为降档,空状态为0,按下为1~%uint8 ShiftPaddlesR #右换档拨片定义为升档，空状态为0,按下为1~%uint8 Ignition #点火为1,熄火为2,空状态为0~%uint8 HandBrake #松手刹为1,拉手刹为2,空状态为0~%uint8 StickShift #自动档，由十字架上下按键操作 0为P，1为R，2为N，3为D,4为S, 5为L 6为空档，7为切换到换档拨片~%uint8 CrossL #十字架左键~%uint8 CrossR #十字架右键~%uint8 ManualTransmission #手动档换档杆:第一排依次为1,3,5档，第二排依次为2,4,6,R档~%uint8[]  WheelFunctionKey #方向盘6个红色功能键 ~%uint8 ConcatenonSignal #未连接初始值为0,连接成功为1~%uint8 cmd_reserve2 #预留~%uint8 cmd_reserve3 #预留~%uint8 cmd_reserve4 #预留~%uint8 cmd_reserve5 #预留~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Logitech>))
  (cl:+ 0
     2
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'WheelFunctionKey) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Logitech>))
  "Converts a ROS message object to a list"
  (cl:list 'Logitech
    (cl:cons ':SteeringWheel (SteeringWheel msg))
    (cl:cons ':Clutch (Clutch msg))
    (cl:cons ':Brake (Brake msg))
    (cl:cons ':SasPedal (SasPedal msg))
    (cl:cons ':ShiftPaddlesL (ShiftPaddlesL msg))
    (cl:cons ':ShiftPaddlesR (ShiftPaddlesR msg))
    (cl:cons ':Ignition (Ignition msg))
    (cl:cons ':HandBrake (HandBrake msg))
    (cl:cons ':StickShift (StickShift msg))
    (cl:cons ':CrossL (CrossL msg))
    (cl:cons ':CrossR (CrossR msg))
    (cl:cons ':ManualTransmission (ManualTransmission msg))
    (cl:cons ':WheelFunctionKey (WheelFunctionKey msg))
    (cl:cons ':ConcatenonSignal (ConcatenonSignal msg))
    (cl:cons ':cmd_reserve2 (cmd_reserve2 msg))
    (cl:cons ':cmd_reserve3 (cmd_reserve3 msg))
    (cl:cons ':cmd_reserve4 (cmd_reserve4 msg))
    (cl:cons ':cmd_reserve5 (cmd_reserve5 msg))
))
