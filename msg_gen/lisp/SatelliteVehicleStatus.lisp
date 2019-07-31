; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude SatelliteVehicleStatus.msg.html

(cl:defclass <SatelliteVehicleStatus> (roslisp-msg-protocol:ros-message)
  ((unique_key
    :reader unique_key
    :initarg :unique_key
    :type cl:integer
    :initform 0)
   (gps_week
    :reader gps_week
    :initarg :gps_week
    :type cl:integer
    :initform 0)
   (gps_millisecond
    :reader gps_millisecond
    :initarg :gps_millisecond
    :type cl:integer
    :initform 0)
   (longitude
    :reader longitude
    :initarg :longitude
    :type cl:float
    :initform 0.0)
   (latitude
    :reader latitude
    :initarg :latitude
    :type cl:float
    :initform 0.0)
   (gaussX
    :reader gaussX
    :initarg :gaussX
    :type cl:integer
    :initform 0)
   (gaussY
    :reader gaussY
    :initarg :gaussY
    :type cl:integer
    :initform 0)
   (azimuth
    :reader azimuth
    :initarg :azimuth
    :type cl:integer
    :initform 0)
   (travel_distance
    :reader travel_distance
    :initarg :travel_distance
    :type cl:integer
    :initform 0)
   (remain_time
    :reader remain_time
    :initarg :remain_time
    :type cl:integer
    :initform 0)
   (steer
    :reader steer
    :initarg :steer
    :type cl:fixnum
    :initform 0)
   (fuel
    :reader fuel
    :initarg :fuel
    :type cl:fixnum
    :initform 0)
   (shift
    :reader shift
    :initarg :shift
    :type cl:fixnum
    :initform 0)
   (voltage
    :reader voltage
    :initarg :voltage
    :type cl:fixnum
    :initform 0)
   (throttle
    :reader throttle
    :initarg :throttle
    :type cl:fixnum
    :initform 0)
   (brake
    :reader brake
    :initarg :brake
    :type cl:fixnum
    :initform 0)
   (engine_speed
    :reader engine_speed
    :initarg :engine_speed
    :type cl:fixnum
    :initform 0)
   (vehicle_speed
    :reader vehicle_speed
    :initarg :vehicle_speed
    :type cl:fixnum
    :initform 0)
   (control_status
    :reader control_status
    :initarg :control_status
    :type cl:fixnum
    :initform 0)
   (handbrake
    :reader handbrake
    :initarg :handbrake
    :type cl:fixnum
    :initform 0)
   (engine_status
    :reader engine_status
    :initarg :engine_status
    :type cl:fixnum
    :initform 0)
   (controllable1
    :reader controllable1
    :initarg :controllable1
    :type cl:fixnum
    :initform 0)
   (reserve1
    :reader reserve1
    :initarg :reserve1
    :type cl:fixnum
    :initform 0)
   (reserve2
    :reader reserve2
    :initarg :reserve2
    :type cl:fixnum
    :initform 0)
   (reserve3
    :reader reserve3
    :initarg :reserve3
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SatelliteVehicleStatus (<SatelliteVehicleStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SatelliteVehicleStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SatelliteVehicleStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<SatelliteVehicleStatus> is deprecated: use autonavigation-msg:SatelliteVehicleStatus instead.")))

(cl:ensure-generic-function 'unique_key-val :lambda-list '(m))
(cl:defmethod unique_key-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:unique_key-val is deprecated.  Use autonavigation-msg:unique_key instead.")
  (unique_key m))

(cl:ensure-generic-function 'gps_week-val :lambda-list '(m))
(cl:defmethod gps_week-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_week-val is deprecated.  Use autonavigation-msg:gps_week instead.")
  (gps_week m))

(cl:ensure-generic-function 'gps_millisecond-val :lambda-list '(m))
(cl:defmethod gps_millisecond-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gps_millisecond-val is deprecated.  Use autonavigation-msg:gps_millisecond instead.")
  (gps_millisecond m))

(cl:ensure-generic-function 'longitude-val :lambda-list '(m))
(cl:defmethod longitude-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:longitude-val is deprecated.  Use autonavigation-msg:longitude instead.")
  (longitude m))

(cl:ensure-generic-function 'latitude-val :lambda-list '(m))
(cl:defmethod latitude-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:latitude-val is deprecated.  Use autonavigation-msg:latitude instead.")
  (latitude m))

(cl:ensure-generic-function 'gaussX-val :lambda-list '(m))
(cl:defmethod gaussX-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gaussX-val is deprecated.  Use autonavigation-msg:gaussX instead.")
  (gaussX m))

(cl:ensure-generic-function 'gaussY-val :lambda-list '(m))
(cl:defmethod gaussY-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gaussY-val is deprecated.  Use autonavigation-msg:gaussY instead.")
  (gaussY m))

(cl:ensure-generic-function 'azimuth-val :lambda-list '(m))
(cl:defmethod azimuth-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:azimuth-val is deprecated.  Use autonavigation-msg:azimuth instead.")
  (azimuth m))

(cl:ensure-generic-function 'travel_distance-val :lambda-list '(m))
(cl:defmethod travel_distance-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:travel_distance-val is deprecated.  Use autonavigation-msg:travel_distance instead.")
  (travel_distance m))

(cl:ensure-generic-function 'remain_time-val :lambda-list '(m))
(cl:defmethod remain_time-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:remain_time-val is deprecated.  Use autonavigation-msg:remain_time instead.")
  (remain_time m))

(cl:ensure-generic-function 'steer-val :lambda-list '(m))
(cl:defmethod steer-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:steer-val is deprecated.  Use autonavigation-msg:steer instead.")
  (steer m))

(cl:ensure-generic-function 'fuel-val :lambda-list '(m))
(cl:defmethod fuel-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:fuel-val is deprecated.  Use autonavigation-msg:fuel instead.")
  (fuel m))

(cl:ensure-generic-function 'shift-val :lambda-list '(m))
(cl:defmethod shift-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:shift-val is deprecated.  Use autonavigation-msg:shift instead.")
  (shift m))

(cl:ensure-generic-function 'voltage-val :lambda-list '(m))
(cl:defmethod voltage-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:voltage-val is deprecated.  Use autonavigation-msg:voltage instead.")
  (voltage m))

(cl:ensure-generic-function 'throttle-val :lambda-list '(m))
(cl:defmethod throttle-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:throttle-val is deprecated.  Use autonavigation-msg:throttle instead.")
  (throttle m))

(cl:ensure-generic-function 'brake-val :lambda-list '(m))
(cl:defmethod brake-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:brake-val is deprecated.  Use autonavigation-msg:brake instead.")
  (brake m))

(cl:ensure-generic-function 'engine_speed-val :lambda-list '(m))
(cl:defmethod engine_speed-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:engine_speed-val is deprecated.  Use autonavigation-msg:engine_speed instead.")
  (engine_speed m))

(cl:ensure-generic-function 'vehicle_speed-val :lambda-list '(m))
(cl:defmethod vehicle_speed-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:vehicle_speed-val is deprecated.  Use autonavigation-msg:vehicle_speed instead.")
  (vehicle_speed m))

(cl:ensure-generic-function 'control_status-val :lambda-list '(m))
(cl:defmethod control_status-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:control_status-val is deprecated.  Use autonavigation-msg:control_status instead.")
  (control_status m))

(cl:ensure-generic-function 'handbrake-val :lambda-list '(m))
(cl:defmethod handbrake-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:handbrake-val is deprecated.  Use autonavigation-msg:handbrake instead.")
  (handbrake m))

(cl:ensure-generic-function 'engine_status-val :lambda-list '(m))
(cl:defmethod engine_status-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:engine_status-val is deprecated.  Use autonavigation-msg:engine_status instead.")
  (engine_status m))

(cl:ensure-generic-function 'controllable1-val :lambda-list '(m))
(cl:defmethod controllable1-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:controllable1-val is deprecated.  Use autonavigation-msg:controllable1 instead.")
  (controllable1 m))

(cl:ensure-generic-function 'reserve1-val :lambda-list '(m))
(cl:defmethod reserve1-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve1-val is deprecated.  Use autonavigation-msg:reserve1 instead.")
  (reserve1 m))

(cl:ensure-generic-function 'reserve2-val :lambda-list '(m))
(cl:defmethod reserve2-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve2-val is deprecated.  Use autonavigation-msg:reserve2 instead.")
  (reserve2 m))

(cl:ensure-generic-function 'reserve3-val :lambda-list '(m))
(cl:defmethod reserve3-val ((m <SatelliteVehicleStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:reserve3-val is deprecated.  Use autonavigation-msg:reserve3 instead.")
  (reserve3 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SatelliteVehicleStatus>) ostream)
  "Serializes a message object of type '<SatelliteVehicleStatus>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'unique_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'unique_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'unique_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'unique_key)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_week)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'gps_week)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'gps_week)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'gps_week)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'gps_millisecond)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'longitude))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'latitude))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'gaussX)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'gaussY)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'azimuth)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'travel_distance)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'travel_distance)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'travel_distance)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'travel_distance)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'remain_time)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'steer)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'fuel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'shift)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'voltage)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'throttle)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'brake)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'engine_speed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vehicle_speed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'control_status)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'handbrake)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'engine_status)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'controllable1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve3)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SatelliteVehicleStatus>) istream)
  "Deserializes a message object of type '<SatelliteVehicleStatus>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'unique_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'unique_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'unique_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'unique_key)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_week)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'gps_week)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'gps_week)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'gps_week)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'gps_millisecond)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'longitude) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'latitude) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'gaussX) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'gaussY) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'azimuth) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'travel_distance)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'travel_distance)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'travel_distance)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'travel_distance)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'remain_time) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'steer) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'fuel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'shift)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'voltage)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'throttle)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'brake)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'engine_speed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vehicle_speed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'control_status)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'handbrake)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'engine_status)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'controllable1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve3)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SatelliteVehicleStatus>)))
  "Returns string type for a message object of type '<SatelliteVehicleStatus>"
  "autonavigation/SatelliteVehicleStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SatelliteVehicleStatus)))
  "Returns string type for a message object of type 'SatelliteVehicleStatus"
  "autonavigation/SatelliteVehicleStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SatelliteVehicleStatus>)))
  "Returns md5sum for a message object of type '<SatelliteVehicleStatus>"
  "c54d083367b6c5736ad6547a58a68963")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SatelliteVehicleStatus)))
  "Returns md5sum for a message object of type 'SatelliteVehicleStatus"
  "c54d083367b6c5736ad6547a58a68963")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SatelliteVehicleStatus>)))
  "Returns full string definition for message of type '<SatelliteVehicleStatus>"
  (cl:format cl:nil "#对应结构体Autonavigation_Satellite_Vehicle_Status~%~%uint32     unique_key           #自主行驶载车唯一标识~%uint32     gps_week             #GPS周~%uint64     gps_millisecond      #GPS毫秒,以周的零点开始的毫秒数~%float64    longitude            #经度，单位为度~%float64    latitude             #纬度，单位为度~%int64      gaussX               #高斯坐标X~%int64      gaussY               #高斯坐标Y~%int32      azimuth              #航向角，单位0.01度，向东为0，逆时针0～36000~%uint32     travel_distance      #T0时刻开始后，前进的里程，单位米~%int32      remain_time          #距离T0时刻还有多少时间，单位毫秒~%int16      steer                #单位0.01度，前轮转角，左转为正~%uint8      fuel                 #剩余油量，百分比~%uint8      shift                #档位~%uint8      voltage              #电压~%uint8      throttle             #当前使用油门量，百分比~%uint8      brake                #当前使用刹车量，百分比~%uint8      engine_speed         #单位100转/分钟，发动机转速~%uint8      vehicle_speed        #单位km/h，汽车时速~%uint8      control_status       #控制状态~%uint8      handbrake            #手刹状态~%uint8      engine_status        #发动机点火状态~%uint8      controllable1        #Bit8：方向盘 Bit7：油门 Bit6：刹车 Bit5：档位 Bit4：手刹 Bit3：点火 Bit2：熄火 Bit1：预留 相应位为1表示受方舱控制 ~%~%uint8      reserve1             #预留~%uint8      reserve2 ~%uint8      reserve3 ~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SatelliteVehicleStatus)))
  "Returns full string definition for message of type 'SatelliteVehicleStatus"
  (cl:format cl:nil "#对应结构体Autonavigation_Satellite_Vehicle_Status~%~%uint32     unique_key           #自主行驶载车唯一标识~%uint32     gps_week             #GPS周~%uint64     gps_millisecond      #GPS毫秒,以周的零点开始的毫秒数~%float64    longitude            #经度，单位为度~%float64    latitude             #纬度，单位为度~%int64      gaussX               #高斯坐标X~%int64      gaussY               #高斯坐标Y~%int32      azimuth              #航向角，单位0.01度，向东为0，逆时针0～36000~%uint32     travel_distance      #T0时刻开始后，前进的里程，单位米~%int32      remain_time          #距离T0时刻还有多少时间，单位毫秒~%int16      steer                #单位0.01度，前轮转角，左转为正~%uint8      fuel                 #剩余油量，百分比~%uint8      shift                #档位~%uint8      voltage              #电压~%uint8      throttle             #当前使用油门量，百分比~%uint8      brake                #当前使用刹车量，百分比~%uint8      engine_speed         #单位100转/分钟，发动机转速~%uint8      vehicle_speed        #单位km/h，汽车时速~%uint8      control_status       #控制状态~%uint8      handbrake            #手刹状态~%uint8      engine_status        #发动机点火状态~%uint8      controllable1        #Bit8：方向盘 Bit7：油门 Bit6：刹车 Bit5：档位 Bit4：手刹 Bit3：点火 Bit2：熄火 Bit1：预留 相应位为1表示受方舱控制 ~%~%uint8      reserve1             #预留~%uint8      reserve2 ~%uint8      reserve3 ~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SatelliteVehicleStatus>))
  (cl:+ 0
     4
     4
     8
     8
     8
     8
     8
     4
     4
     4
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
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SatelliteVehicleStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'SatelliteVehicleStatus
    (cl:cons ':unique_key (unique_key msg))
    (cl:cons ':gps_week (gps_week msg))
    (cl:cons ':gps_millisecond (gps_millisecond msg))
    (cl:cons ':longitude (longitude msg))
    (cl:cons ':latitude (latitude msg))
    (cl:cons ':gaussX (gaussX msg))
    (cl:cons ':gaussY (gaussY msg))
    (cl:cons ':azimuth (azimuth msg))
    (cl:cons ':travel_distance (travel_distance msg))
    (cl:cons ':remain_time (remain_time msg))
    (cl:cons ':steer (steer msg))
    (cl:cons ':fuel (fuel msg))
    (cl:cons ':shift (shift msg))
    (cl:cons ':voltage (voltage msg))
    (cl:cons ':throttle (throttle msg))
    (cl:cons ':brake (brake msg))
    (cl:cons ':engine_speed (engine_speed msg))
    (cl:cons ':vehicle_speed (vehicle_speed msg))
    (cl:cons ':control_status (control_status msg))
    (cl:cons ':handbrake (handbrake msg))
    (cl:cons ':engine_status (engine_status msg))
    (cl:cons ':controllable1 (controllable1 msg))
    (cl:cons ':reserve1 (reserve1 msg))
    (cl:cons ':reserve2 (reserve2 msg))
    (cl:cons ':reserve3 (reserve3 msg))
))
