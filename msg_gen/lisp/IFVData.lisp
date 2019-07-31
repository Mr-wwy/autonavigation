; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude IFVData.msg.html

(cl:defclass <IFVData> (roslisp-msg-protocol:ros-message)
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
   (LKA_LANE_OFFSET_LEFT
    :reader LKA_LANE_OFFSET_LEFT
    :initarg :LKA_LANE_OFFSET_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_LANE_DET_CONFIDENCE_LEFT
    :reader LKA_LANE_DET_CONFIDENCE_LEFT
    :initarg :LKA_LANE_DET_CONFIDENCE_LEFT
    :type cl:fixnum
    :initform 0)
   (LKA_LANE_BOUNDARY_TYPE_LEFT
    :reader LKA_LANE_BOUNDARY_TYPE_LEFT
    :initarg :LKA_LANE_BOUNDARY_TYPE_LEFT
    :type cl:fixnum
    :initform 0)
   (LKA_LEFT_MODEL_DEGREE
    :reader LKA_LEFT_MODEL_DEGREE
    :initarg :LKA_LEFT_MODEL_DEGREE
    :type cl:fixnum
    :initform 0)
   (LKA_CURVATURE_LEFT
    :reader LKA_CURVATURE_LEFT
    :initarg :LKA_CURVATURE_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_CURVATURE_DERIVATIVE_LEFT
    :reader LKA_CURVATURE_DERIVATIVE_LEFT
    :initarg :LKA_CURVATURE_DERIVATIVE_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_HEADING_ANGLE_LEFT
    :reader LKA_HEADING_ANGLE_LEFT
    :initarg :LKA_HEADING_ANGLE_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_YELLOW_LANE_MARKER_LEFT
    :reader LKA_YELLOW_LANE_MARKER_LEFT
    :initarg :LKA_YELLOW_LANE_MARKER_LEFT
    :type cl:fixnum
    :initform 0)
   (LKA_VIEW_RANGE_LEFT
    :reader LKA_VIEW_RANGE_LEFT
    :initarg :LKA_VIEW_RANGE_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_VIEW_RANGE_AVAILABILITY_LEFT
    :reader LKA_VIEW_RANGE_AVAILABILITY_LEFT
    :initarg :LKA_VIEW_RANGE_AVAILABILITY_LEFT
    :type cl:fixnum
    :initform 0)
   (LKA_LANE_OFFSET_RIGHT
    :reader LKA_LANE_OFFSET_RIGHT
    :initarg :LKA_LANE_OFFSET_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_LANE_DET_CONFIDENCE_RIGHT
    :reader LKA_LANE_DET_CONFIDENCE_RIGHT
    :initarg :LKA_LANE_DET_CONFIDENCE_RIGHT
    :type cl:fixnum
    :initform 0)
   (LKA_LANE_BOUNDARY_TYPE_RIGHT
    :reader LKA_LANE_BOUNDARY_TYPE_RIGHT
    :initarg :LKA_LANE_BOUNDARY_TYPE_RIGHT
    :type cl:fixnum
    :initform 0)
   (LKA_RIGHT_MODEL_DEGREE
    :reader LKA_RIGHT_MODEL_DEGREE
    :initarg :LKA_RIGHT_MODEL_DEGREE
    :type cl:fixnum
    :initform 0)
   (LKA_CURVATURE_RIGHT
    :reader LKA_CURVATURE_RIGHT
    :initarg :LKA_CURVATURE_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_CURVATURE_DERIVATIVE_RIGHT
    :reader LKA_CURVATURE_DERIVATIVE_RIGHT
    :initarg :LKA_CURVATURE_DERIVATIVE_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_HEADING_ANGLE_RIGHT
    :reader LKA_HEADING_ANGLE_RIGHT
    :initarg :LKA_HEADING_ANGLE_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_YELLOW_LANE_MARKER_RIGHT
    :reader LKA_YELLOW_LANE_MARKER_RIGHT
    :initarg :LKA_YELLOW_LANE_MARKER_RIGHT
    :type cl:fixnum
    :initform 0)
   (LKA_VIEW_RANGE_RIGHT
    :reader LKA_VIEW_RANGE_RIGHT
    :initarg :LKA_VIEW_RANGE_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_VIEW_RANGE_AVAILABILITY_RIGHT
    :reader LKA_VIEW_RANGE_AVAILABILITY_RIGHT
    :initarg :LKA_VIEW_RANGE_AVAILABILITY_RIGHT
    :type cl:fixnum
    :initform 0)
   (LKA_LANE_OFFSET_NEXT_LEFT
    :reader LKA_LANE_OFFSET_NEXT_LEFT
    :initarg :LKA_LANE_OFFSET_NEXT_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_LANE_DET_CONFIDENCE_NEXT_LEFT
    :reader LKA_LANE_DET_CONFIDENCE_NEXT_LEFT
    :initarg :LKA_LANE_DET_CONFIDENCE_NEXT_LEFT
    :type cl:fixnum
    :initform 0)
   (LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT
    :reader LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT
    :initarg :LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT
    :type cl:fixnum
    :initform 0)
   (LKA_NEXT_LEFT_MODEL_DEGREE
    :reader LKA_NEXT_LEFT_MODEL_DEGREE
    :initarg :LKA_NEXT_LEFT_MODEL_DEGREE
    :type cl:fixnum
    :initform 0)
   (LKA_CURVATURE_NEXT_LEFT
    :reader LKA_CURVATURE_NEXT_LEFT
    :initarg :LKA_CURVATURE_NEXT_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_CURVATURE_DERIVATIVE_NEXT_LEFT
    :reader LKA_CURVATURE_DERIVATIVE_NEXT_LEFT
    :initarg :LKA_CURVATURE_DERIVATIVE_NEXT_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_HEADING_ANGLE_NEXT_LEFT
    :reader LKA_HEADING_ANGLE_NEXT_LEFT
    :initarg :LKA_HEADING_ANGLE_NEXT_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_YELLOW_LANE_MARKER_NEXT_LEFT
    :reader LKA_YELLOW_LANE_MARKER_NEXT_LEFT
    :initarg :LKA_YELLOW_LANE_MARKER_NEXT_LEFT
    :type cl:fixnum
    :initform 0)
   (LKA_VIEW_RANGE_NEXT_LEFT
    :reader LKA_VIEW_RANGE_NEXT_LEFT
    :initarg :LKA_VIEW_RANGE_NEXT_LEFT
    :type cl:float
    :initform 0.0)
   (LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT
    :reader LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT
    :initarg :LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT
    :type cl:fixnum
    :initform 0)
   (LKA_LANE_OFFSET_NEXT_RIGHT
    :reader LKA_LANE_OFFSET_NEXT_RIGHT
    :initarg :LKA_LANE_OFFSET_NEXT_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT
    :reader LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT
    :initarg :LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT
    :type cl:fixnum
    :initform 0)
   (LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT
    :reader LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT
    :initarg :LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT
    :type cl:fixnum
    :initform 0)
   (LKA_NEXT_RIGHT_MODEL_DEGREE
    :reader LKA_NEXT_RIGHT_MODEL_DEGREE
    :initarg :LKA_NEXT_RIGHT_MODEL_DEGREE
    :type cl:fixnum
    :initform 0)
   (LKA_CURVATURE_NEXT_RIGHT
    :reader LKA_CURVATURE_NEXT_RIGHT
    :initarg :LKA_CURVATURE_NEXT_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT
    :reader LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT
    :initarg :LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_HEADING_ANGLE_NEXT_RIGHT
    :reader LKA_HEADING_ANGLE_NEXT_RIGHT
    :initarg :LKA_HEADING_ANGLE_NEXT_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_YELLOW_LANE_MARKER_NEXT_RIGHT
    :reader LKA_YELLOW_LANE_MARKER_NEXT_RIGHT
    :initarg :LKA_YELLOW_LANE_MARKER_NEXT_RIGHT
    :type cl:fixnum
    :initform 0)
   (LKA_VIEW_RANGE_NEXT_RIGHT
    :reader LKA_VIEW_RANGE_NEXT_RIGHT
    :initarg :LKA_VIEW_RANGE_NEXT_RIGHT
    :type cl:float
    :initform 0.0)
   (LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT
    :reader LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT
    :initarg :LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT
    :type cl:fixnum
    :initform 0)
   (CAN_NO_OF_VIS_OBS_OUTPUT
    :reader CAN_NO_OF_VIS_OBS_OUTPUT
    :initarg :CAN_NO_OF_VIS_OBS_OUTPUT
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS
    :reader CAN_VIS_OBS
    :initarg :CAN_VIS_OBS
    :type (cl:vector autonavigation-msg:VisObs)
   :initform (cl:make-array 0 :element-type 'autonavigation-msg:VisObs :initial-element (cl:make-instance 'autonavigation-msg:VisObs))))
)

(cl:defclass IFVData (<IFVData>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IFVData>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IFVData)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<IFVData> is deprecated: use autonavigation-msg:IFVData instead.")))

(cl:ensure-generic-function 'head-val :lambda-list '(m))
(cl:defmethod head-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:head-val is deprecated.  Use autonavigation-msg:head instead.")
  (head m))

(cl:ensure-generic-function 'localPose-val :lambda-list '(m))
(cl:defmethod localPose-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:localPose-val is deprecated.  Use autonavigation-msg:localPose instead.")
  (localPose m))

(cl:ensure-generic-function 'gpsPos-val :lambda-list '(m))
(cl:defmethod gpsPos-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:gpsPos-val is deprecated.  Use autonavigation-msg:gpsPos instead.")
  (gpsPos m))

(cl:ensure-generic-function 'LKA_LANE_OFFSET_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_OFFSET_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_OFFSET_LEFT-val is deprecated.  Use autonavigation-msg:LKA_LANE_OFFSET_LEFT instead.")
  (LKA_LANE_OFFSET_LEFT m))

(cl:ensure-generic-function 'LKA_LANE_DET_CONFIDENCE_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_DET_CONFIDENCE_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_DET_CONFIDENCE_LEFT-val is deprecated.  Use autonavigation-msg:LKA_LANE_DET_CONFIDENCE_LEFT instead.")
  (LKA_LANE_DET_CONFIDENCE_LEFT m))

(cl:ensure-generic-function 'LKA_LANE_BOUNDARY_TYPE_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_BOUNDARY_TYPE_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_BOUNDARY_TYPE_LEFT-val is deprecated.  Use autonavigation-msg:LKA_LANE_BOUNDARY_TYPE_LEFT instead.")
  (LKA_LANE_BOUNDARY_TYPE_LEFT m))

(cl:ensure-generic-function 'LKA_LEFT_MODEL_DEGREE-val :lambda-list '(m))
(cl:defmethod LKA_LEFT_MODEL_DEGREE-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LEFT_MODEL_DEGREE-val is deprecated.  Use autonavigation-msg:LKA_LEFT_MODEL_DEGREE instead.")
  (LKA_LEFT_MODEL_DEGREE m))

(cl:ensure-generic-function 'LKA_CURVATURE_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_CURVATURE_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_CURVATURE_LEFT-val is deprecated.  Use autonavigation-msg:LKA_CURVATURE_LEFT instead.")
  (LKA_CURVATURE_LEFT m))

(cl:ensure-generic-function 'LKA_CURVATURE_DERIVATIVE_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_CURVATURE_DERIVATIVE_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_CURVATURE_DERIVATIVE_LEFT-val is deprecated.  Use autonavigation-msg:LKA_CURVATURE_DERIVATIVE_LEFT instead.")
  (LKA_CURVATURE_DERIVATIVE_LEFT m))

(cl:ensure-generic-function 'LKA_HEADING_ANGLE_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_HEADING_ANGLE_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_HEADING_ANGLE_LEFT-val is deprecated.  Use autonavigation-msg:LKA_HEADING_ANGLE_LEFT instead.")
  (LKA_HEADING_ANGLE_LEFT m))

(cl:ensure-generic-function 'LKA_YELLOW_LANE_MARKER_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_YELLOW_LANE_MARKER_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_YELLOW_LANE_MARKER_LEFT-val is deprecated.  Use autonavigation-msg:LKA_YELLOW_LANE_MARKER_LEFT instead.")
  (LKA_YELLOW_LANE_MARKER_LEFT m))

(cl:ensure-generic-function 'LKA_VIEW_RANGE_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_VIEW_RANGE_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_VIEW_RANGE_LEFT-val is deprecated.  Use autonavigation-msg:LKA_VIEW_RANGE_LEFT instead.")
  (LKA_VIEW_RANGE_LEFT m))

(cl:ensure-generic-function 'LKA_VIEW_RANGE_AVAILABILITY_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_VIEW_RANGE_AVAILABILITY_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_VIEW_RANGE_AVAILABILITY_LEFT-val is deprecated.  Use autonavigation-msg:LKA_VIEW_RANGE_AVAILABILITY_LEFT instead.")
  (LKA_VIEW_RANGE_AVAILABILITY_LEFT m))

(cl:ensure-generic-function 'LKA_LANE_OFFSET_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_OFFSET_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_OFFSET_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_LANE_OFFSET_RIGHT instead.")
  (LKA_LANE_OFFSET_RIGHT m))

(cl:ensure-generic-function 'LKA_LANE_DET_CONFIDENCE_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_DET_CONFIDENCE_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_DET_CONFIDENCE_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_LANE_DET_CONFIDENCE_RIGHT instead.")
  (LKA_LANE_DET_CONFIDENCE_RIGHT m))

(cl:ensure-generic-function 'LKA_LANE_BOUNDARY_TYPE_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_BOUNDARY_TYPE_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_BOUNDARY_TYPE_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_LANE_BOUNDARY_TYPE_RIGHT instead.")
  (LKA_LANE_BOUNDARY_TYPE_RIGHT m))

(cl:ensure-generic-function 'LKA_RIGHT_MODEL_DEGREE-val :lambda-list '(m))
(cl:defmethod LKA_RIGHT_MODEL_DEGREE-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_RIGHT_MODEL_DEGREE-val is deprecated.  Use autonavigation-msg:LKA_RIGHT_MODEL_DEGREE instead.")
  (LKA_RIGHT_MODEL_DEGREE m))

(cl:ensure-generic-function 'LKA_CURVATURE_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_CURVATURE_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_CURVATURE_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_CURVATURE_RIGHT instead.")
  (LKA_CURVATURE_RIGHT m))

(cl:ensure-generic-function 'LKA_CURVATURE_DERIVATIVE_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_CURVATURE_DERIVATIVE_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_CURVATURE_DERIVATIVE_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_CURVATURE_DERIVATIVE_RIGHT instead.")
  (LKA_CURVATURE_DERIVATIVE_RIGHT m))

(cl:ensure-generic-function 'LKA_HEADING_ANGLE_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_HEADING_ANGLE_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_HEADING_ANGLE_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_HEADING_ANGLE_RIGHT instead.")
  (LKA_HEADING_ANGLE_RIGHT m))

(cl:ensure-generic-function 'LKA_YELLOW_LANE_MARKER_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_YELLOW_LANE_MARKER_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_YELLOW_LANE_MARKER_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_YELLOW_LANE_MARKER_RIGHT instead.")
  (LKA_YELLOW_LANE_MARKER_RIGHT m))

(cl:ensure-generic-function 'LKA_VIEW_RANGE_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_VIEW_RANGE_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_VIEW_RANGE_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_VIEW_RANGE_RIGHT instead.")
  (LKA_VIEW_RANGE_RIGHT m))

(cl:ensure-generic-function 'LKA_VIEW_RANGE_AVAILABILITY_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_VIEW_RANGE_AVAILABILITY_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_VIEW_RANGE_AVAILABILITY_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_VIEW_RANGE_AVAILABILITY_RIGHT instead.")
  (LKA_VIEW_RANGE_AVAILABILITY_RIGHT m))

(cl:ensure-generic-function 'LKA_LANE_OFFSET_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_OFFSET_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_OFFSET_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_LANE_OFFSET_NEXT_LEFT instead.")
  (LKA_LANE_OFFSET_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_LANE_DET_CONFIDENCE_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_DET_CONFIDENCE_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_DET_CONFIDENCE_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_LANE_DET_CONFIDENCE_NEXT_LEFT instead.")
  (LKA_LANE_DET_CONFIDENCE_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT instead.")
  (LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_NEXT_LEFT_MODEL_DEGREE-val :lambda-list '(m))
(cl:defmethod LKA_NEXT_LEFT_MODEL_DEGREE-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_NEXT_LEFT_MODEL_DEGREE-val is deprecated.  Use autonavigation-msg:LKA_NEXT_LEFT_MODEL_DEGREE instead.")
  (LKA_NEXT_LEFT_MODEL_DEGREE m))

(cl:ensure-generic-function 'LKA_CURVATURE_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_CURVATURE_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_CURVATURE_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_CURVATURE_NEXT_LEFT instead.")
  (LKA_CURVATURE_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_CURVATURE_DERIVATIVE_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_CURVATURE_DERIVATIVE_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_CURVATURE_DERIVATIVE_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_CURVATURE_DERIVATIVE_NEXT_LEFT instead.")
  (LKA_CURVATURE_DERIVATIVE_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_HEADING_ANGLE_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_HEADING_ANGLE_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_HEADING_ANGLE_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_HEADING_ANGLE_NEXT_LEFT instead.")
  (LKA_HEADING_ANGLE_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_YELLOW_LANE_MARKER_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_YELLOW_LANE_MARKER_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_YELLOW_LANE_MARKER_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_YELLOW_LANE_MARKER_NEXT_LEFT instead.")
  (LKA_YELLOW_LANE_MARKER_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_VIEW_RANGE_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_VIEW_RANGE_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_VIEW_RANGE_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_VIEW_RANGE_NEXT_LEFT instead.")
  (LKA_VIEW_RANGE_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT-val :lambda-list '(m))
(cl:defmethod LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT-val is deprecated.  Use autonavigation-msg:LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT instead.")
  (LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT m))

(cl:ensure-generic-function 'LKA_LANE_OFFSET_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_OFFSET_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_OFFSET_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_LANE_OFFSET_NEXT_RIGHT instead.")
  (LKA_LANE_OFFSET_NEXT_RIGHT m))

(cl:ensure-generic-function 'LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT instead.")
  (LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT m))

(cl:ensure-generic-function 'LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT instead.")
  (LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT m))

(cl:ensure-generic-function 'LKA_NEXT_RIGHT_MODEL_DEGREE-val :lambda-list '(m))
(cl:defmethod LKA_NEXT_RIGHT_MODEL_DEGREE-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_NEXT_RIGHT_MODEL_DEGREE-val is deprecated.  Use autonavigation-msg:LKA_NEXT_RIGHT_MODEL_DEGREE instead.")
  (LKA_NEXT_RIGHT_MODEL_DEGREE m))

(cl:ensure-generic-function 'LKA_CURVATURE_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_CURVATURE_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_CURVATURE_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_CURVATURE_NEXT_RIGHT instead.")
  (LKA_CURVATURE_NEXT_RIGHT m))

(cl:ensure-generic-function 'LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT instead.")
  (LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT m))

(cl:ensure-generic-function 'LKA_HEADING_ANGLE_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_HEADING_ANGLE_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_HEADING_ANGLE_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_HEADING_ANGLE_NEXT_RIGHT instead.")
  (LKA_HEADING_ANGLE_NEXT_RIGHT m))

(cl:ensure-generic-function 'LKA_YELLOW_LANE_MARKER_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_YELLOW_LANE_MARKER_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_YELLOW_LANE_MARKER_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_YELLOW_LANE_MARKER_NEXT_RIGHT instead.")
  (LKA_YELLOW_LANE_MARKER_NEXT_RIGHT m))

(cl:ensure-generic-function 'LKA_VIEW_RANGE_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_VIEW_RANGE_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_VIEW_RANGE_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_VIEW_RANGE_NEXT_RIGHT instead.")
  (LKA_VIEW_RANGE_NEXT_RIGHT m))

(cl:ensure-generic-function 'LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT-val :lambda-list '(m))
(cl:defmethod LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT-val is deprecated.  Use autonavigation-msg:LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT instead.")
  (LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT m))

(cl:ensure-generic-function 'CAN_NO_OF_VIS_OBS_OUTPUT-val :lambda-list '(m))
(cl:defmethod CAN_NO_OF_VIS_OBS_OUTPUT-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_NO_OF_VIS_OBS_OUTPUT-val is deprecated.  Use autonavigation-msg:CAN_NO_OF_VIS_OBS_OUTPUT instead.")
  (CAN_NO_OF_VIS_OBS_OUTPUT m))

(cl:ensure-generic-function 'CAN_VIS_OBS-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS-val ((m <IFVData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS instead.")
  (CAN_VIS_OBS m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IFVData>) ostream)
  "Serializes a message object of type '<IFVData>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'head) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'localPose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'gpsPos) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_LANE_OFFSET_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'LKA_LANE_DET_CONFIDENCE_LEFT)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_LANE_BOUNDARY_TYPE_LEFT)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'LKA_LEFT_MODEL_DEGREE)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_CURVATURE_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LKA_CURVATURE_DERIVATIVE_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_HEADING_ANGLE_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_YELLOW_LANE_MARKER_LEFT)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_VIEW_RANGE_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_VIEW_RANGE_AVAILABILITY_LEFT)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_LANE_OFFSET_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'LKA_LANE_DET_CONFIDENCE_RIGHT)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_LANE_BOUNDARY_TYPE_RIGHT)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'LKA_RIGHT_MODEL_DEGREE)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_CURVATURE_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LKA_CURVATURE_DERIVATIVE_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_HEADING_ANGLE_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_YELLOW_LANE_MARKER_RIGHT)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_VIEW_RANGE_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_VIEW_RANGE_AVAILABILITY_RIGHT)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_LANE_OFFSET_NEXT_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'LKA_LANE_DET_CONFIDENCE_NEXT_LEFT)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'LKA_NEXT_LEFT_MODEL_DEGREE)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_CURVATURE_NEXT_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LKA_CURVATURE_DERIVATIVE_NEXT_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_HEADING_ANGLE_NEXT_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_YELLOW_LANE_MARKER_NEXT_LEFT)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_VIEW_RANGE_NEXT_LEFT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_LANE_OFFSET_NEXT_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'LKA_NEXT_RIGHT_MODEL_DEGREE)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_CURVATURE_NEXT_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_HEADING_ANGLE_NEXT_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_YELLOW_LANE_MARKER_NEXT_RIGHT)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LKA_VIEW_RANGE_NEXT_RIGHT))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_NO_OF_VIS_OBS_OUTPUT)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'CAN_VIS_OBS))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'CAN_VIS_OBS))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IFVData>) istream)
  "Deserializes a message object of type '<IFVData>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'head) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'localPose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'gpsPos) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_LANE_OFFSET_LEFT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LKA_LANE_DET_CONFIDENCE_LEFT) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_LANE_BOUNDARY_TYPE_LEFT)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LKA_LEFT_MODEL_DEGREE) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_CURVATURE_LEFT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_CURVATURE_DERIVATIVE_LEFT) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_HEADING_ANGLE_LEFT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_YELLOW_LANE_MARKER_LEFT)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_VIEW_RANGE_LEFT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_VIEW_RANGE_AVAILABILITY_LEFT)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_LANE_OFFSET_RIGHT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LKA_LANE_DET_CONFIDENCE_RIGHT) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_LANE_BOUNDARY_TYPE_RIGHT)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LKA_RIGHT_MODEL_DEGREE) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_CURVATURE_RIGHT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_CURVATURE_DERIVATIVE_RIGHT) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_HEADING_ANGLE_RIGHT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_YELLOW_LANE_MARKER_RIGHT)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_VIEW_RANGE_RIGHT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_VIEW_RANGE_AVAILABILITY_RIGHT)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_LANE_OFFSET_NEXT_LEFT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LKA_LANE_DET_CONFIDENCE_NEXT_LEFT) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LKA_NEXT_LEFT_MODEL_DEGREE) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_CURVATURE_NEXT_LEFT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_CURVATURE_DERIVATIVE_NEXT_LEFT) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_HEADING_ANGLE_NEXT_LEFT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_YELLOW_LANE_MARKER_NEXT_LEFT)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_VIEW_RANGE_NEXT_LEFT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_LANE_OFFSET_NEXT_RIGHT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LKA_NEXT_RIGHT_MODEL_DEGREE) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_CURVATURE_NEXT_RIGHT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_HEADING_ANGLE_NEXT_RIGHT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_YELLOW_LANE_MARKER_NEXT_RIGHT)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LKA_VIEW_RANGE_NEXT_RIGHT) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_NO_OF_VIS_OBS_OUTPUT)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'CAN_VIS_OBS) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'CAN_VIS_OBS)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autonavigation-msg:VisObs))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IFVData>)))
  "Returns string type for a message object of type '<IFVData>"
  "autonavigation/IFVData")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IFVData)))
  "Returns string type for a message object of type 'IFVData"
  "autonavigation/IFVData")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IFVData>)))
  "Returns md5sum for a message object of type '<IFVData>"
  "e582aced99348ba7bbdf747ed5cb5dab")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IFVData)))
  "Returns md5sum for a message object of type 'IFVData"
  "e582aced99348ba7bbdf747ed5cb5dab")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IFVData>)))
  "Returns full string definition for message of type '<IFVData>"
  (cl:format cl:nil "Header      head~%LocalPose   localPose~%GpsPosition gpsPos~%~%~%#左车道线~%float32     LKA_LANE_OFFSET_LEFT                 #LNTRK_HOST_STATE_MSG_1::CAN_LANE_OFFSET_LEFT~%int8        LKA_LANE_DET_CONFIDENCE_LEFT         #LNTRK_HOST_STATE_MSG_1::CAN_LANE_DET_CONFIDENCE_LEFT~%uint8       LKA_LANE_BOUNDARY_TYPE_LEFT          #LNTRK_HOST_STATE_MSG_2::CAN_LANE_BOUNDARY_TYPE_LEFT~%int8        LKA_LEFT_MODEL_DEGREE                #LNTRK_HOST_STATE_MSG_2::CAN_LKA_LEFT_MODEL_DEGREE~%float32     LKA_CURVATURE_LEFT                   #VFP_LKA_LANE_LEFT::CAN_LKA_CURVATURE_LEFT~%float64     LKA_CURVATURE_DERIVATIVE_LEFT        #VFP_LKA_LANE_LEFT::CAN_LKA_CURVATURE_DERIVATIVE_LEFT~%float32     LKA_HEADING_ANGLE_LEFT               #VFP_LKA_LANE_LEFT::CAN_LKA_HEADING_ANGLE_LEFT~%uint8       LKA_YELLOW_LANE_MARKER_LEFT          #VFP_LKA_LANE_LEFT::CAN_LKA_YELLOW_LANE_MARKER_LEFT~%float32     LKA_VIEW_RANGE_LEFT                  #VFP_LKA_LANE_LEFT::CAN_LKA_VIEW_RANGE_LEFT~%uint8       LKA_VIEW_RANGE_AVAILABILITY_LEFT     #VFP_LKA_LANE_LEFT::CAN_LKA_VIEW_RANGE_AVAILABILITY_LEFT~%~%#右车道线~%float32     LKA_LANE_OFFSET_RIGHT                #LNTRK_HOST_STATE_MSG_1::CAN_LANE_OFFSET_RIGHT~%int8        LKA_LANE_DET_CONFIDENCE_RIGHT        #LNTRK_HOST_STATE_MSG_1::CAN_LANE_DET_CONFIDENCE_RIGHT~%uint8       LKA_LANE_BOUNDARY_TYPE_RIGHT         #LNTRK_HOST_STATE_MSG_2::CAN_LANE_BOUNDARY_TYPE_RIGHT~%int8        LKA_RIGHT_MODEL_DEGREE               #LNTRK_HOST_STATE_MSG_2::CAN_LKA_RIGHT_MODEL_DEGREE~%float32     LKA_CURVATURE_RIGHT                  #VFP_LKA_LANE_RIGHT::CAN_LKA_CURVATURE_RIGHT~%float64     LKA_CURVATURE_DERIVATIVE_RIGHT       #VFP_LKA_LANE_RIGHT::CAN_LKA_CURVATURE_DERIVATIVE_RIGHT~%float32     LKA_HEADING_ANGLE_RIGHT              #VFP_LKA_LANE_RIGHT::CAN_LKA_HEADING_ANGLE_RIGHT~%uint8       LKA_YELLOW_LANE_MARKER_RIGHT         #VFP_LKA_LANE_RIGHT::CAN_LKA_YELLOW_LANE_MARKER_RIGHT~%float32     LKA_VIEW_RANGE_RIGHT                 #VFP_LKA_LANE_RIGHT::CAN_LKA_VIEW_RANGE_RIGHT~%uint8       LKA_VIEW_RANGE_AVAILABILITY_RIGHT    #VFP_LKA_LANE_RIGHT::CAN_LKA_VIEW_RANGE_AVAILABILITY_RIGHT~%~%#左车道线2~%float32     LKA_LANE_OFFSET_NEXT_LEFT~%int8        LKA_LANE_DET_CONFIDENCE_NEXT_LEFT~%uint8       LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT~%int8        LKA_NEXT_LEFT_MODEL_DEGREE~%float32     LKA_CURVATURE_NEXT_LEFT~%float64     LKA_CURVATURE_DERIVATIVE_NEXT_LEFT~%float32     LKA_HEADING_ANGLE_NEXT_LEFT~%uint8       LKA_YELLOW_LANE_MARKER_NEXT_LEFT~%float32     LKA_VIEW_RANGE_NEXT_LEFT~%uint8       LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT~%~%#右车道线2~%float32     LKA_LANE_OFFSET_NEXT_RIGHT~%int8        LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT~%uint8       LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT~%int8        LKA_NEXT_RIGHT_MODEL_DEGREE~%float32     LKA_CURVATURE_NEXT_RIGHT~%float64     LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT~%float32     LKA_HEADING_ANGLE_NEXT_RIGHT~%uint8       LKA_YELLOW_LANE_MARKER_NEXT_RIGHT~%float32     LKA_VIEW_RANGE_NEXT_RIGHT~%uint8       LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT~%~%~%#物体~%uint8       CAN_NO_OF_VIS_OBS_OUTPUT             #VFP_SYS_STATUS_MSG2::CAN_NO_OF_VIS_OBS_OUTPUT~%VisObs[]    CAN_VIS_OBS~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/VisObs~%#VISION_OBSTACLE_MSG1~%uint8            CAN_VIS_OBS_COUNT~%float32          CAN_VIS_OBS_ANGLE_RATE~%float32          CAN_VIS_OBS_ANGLE_CENTROID~%float32          CAN_VIS_OBS_RANGE_RATE~%float32          CAN_VIS_OBS_RANGE ~%float32          CAN_VIS_OBS_LATERAL_RATE~%~%#VISION_OBSTACLE_MSG2~%int8             CAN_VIS_OBS_MANEUVER_STATE~%uint8            CAN_VIS_OBS_DETECTION_STATUS~%uint8            CAN_VIS_OBS_MOTION_TYPE~%uint8            CAN_VIS_OBS_CROSSING_STATUS~%uint8            CAN_VIS_OBS_ID~%uint8            CAN_VIS_OBS_LOW_CONFIDENCE~%int8             CAN_VIS_OBS_LANE_NUMBER~%uint8            CAN_VIS_OBS_TURN_INDICATOR~%uint8            CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR~%uint8            CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF~%uint8            CAN_VIS_OBS_OBJECT_IN_PATH~%uint8            CAN_VIS_OBS_HIGH_DECELERATION~%uint8            CAN_VIS_OBS_FCW_STATUS~%float32          CAN_VIS_OBS_TTC_WITHOUT_ACC~%uint8            CAN_VIS_OBS_ME_AWS~%uint8            CAN_VIS_OBS_CIPO~%float32          CAN_VIS_OBS_TTC_WITH_ACC~%float32          CAN_VIS_OBS_TTC_WITH_ACC_CONF~%uint8            CAN_VIS_OBS_CLASSIFICATION~%~%#VISION_OBSTACLE_MSG3~%uint8            CAN_RADAR_TARGET_MATCH_COASTED~%float32          CAN_VIS_OBS_VISION_RANGE~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_1~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_2~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_3~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_4~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_1~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_2~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_3~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_4~%float32          CAN_VIS_OBS_WIDTH~%~%~%#VISION_OBSTACLE_MSG4~%float32          CAN_VIS_OBS_VISION_ANGLE_RATE~%float32          CAN_VIS_OBS_VISION_ANGLE_CENTROID~%float32          CAN_VIS_OBS_VISION_RANGE_RATE~%float32          CAN_VIS_OBS_VISION_LATERAL_RATE~%float32          CAN_VIS_OBS_VISION_WIDTH~%~%#VISION_OBSTACLE_MSG5~%float32          CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST~%float32          CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST~%float32          CAN_VIS_OBS_RANGE_FUNC_ACT_EST~%uint8            CAN_VIS_OBS_FCW_CALC_STATUS~%float32          CAN_VIS_OBS_PREDICTED_TTC~%float32          CAN_VIS_OBS_PREDICTED_LAT_POS~%uint8            CAN_OBJECT_HIGH_DECEL_FLAG~%uint8            CAN_VIS_HALF_BODY_DETECTION_FLAG~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IFVData)))
  "Returns full string definition for message of type 'IFVData"
  (cl:format cl:nil "Header      head~%LocalPose   localPose~%GpsPosition gpsPos~%~%~%#左车道线~%float32     LKA_LANE_OFFSET_LEFT                 #LNTRK_HOST_STATE_MSG_1::CAN_LANE_OFFSET_LEFT~%int8        LKA_LANE_DET_CONFIDENCE_LEFT         #LNTRK_HOST_STATE_MSG_1::CAN_LANE_DET_CONFIDENCE_LEFT~%uint8       LKA_LANE_BOUNDARY_TYPE_LEFT          #LNTRK_HOST_STATE_MSG_2::CAN_LANE_BOUNDARY_TYPE_LEFT~%int8        LKA_LEFT_MODEL_DEGREE                #LNTRK_HOST_STATE_MSG_2::CAN_LKA_LEFT_MODEL_DEGREE~%float32     LKA_CURVATURE_LEFT                   #VFP_LKA_LANE_LEFT::CAN_LKA_CURVATURE_LEFT~%float64     LKA_CURVATURE_DERIVATIVE_LEFT        #VFP_LKA_LANE_LEFT::CAN_LKA_CURVATURE_DERIVATIVE_LEFT~%float32     LKA_HEADING_ANGLE_LEFT               #VFP_LKA_LANE_LEFT::CAN_LKA_HEADING_ANGLE_LEFT~%uint8       LKA_YELLOW_LANE_MARKER_LEFT          #VFP_LKA_LANE_LEFT::CAN_LKA_YELLOW_LANE_MARKER_LEFT~%float32     LKA_VIEW_RANGE_LEFT                  #VFP_LKA_LANE_LEFT::CAN_LKA_VIEW_RANGE_LEFT~%uint8       LKA_VIEW_RANGE_AVAILABILITY_LEFT     #VFP_LKA_LANE_LEFT::CAN_LKA_VIEW_RANGE_AVAILABILITY_LEFT~%~%#右车道线~%float32     LKA_LANE_OFFSET_RIGHT                #LNTRK_HOST_STATE_MSG_1::CAN_LANE_OFFSET_RIGHT~%int8        LKA_LANE_DET_CONFIDENCE_RIGHT        #LNTRK_HOST_STATE_MSG_1::CAN_LANE_DET_CONFIDENCE_RIGHT~%uint8       LKA_LANE_BOUNDARY_TYPE_RIGHT         #LNTRK_HOST_STATE_MSG_2::CAN_LANE_BOUNDARY_TYPE_RIGHT~%int8        LKA_RIGHT_MODEL_DEGREE               #LNTRK_HOST_STATE_MSG_2::CAN_LKA_RIGHT_MODEL_DEGREE~%float32     LKA_CURVATURE_RIGHT                  #VFP_LKA_LANE_RIGHT::CAN_LKA_CURVATURE_RIGHT~%float64     LKA_CURVATURE_DERIVATIVE_RIGHT       #VFP_LKA_LANE_RIGHT::CAN_LKA_CURVATURE_DERIVATIVE_RIGHT~%float32     LKA_HEADING_ANGLE_RIGHT              #VFP_LKA_LANE_RIGHT::CAN_LKA_HEADING_ANGLE_RIGHT~%uint8       LKA_YELLOW_LANE_MARKER_RIGHT         #VFP_LKA_LANE_RIGHT::CAN_LKA_YELLOW_LANE_MARKER_RIGHT~%float32     LKA_VIEW_RANGE_RIGHT                 #VFP_LKA_LANE_RIGHT::CAN_LKA_VIEW_RANGE_RIGHT~%uint8       LKA_VIEW_RANGE_AVAILABILITY_RIGHT    #VFP_LKA_LANE_RIGHT::CAN_LKA_VIEW_RANGE_AVAILABILITY_RIGHT~%~%#左车道线2~%float32     LKA_LANE_OFFSET_NEXT_LEFT~%int8        LKA_LANE_DET_CONFIDENCE_NEXT_LEFT~%uint8       LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT~%int8        LKA_NEXT_LEFT_MODEL_DEGREE~%float32     LKA_CURVATURE_NEXT_LEFT~%float64     LKA_CURVATURE_DERIVATIVE_NEXT_LEFT~%float32     LKA_HEADING_ANGLE_NEXT_LEFT~%uint8       LKA_YELLOW_LANE_MARKER_NEXT_LEFT~%float32     LKA_VIEW_RANGE_NEXT_LEFT~%uint8       LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT~%~%#右车道线2~%float32     LKA_LANE_OFFSET_NEXT_RIGHT~%int8        LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT~%uint8       LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT~%int8        LKA_NEXT_RIGHT_MODEL_DEGREE~%float32     LKA_CURVATURE_NEXT_RIGHT~%float64     LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT~%float32     LKA_HEADING_ANGLE_NEXT_RIGHT~%uint8       LKA_YELLOW_LANE_MARKER_NEXT_RIGHT~%float32     LKA_VIEW_RANGE_NEXT_RIGHT~%uint8       LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT~%~%~%#物体~%uint8       CAN_NO_OF_VIS_OBS_OUTPUT             #VFP_SYS_STATUS_MSG2::CAN_NO_OF_VIS_OBS_OUTPUT~%VisObs[]    CAN_VIS_OBS~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: autonavigation/LocalPose~%#LocalPose msg~%~%float64 time			  ~%#centimeter  ~%int32 dr_x~%int32 dr_y~%int32 dr_z~%#0.01degree~%int32 dr_heading~%int32 dr_roll~%int32 dr_pitch		    ~%~%#left_front wheel speed,cm/s~%int32 lf_speed~%#right_front wheel speed,cm/s		    ~%int32 rf_speed~%#left_rear wheel speed,cm/s		    ~%int32 lr_speed~%#right_rear wheel speed,cm/s		    ~%int32 rr_speed		    ~%~%#imu三轴陀螺速度 0.01degree/s~%int32 rot_x~%int32 rot_y                      ~%int32 rot_z                      ~%#imu三轴加速度  0.01m/s^2~%int32 acc_x                      ~%int32 acc_y                      ~%int32 acc_z                      ~%~%int32 batteryState~%int32 batteryEnergy           #0-100~%~%#-3000(right)~3000(left) degree  0.01degree/s~%int32 steer   ~%#0(zero)~100(full)                  ~%int32 brake                 ~%#0(zero)~100(full)     ~%int32 fuel      ~%#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 ~%int8  trans                      ~%int8  VehicleState~%#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2~%int8  mode                       ~%#dr运行状态~%int8 drStatus~%#错误状态		    ~%int8 errorStatus		    ~%int8 emergency_flag~%int8 hardswitch_on~%~%~%================================================================================~%MSG: autonavigation/GpsPosition~%#gps info is updated~%char          gps_flag               ~%uint32        gps_week~%#millisecond in a week~%float64       gps_millisecond   ~%#经纬度，单位为度     ~%float64	      longitude		      ~%float64	      laltitude~%#高斯投影位置,cm~%float64	      gaussX		      ~%float64       gaussY~%#height,     cm~%float64         height  ~%#欧拉角，单位为0.01度                ~%int32         pitch                   ~%int32         roll~%#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    ~%int32         azimuth                 ~%~%#north速度，单位为cm/s~%int32         northVelocity           ~%int32         eastVelocity~%int32         upVelocity~%#系统运行状态~%int32         positionStatus	      ~%~%#imu三轴陀螺速度 0.01degree/s~%int32	        rot_x                      ~%int32           rot_y                      ~%int32           rot_z                      ~%~%#imu三轴加速度  0.01m/s^2~%int32           acc_x                      ~%int32           acc_y                      ~%int32           acc_z                      ~%	~%~%================================================================================~%MSG: autonavigation/VisObs~%#VISION_OBSTACLE_MSG1~%uint8            CAN_VIS_OBS_COUNT~%float32          CAN_VIS_OBS_ANGLE_RATE~%float32          CAN_VIS_OBS_ANGLE_CENTROID~%float32          CAN_VIS_OBS_RANGE_RATE~%float32          CAN_VIS_OBS_RANGE ~%float32          CAN_VIS_OBS_LATERAL_RATE~%~%#VISION_OBSTACLE_MSG2~%int8             CAN_VIS_OBS_MANEUVER_STATE~%uint8            CAN_VIS_OBS_DETECTION_STATUS~%uint8            CAN_VIS_OBS_MOTION_TYPE~%uint8            CAN_VIS_OBS_CROSSING_STATUS~%uint8            CAN_VIS_OBS_ID~%uint8            CAN_VIS_OBS_LOW_CONFIDENCE~%int8             CAN_VIS_OBS_LANE_NUMBER~%uint8            CAN_VIS_OBS_TURN_INDICATOR~%uint8            CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR~%uint8            CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF~%uint8            CAN_VIS_OBS_OBJECT_IN_PATH~%uint8            CAN_VIS_OBS_HIGH_DECELERATION~%uint8            CAN_VIS_OBS_FCW_STATUS~%float32          CAN_VIS_OBS_TTC_WITHOUT_ACC~%uint8            CAN_VIS_OBS_ME_AWS~%uint8            CAN_VIS_OBS_CIPO~%float32          CAN_VIS_OBS_TTC_WITH_ACC~%float32          CAN_VIS_OBS_TTC_WITH_ACC_CONF~%uint8            CAN_VIS_OBS_CLASSIFICATION~%~%#VISION_OBSTACLE_MSG3~%uint8            CAN_RADAR_TARGET_MATCH_COASTED~%float32          CAN_VIS_OBS_VISION_RANGE~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_1~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_2~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_3~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_4~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_1~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_2~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_3~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_4~%float32          CAN_VIS_OBS_WIDTH~%~%~%#VISION_OBSTACLE_MSG4~%float32          CAN_VIS_OBS_VISION_ANGLE_RATE~%float32          CAN_VIS_OBS_VISION_ANGLE_CENTROID~%float32          CAN_VIS_OBS_VISION_RANGE_RATE~%float32          CAN_VIS_OBS_VISION_LATERAL_RATE~%float32          CAN_VIS_OBS_VISION_WIDTH~%~%#VISION_OBSTACLE_MSG5~%float32          CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST~%float32          CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST~%float32          CAN_VIS_OBS_RANGE_FUNC_ACT_EST~%uint8            CAN_VIS_OBS_FCW_CALC_STATUS~%float32          CAN_VIS_OBS_PREDICTED_TTC~%float32          CAN_VIS_OBS_PREDICTED_LAT_POS~%uint8            CAN_OBJECT_HIGH_DECEL_FLAG~%uint8            CAN_VIS_HALF_BODY_DETECTION_FLAG~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IFVData>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'head))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'localPose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'gpsPos))
     4
     1
     1
     1
     4
     8
     4
     1
     4
     1
     4
     1
     1
     1
     4
     8
     4
     1
     4
     1
     4
     1
     1
     1
     4
     8
     4
     1
     4
     1
     4
     1
     1
     1
     4
     8
     4
     1
     4
     1
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'CAN_VIS_OBS) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IFVData>))
  "Converts a ROS message object to a list"
  (cl:list 'IFVData
    (cl:cons ':head (head msg))
    (cl:cons ':localPose (localPose msg))
    (cl:cons ':gpsPos (gpsPos msg))
    (cl:cons ':LKA_LANE_OFFSET_LEFT (LKA_LANE_OFFSET_LEFT msg))
    (cl:cons ':LKA_LANE_DET_CONFIDENCE_LEFT (LKA_LANE_DET_CONFIDENCE_LEFT msg))
    (cl:cons ':LKA_LANE_BOUNDARY_TYPE_LEFT (LKA_LANE_BOUNDARY_TYPE_LEFT msg))
    (cl:cons ':LKA_LEFT_MODEL_DEGREE (LKA_LEFT_MODEL_DEGREE msg))
    (cl:cons ':LKA_CURVATURE_LEFT (LKA_CURVATURE_LEFT msg))
    (cl:cons ':LKA_CURVATURE_DERIVATIVE_LEFT (LKA_CURVATURE_DERIVATIVE_LEFT msg))
    (cl:cons ':LKA_HEADING_ANGLE_LEFT (LKA_HEADING_ANGLE_LEFT msg))
    (cl:cons ':LKA_YELLOW_LANE_MARKER_LEFT (LKA_YELLOW_LANE_MARKER_LEFT msg))
    (cl:cons ':LKA_VIEW_RANGE_LEFT (LKA_VIEW_RANGE_LEFT msg))
    (cl:cons ':LKA_VIEW_RANGE_AVAILABILITY_LEFT (LKA_VIEW_RANGE_AVAILABILITY_LEFT msg))
    (cl:cons ':LKA_LANE_OFFSET_RIGHT (LKA_LANE_OFFSET_RIGHT msg))
    (cl:cons ':LKA_LANE_DET_CONFIDENCE_RIGHT (LKA_LANE_DET_CONFIDENCE_RIGHT msg))
    (cl:cons ':LKA_LANE_BOUNDARY_TYPE_RIGHT (LKA_LANE_BOUNDARY_TYPE_RIGHT msg))
    (cl:cons ':LKA_RIGHT_MODEL_DEGREE (LKA_RIGHT_MODEL_DEGREE msg))
    (cl:cons ':LKA_CURVATURE_RIGHT (LKA_CURVATURE_RIGHT msg))
    (cl:cons ':LKA_CURVATURE_DERIVATIVE_RIGHT (LKA_CURVATURE_DERIVATIVE_RIGHT msg))
    (cl:cons ':LKA_HEADING_ANGLE_RIGHT (LKA_HEADING_ANGLE_RIGHT msg))
    (cl:cons ':LKA_YELLOW_LANE_MARKER_RIGHT (LKA_YELLOW_LANE_MARKER_RIGHT msg))
    (cl:cons ':LKA_VIEW_RANGE_RIGHT (LKA_VIEW_RANGE_RIGHT msg))
    (cl:cons ':LKA_VIEW_RANGE_AVAILABILITY_RIGHT (LKA_VIEW_RANGE_AVAILABILITY_RIGHT msg))
    (cl:cons ':LKA_LANE_OFFSET_NEXT_LEFT (LKA_LANE_OFFSET_NEXT_LEFT msg))
    (cl:cons ':LKA_LANE_DET_CONFIDENCE_NEXT_LEFT (LKA_LANE_DET_CONFIDENCE_NEXT_LEFT msg))
    (cl:cons ':LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT (LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT msg))
    (cl:cons ':LKA_NEXT_LEFT_MODEL_DEGREE (LKA_NEXT_LEFT_MODEL_DEGREE msg))
    (cl:cons ':LKA_CURVATURE_NEXT_LEFT (LKA_CURVATURE_NEXT_LEFT msg))
    (cl:cons ':LKA_CURVATURE_DERIVATIVE_NEXT_LEFT (LKA_CURVATURE_DERIVATIVE_NEXT_LEFT msg))
    (cl:cons ':LKA_HEADING_ANGLE_NEXT_LEFT (LKA_HEADING_ANGLE_NEXT_LEFT msg))
    (cl:cons ':LKA_YELLOW_LANE_MARKER_NEXT_LEFT (LKA_YELLOW_LANE_MARKER_NEXT_LEFT msg))
    (cl:cons ':LKA_VIEW_RANGE_NEXT_LEFT (LKA_VIEW_RANGE_NEXT_LEFT msg))
    (cl:cons ':LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT (LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT msg))
    (cl:cons ':LKA_LANE_OFFSET_NEXT_RIGHT (LKA_LANE_OFFSET_NEXT_RIGHT msg))
    (cl:cons ':LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT (LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT msg))
    (cl:cons ':LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT (LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT msg))
    (cl:cons ':LKA_NEXT_RIGHT_MODEL_DEGREE (LKA_NEXT_RIGHT_MODEL_DEGREE msg))
    (cl:cons ':LKA_CURVATURE_NEXT_RIGHT (LKA_CURVATURE_NEXT_RIGHT msg))
    (cl:cons ':LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT (LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT msg))
    (cl:cons ':LKA_HEADING_ANGLE_NEXT_RIGHT (LKA_HEADING_ANGLE_NEXT_RIGHT msg))
    (cl:cons ':LKA_YELLOW_LANE_MARKER_NEXT_RIGHT (LKA_YELLOW_LANE_MARKER_NEXT_RIGHT msg))
    (cl:cons ':LKA_VIEW_RANGE_NEXT_RIGHT (LKA_VIEW_RANGE_NEXT_RIGHT msg))
    (cl:cons ':LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT (LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT msg))
    (cl:cons ':CAN_NO_OF_VIS_OBS_OUTPUT (CAN_NO_OF_VIS_OBS_OUTPUT msg))
    (cl:cons ':CAN_VIS_OBS (CAN_VIS_OBS msg))
))
