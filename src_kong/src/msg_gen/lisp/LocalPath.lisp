; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude LocalPath.msg.html

(cl:defclass <LocalPath> (roslisp-msg-protocol:ros-message)
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
   (plan_data_id
    :reader plan_data_id
    :initarg :plan_data_id
    :type cl:integer
    :initform 0)
   (plan_frame
    :reader plan_frame
    :initarg :plan_frame
    :type autonavigation-msg:LocalCoordinate
    :initform (cl:make-instance 'autonavigation-msg:LocalCoordinate))
   (planOutputMode
    :reader planOutputMode
    :initarg :planOutputMode
    :type cl:fixnum
    :initform 0)
   (is_ok
    :reader is_ok
    :initarg :is_ok
    :type cl:fixnum
    :initform 0)
   (effective_point_num
    :reader effective_point_num
    :initarg :effective_point_num
    :type cl:fixnum
    :initform 0)
   (path
    :reader path
    :initarg :path
    :type (cl:vector autonavigation-msg:WayPoint)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:WayPoint :initial-element (cl:make-instance 'autonavigation-msg:WayPoint)))
   (path_property
    :reader path_property
    :initarg :path_property
    :type (cl:vector autonavigation-msg:PathProperty)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:PathProperty :initial-element (cl:make-instance 'autonavigation-msg:PathProperty)))
   (vehicle_command
    :reader vehicle_command
    :initarg :vehicle_command
    :type cl:fixnum
    :initform 0)
   (sys_state
    :reader sys_state
    :initarg :sys_state
    :type cl:fixnum
    :initform 0)
   (plan_state
    :reader plan_state
    :initarg :plan_state
    :type cl:fixnum
    :initform 0)
   (speed
    :reader speed
    :initarg :speed
    :type cl:integer
    :initform 0)
   (vehicle2Flo
    :reader vehicle2Flo
    :initarg :vehicle2Flo
    :type autonavigation-msg:VehicleObj
    :initform (cl:make-instance 'autonavigation-msg:VehicleObj))
   (point2Stop
    :reader point2Stop
    :initarg :point2Stop
    :type autonavigation-msg:WayPoint
    :initform (cl:make-instance 'autonavigation-msg:WayPoint))
   (expVelocity
    :reader expVelocity
    :initarg :expVelocity
    :type cl:float
    :initform 0.0)
   (expCurvature
    :reader expCurvature
    :initarg :expCurvature
    :type cl:float
    :initform 0.0))
)

(cl:defclass LocalPath (<LocalPath>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LocalPath>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LocalPath)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<LocalPath> is deprecated: use autonavigation-msg:LocalPath instead.")))

(cl:ensure-generic-function 'head-val :lambda-list '(m))
(cl:defmethod head-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:head-val is deprecated.  Use autonavigation-msg:head instead.")
  (head m))

(cl:ensure-generic-function 'localPose-val :lambda-list '(m))
(cl:defmethod localPose-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:localPose-val is deprecated.  Use autonavigation-msg:localPose instead.")
  (localPose m))

(cl:ensure-generic-function 'gpsPos-val :lambda-list '(m))
(cl:defmethod gpsPos-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gpsPos-val is deprecated.  Use autonavigation-msg:gpsPos instead.")
  (gpsPos m))

(cl:ensure-generic-function 'plan_data_id-val :lambda-list '(m))
(cl:defmethod plan_data_id-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:plan_data_id-val is deprecated.  Use autonavigation-msg:plan_data_id instead.")
  (plan_data_id m))

(cl:ensure-generic-function 'plan_frame-val :lambda-list '(m))
(cl:defmethod plan_frame-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:plan_frame-val is deprecated.  Use autonavigation-msg:plan_frame instead.")
  (plan_frame m))

(cl:ensure-generic-function 'planOutputMode-val :lambda-list '(m))
(cl:defmethod planOutputMode-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:planOutputMode-val is deprecated.  Use autonavigation-msg:planOutputMode instead.")
  (planOutputMode m))

(cl:ensure-generic-function 'is_ok-val :lambda-list '(m))
(cl:defmethod is_ok-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:is_ok-val is deprecated.  Use autonavigation-msg:is_ok instead.")
  (is_ok m))

(cl:ensure-generic-function 'effective_point_num-val :lambda-list '(m))
(cl:defmethod effective_point_num-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:effective_point_num-val is deprecated.  Use autonavigation-msg:effective_point_num instead.")
  (effective_point_num m))

(cl:ensure-generic-function 'path-val :lambda-list '(m))
(cl:defmethod path-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:path-val is deprecated.  Use autonavigation-msg:path instead.")
  (path m))

(cl:ensure-generic-function 'path_property-val :lambda-list '(m))
(cl:defmethod path_property-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:path_property-val is deprecated.  Use autonavigation-msg:path_property instead.")
  (path_property m))

(cl:ensure-generic-function 'vehicle_command-val :lambda-list '(m))
(cl:defmethod vehicle_command-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:vehicle_command-val is deprecated.  Use autonavigation-msg:vehicle_command instead.")
  (vehicle_command m))

(cl:ensure-generic-function 'sys_state-val :lambda-list '(m))
(cl:defmethod sys_state-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:sys_state-val is deprecated.  Use autonavigation-msg:sys_state instead.")
  (sys_state m))

(cl:ensure-generic-function 'plan_state-val :lambda-list '(m))
(cl:defmethod plan_state-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:plan_state-val is deprecated.  Use autonavigation-msg:plan_state instead.")
  (plan_state m))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:speed-val is deprecated.  Use autonavigation-msg:speed instead.")
  (speed m))

(cl:ensure-generic-function 'vehicle2Flo-val :lambda-list '(m))
(cl:defmethod vehicle2Flo-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:vehicle2Flo-val is deprecated.  Use autonavigation-msg:vehicle2Flo instead.")
  (vehicle2Flo m))

(cl:ensure-generic-function 'point2Stop-val :lambda-list '(m))
(cl:defmethod point2Stop-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:point2Stop-val is deprecated.  Use autonavigation-msg:point2Stop instead.")
  (point2Stop m))

(cl:ensure-generic-function 'expVelocity-val :lambda-list '(m))
(cl:defmethod expVelocity-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:expVelocity-val is deprecated.  Use autonavigation-msg:expVelocity instead.")
  (expVelocity m))

(cl:ensure-generic-function 'expCurvature-val :lambda-list '(m))
(cl:defmethod expCurvature-val ((m <LocalPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:expCurvature-val is deprecated.  Use autonavigation-msg:expCurvature instead.")
  (expCurvature m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<LocalPath>)))
    "Constants for message type '<LocalPath>"
  '((:COMMAND_ES . 200)
    (:COMMAND_ST . 201)
    (:COMMAND_AD_SPEED . 202)
    (:COMMAND_AD_DISTANCE . 203)
    (:COMMAND_AD_POINT . 204)
    (:COMMAND_BK_SPEED . 205)
    (:COMMAND_BK_POINT . 206)
    (:COMMAND_IG . 207)
    (:COMMAND_FO . 208)
    (:SYS_STATE_RS . 100)
    (:SYS_STATE_RO . 101)
    (:SYS_STATE_RT . 102)
    (:SYS_STATE_RB . 103)
    (:SYS_STATE_CN . 104)
    (:SYS_STATE_CO . 105)
    (:SYS_STATE_SG . 106)
    (:SYS_STATE_HS . 107)
    (:SYS_STATE_HF . 108)
    (:SYS_STATE_HT . 109)
    (:SYS_STATE_HB . 110)
    (:SYS_STATE_RD . 111)
    (:SYS_STATE_IT . 112)
    (:SYS_STATE_MC . 113)
    (:SYS_STATE_MR . 114)
    (:SYS_STATE_EM . 115)
    (:SYS_STATE_SP . 116)
    (:SYS_STATE_FI . 117)
    (:PLAN_STATE_PR . 50)
    (:PLAN_STATE_NP . 51)
    (:PLAN_STATE_GT . 52)
    (:PLAN_STATE_PB . 53)
    (:PLAN_STATE_RR . 54)
    (:PLAN_STATE_WT . 55)
    (:PLAN_STATE_EC . 56)
    (:PLAN_STATE_REPLAN . 57)
    (:PLAN_STATE_NORMAL_PLAN . 58))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'LocalPath)))
    "Constants for message type 'LocalPath"
  '((:COMMAND_ES . 200)
    (:COMMAND_ST . 201)
    (:COMMAND_AD_SPEED . 202)
    (:COMMAND_AD_DISTANCE . 203)
    (:COMMAND_AD_POINT . 204)
    (:COMMAND_BK_SPEED . 205)
    (:COMMAND_BK_POINT . 206)
    (:COMMAND_IG . 207)
    (:COMMAND_FO . 208)
    (:SYS_STATE_RS . 100)
    (:SYS_STATE_RO . 101)
    (:SYS_STATE_RT . 102)
    (:SYS_STATE_RB . 103)
    (:SYS_STATE_CN . 104)
    (:SYS_STATE_CO . 105)
    (:SYS_STATE_SG . 106)
    (:SYS_STATE_HS . 107)
    (:SYS_STATE_HF . 108)
    (:SYS_STATE_HT . 109)
    (:SYS_STATE_HB . 110)
    (:SYS_STATE_RD . 111)
    (:SYS_STATE_IT . 112)
    (:SYS_STATE_MC . 113)
    (:SYS_STATE_MR . 114)
    (:SYS_STATE_EM . 115)
    (:SYS_STATE_SP . 116)
    (:SYS_STATE_FI . 117)
    (:PLAN_STATE_PR . 50)
    (:PLAN_STATE_NP . 51)
    (:PLAN_STATE_GT . 52)
    (:PLAN_STATE_PB . 53)
    (:PLAN_STATE_RR . 54)
    (:PLAN_STATE_WT . 55)
    (:PLAN_STATE_EC . 56)
    (:PLAN_STATE_REPLAN . 57)
    (:PLAN_STATE_NORMAL_PLAN . 58))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LocalPath>) ostream)
  "Serializes a message object of type '<LocalPath>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'head) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'localPose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'gpsPos) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'plan_data_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'plan_data_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'plan_data_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'plan_data_id)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'plan_frame) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'planOutputMode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'planOutputMode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'is_ok)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'is_ok)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'effective_point_num)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'effective_point_num)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'path))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'path))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'path_property))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'path_property))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vehicle_command)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'vehicle_command)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sys_state)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'sys_state)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'plan_state)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'plan_state)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'speed)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'vehicle2Flo) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'point2Stop) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'expVelocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'expCurvature))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LocalPath>) istream)
  "Deserializes a message object of type '<LocalPath>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'head) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'localPose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'gpsPos) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'plan_data_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'plan_data_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'plan_data_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'plan_data_id)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'plan_frame) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'planOutputMode)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'planOutputMode)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'is_ok)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'is_ok)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'effective_point_num)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'effective_point_num)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'path) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'path)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:WayPoint))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'path_property) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'path_property)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:PathProperty))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vehicle_command)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'vehicle_command)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sys_state)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'sys_state)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'plan_state)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'plan_state)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'speed) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'vehicle2Flo) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'point2Stop) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'expVelocity) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'expCurvature) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LocalPath>)))
  "Returns string type for a message object of type '<LocalPath>"
  "autonavigation/LocalPath")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LocalPath)))
  "Returns string type for a message object of type 'LocalPath"
  "autonavigation/LocalPath")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LocalPath>)))
  "Returns md5sum for a message object of type '<LocalPath>"
  "f5ad35f8909fe526985007d91d5de2b5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LocalPath)))
  "Returns md5sum for a message object of type 'LocalPath"
  "f5ad35f8909fe526985007d91d5de2b5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LocalPath>)))
  "Returns full string definition for message of type '<LocalPath>"
  (cl:format cl:nil "######下面为一系列宏定义#########~%~%# command to vehicle~%#ES:紧急停车；ST：停车；AD_SPEED:前进速度跟踪；AD_DISTANCE:前进定距跟踪；AD_POINT:前进定点停车；~%#BK_SPEED:后退速度跟踪；BK_DISTANCE:后退定距跟踪；IG：点火；FO：熄火。~%~%uint16 COMMAND_ES=200~%uint16 COMMAND_ST=201~%uint16 COMMAND_AD_SPEED=202~%uint16 COMMAND_AD_DISTANCE=203~%uint16 COMMAND_AD_POINT=204~%uint16 COMMAND_BK_SPEED=205~%uint16 COMMAND_BK_POINT=206~%uint16 COMMAND_IG=207~%uint16 COMMAND_FO=208~%~%#系统状态~%#RS-直道; RO-避障；RT-弯道；RB-分叉；~%#HS-高速直道；HF-高速尾随；HT-高速弯道；HB-高速分叉；~%#CN-越野；CO-越野避障~%#MC-遥控；MR-遥控侦察~%#IT-初始化；EM-异常; FI-终点停车 RD-准就绪 SP-停车~%#SG-笔直直行~%uint16 SYS_STATE_RS=100~%uint16 SYS_STATE_RO=101~%uint16 SYS_STATE_RT=102~%uint16 SYS_STATE_RB=103~%uint16 SYS_STATE_CN=104~%uint16 SYS_STATE_CO=105~%uint16 SYS_STATE_SG=106~%uint16 SYS_STATE_HS=107~%uint16 SYS_STATE_HF=108~%uint16 SYS_STATE_HT=109~%uint16 SYS_STATE_HB=110~%uint16 SYS_STATE_RD=111~%uint16 SYS_STATE_IT=112~%uint16 SYS_STATE_MC=113~%uint16 SYS_STATE_MR=114~%uint16 SYS_STATE_EM=115~%uint16 SYS_STATE_SP=116~%uint16 SYS_STATE_FI=117~%~%# plan state #~%#PR-得到规划路径    NP-没有道路可通行     EC-紧急情况~%#GT-到达目标点       PB－上一次的道路      RR-使用参考路~%# WT-waiting       REPLAN 重规划       NORMAL_PLAN~%uint16 PLAN_STATE_PR=50~%uint16 PLAN_STATE_NP=51~%uint16 PLAN_STATE_GT=52~%uint16 PLAN_STATE_PB=53~%uint16 PLAN_STATE_RR=54~%uint16 PLAN_STATE_WT=55~%uint16 PLAN_STATE_EC=56~%uint16 PLAN_STATE_REPLAN=57~%uint16 PLAN_STATE_NORMAL_PLAN=58~%~%####宏定义结束############~%~%##########################~%####规划输出消息主体#######~%##########################~%~%Header      head~%LocalPose   localPose~%GpsPosition gpsPos~%~%uint32		        plan_data_id 		                #局部路径规划帧号~%LocalCoordinate         plan_frame				#冻结坐标 ~%uint16                  planOutputMode                          #规划输出模式，0-输出路径，1-输出期望速度和曲率                          ~%uint16		        is_ok					#路径数据有效标志：0 - 无效 1 - 有效~%uint16		        effective_point_num	                #局部路径规划的有效点数目~%WayPoint[]	        path	       	                        #局部路径规划点集,ros的Point32类型，单位厘米~%PathProperty[]	        path_property~%uint16                  vehicle_command		                #系统事件,规划给控制的命令，如点火，~%uint16           	sys_state~%uint16  	        plan_state				#系统状态  ~%int32		        speed                                   #速度: 公里/小时~%VehicleObj              vehicle2Flo~%WayPoint                point2Stop~%float64                 expVelocity                             #期望速度，值域0.0~100.0，单位是m/s，double类型~%float64                 expCurvature                            #期望曲率，单位是1/m,满足右手规则~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/LocalCoordinate~%int32 z_x~%int32 z_y~%int32 g_x~%int32 g_y~%int32 heading~%int32 pitch~%int32 roll~%int32 height~%uint8 class_id~%~%~%================================================================================~%MSG: autonavigation/WayPoint~%int32 x~%int32 y~%int32 z~%~%================================================================================~%MSG: autonavigation/PathProperty~%WayPoint left_boundary~%WayPoint right_boundary~%int32    direction~%~%~%================================================================================~%MSG: autonavigation/VehicleObj~%#ID num~%int32 ID       ~%# position, cm~%int32 centerX~%int32 centerY~%# cm/s~%int32 speed        ~%# 0.01degree   ~%int32 speedDirection  ~%int32 height         ~%# car, truck, bicycle, big obj, small obj, unknown obj ~%int32 vehclass     ~%~%geometry_msgs/Polygon vehPolygon      ~%~%int32   vertexNumber~%int32[] vertexX~%int32[] vertexY~%~%================================================================================~%MSG: geometry_msgs/Polygon~%#A specification of a polygon where the first and last points are assumed to be connected~%Point32[] points~%~%================================================================================~%MSG: geometry_msgs/Point32~%# This contains the position of a point in free space(with 32 bits of precision).~%# It is recommeded to use Point wherever possible instead of Point32.  ~%# ~%# This recommendation is to promote interoperability.  ~%#~%# This message is designed to take up less space when sending~%# lots of points at once, as in the case of a PointCloud.  ~%~%float32 x~%float32 y~%float32 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LocalPath)))
  "Returns full string definition for message of type 'LocalPath"
  (cl:format cl:nil "######下面为一系列宏定义#########~%~%# command to vehicle~%#ES:紧急停车；ST：停车；AD_SPEED:前进速度跟踪；AD_DISTANCE:前进定距跟踪；AD_POINT:前进定点停车；~%#BK_SPEED:后退速度跟踪；BK_DISTANCE:后退定距跟踪；IG：点火；FO：熄火。~%~%uint16 COMMAND_ES=200~%uint16 COMMAND_ST=201~%uint16 COMMAND_AD_SPEED=202~%uint16 COMMAND_AD_DISTANCE=203~%uint16 COMMAND_AD_POINT=204~%uint16 COMMAND_BK_SPEED=205~%uint16 COMMAND_BK_POINT=206~%uint16 COMMAND_IG=207~%uint16 COMMAND_FO=208~%~%#系统状态~%#RS-直道; RO-避障；RT-弯道；RB-分叉；~%#HS-高速直道；HF-高速尾随；HT-高速弯道；HB-高速分叉；~%#CN-越野；CO-越野避障~%#MC-遥控；MR-遥控侦察~%#IT-初始化；EM-异常; FI-终点停车 RD-准就绪 SP-停车~%#SG-笔直直行~%uint16 SYS_STATE_RS=100~%uint16 SYS_STATE_RO=101~%uint16 SYS_STATE_RT=102~%uint16 SYS_STATE_RB=103~%uint16 SYS_STATE_CN=104~%uint16 SYS_STATE_CO=105~%uint16 SYS_STATE_SG=106~%uint16 SYS_STATE_HS=107~%uint16 SYS_STATE_HF=108~%uint16 SYS_STATE_HT=109~%uint16 SYS_STATE_HB=110~%uint16 SYS_STATE_RD=111~%uint16 SYS_STATE_IT=112~%uint16 SYS_STATE_MC=113~%uint16 SYS_STATE_MR=114~%uint16 SYS_STATE_EM=115~%uint16 SYS_STATE_SP=116~%uint16 SYS_STATE_FI=117~%~%# plan state #~%#PR-得到规划路径    NP-没有道路可通行     EC-紧急情况~%#GT-到达目标点       PB－上一次的道路      RR-使用参考路~%# WT-waiting       REPLAN 重规划       NORMAL_PLAN~%uint16 PLAN_STATE_PR=50~%uint16 PLAN_STATE_NP=51~%uint16 PLAN_STATE_GT=52~%uint16 PLAN_STATE_PB=53~%uint16 PLAN_STATE_RR=54~%uint16 PLAN_STATE_WT=55~%uint16 PLAN_STATE_EC=56~%uint16 PLAN_STATE_REPLAN=57~%uint16 PLAN_STATE_NORMAL_PLAN=58~%~%####宏定义结束############~%~%##########################~%####规划输出消息主体#######~%##########################~%~%Header      head~%LocalPose   localPose~%GpsPosition gpsPos~%~%uint32		        plan_data_id 		                #局部路径规划帧号~%LocalCoordinate         plan_frame				#冻结坐标 ~%uint16                  planOutputMode                          #规划输出模式，0-输出路径，1-输出期望速度和曲率                          ~%uint16		        is_ok					#路径数据有效标志：0 - 无效 1 - 有效~%uint16		        effective_point_num	                #局部路径规划的有效点数目~%WayPoint[]	        path	       	                        #局部路径规划点集,ros的Point32类型，单位厘米~%PathProperty[]	        path_property~%uint16                  vehicle_command		                #系统事件,规划给控制的命令，如点火，~%uint16           	sys_state~%uint16  	        plan_state				#系统状态  ~%int32		        speed                                   #速度: 公里/小时~%VehicleObj              vehicle2Flo~%WayPoint                point2Stop~%float64                 expVelocity                             #期望速度，值域0.0~100.0，单位是m/s，double类型~%float64                 expCurvature                            #期望曲率，单位是1/m,满足右手规则~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/LocalCoordinate~%int32 z_x~%int32 z_y~%int32 g_x~%int32 g_y~%int32 heading~%int32 pitch~%int32 roll~%int32 height~%uint8 class_id~%~%~%================================================================================~%MSG: autonavigation/WayPoint~%int32 x~%int32 y~%int32 z~%~%================================================================================~%MSG: autonavigation/PathProperty~%WayPoint left_boundary~%WayPoint right_boundary~%int32    direction~%~%~%================================================================================~%MSG: autonavigation/VehicleObj~%#ID num~%int32 ID       ~%# position, cm~%int32 centerX~%int32 centerY~%# cm/s~%int32 speed        ~%# 0.01degree   ~%int32 speedDirection  ~%int32 height         ~%# car, truck, bicycle, big obj, small obj, unknown obj ~%int32 vehclass     ~%~%geometry_msgs/Polygon vehPolygon      ~%~%int32   vertexNumber~%int32[] vertexX~%int32[] vertexY~%~%================================================================================~%MSG: geometry_msgs/Polygon~%#A specification of a polygon where the first and last points are assumed to be connected~%Point32[] points~%~%================================================================================~%MSG: geometry_msgs/Point32~%# This contains the position of a point in free space(with 32 bits of precision).~%# It is recommeded to use Point wherever possible instead of Point32.  ~%# ~%# This recommendation is to promote interoperability.  ~%#~%# This message is designed to take up less space when sending~%# lots of points at once, as in the case of a PointCloud.  ~%~%float32 x~%float32 y~%float32 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LocalPath>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'head))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'localPose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'gpsPos))
     4
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'plan_frame))
     2
     2
     2
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'path) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'path_property) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     2
     2
     2
     4
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'vehicle2Flo))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'point2Stop))
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LocalPath>))
  "Converts a ROS message object to a list"
  (cl:list 'LocalPath
    (cl:cons ':head (head msg))
    (cl:cons ':localPose (localPose msg))
    (cl:cons ':gpsPos (gpsPos msg))
    (cl:cons ':plan_data_id (plan_data_id msg))
    (cl:cons ':plan_frame (plan_frame msg))
    (cl:cons ':planOutputMode (planOutputMode msg))
    (cl:cons ':is_ok (is_ok msg))
    (cl:cons ':effective_point_num (effective_point_num msg))
    (cl:cons ':path (path msg))
    (cl:cons ':path_property (path_property msg))
    (cl:cons ':vehicle_command (vehicle_command msg))
    (cl:cons ':sys_state (sys_state msg))
    (cl:cons ':plan_state (plan_state msg))
    (cl:cons ':speed (speed msg))
    (cl:cons ':vehicle2Flo (vehicle2Flo msg))
    (cl:cons ':point2Stop (point2Stop msg))
    (cl:cons ':expVelocity (expVelocity msg))
    (cl:cons ':expCurvature (expCurvature msg))
))
