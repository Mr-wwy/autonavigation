; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude FarStaticObj.msg.html

(cl:defclass <FarStaticObj> (roslisp-msg-protocol:ros-message)
  ((VertexNumber
    :reader VertexNumber
    :initarg :VertexNumber
    :type cl:integer
    :initform 0)
   (ConvexX
    :reader ConvexX
    :initarg :ConvexX
    :type (cl:vector cl:integer)
   :initform (cl:make-array 0 :element-type 'cl:integer :initial-element 0))
   (ConvexY
    :reader ConvexY
    :initarg :ConvexY
    :type (cl:vector cl:integer)
   :initform (cl:make-array 0 :element-type 'cl:integer :initial-element 0))
   (CenterX
    :reader CenterX
    :initarg :CenterX
    :type cl:integer
    :initform 0)
   (CenterY
    :reader CenterY
    :initarg :CenterY
    :type cl:integer
    :initform 0))
)

(cl:defclass FarStaticObj (<FarStaticObj>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FarStaticObj>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FarStaticObj)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<FarStaticObj> is deprecated: use autonavigation-msg:FarStaticObj instead.")))

(cl:ensure-generic-function 'VertexNumber-val :lambda-list '(m))
(cl:defmethod VertexNumber-val ((m <FarStaticObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:VertexNumber-val is deprecated.  Use autonavigation-msg:VertexNumber instead.")
  (VertexNumber m))

(cl:ensure-generic-function 'ConvexX-val :lambda-list '(m))
(cl:defmethod ConvexX-val ((m <FarStaticObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ConvexX-val is deprecated.  Use autonavigation-msg:ConvexX instead.")
  (ConvexX m))

(cl:ensure-generic-function 'ConvexY-val :lambda-list '(m))
(cl:defmethod ConvexY-val ((m <FarStaticObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:ConvexY-val is deprecated.  Use autonavigation-msg:ConvexY instead.")
  (ConvexY m))

(cl:ensure-generic-function 'CenterX-val :lambda-list '(m))
(cl:defmethod CenterX-val ((m <FarStaticObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CenterX-val is deprecated.  Use autonavigation-msg:CenterX instead.")
  (CenterX m))

(cl:ensure-generic-function 'CenterY-val :lambda-list '(m))
(cl:defmethod CenterY-val ((m <FarStaticObj>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CenterY-val is deprecated.  Use autonavigation-msg:CenterY instead.")
  (CenterY m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FarStaticObj>) ostream)
  "Serializes a message object of type '<FarStaticObj>"
  (cl:let* ((signed (cl:slot-value msg 'VertexNumber)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'ConvexX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'ConvexX))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'ConvexY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'ConvexY))
  (cl:let* ((signed (cl:slot-value msg 'CenterX)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'CenterY)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FarStaticObj>) istream)
  "Deserializes a message object of type '<FarStaticObj>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'VertexNumber) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'ConvexX) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'ConvexX)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296)))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'ConvexY) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'ConvexY)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296)))))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'CenterX) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'CenterY) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FarStaticObj>)))
  "Returns string type for a message object of type '<FarStaticObj>"
  "autonavigation/FarStaticObj")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FarStaticObj)))
  "Returns string type for a message object of type 'FarStaticObj"
  "autonavigation/FarStaticObj")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FarStaticObj>)))
  "Returns md5sum for a message object of type '<FarStaticObj>"
  "13cd45b11ab8ad4733c742b8974031cc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FarStaticObj)))
  "Returns md5sum for a message object of type 'FarStaticObj"
  "13cd45b11ab8ad4733c742b8974031cc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FarStaticObj>)))
  "Returns full string definition for message of type '<FarStaticObj>"
  (cl:format cl:nil "int32 VertexNumber~%int32[] ConvexX  # do not need many vertex points~%int32[] ConvexY~%int32 CenterX~%int32 CenterY~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FarStaticObj)))
  "Returns full string definition for message of type 'FarStaticObj"
  (cl:format cl:nil "int32 VertexNumber~%int32[] ConvexX  # do not need many vertex points~%int32[] ConvexY~%int32 CenterX~%int32 CenterY~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FarStaticObj>))
  (cl:+ 0
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'ConvexX) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'ConvexY) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FarStaticObj>))
  "Converts a ROS message object to a list"
  (cl:list 'FarStaticObj
    (cl:cons ':VertexNumber (VertexNumber msg))
    (cl:cons ':ConvexX (ConvexX msg))
    (cl:cons ':ConvexY (ConvexY msg))
    (cl:cons ':CenterX (CenterX msg))
    (cl:cons ':CenterY (CenterY msg))
))
