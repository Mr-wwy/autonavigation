; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude VelodyneLine.msg.html

(cl:defclass <VelodyneLine> (roslisp-msg-protocol:ros-message)
  ((velodyneline
    :reader velodyneline
    :initarg :velodyneline
    :type (cl:vector autonavigation-msg:VelodynePoint)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:VelodynePoint :initial-element (cl:make-instance 'autonavigation-msg:VelodynePoint))))
)

(cl:defclass VelodyneLine (<VelodyneLine>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VelodyneLine>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VelodyneLine)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<VelodyneLine> is deprecated: use autonavigation-msg:VelodyneLine instead.")))

(cl:ensure-generic-function 'velodyneline-val :lambda-list '(m))
(cl:defmethod velodyneline-val ((m <VelodyneLine>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:velodyneline-val is deprecated.  Use autonavigation-msg:velodyneline instead.")
  (velodyneline m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VelodyneLine>) ostream)
  "Serializes a message object of type '<VelodyneLine>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'velodyneline))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'velodyneline))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VelodyneLine>) istream)
  "Deserializes a message object of type '<VelodyneLine>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'velodyneline) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'velodyneline)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:VelodynePoint))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VelodyneLine>)))
  "Returns string type for a message object of type '<VelodyneLine>"
  "autonavigation/VelodyneLine")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VelodyneLine)))
  "Returns string type for a message object of type 'VelodyneLine"
  "autonavigation/VelodyneLine")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VelodyneLine>)))
  "Returns md5sum for a message object of type '<VelodyneLine>"
  "7c8138d92dd21d98965a9487a7b04516")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VelodyneLine)))
  "Returns md5sum for a message object of type 'VelodyneLine"
  "7c8138d92dd21d98965a9487a7b04516")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VelodyneLine>)))
  "Returns full string definition for message of type '<VelodyneLine>"
  (cl:format cl:nil "~%VelodynePoint[] velodyneline~%~%================================================================================~%MSG: autonavigation/VelodynePoint~%# velodyne point ~%~%int16  x             #cm~%int16  y            ~%int16  z~%uint16  intensity     #0-255~%uint16  angleH        #0.01degree~%uint16  angleV        #0.01degree~%uint8   ring~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VelodyneLine)))
  "Returns full string definition for message of type 'VelodyneLine"
  (cl:format cl:nil "~%VelodynePoint[] velodyneline~%~%================================================================================~%MSG: autonavigation/VelodynePoint~%# velodyne point ~%~%int16  x             #cm~%int16  y            ~%int16  z~%uint16  intensity     #0-255~%uint16  angleH        #0.01degree~%uint16  angleV        #0.01degree~%uint8   ring~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VelodyneLine>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'velodyneline) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VelodyneLine>))
  "Converts a ROS message object to a list"
  (cl:list 'VelodyneLine
    (cl:cons ':velodyneline (velodyneline msg))
))
