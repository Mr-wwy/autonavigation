; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude EntityMap.msg.html

(cl:defclass <EntityMap> (roslisp-msg-protocol:ros-message)
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
   (vehicleNum
    :reader vehicleNum
    :initarg :vehicleNum
    :type cl:integer
    :initform 0)
   (vehicles
    :reader vehicles
    :initarg :vehicles
    :type (cl:vector autonavigation-msg:VehicleObj)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:VehicleObj :initial-element (cl:make-instance 'autonavigation-msg:VehicleObj)))
   (vehicleLane
    :reader vehicleLane
    :initarg :vehicleLane
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (pedestrianNum
    :reader pedestrianNum
    :initarg :pedestrianNum
    :type cl:integer
    :initform 0)
   (pedestrians
    :reader pedestrians
    :initarg :pedestrians
    :type (cl:vector autonavigation-msg:PedestrianObj)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:PedestrianObj :initial-element (cl:make-instance 'autonavigation-msg:PedestrianObj)))
   (pedestrianLane
    :reader pedestrianLane
    :initarg :pedestrianLane
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (laneNum
    :reader laneNum
    :initarg :laneNum
    :type cl:integer
    :initform 0)
   (lanes
    :reader lanes
    :initarg :lanes
    :type (cl:vector autonavigation-msg:LaneObj)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:LaneObj :initial-element (cl:make-instance 'autonavigation-msg:LaneObj)))
   (currentLane
    :reader currentLane
    :initarg :currentLane
    :type cl:integer
    :initform 0)
   (farObjectNum
    :reader farObjectNum
    :initarg :farObjectNum
    :type cl:integer
    :initform 0)
   (farStaticObjects
    :reader farStaticObjects
    :initarg :farStaticObjects
    :type (cl:vector autonavigation-msg:FarStaticObj)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:FarStaticObj :initial-element (cl:make-instance 'autonavigation-msg:FarStaticObj)))
   (keyPoints
    :reader keyPoints
    :initarg :keyPoints
    :type (cl:vector autonavigation-msg:EntityKeyPoint)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:EntityKeyPoint :initial-element (cl:make-instance 'autonavigation-msg:EntityKeyPoint)))
   (keyPointNum
    :reader keyPointNum
    :initarg :keyPointNum
    :type cl:integer
    :initform 0)
   (parkSpace
    :reader parkSpace
    :initarg :parkSpace
    :type (cl:vector autonavigation-msg:RoadMarking)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:RoadMarking :initial-element (cl:make-instance 'autonavigation-msg:RoadMarking)))
   (parkSpaceNum
    :reader parkSpaceNum
    :initarg :parkSpaceNum
    :type cl:integer
    :initform 0)
   (roadMarkingNum
    :reader roadMarkingNum
    :initarg :roadMarkingNum
    :type cl:integer
    :initform 0)
   (roadMarkings
    :reader roadMarkings
    :initarg :roadMarkings
    :type (cl:vector autonavigation-msg:RoadMarking)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:RoadMarking :initial-element (cl:make-instance 'autonavigation-msg:RoadMarking)))
   (signNum
    :reader signNum
    :initarg :signNum
    :type cl:integer
    :initform 0)
   (signs
    :reader signs
    :initarg :signs
    :type (cl:vector autonavigation-msg:Sign)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:Sign :initial-element (cl:make-instance 'autonavigation-msg:Sign)))
   (lightNum
    :reader lightNum
    :initarg :lightNum
    :type cl:integer
    :initform 0)
   (lights
    :reader lights
    :initarg :lights
    :type (cl:vector autonavigation-msg:Light)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:Light :initial-element (cl:make-instance 'autonavigation-msg:Light))))
)

(cl:defclass EntityMap (<EntityMap>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EntityMap>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EntityMap)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<EntityMap> is deprecated: use autonavigation-msg:EntityMap instead.")))

(cl:ensure-generic-function 'head-val :lambda-list '(m))
(cl:defmethod head-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:head-val is deprecated.  Use autonavigation-msg:head instead.")
  (head m))

(cl:ensure-generic-function 'localPose-val :lambda-list '(m))
(cl:defmethod localPose-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:localPose-val is deprecated.  Use autonavigation-msg:localPose instead.")
  (localPose m))

(cl:ensure-generic-function 'gpsPos-val :lambda-list '(m))
(cl:defmethod gpsPos-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gpsPos-val is deprecated.  Use autonavigation-msg:gpsPos instead.")
  (gpsPos m))

(cl:ensure-generic-function 'vehicleNum-val :lambda-list '(m))
(cl:defmethod vehicleNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:vehicleNum-val is deprecated.  Use autonavigation-msg:vehicleNum instead.")
  (vehicleNum m))

(cl:ensure-generic-function 'vehicles-val :lambda-list '(m))
(cl:defmethod vehicles-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:vehicles-val is deprecated.  Use autonavigation-msg:vehicles instead.")
  (vehicles m))

(cl:ensure-generic-function 'vehicleLane-val :lambda-list '(m))
(cl:defmethod vehicleLane-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:vehicleLane-val is deprecated.  Use autonavigation-msg:vehicleLane instead.")
  (vehicleLane m))

(cl:ensure-generic-function 'pedestrianNum-val :lambda-list '(m))
(cl:defmethod pedestrianNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pedestrianNum-val is deprecated.  Use autonavigation-msg:pedestrianNum instead.")
  (pedestrianNum m))

(cl:ensure-generic-function 'pedestrians-val :lambda-list '(m))
(cl:defmethod pedestrians-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pedestrians-val is deprecated.  Use autonavigation-msg:pedestrians instead.")
  (pedestrians m))

(cl:ensure-generic-function 'pedestrianLane-val :lambda-list '(m))
(cl:defmethod pedestrianLane-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:pedestrianLane-val is deprecated.  Use autonavigation-msg:pedestrianLane instead.")
  (pedestrianLane m))

(cl:ensure-generic-function 'laneNum-val :lambda-list '(m))
(cl:defmethod laneNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:laneNum-val is deprecated.  Use autonavigation-msg:laneNum instead.")
  (laneNum m))

(cl:ensure-generic-function 'lanes-val :lambda-list '(m))
(cl:defmethod lanes-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:lanes-val is deprecated.  Use autonavigation-msg:lanes instead.")
  (lanes m))

(cl:ensure-generic-function 'currentLane-val :lambda-list '(m))
(cl:defmethod currentLane-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:currentLane-val is deprecated.  Use autonavigation-msg:currentLane instead.")
  (currentLane m))

(cl:ensure-generic-function 'farObjectNum-val :lambda-list '(m))
(cl:defmethod farObjectNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:farObjectNum-val is deprecated.  Use autonavigation-msg:farObjectNum instead.")
  (farObjectNum m))

(cl:ensure-generic-function 'farStaticObjects-val :lambda-list '(m))
(cl:defmethod farStaticObjects-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:farStaticObjects-val is deprecated.  Use autonavigation-msg:farStaticObjects instead.")
  (farStaticObjects m))

(cl:ensure-generic-function 'keyPoints-val :lambda-list '(m))
(cl:defmethod keyPoints-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:keyPoints-val is deprecated.  Use autonavigation-msg:keyPoints instead.")
  (keyPoints m))

(cl:ensure-generic-function 'keyPointNum-val :lambda-list '(m))
(cl:defmethod keyPointNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:keyPointNum-val is deprecated.  Use autonavigation-msg:keyPointNum instead.")
  (keyPointNum m))

(cl:ensure-generic-function 'parkSpace-val :lambda-list '(m))
(cl:defmethod parkSpace-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:parkSpace-val is deprecated.  Use autonavigation-msg:parkSpace instead.")
  (parkSpace m))

(cl:ensure-generic-function 'parkSpaceNum-val :lambda-list '(m))
(cl:defmethod parkSpaceNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:parkSpaceNum-val is deprecated.  Use autonavigation-msg:parkSpaceNum instead.")
  (parkSpaceNum m))

(cl:ensure-generic-function 'roadMarkingNum-val :lambda-list '(m))
(cl:defmethod roadMarkingNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:roadMarkingNum-val is deprecated.  Use autonavigation-msg:roadMarkingNum instead.")
  (roadMarkingNum m))

(cl:ensure-generic-function 'roadMarkings-val :lambda-list '(m))
(cl:defmethod roadMarkings-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:roadMarkings-val is deprecated.  Use autonavigation-msg:roadMarkings instead.")
  (roadMarkings m))

(cl:ensure-generic-function 'signNum-val :lambda-list '(m))
(cl:defmethod signNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:signNum-val is deprecated.  Use autonavigation-msg:signNum instead.")
  (signNum m))

(cl:ensure-generic-function 'signs-val :lambda-list '(m))
(cl:defmethod signs-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:signs-val is deprecated.  Use autonavigation-msg:signs instead.")
  (signs m))

(cl:ensure-generic-function 'lightNum-val :lambda-list '(m))
(cl:defmethod lightNum-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:lightNum-val is deprecated.  Use autonavigation-msg:lightNum instead.")
  (lightNum m))

(cl:ensure-generic-function 'lights-val :lambda-list '(m))
(cl:defmethod lights-val ((m <EntityMap>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:lights-val is deprecated.  Use autonavigation-msg:lights instead.")
  (lights m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EntityMap>) ostream)
  "Serializes a message object of type '<EntityMap>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'head) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'localPose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'gpsPos) ostream)
  (cl:let* ((signed (cl:slot-value msg 'vehicleNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'vehicles))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'vehicles))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'vehicleLane))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    ))
   (cl:slot-value msg 'vehicleLane))
  (cl:let* ((signed (cl:slot-value msg 'pedestrianNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'pedestrians))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'pedestrians))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'pedestrianLane))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    ))
   (cl:slot-value msg 'pedestrianLane))
  (cl:let* ((signed (cl:slot-value msg 'laneNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'lanes))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'lanes))
  (cl:let* ((signed (cl:slot-value msg 'currentLane)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'farObjectNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'farStaticObjects))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'farStaticObjects))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'keyPoints))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'keyPoints))
  (cl:let* ((signed (cl:slot-value msg 'keyPointNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'parkSpace))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'parkSpace))
  (cl:let* ((signed (cl:slot-value msg 'parkSpaceNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'roadMarkingNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'roadMarkings))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'roadMarkings))
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
  (cl:let* ((signed (cl:slot-value msg 'lightNum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'lights))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'lights))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EntityMap>) istream)
  "Deserializes a message object of type '<EntityMap>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'head) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'localPose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'gpsPos) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'vehicleNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'vehicles) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'vehicles)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:VehicleObj))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'vehicleLane) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'vehicleLane)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256)))))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'pedestrianNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'pedestrians) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'pedestrians)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:PedestrianObj))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'pedestrianLane) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'pedestrianLane)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256)))))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'laneNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'lanes) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'lanes)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:LaneObj))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'currentLane) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'farObjectNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'farStaticObjects) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'farStaticObjects)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:FarStaticObj))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'keyPoints) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'keyPoints)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:EntityKeyPoint))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'keyPointNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'parkSpace) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'parkSpace)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:RoadMarking))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'parkSpaceNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'roadMarkingNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'roadMarkings) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'roadMarkings)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:RoadMarking))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
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
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'lightNum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'lights) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'lights)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:Light))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EntityMap>)))
  "Returns string type for a message object of type '<EntityMap>"
  "autonavigation/EntityMap")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EntityMap)))
  "Returns string type for a message object of type 'EntityMap"
  "autonavigation/EntityMap")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EntityMap>)))
  "Returns md5sum for a message object of type '<EntityMap>"
  "65c3b05b724f5c39ffa07415395ba91f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EntityMap)))
  "Returns md5sum for a message object of type 'EntityMap"
  "65c3b05b724f5c39ffa07415395ba91f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EntityMap>)))
  "Returns full string definition for message of type '<EntityMap>"
  (cl:format cl:nil "Header      head~%LocalPose   localPose~%GpsPosition gpsPos~%~%int32        vehicleNum~%VehicleObj[] vehicles~%int8[]       vehicleLane~%int32        pedestrianNum~%PedestrianObj[] pedestrians~%int8[]       pedestrianLane~%~%int32        laneNum~%LaneObj[]    lanes~%int32        currentLane~%~%# static obstacles, 50m farther ~%int32 farObjectNum~%FarStaticObj[] farStaticObjects ~%~%EntityKeyPoint[] keyPoints~%int32  keyPointNum~%~%RoadMarking[] parkSpace~%int32  parkSpaceNum~%~%int32 roadMarkingNum~%RoadMarking[] roadMarkings~%~%int32 signNum      ~%Sign[] signs~%~%int32 lightNum      ~%Light[] lights~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/VehicleObj~%#ID num~%int32 ID       ~%# position, cm~%int32 centerX~%int32 centerY~%# cm/s~%int32 speed        ~%# 0.01degree   ~%int32 speedDirection  ~%int32 height         ~%# car, truck, bicycle, big obj, small obj, unknown obj ~%int32 vehclass     ~%~%geometry_msgs/Polygon vehPolygon      ~%~%int32   vertexNumber~%int32[] vertexX~%int32[] vertexY~%~%================================================================================~%MSG: geometry_msgs/Polygon~%#A specification of a polygon where the first and last points are assumed to be connected~%Point32[] points~%~%================================================================================~%MSG: geometry_msgs/Point32~%# This contains the position of a point in free space(with 32 bits of precision).~%# It is recommeded to use Point wherever possible instead of Point32.  ~%# ~%# This recommendation is to promote interoperability.  ~%#~%# This message is designed to take up less space when sending~%# lots of points at once, as in the case of a PointCloud.  ~%~%float32 x~%float32 y~%float32 z~%================================================================================~%MSG: autonavigation/PedestrianObj~%#ID num~%int32 ID       ~%# position, cm~%int32 centerX         ~%int32 centerY~%#radius~%int32 radius~%# cm/s~%int32 speed        ~%# 0.01degree , 0-36000 ~%int32 direction  ~%int32 height~%~%~%================================================================================~%MSG: autonavigation/LaneObj~%int32 ID~%int32 laneSeq                # 0,1,-1,2,-2,-3,3, from left to right~%int32 laneType               # 0: white real, 1:yellow real, 2: white dotted, 3: yellow dotted, 4: predicted~%int32 laneProb               # 0-100, probability~%int32 lanePtNum~%geometry_msgs/Point[]  lanePoint~%~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: autonavigation/FarStaticObj~%int32 VertexNumber~%int32[] ConvexX  # do not need many vertex points~%int32[] ConvexY~%int32 CenterX~%int32 CenterY~%~%~%================================================================================~%MSG: autonavigation/EntityKeyPoint~%int32 x~%int32 y~%int32 direction   #  0-36000，道路方向~%int32 type        #  0: 当前路口， 1: 左出口点， 2：右出口点， 3： 直行出口点~%~%~%================================================================================~%MSG: autonavigation/RoadMarking~%#地标的中心点~%geometry_msgs/Point posCenter~%~%#地标的四个顶点~%geometry_msgs/Point pointBottomLeft~%geometry_msgs/Point pointBottomRight~%geometry_msgs/Point pointTopLeft~%geometry_msgs/Point pointTopRight~%~%int32 direction        # 停止线或者斑马线的方向,单位0.01度,与x轴的夹角，逆时针0-36000~%int32 width            # 地标的宽度~%uint8 sign_type        # 地标的类型,    type = 1,停止线；type = 2, 斑马线；type = 3,直行箭头；type = 4,左转箭头；~%                       # type = 5,右转箭头；type = 6,直行左转箭头；type = 7,直行右转箭头；~%                       # type = 8,左转掉头箭头；type = 9,掉头箭头；type = 10,菱形；type = 11，泊车位；~%~%~%~%================================================================================~%MSG: autonavigation/Sign~%uint8 pos_flag       #  交通标志位置信息 ~%int32 x              #  x坐标，厘米为单位~%int32 y              #  y坐标，厘米为单位~%uint8 sign_type      #  交通标志类型信息~%~%~%#~%# pos_flag~%#  0: 没有位置信息~%#  1: 位置信息有效~%~%# sign_type:~%#  0：无路标        ~%#  1：禁止左转~%#  2：禁止右转~%#  3：禁止直行~%#  4：禁止向左和向右~%#  5：禁止向左和直行~%#  6：禁止向右和直行~%#  7：禁止驶入~%#  8：停车~%#  9： 前方学校 （减速）       ~%#  10：注意行人 （减速）       ~%#  11：路面不平 （减速）      ~%#  12：路面施工 （减速）~%#  13：直行~%#  14：向左转~%#  15：向右转~%#  16：直行和左转~%#  17：直行和右转~%#  18：向左和向右~%#  19：靠右行驶        ~%#  20：靠左行驶        ~%#  21：鸣喇叭 ------- 无    ~%#  22：环岛行驶 ------- 无     ~%#  23：人行横道        ~%#  24：允许掉头        ~%#  25：停车位          ~%#  26：禁止掉头  ~%#  27：限速10公里 （减速）~%#  28：解除限速10公里 ------- 无~%#  29：限速15公里~%#  30：限速20公里~%#  31：限速25公里~%#  32: 三角修车标志~%~%================================================================================~%MSG: autonavigation/Light~%uint8 pos_flag            #位置是否起作用~%int32 x~%int32 y~%uint8 forward_light_type  #直行灯信息~%uint8 left_light_type     #左转灯信息~%uint8 right_light_type    #右转灯信息~%uint8 uturn_light_type    #U Turn灯信息~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EntityMap)))
  "Returns full string definition for message of type 'EntityMap"
  (cl:format cl:nil "Header      head~%LocalPose   localPose~%GpsPosition gpsPos~%~%int32        vehicleNum~%VehicleObj[] vehicles~%int8[]       vehicleLane~%int32        pedestrianNum~%PedestrianObj[] pedestrians~%int8[]       pedestrianLane~%~%int32        laneNum~%LaneObj[]    lanes~%int32        currentLane~%~%# static obstacles, 50m farther ~%int32 farObjectNum~%FarStaticObj[] farStaticObjects ~%~%EntityKeyPoint[] keyPoints~%int32  keyPointNum~%~%RoadMarking[] parkSpace~%int32  parkSpaceNum~%~%int32 roadMarkingNum~%RoadMarking[] roadMarkings~%~%int32 signNum      ~%Sign[] signs~%~%int32 lightNum      ~%Light[] lights~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/VehicleObj~%#ID num~%int32 ID       ~%# position, cm~%int32 centerX~%int32 centerY~%# cm/s~%int32 speed        ~%# 0.01degree   ~%int32 speedDirection  ~%int32 height         ~%# car, truck, bicycle, big obj, small obj, unknown obj ~%int32 vehclass     ~%~%geometry_msgs/Polygon vehPolygon      ~%~%int32   vertexNumber~%int32[] vertexX~%int32[] vertexY~%~%================================================================================~%MSG: geometry_msgs/Polygon~%#A specification of a polygon where the first and last points are assumed to be connected~%Point32[] points~%~%================================================================================~%MSG: geometry_msgs/Point32~%# This contains the position of a point in free space(with 32 bits of precision).~%# It is recommeded to use Point wherever possible instead of Point32.  ~%# ~%# This recommendation is to promote interoperability.  ~%#~%# This message is designed to take up less space when sending~%# lots of points at once, as in the case of a PointCloud.  ~%~%float32 x~%float32 y~%float32 z~%================================================================================~%MSG: autonavigation/PedestrianObj~%#ID num~%int32 ID       ~%# position, cm~%int32 centerX         ~%int32 centerY~%#radius~%int32 radius~%# cm/s~%int32 speed        ~%# 0.01degree , 0-36000 ~%int32 direction  ~%int32 height~%~%~%================================================================================~%MSG: autonavigation/LaneObj~%int32 ID~%int32 laneSeq                # 0,1,-1,2,-2,-3,3, from left to right~%int32 laneType               # 0: white real, 1:yellow real, 2: white dotted, 3: yellow dotted, 4: predicted~%int32 laneProb               # 0-100, probability~%int32 lanePtNum~%geometry_msgs/Point[]  lanePoint~%~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: autonavigation/FarStaticObj~%int32 VertexNumber~%int32[] ConvexX  # do not need many vertex points~%int32[] ConvexY~%int32 CenterX~%int32 CenterY~%~%~%================================================================================~%MSG: autonavigation/EntityKeyPoint~%int32 x~%int32 y~%int32 direction   #  0-36000，道路方向~%int32 type        #  0: 当前路口， 1: 左出口点， 2：右出口点， 3： 直行出口点~%~%~%================================================================================~%MSG: autonavigation/RoadMarking~%#地标的中心点~%geometry_msgs/Point posCenter~%~%#地标的四个顶点~%geometry_msgs/Point pointBottomLeft~%geometry_msgs/Point pointBottomRight~%geometry_msgs/Point pointTopLeft~%geometry_msgs/Point pointTopRight~%~%int32 direction        # 停止线或者斑马线的方向,单位0.01度,与x轴的夹角，逆时针0-36000~%int32 width            # 地标的宽度~%uint8 sign_type        # 地标的类型,    type = 1,停止线；type = 2, 斑马线；type = 3,直行箭头；type = 4,左转箭头；~%                       # type = 5,右转箭头；type = 6,直行左转箭头；type = 7,直行右转箭头；~%                       # type = 8,左转掉头箭头；type = 9,掉头箭头；type = 10,菱形；type = 11，泊车位；~%~%~%~%================================================================================~%MSG: autonavigation/Sign~%uint8 pos_flag       #  交通标志位置信息 ~%int32 x              #  x坐标，厘米为单位~%int32 y              #  y坐标，厘米为单位~%uint8 sign_type      #  交通标志类型信息~%~%~%#~%# pos_flag~%#  0: 没有位置信息~%#  1: 位置信息有效~%~%# sign_type:~%#  0：无路标        ~%#  1：禁止左转~%#  2：禁止右转~%#  3：禁止直行~%#  4：禁止向左和向右~%#  5：禁止向左和直行~%#  6：禁止向右和直行~%#  7：禁止驶入~%#  8：停车~%#  9： 前方学校 （减速）       ~%#  10：注意行人 （减速）       ~%#  11：路面不平 （减速）      ~%#  12：路面施工 （减速）~%#  13：直行~%#  14：向左转~%#  15：向右转~%#  16：直行和左转~%#  17：直行和右转~%#  18：向左和向右~%#  19：靠右行驶        ~%#  20：靠左行驶        ~%#  21：鸣喇叭 ------- 无    ~%#  22：环岛行驶 ------- 无     ~%#  23：人行横道        ~%#  24：允许掉头        ~%#  25：停车位          ~%#  26：禁止掉头  ~%#  27：限速10公里 （减速）~%#  28：解除限速10公里 ------- 无~%#  29：限速15公里~%#  30：限速20公里~%#  31：限速25公里~%#  32: 三角修车标志~%~%================================================================================~%MSG: autonavigation/Light~%uint8 pos_flag            #位置是否起作用~%int32 x~%int32 y~%uint8 forward_light_type  #直行灯信息~%uint8 left_light_type     #左转灯信息~%uint8 right_light_type    #右转灯信息~%uint8 uturn_light_type    #U Turn灯信息~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EntityMap>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'head))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'localPose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'gpsPos))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'vehicles) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'vehicleLane) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'pedestrians) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'pedestrianLane) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'lanes) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'farStaticObjects) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'keyPoints) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'parkSpace) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'roadMarkings) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'signs) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'lights) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EntityMap>))
  "Converts a ROS message object to a list"
  (cl:list 'EntityMap
    (cl:cons ':head (head msg))
    (cl:cons ':localPose (localPose msg))
    (cl:cons ':gpsPos (gpsPos msg))
    (cl:cons ':vehicleNum (vehicleNum msg))
    (cl:cons ':vehicles (vehicles msg))
    (cl:cons ':vehicleLane (vehicleLane msg))
    (cl:cons ':pedestrianNum (pedestrianNum msg))
    (cl:cons ':pedestrians (pedestrians msg))
    (cl:cons ':pedestrianLane (pedestrianLane msg))
    (cl:cons ':laneNum (laneNum msg))
    (cl:cons ':lanes (lanes msg))
    (cl:cons ':currentLane (currentLane msg))
    (cl:cons ':farObjectNum (farObjectNum msg))
    (cl:cons ':farStaticObjects (farStaticObjects msg))
    (cl:cons ':keyPoints (keyPoints msg))
    (cl:cons ':keyPointNum (keyPointNum msg))
    (cl:cons ':parkSpace (parkSpace msg))
    (cl:cons ':parkSpaceNum (parkSpaceNum msg))
    (cl:cons ':roadMarkingNum (roadMarkingNum msg))
    (cl:cons ':roadMarkings (roadMarkings msg))
    (cl:cons ':signNum (signNum msg))
    (cl:cons ':signs (signs msg))
    (cl:cons ':lightNum (lightNum msg))
    (cl:cons ':lights (lights msg))
))
