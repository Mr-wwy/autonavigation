; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude PathBoundary.msg.html

(cl:defclass <PathBoundary> (roslisp-msg-protocol:ros-message)
  ((BoundaryPointsx
    :reader BoundaryPointsx
    :initarg :BoundaryPointsx
    :type (cl:vector cl:integer)
   :initform (cl:make-array 50 :element-type 'cl:integer :initial-element 0))
   (BoundaryPointsy
    :reader BoundaryPointsy
    :initarg :BoundaryPointsy
    :type (cl:vector cl:integer)
   :initform (cl:make-array 50 :element-type 'cl:integer :initial-element 0))
   (Number
    :reader Number
    :initarg :Number
    :type cl:integer
    :initform 0))
)

(cl:defclass PathBoundary (<PathBoundary>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PathBoundary>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PathBoundary)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<PathBoundary> is deprecated: use autonavigation-msg:PathBoundary instead.")))

(cl:ensure-generic-function 'BoundaryPointsx-val :lambda-list '(m))
(cl:defmethod BoundaryPointsx-val ((m <PathBoundary>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:BoundaryPointsx-val is deprecated.  Use autonavigation-msg:BoundaryPointsx instead.")
  (BoundaryPointsx m))

(cl:ensure-generic-function 'BoundaryPointsy-val :lambda-list '(m))
(cl:defmethod BoundaryPointsy-val ((m <PathBoundary>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:BoundaryPointsy-val is deprecated.  Use autonavigation-msg:BoundaryPointsy instead.")
  (BoundaryPointsy m))

(cl:ensure-generic-function 'Number-val :lambda-list '(m))
(cl:defmethod Number-val ((m <PathBoundary>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:Number-val is deprecated.  Use autonavigation-msg:Number instead.")
  (Number m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PathBoundary>) ostream)
  "Serializes a message object of type '<PathBoundary>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'BoundaryPointsx))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'BoundaryPointsy))
  (cl:let* ((signed (cl:slot-value msg 'Number)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PathBoundary>) istream)
  "Deserializes a message object of type '<PathBoundary>"
  (cl:setf (cl:slot-value msg 'BoundaryPointsx) (cl:make-array 50))
  (cl:let ((vals (cl:slot-value msg 'BoundaryPointsx)))
    (cl:dotimes (i 50)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))))
  (cl:setf (cl:slot-value msg 'BoundaryPointsy) (cl:make-array 50))
  (cl:let ((vals (cl:slot-value msg 'BoundaryPointsy)))
    (cl:dotimes (i 50)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Number) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PathBoundary>)))
  "Returns string type for a message object of type '<PathBoundary>"
  "autonavigation/PathBoundary")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PathBoundary)))
  "Returns string type for a message object of type 'PathBoundary"
  "autonavigation/PathBoundary")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PathBoundary>)))
  "Returns md5sum for a message object of type '<PathBoundary>"
  "de99878f80fecf87fd1d9e75205a7390")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PathBoundary)))
  "Returns md5sum for a message object of type 'PathBoundary"
  "de99878f80fecf87fd1d9e75205a7390")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PathBoundary>)))
  "Returns full string definition for message of type '<PathBoundary>"
  (cl:format cl:nil "int32[50] BoundaryPointsx~%int32[50] BoundaryPointsy~%int32  Number~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PathBoundary)))
  "Returns full string definition for message of type 'PathBoundary"
  (cl:format cl:nil "int32[50] BoundaryPointsx~%int32[50] BoundaryPointsy~%int32  Number~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PathBoundary>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'BoundaryPointsx) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'BoundaryPointsy) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PathBoundary>))
  "Converts a ROS message object to a list"
  (cl:list 'PathBoundary
    (cl:cons ':BoundaryPointsx (BoundaryPointsx msg))
    (cl:cons ':BoundaryPointsy (BoundaryPointsy msg))
    (cl:cons ':Number (Number msg))
))
