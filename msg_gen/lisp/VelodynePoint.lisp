; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude VelodynePoint.msg.html

(cl:defclass <VelodynePoint> (roslisp-msg-protocol:ros-message)
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
   (z
    :reader z
    :initarg :z
    :type cl:fixnum
    :initform 0)
   (intensity
    :reader intensity
    :initarg :intensity
    :type cl:fixnum
    :initform 0)
   (angleH
    :reader angleH
    :initarg :angleH
    :type cl:fixnum
    :initform 0)
   (angleV
    :reader angleV
    :initarg :angleV
    :type cl:fixnum
    :initform 0)
   (ring
    :reader ring
    :initarg :ring
    :type cl:fixnum
    :initform 0))
)

(cl:defclass VelodynePoint (<VelodynePoint>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VelodynePoint>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VelodynePoint)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<VelodynePoint> is deprecated: use autonavigation-msg:VelodynePoint instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <VelodynePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:x-val is deprecated.  Use autonavigation-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <VelodynePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:y-val is deprecated.  Use autonavigation-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'z-val :lambda-list '(m))
(cl:defmethod z-val ((m <VelodynePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:z-val is deprecated.  Use autonavigation-msg:z instead.")
  (z m))

(cl:ensure-generic-function 'intensity-val :lambda-list '(m))
(cl:defmethod intensity-val ((m <VelodynePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:intensity-val is deprecated.  Use autonavigation-msg:intensity instead.")
  (intensity m))

(cl:ensure-generic-function 'angleH-val :lambda-list '(m))
(cl:defmethod angleH-val ((m <VelodynePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:angleH-val is deprecated.  Use autonavigation-msg:angleH instead.")
  (angleH m))

(cl:ensure-generic-function 'angleV-val :lambda-list '(m))
(cl:defmethod angleV-val ((m <VelodynePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:angleV-val is deprecated.  Use autonavigation-msg:angleV instead.")
  (angleV m))

(cl:ensure-generic-function 'ring-val :lambda-list '(m))
(cl:defmethod ring-val ((m <VelodynePoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ring-val is deprecated.  Use autonavigation-msg:ring instead.")
  (ring m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VelodynePoint>) ostream)
  "Serializes a message object of type '<VelodynePoint>"
  (cl:let* ((signed (cl:slot-value msg 'x)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'y)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'z)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'intensity)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'intensity)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'angleH)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'angleH)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'angleV)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'angleV)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ring)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VelodynePoint>) istream)
  "Deserializes a message object of type '<VelodynePoint>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'x) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'y) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'z) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'intensity)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'intensity)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'angleH)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'angleH)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'angleV)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'angleV)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ring)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VelodynePoint>)))
  "Returns string type for a message object of type '<VelodynePoint>"
  "autonavigation/VelodynePoint")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VelodynePoint)))
  "Returns string type for a message object of type 'VelodynePoint"
  "autonavigation/VelodynePoint")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VelodynePoint>)))
  "Returns md5sum for a message object of type '<VelodynePoint>"
  "eca643a58d79f0bdd4c26b9939e886c8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VelodynePoint)))
  "Returns md5sum for a message object of type 'VelodynePoint"
  "eca643a58d79f0bdd4c26b9939e886c8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VelodynePoint>)))
  "Returns full string definition for message of type '<VelodynePoint>"
  (cl:format cl:nil "# velodyne point ~%~%int16  x             #cm~%int16  y            ~%int16  z~%uint16  intensity     #0-255~%uint16  angleH        #0.01degree~%uint16  angleV        #0.01degree~%uint8   ring~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VelodynePoint)))
  "Returns full string definition for message of type 'VelodynePoint"
  (cl:format cl:nil "# velodyne point ~%~%int16  x             #cm~%int16  y            ~%int16  z~%uint16  intensity     #0-255~%uint16  angleH        #0.01degree~%uint16  angleV        #0.01degree~%uint8   ring~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VelodynePoint>))
  (cl:+ 0
     2
     2
     2
     2
     2
     2
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VelodynePoint>))
  "Converts a ROS message object to a list"
  (cl:list 'VelodynePoint
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':z (z msg))
    (cl:cons ':intensity (intensity msg))
    (cl:cons ':angleH (angleH msg))
    (cl:cons ':angleV (angleV msg))
    (cl:cons ':ring (ring msg))
))
