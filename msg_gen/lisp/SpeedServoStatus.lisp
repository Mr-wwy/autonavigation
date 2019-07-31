; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude SpeedServoStatus.msg.html

(cl:defclass <SpeedServoStatus> (roslisp-msg-protocol:ros-message)
  ((DesiredSpeed
    :reader DesiredSpeed
    :initarg :DesiredSpeed
    :type cl:float
    :initform 0.0)
   (DesiredAcc
    :reader DesiredAcc
    :initarg :DesiredAcc
    :type cl:float
    :initform 0.0)
   (CurrentSpeed
    :reader CurrentSpeed
    :initarg :CurrentSpeed
    :type cl:float
    :initform 0.0)
   (CurrentAcc
    :reader CurrentAcc
    :initarg :CurrentAcc
    :type cl:float
    :initform 0.0)
   (DesiredBrake
    :reader DesiredBrake
    :initarg :DesiredBrake
    :type cl:float
    :initform 0.0)
   (CurrentBrake
    :reader CurrentBrake
    :initarg :CurrentBrake
    :type cl:float
    :initform 0.0)
   (DesiredFuel
    :reader DesiredFuel
    :initarg :DesiredFuel
    :type cl:float
    :initform 0.0)
   (CurrentFuel
    :reader CurrentFuel
    :initarg :CurrentFuel
    :type cl:float
    :initform 0.0)
   (DesiredTransPos
    :reader DesiredTransPos
    :initarg :DesiredTransPos
    :type cl:integer
    :initform 0)
   (CurrentTransPos
    :reader CurrentTransPos
    :initarg :CurrentTransPos
    :type cl:integer
    :initform 0)
   (HardSwitchOn
    :reader HardSwitchOn
    :initarg :HardSwitchOn
    :type cl:integer
    :initform 0)
   (EmergenceFlag
    :reader EmergenceFlag
    :initarg :EmergenceFlag
    :type cl:integer
    :initform 0)
   (BcanControlFlag
    :reader BcanControlFlag
    :initarg :BcanControlFlag
    :type cl:integer
    :initform 0)
   (HornOnFlag
    :reader HornOnFlag
    :initarg :HornOnFlag
    :type cl:integer
    :initform 0)
   (EmergencyLightonFlag
    :reader EmergencyLightonFlag
    :initarg :EmergencyLightonFlag
    :type cl:integer
    :initform 0))
)

(cl:defclass SpeedServoStatus (<SpeedServoStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SpeedServoStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SpeedServoStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<SpeedServoStatus> is deprecated: use autonavigation-msg:SpeedServoStatus instead.")))

(cl:ensure-generic-function 'DesiredSpeed-val :lambda-list '(m))
(cl:defmethod DesiredSpeed-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredSpeed-val is deprecated.  Use autonavigation-msg:DesiredSpeed instead.")
  (DesiredSpeed m))

(cl:ensure-generic-function 'DesiredAcc-val :lambda-list '(m))
(cl:defmethod DesiredAcc-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredAcc-val is deprecated.  Use autonavigation-msg:DesiredAcc instead.")
  (DesiredAcc m))

(cl:ensure-generic-function 'CurrentSpeed-val :lambda-list '(m))
(cl:defmethod CurrentSpeed-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CurrentSpeed-val is deprecated.  Use autonavigation-msg:CurrentSpeed instead.")
  (CurrentSpeed m))

(cl:ensure-generic-function 'CurrentAcc-val :lambda-list '(m))
(cl:defmethod CurrentAcc-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CurrentAcc-val is deprecated.  Use autonavigation-msg:CurrentAcc instead.")
  (CurrentAcc m))

(cl:ensure-generic-function 'DesiredBrake-val :lambda-list '(m))
(cl:defmethod DesiredBrake-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredBrake-val is deprecated.  Use autonavigation-msg:DesiredBrake instead.")
  (DesiredBrake m))

(cl:ensure-generic-function 'CurrentBrake-val :lambda-list '(m))
(cl:defmethod CurrentBrake-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CurrentBrake-val is deprecated.  Use autonavigation-msg:CurrentBrake instead.")
  (CurrentBrake m))

(cl:ensure-generic-function 'DesiredFuel-val :lambda-list '(m))
(cl:defmethod DesiredFuel-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredFuel-val is deprecated.  Use autonavigation-msg:DesiredFuel instead.")
  (DesiredFuel m))

(cl:ensure-generic-function 'CurrentFuel-val :lambda-list '(m))
(cl:defmethod CurrentFuel-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CurrentFuel-val is deprecated.  Use autonavigation-msg:CurrentFuel instead.")
  (CurrentFuel m))

(cl:ensure-generic-function 'DesiredTransPos-val :lambda-list '(m))
(cl:defmethod DesiredTransPos-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:DesiredTransPos-val is deprecated.  Use autonavigation-msg:DesiredTransPos instead.")
  (DesiredTransPos m))

(cl:ensure-generic-function 'CurrentTransPos-val :lambda-list '(m))
(cl:defmethod CurrentTransPos-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CurrentTransPos-val is deprecated.  Use autonavigation-msg:CurrentTransPos instead.")
  (CurrentTransPos m))

(cl:ensure-generic-function 'HardSwitchOn-val :lambda-list '(m))
(cl:defmethod HardSwitchOn-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:HardSwitchOn-val is deprecated.  Use autonavigation-msg:HardSwitchOn instead.")
  (HardSwitchOn m))

(cl:ensure-generic-function 'EmergenceFlag-val :lambda-list '(m))
(cl:defmethod EmergenceFlag-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:EmergenceFlag-val is deprecated.  Use autonavigation-msg:EmergenceFlag instead.")
  (EmergenceFlag m))

(cl:ensure-generic-function 'BcanControlFlag-val :lambda-list '(m))
(cl:defmethod BcanControlFlag-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:BcanControlFlag-val is deprecated.  Use autonavigation-msg:BcanControlFlag instead.")
  (BcanControlFlag m))

(cl:ensure-generic-function 'HornOnFlag-val :lambda-list '(m))
(cl:defmethod HornOnFlag-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:HornOnFlag-val is deprecated.  Use autonavigation-msg:HornOnFlag instead.")
  (HornOnFlag m))

(cl:ensure-generic-function 'EmergencyLightonFlag-val :lambda-list '(m))
(cl:defmethod EmergencyLightonFlag-val ((m <SpeedServoStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:EmergencyLightonFlag-val is deprecated.  Use autonavigation-msg:EmergencyLightonFlag instead.")
  (EmergencyLightonFlag m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SpeedServoStatus>) ostream)
  "Serializes a message object of type '<SpeedServoStatus>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'DesiredSpeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'DesiredAcc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'CurrentSpeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'CurrentAcc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'DesiredBrake))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'CurrentBrake))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'DesiredFuel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'CurrentFuel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'DesiredTransPos)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'CurrentTransPos)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'HardSwitchOn)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'EmergenceFlag)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'BcanControlFlag)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'HornOnFlag)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'EmergencyLightonFlag)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SpeedServoStatus>) istream)
  "Deserializes a message object of type '<SpeedServoStatus>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'DesiredSpeed) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'DesiredAcc) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CurrentSpeed) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CurrentAcc) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'DesiredBrake) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CurrentBrake) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'DesiredFuel) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CurrentFuel) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'DesiredTransPos) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'CurrentTransPos) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'HardSwitchOn) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'EmergenceFlag) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'BcanControlFlag) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'HornOnFlag) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'EmergencyLightonFlag) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SpeedServoStatus>)))
  "Returns string type for a message object of type '<SpeedServoStatus>"
  "autonavigation/SpeedServoStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SpeedServoStatus)))
  "Returns string type for a message object of type 'SpeedServoStatus"
  "autonavigation/SpeedServoStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SpeedServoStatus>)))
  "Returns md5sum for a message object of type '<SpeedServoStatus>"
  "91bbb94b1c08c13aa4b81b868ef0ac37")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SpeedServoStatus)))
  "Returns md5sum for a message object of type 'SpeedServoStatus"
  "91bbb94b1c08c13aa4b81b868ef0ac37")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SpeedServoStatus>)))
  "Returns full string definition for message of type '<SpeedServoStatus>"
  (cl:format cl:nil "float64 DesiredSpeed~%float64 DesiredAcc~%float64 CurrentSpeed~%float64 CurrentAcc~%float64 DesiredBrake~%float64 CurrentBrake~%float64 DesiredFuel~%float64 CurrentFuel~%int32 DesiredTransPos~%int32 CurrentTransPos~%int32 HardSwitchOn~%int32 EmergenceFlag~%int32 BcanControlFlag~%int32 HornOnFlag~%int32 EmergencyLightonFlag~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SpeedServoStatus)))
  "Returns full string definition for message of type 'SpeedServoStatus"
  (cl:format cl:nil "float64 DesiredSpeed~%float64 DesiredAcc~%float64 CurrentSpeed~%float64 CurrentAcc~%float64 DesiredBrake~%float64 CurrentBrake~%float64 DesiredFuel~%float64 CurrentFuel~%int32 DesiredTransPos~%int32 CurrentTransPos~%int32 HardSwitchOn~%int32 EmergenceFlag~%int32 BcanControlFlag~%int32 HornOnFlag~%int32 EmergencyLightonFlag~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SpeedServoStatus>))
  (cl:+ 0
     8
     8
     8
     8
     8
     8
     8
     8
     4
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SpeedServoStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'SpeedServoStatus
    (cl:cons ':DesiredSpeed (DesiredSpeed msg))
    (cl:cons ':DesiredAcc (DesiredAcc msg))
    (cl:cons ':CurrentSpeed (CurrentSpeed msg))
    (cl:cons ':CurrentAcc (CurrentAcc msg))
    (cl:cons ':DesiredBrake (DesiredBrake msg))
    (cl:cons ':CurrentBrake (CurrentBrake msg))
    (cl:cons ':DesiredFuel (DesiredFuel msg))
    (cl:cons ':CurrentFuel (CurrentFuel msg))
    (cl:cons ':DesiredTransPos (DesiredTransPos msg))
    (cl:cons ':CurrentTransPos (CurrentTransPos msg))
    (cl:cons ':HardSwitchOn (HardSwitchOn msg))
    (cl:cons ':EmergenceFlag (EmergenceFlag msg))
    (cl:cons ':BcanControlFlag (BcanControlFlag msg))
    (cl:cons ':HornOnFlag (HornOnFlag msg))
    (cl:cons ':EmergencyLightonFlag (EmergencyLightonFlag msg))
))
