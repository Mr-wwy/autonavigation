; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude VelodyneScan.msg.html

(cl:defclass <VelodyneScan> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
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
   (packets
    :reader packets
    :initarg :packets
    :type (cl:vector autonavigation-msg:VelodynePacket)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:VelodynePacket :initial-element (cl:make-instance 'autonavigation-msg:VelodynePacket))))
)

(cl:defclass VelodyneScan (<VelodyneScan>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VelodyneScan>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VelodyneScan)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<VelodyneScan> is deprecated: use autonavigation-msg:VelodyneScan instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <VelodyneScan>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:header-val is deprecated.  Use autonavigation-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'localPose-val :lambda-list '(m))
(cl:defmethod localPose-val ((m <VelodyneScan>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:localPose-val is deprecated.  Use autonavigation-msg:localPose instead.")
  (localPose m))

(cl:ensure-generic-function 'gpsPos-val :lambda-list '(m))
(cl:defmethod gpsPos-val ((m <VelodyneScan>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gpsPos-val is deprecated.  Use autonavigation-msg:gpsPos instead.")
  (gpsPos m))

(cl:ensure-generic-function 'packets-val :lambda-list '(m))
(cl:defmethod packets-val ((m <VelodyneScan>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:packets-val is deprecated.  Use autonavigation-msg:packets instead.")
  (packets m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VelodyneScan>) ostream)
  "Serializes a message object of type '<VelodyneScan>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'localPose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'gpsPos) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'packets))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'packets))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VelodyneScan>) istream)
  "Deserializes a message object of type '<VelodyneScan>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'localPose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'gpsPos) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'packets) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'packets)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:VelodynePacket))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VelodyneScan>)))
  "Returns string type for a message object of type '<VelodyneScan>"
  "autonavigation/VelodyneScan")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VelodyneScan)))
  "Returns string type for a message object of type 'VelodyneScan"
  "autonavigation/VelodyneScan")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VelodyneScan>)))
  "Returns md5sum for a message object of type '<VelodyneScan>"
  "b84db49b197bce2da993f944c9202cd1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VelodyneScan)))
  "Returns md5sum for a message object of type 'VelodyneScan"
  "b84db49b197bce2da993f944c9202cd1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VelodyneScan>)))
  "Returns full string definition for message of type '<VelodyneScan>"
  (cl:format cl:nil "# Velodyne LIDAR scan packets.~%~%Header           header         # standard ROS message header~%LocalPose   localPose~%GpsPosition gpsPos~%~%VelodynePacket[] packets        # vector of raw packets~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/VelodynePacket~%# Raw Velodyne LIDAR packet.~%~%time stamp              # packet timestamp~%uint8[1206] data        # packet contents~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VelodyneScan)))
  "Returns full string definition for message of type 'VelodyneScan"
  (cl:format cl:nil "# Velodyne LIDAR scan packets.~%~%Header           header         # standard ROS message header~%LocalPose   localPose~%GpsPosition gpsPos~%~%VelodynePacket[] packets        # vector of raw packets~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/VelodynePacket~%# Raw Velodyne LIDAR packet.~%~%time stamp              # packet timestamp~%uint8[1206] data        # packet contents~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VelodyneScan>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'localPose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'gpsPos))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'packets) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VelodyneScan>))
  "Converts a ROS message object to a list"
  (cl:list 'VelodyneScan
    (cl:cons ':header (header msg))
    (cl:cons ':localPose (localPose msg))
    (cl:cons ':gpsPos (gpsPos msg))
    (cl:cons ':packets (packets msg))
))
