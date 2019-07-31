; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude LaneObj.msg.html

(cl:defclass <LaneObj> (roslisp-msg-protocol:ros-message)
  ((ID
    :reader ID
    :initarg :ID
    :type cl:integer
    :initform 0)
   (laneSeq
    :reader laneSeq
    :initarg :laneSeq
    :type cl:integer
    :initform 0)
   (laneType
    :reader laneType
    :initarg :laneType
    :type cl:integer
    :initform 0)
   (laneProb
    :reader laneProb
    :initarg :laneProb
    :type cl:integer
    :initform 0)
   (lanePtNum
    :reader lanePtNum
    :initarg :lanePtNum
    :type cl:integer
    :initform 0)
   (lanePoint
    :reader lanePoint
    :initarg :lanePoint
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point))))
)

(cl:defclass LaneObj (<LaneObj>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LaneObj>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LaneObj)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<LaneObj> is deprecated: use autonavigation-msg:LaneObj instead.")))

(cl:ensure-generic-function 'ID-val :lambda-list '(m))
(cl:defmethod ID-val ((m <LaneObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ID-val is deprecated.  Use autonavigation-msg:ID instead.")
  (ID m))

(cl:ensure-generic-function 'laneSeq-val :lambda-list '(m))
(cl:defmethod laneSeq-val ((m <LaneObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:laneSeq-val is deprecated.  Use autonavigation-msg:laneSeq instead.")
  (laneSeq m))

(cl:ensure-generic-function 'laneType-val :lambda-list '(m))
(cl:defmethod laneType-val ((m <LaneObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:laneType-val is deprecated.  Use autonavigation-msg:laneType instead.")
  (laneType m))

(cl:ensure-generic-function 'laneProb-val :lambda-list '(m))
(cl:defmethod laneProb-val ((m <LaneObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:laneProb-val is deprecated.  Use autonavigation-msg:laneProb instead.")
  (laneProb m))

(cl:ensure-generic-function 'lanePtNum-val :lambda-list '(m))
(cl:defmethod lanePtNum-val ((m <LaneObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:lanePtNum-val is deprecated.  Use autonavigation-msg:lanePtNum instead.")
  (lanePtNum m))

(cl:ensure-generic-function 'lanePoint-val :lambda-list '(m))
(cl:defmethod lanePoint-val ((m <LaneObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:lanePoint-val is deprecated.  Use autonavigation-msg:lanePoint instead.")
  (lanePoint m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LaneObj>) ostream)
  "Serializes a message object of type '<LaneObj>"
  (cl:let* ((signed (cl:slot-value msg 'ID)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'laneSeq)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'laneType)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'laneProb)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'lanePtNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'lanePoint))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'lanePoint))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LaneObj>) istream)
  "Deserializes a message object of type '<LaneObj>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'ID) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'laneSeq) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'laneType) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'laneProb) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'lanePtNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'lanePoint) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'lanePoint)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LaneObj>)))
  "Returns string type for a message object of type '<LaneObj>"
  "autonavigation/LaneObj")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LaneObj)))
  "Returns string type for a message object of type 'LaneObj"
  "autonavigation/LaneObj")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LaneObj>)))
  "Returns md5sum for a message object of type '<LaneObj>"
  "cabfe48ec928bd9380ceaec0c24a1c07")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LaneObj)))
  "Returns md5sum for a message object of type 'LaneObj"
  "cabfe48ec928bd9380ceaec0c24a1c07")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LaneObj>)))
  "Returns full string definition for message of type '<LaneObj>"
  (cl:format cl:nil "int32 ID~%int32 laneSeq                # 0,1,-1,2,-2,-3,3, from left to right~%int32 laneType               # 0: white real, 1:yellow real, 2: white dotted, 3: yellow dotted, 4: predicted~%int32 laneProb               # 0-100, probability~%int32 lanePtNum~%geometry_msgs/Point[]  lanePoint~%~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LaneObj)))
  "Returns full string definition for message of type 'LaneObj"
  (cl:format cl:nil "int32 ID~%int32 laneSeq                # 0,1,-1,2,-2,-3,3, from left to right~%int32 laneType               # 0: white real, 1:yellow real, 2: white dotted, 3: yellow dotted, 4: predicted~%int32 laneProb               # 0-100, probability~%int32 lanePtNum~%geometry_msgs/Point[]  lanePoint~%~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LaneObj>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'lanePoint) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LaneObj>))
  "Converts a ROS message object to a list"
  (cl:list 'LaneObj
    (cl:cons ':ID (ID msg))
    (cl:cons ':laneSeq (laneSeq msg))
    (cl:cons ':laneType (laneType msg))
    (cl:cons ':laneProb (laneProb msg))
    (cl:cons ':lanePtNum (lanePtNum msg))
    (cl:cons ':lanePoint (lanePoint msg))
))
