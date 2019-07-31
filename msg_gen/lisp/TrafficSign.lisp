; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude TrafficSign.msg.html

(cl:defclass <TrafficSign> (roslisp-msg-protocol:ros-message)
  ((head
    :reader head
    :initarg :head
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (localPose
    :reader localPose
    :initarg :localPose
    :type autonavigation-msg:LocalPose
    :initform (cl:make-instance 'autonavigation-msg:LocalPose))
   (gpsPos
    :reader gpsPos
    :initarg :gpsPos
    :type autonavigation-msg:GpsPosition
    :initform (cl:make-instance 'autonavigation-msg:GpsPosition))
   (signNum
    :reader signNum
    :initarg :signNum
    :type cl:integer
    :initform 0)
   (signs
    :reader signs
    :initarg :signs
    :type (cl:vector autonavigation-msg:Sign)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:Sign :initial-element (cl:make-instance 'autonavigation-msg:Sign))))
)

(cl:defclass TrafficSign (<TrafficSign>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TrafficSign>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TrafficSign)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<TrafficSign> is deprecated: use autonavigation-msg:TrafficSign instead.")))

(cl:ensure-generic-function 'head-val :lambda-list '(m))
(cl:defmethod head-val ((m <TrafficSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:head-val is deprecated.  Use autonavigation-msg:head instead.")
  (head m))

(cl:ensure-generic-function 'localPose-val :lambda-list '(m))
(cl:defmethod localPose-val ((m <TrafficSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:localPose-val is deprecated.  Use autonavigation-msg:localPose instead.")
  (localPose m))

(cl:ensure-generic-function 'gpsPos-val :lambda-list '(m))
(cl:defmethod gpsPos-val ((m <TrafficSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gpsPos-val is deprecated.  Use autonavigation-msg:gpsPos instead.")
  (gpsPos m))

(cl:ensure-generic-function 'signNum-val :lambda-list '(m))
(cl:defmethod signNum-val ((m <TrafficSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:signNum-val is deprecated.  Use autonavigation-msg:signNum instead.")
  (signNum m))

(cl:ensure-generic-function 'signs-val :lambda-list '(m))
(cl:defmethod signs-val ((m <TrafficSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:signs-val is deprecated.  Use autonavigation-msg:signs instead.")
  (signs m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TrafficSign>) ostream)
  "Serializes a message object of type '<TrafficSign>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'head) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'localPose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'gpsPos) ostream)
  (cl:let* ((signed (cl:slot-value msg 'signNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'signs))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'signs))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TrafficSign>) istream)
  "Deserializes a message object of type '<TrafficSign>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'head) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'localPose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'gpsPos) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'signNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'signs) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'signs)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:Sign))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TrafficSign>)))
  "Returns string type for a message object of type '<TrafficSign>"
  "autonavigation/TrafficSign")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TrafficSign)))
  "Returns string type for a message object of type 'TrafficSign"
  "autonavigation/TrafficSign")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TrafficSign>)))
  "Returns md5sum for a message object of type '<TrafficSign>"
  "cc602690fa39edfc19402668e29947a1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TrafficSign)))
  "Returns md5sum for a message object of type 'TrafficSign"
  "cc602690fa39edfc19402668e29947a1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TrafficSign>)))
  "Returns full string definition for message of type '<TrafficSign>"
  (cl:format cl:nil "Header      head~%LocalPose   localPose~%GpsPosition gpsPos~%~%int32         signNum~%Sign[]        signs~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/Sign~%uint8 pos_flag       #  交通标志位置信息 ~%int32 x              #  x坐标，厘米为单位~%int32 y              #  y坐标，厘米为单位~%uint8 sign_type      #  交通标志类型信息~%~%~%#~%# pos_flag~%#  0: 没有位置信息~%#  1: 位置信息有效~%~%# sign_type:~%#  0：无路标        ~%#  1：禁止左转~%#  2：禁止右转~%#  3：禁止直行~%#  4：禁止向左和向右~%#  5：禁止向左和直行~%#  6：禁止向右和直行~%#  7：禁止驶入~%#  8：停车~%#  9： 前方学校 （减速）       ~%#  10：注意行人 （减速）       ~%#  11：路面不平 （减速）      ~%#  12：路面施工 （减速）~%#  13：直行~%#  14：向左转~%#  15：向右转~%#  16：直行和左转~%#  17：直行和右转~%#  18：向左和向右~%#  19：靠右行驶        ~%#  20：靠左行驶        ~%#  21：鸣喇叭 ------- 无    ~%#  22：环岛行驶 ------- 无     ~%#  23：人行横道        ~%#  24：允许掉头        ~%#  25：停车位          ~%#  26：禁止掉头  ~%#  27：限速10公里 （减速）~%#  28：解除限速10公里 ------- 无~%#  29：限速15公里~%#  30：限速20公里~%#  31：限速25公里~%#  32: 三角修车标志~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TrafficSign)))
  "Returns full string definition for message of type 'TrafficSign"
  (cl:format cl:nil "Header      head~%LocalPose   localPose~%GpsPosition gpsPos~%~%int32         signNum~%Sign[]        signs~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/Sign~%uint8 pos_flag       #  交通标志位置信息 ~%int32 x              #  x坐标，厘米为单位~%int32 y              #  y坐标，厘米为单位~%uint8 sign_type      #  交通标志类型信息~%~%~%#~%# pos_flag~%#  0: 没有位置信息~%#  1: 位置信息有效~%~%# sign_type:~%#  0：无路标        ~%#  1：禁止左转~%#  2：禁止右转~%#  3：禁止直行~%#  4：禁止向左和向右~%#  5：禁止向左和直行~%#  6：禁止向右和直行~%#  7：禁止驶入~%#  8：停车~%#  9： 前方学校 （减速）       ~%#  10：注意行人 （减速）       ~%#  11：路面不平 （减速）      ~%#  12：路面施工 （减速）~%#  13：直行~%#  14：向左转~%#  15：向右转~%#  16：直行和左转~%#  17：直行和右转~%#  18：向左和向右~%#  19：靠右行驶        ~%#  20：靠左行驶        ~%#  21：鸣喇叭 ------- 无    ~%#  22：环岛行驶 ------- 无     ~%#  23：人行横道        ~%#  24：允许掉头        ~%#  25：停车位          ~%#  26：禁止掉头  ~%#  27：限速10公里 （减速）~%#  28：解除限速10公里 ------- 无~%#  29：限速15公里~%#  30：限速20公里~%#  31：限速25公里~%#  32: 三角修车标志~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TrafficSign>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'head))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'localPose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'gpsPos))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'signs) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TrafficSign>))
  "Converts a ROS message object to a list"
  (cl:list 'TrafficSign
    (cl:cons ':head (head msg))
    (cl:cons ':localPose (localPose msg))
    (cl:cons ':gpsPos (gpsPos msg))
    (cl:cons ':signNum (signNum msg))
    (cl:cons ':signs (signs msg))
))
