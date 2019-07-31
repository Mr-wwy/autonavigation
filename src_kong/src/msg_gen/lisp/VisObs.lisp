; Auto-generated. Do not edit!


(cl:in-package autonavigation-msg)


;//! \htmlinclude VisObs.msg.html

(cl:defclass <VisObs> (roslisp-msg-protocol:ros-message)
  ((CAN_VIS_OBS_COUNT
    :reader CAN_VIS_OBS_COUNT
    :initarg :CAN_VIS_OBS_COUNT
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_ANGLE_RATE
    :reader CAN_VIS_OBS_ANGLE_RATE
    :initarg :CAN_VIS_OBS_ANGLE_RATE
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_ANGLE_CENTROID
    :reader CAN_VIS_OBS_ANGLE_CENTROID
    :initarg :CAN_VIS_OBS_ANGLE_CENTROID
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_RANGE_RATE
    :reader CAN_VIS_OBS_RANGE_RATE
    :initarg :CAN_VIS_OBS_RANGE_RATE
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_RANGE
    :reader CAN_VIS_OBS_RANGE
    :initarg :CAN_VIS_OBS_RANGE
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_LATERAL_RATE
    :reader CAN_VIS_OBS_LATERAL_RATE
    :initarg :CAN_VIS_OBS_LATERAL_RATE
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_MANEUVER_STATE
    :reader CAN_VIS_OBS_MANEUVER_STATE
    :initarg :CAN_VIS_OBS_MANEUVER_STATE
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_DETECTION_STATUS
    :reader CAN_VIS_OBS_DETECTION_STATUS
    :initarg :CAN_VIS_OBS_DETECTION_STATUS
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_MOTION_TYPE
    :reader CAN_VIS_OBS_MOTION_TYPE
    :initarg :CAN_VIS_OBS_MOTION_TYPE
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_CROSSING_STATUS
    :reader CAN_VIS_OBS_CROSSING_STATUS
    :initarg :CAN_VIS_OBS_CROSSING_STATUS
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_ID
    :reader CAN_VIS_OBS_ID
    :initarg :CAN_VIS_OBS_ID
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_LOW_CONFIDENCE
    :reader CAN_VIS_OBS_LOW_CONFIDENCE
    :initarg :CAN_VIS_OBS_LOW_CONFIDENCE
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_LANE_NUMBER
    :reader CAN_VIS_OBS_LANE_NUMBER
    :initarg :CAN_VIS_OBS_LANE_NUMBER
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_TURN_INDICATOR
    :reader CAN_VIS_OBS_TURN_INDICATOR
    :initarg :CAN_VIS_OBS_TURN_INDICATOR
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR
    :reader CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR
    :initarg :CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF
    :reader CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF
    :initarg :CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_OBJECT_IN_PATH
    :reader CAN_VIS_OBS_OBJECT_IN_PATH
    :initarg :CAN_VIS_OBS_OBJECT_IN_PATH
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_HIGH_DECELERATION
    :reader CAN_VIS_OBS_HIGH_DECELERATION
    :initarg :CAN_VIS_OBS_HIGH_DECELERATION
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_FCW_STATUS
    :reader CAN_VIS_OBS_FCW_STATUS
    :initarg :CAN_VIS_OBS_FCW_STATUS
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_TTC_WITHOUT_ACC
    :reader CAN_VIS_OBS_TTC_WITHOUT_ACC
    :initarg :CAN_VIS_OBS_TTC_WITHOUT_ACC
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_ME_AWS
    :reader CAN_VIS_OBS_ME_AWS
    :initarg :CAN_VIS_OBS_ME_AWS
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_CIPO
    :reader CAN_VIS_OBS_CIPO
    :initarg :CAN_VIS_OBS_CIPO
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_TTC_WITH_ACC
    :reader CAN_VIS_OBS_TTC_WITH_ACC
    :initarg :CAN_VIS_OBS_TTC_WITH_ACC
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_TTC_WITH_ACC_CONF
    :reader CAN_VIS_OBS_TTC_WITH_ACC_CONF
    :initarg :CAN_VIS_OBS_TTC_WITH_ACC_CONF
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_CLASSIFICATION
    :reader CAN_VIS_OBS_CLASSIFICATION
    :initarg :CAN_VIS_OBS_CLASSIFICATION
    :type cl:fixnum
    :initform 0)
   (CAN_RADAR_TARGET_MATCH_COASTED
    :reader CAN_RADAR_TARGET_MATCH_COASTED
    :initarg :CAN_RADAR_TARGET_MATCH_COASTED
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_VISION_RANGE
    :reader CAN_VIS_OBS_VISION_RANGE
    :initarg :CAN_VIS_OBS_VISION_RANGE
    :type cl:float
    :initform 0.0)
   (CAN_RADAR_TARGET_MATCH_INDEX_1
    :reader CAN_RADAR_TARGET_MATCH_INDEX_1
    :initarg :CAN_RADAR_TARGET_MATCH_INDEX_1
    :type cl:fixnum
    :initform 0)
   (CAN_RADAR_TARGET_MATCH_INDEX_2
    :reader CAN_RADAR_TARGET_MATCH_INDEX_2
    :initarg :CAN_RADAR_TARGET_MATCH_INDEX_2
    :type cl:fixnum
    :initform 0)
   (CAN_RADAR_TARGET_MATCH_INDEX_3
    :reader CAN_RADAR_TARGET_MATCH_INDEX_3
    :initarg :CAN_RADAR_TARGET_MATCH_INDEX_3
    :type cl:fixnum
    :initform 0)
   (CAN_RADAR_TARGET_MATCH_INDEX_4
    :reader CAN_RADAR_TARGET_MATCH_INDEX_4
    :initarg :CAN_RADAR_TARGET_MATCH_INDEX_4
    :type cl:fixnum
    :initform 0)
   (CAN_RADAR_TGT_MATCH_CONFIDENCE_1
    :reader CAN_RADAR_TGT_MATCH_CONFIDENCE_1
    :initarg :CAN_RADAR_TGT_MATCH_CONFIDENCE_1
    :type cl:fixnum
    :initform 0)
   (CAN_RADAR_TGT_MATCH_CONFIDENCE_2
    :reader CAN_RADAR_TGT_MATCH_CONFIDENCE_2
    :initarg :CAN_RADAR_TGT_MATCH_CONFIDENCE_2
    :type cl:fixnum
    :initform 0)
   (CAN_RADAR_TGT_MATCH_CONFIDENCE_3
    :reader CAN_RADAR_TGT_MATCH_CONFIDENCE_3
    :initarg :CAN_RADAR_TGT_MATCH_CONFIDENCE_3
    :type cl:fixnum
    :initform 0)
   (CAN_RADAR_TGT_MATCH_CONFIDENCE_4
    :reader CAN_RADAR_TGT_MATCH_CONFIDENCE_4
    :initarg :CAN_RADAR_TGT_MATCH_CONFIDENCE_4
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_WIDTH
    :reader CAN_VIS_OBS_WIDTH
    :initarg :CAN_VIS_OBS_WIDTH
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_VISION_ANGLE_RATE
    :reader CAN_VIS_OBS_VISION_ANGLE_RATE
    :initarg :CAN_VIS_OBS_VISION_ANGLE_RATE
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_VISION_ANGLE_CENTROID
    :reader CAN_VIS_OBS_VISION_ANGLE_CENTROID
    :initarg :CAN_VIS_OBS_VISION_ANGLE_CENTROID
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_VISION_RANGE_RATE
    :reader CAN_VIS_OBS_VISION_RANGE_RATE
    :initarg :CAN_VIS_OBS_VISION_RANGE_RATE
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_VISION_LATERAL_RATE
    :reader CAN_VIS_OBS_VISION_LATERAL_RATE
    :initarg :CAN_VIS_OBS_VISION_LATERAL_RATE
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_VISION_WIDTH
    :reader CAN_VIS_OBS_VISION_WIDTH
    :initarg :CAN_VIS_OBS_VISION_WIDTH
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST
    :reader CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST
    :initarg :CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST
    :reader CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST
    :initarg :CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_RANGE_FUNC_ACT_EST
    :reader CAN_VIS_OBS_RANGE_FUNC_ACT_EST
    :initarg :CAN_VIS_OBS_RANGE_FUNC_ACT_EST
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_FCW_CALC_STATUS
    :reader CAN_VIS_OBS_FCW_CALC_STATUS
    :initarg :CAN_VIS_OBS_FCW_CALC_STATUS
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_OBS_PREDICTED_TTC
    :reader CAN_VIS_OBS_PREDICTED_TTC
    :initarg :CAN_VIS_OBS_PREDICTED_TTC
    :type cl:float
    :initform 0.0)
   (CAN_VIS_OBS_PREDICTED_LAT_POS
    :reader CAN_VIS_OBS_PREDICTED_LAT_POS
    :initarg :CAN_VIS_OBS_PREDICTED_LAT_POS
    :type cl:float
    :initform 0.0)
   (CAN_OBJECT_HIGH_DECEL_FLAG
    :reader CAN_OBJECT_HIGH_DECEL_FLAG
    :initarg :CAN_OBJECT_HIGH_DECEL_FLAG
    :type cl:fixnum
    :initform 0)
   (CAN_VIS_HALF_BODY_DETECTION_FLAG
    :reader CAN_VIS_HALF_BODY_DETECTION_FLAG
    :initarg :CAN_VIS_HALF_BODY_DETECTION_FLAG
    :type cl:fixnum
    :initform 0))
)

(cl:defclass VisObs (<VisObs>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VisObs>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VisObs)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autonavigation-msg:<VisObs> is deprecated: use autonavigation-msg:VisObs instead.")))

(cl:ensure-generic-function 'CAN_VIS_OBS_COUNT-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_COUNT-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_COUNT-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_COUNT instead.")
  (CAN_VIS_OBS_COUNT m))

(cl:ensure-generic-function 'CAN_VIS_OBS_ANGLE_RATE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_ANGLE_RATE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_ANGLE_RATE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_ANGLE_RATE instead.")
  (CAN_VIS_OBS_ANGLE_RATE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_ANGLE_CENTROID-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_ANGLE_CENTROID-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_ANGLE_CENTROID-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_ANGLE_CENTROID instead.")
  (CAN_VIS_OBS_ANGLE_CENTROID m))

(cl:ensure-generic-function 'CAN_VIS_OBS_RANGE_RATE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_RANGE_RATE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_RANGE_RATE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_RANGE_RATE instead.")
  (CAN_VIS_OBS_RANGE_RATE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_RANGE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_RANGE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_RANGE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_RANGE instead.")
  (CAN_VIS_OBS_RANGE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_LATERAL_RATE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_LATERAL_RATE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_LATERAL_RATE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_LATERAL_RATE instead.")
  (CAN_VIS_OBS_LATERAL_RATE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_MANEUVER_STATE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_MANEUVER_STATE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_MANEUVER_STATE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_MANEUVER_STATE instead.")
  (CAN_VIS_OBS_MANEUVER_STATE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_DETECTION_STATUS-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_DETECTION_STATUS-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_DETECTION_STATUS-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_DETECTION_STATUS instead.")
  (CAN_VIS_OBS_DETECTION_STATUS m))

(cl:ensure-generic-function 'CAN_VIS_OBS_MOTION_TYPE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_MOTION_TYPE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_MOTION_TYPE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_MOTION_TYPE instead.")
  (CAN_VIS_OBS_MOTION_TYPE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_CROSSING_STATUS-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_CROSSING_STATUS-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_CROSSING_STATUS-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_CROSSING_STATUS instead.")
  (CAN_VIS_OBS_CROSSING_STATUS m))

(cl:ensure-generic-function 'CAN_VIS_OBS_ID-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_ID-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_ID-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_ID instead.")
  (CAN_VIS_OBS_ID m))

(cl:ensure-generic-function 'CAN_VIS_OBS_LOW_CONFIDENCE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_LOW_CONFIDENCE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_LOW_CONFIDENCE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_LOW_CONFIDENCE instead.")
  (CAN_VIS_OBS_LOW_CONFIDENCE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_LANE_NUMBER-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_LANE_NUMBER-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_LANE_NUMBER-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_LANE_NUMBER instead.")
  (CAN_VIS_OBS_LANE_NUMBER m))

(cl:ensure-generic-function 'CAN_VIS_OBS_TURN_INDICATOR-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_TURN_INDICATOR-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_TURN_INDICATOR-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_TURN_INDICATOR instead.")
  (CAN_VIS_OBS_TURN_INDICATOR m))

(cl:ensure-generic-function 'CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR instead.")
  (CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR m))

(cl:ensure-generic-function 'CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF instead.")
  (CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF m))

(cl:ensure-generic-function 'CAN_VIS_OBS_OBJECT_IN_PATH-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_OBJECT_IN_PATH-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_OBJECT_IN_PATH-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_OBJECT_IN_PATH instead.")
  (CAN_VIS_OBS_OBJECT_IN_PATH m))

(cl:ensure-generic-function 'CAN_VIS_OBS_HIGH_DECELERATION-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_HIGH_DECELERATION-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_HIGH_DECELERATION-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_HIGH_DECELERATION instead.")
  (CAN_VIS_OBS_HIGH_DECELERATION m))

(cl:ensure-generic-function 'CAN_VIS_OBS_FCW_STATUS-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_FCW_STATUS-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_FCW_STATUS-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_FCW_STATUS instead.")
  (CAN_VIS_OBS_FCW_STATUS m))

(cl:ensure-generic-function 'CAN_VIS_OBS_TTC_WITHOUT_ACC-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_TTC_WITHOUT_ACC-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_TTC_WITHOUT_ACC-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_TTC_WITHOUT_ACC instead.")
  (CAN_VIS_OBS_TTC_WITHOUT_ACC m))

(cl:ensure-generic-function 'CAN_VIS_OBS_ME_AWS-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_ME_AWS-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_ME_AWS-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_ME_AWS instead.")
  (CAN_VIS_OBS_ME_AWS m))

(cl:ensure-generic-function 'CAN_VIS_OBS_CIPO-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_CIPO-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_CIPO-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_CIPO instead.")
  (CAN_VIS_OBS_CIPO m))

(cl:ensure-generic-function 'CAN_VIS_OBS_TTC_WITH_ACC-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_TTC_WITH_ACC-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_TTC_WITH_ACC-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_TTC_WITH_ACC instead.")
  (CAN_VIS_OBS_TTC_WITH_ACC m))

(cl:ensure-generic-function 'CAN_VIS_OBS_TTC_WITH_ACC_CONF-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_TTC_WITH_ACC_CONF-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_TTC_WITH_ACC_CONF-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_TTC_WITH_ACC_CONF instead.")
  (CAN_VIS_OBS_TTC_WITH_ACC_CONF m))

(cl:ensure-generic-function 'CAN_VIS_OBS_CLASSIFICATION-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_CLASSIFICATION-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_CLASSIFICATION-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_CLASSIFICATION instead.")
  (CAN_VIS_OBS_CLASSIFICATION m))

(cl:ensure-generic-function 'CAN_RADAR_TARGET_MATCH_COASTED-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TARGET_MATCH_COASTED-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TARGET_MATCH_COASTED-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TARGET_MATCH_COASTED instead.")
  (CAN_RADAR_TARGET_MATCH_COASTED m))

(cl:ensure-generic-function 'CAN_VIS_OBS_VISION_RANGE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_VISION_RANGE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_VISION_RANGE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_VISION_RANGE instead.")
  (CAN_VIS_OBS_VISION_RANGE m))

(cl:ensure-generic-function 'CAN_RADAR_TARGET_MATCH_INDEX_1-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TARGET_MATCH_INDEX_1-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TARGET_MATCH_INDEX_1-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TARGET_MATCH_INDEX_1 instead.")
  (CAN_RADAR_TARGET_MATCH_INDEX_1 m))

(cl:ensure-generic-function 'CAN_RADAR_TARGET_MATCH_INDEX_2-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TARGET_MATCH_INDEX_2-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TARGET_MATCH_INDEX_2-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TARGET_MATCH_INDEX_2 instead.")
  (CAN_RADAR_TARGET_MATCH_INDEX_2 m))

(cl:ensure-generic-function 'CAN_RADAR_TARGET_MATCH_INDEX_3-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TARGET_MATCH_INDEX_3-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TARGET_MATCH_INDEX_3-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TARGET_MATCH_INDEX_3 instead.")
  (CAN_RADAR_TARGET_MATCH_INDEX_3 m))

(cl:ensure-generic-function 'CAN_RADAR_TARGET_MATCH_INDEX_4-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TARGET_MATCH_INDEX_4-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TARGET_MATCH_INDEX_4-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TARGET_MATCH_INDEX_4 instead.")
  (CAN_RADAR_TARGET_MATCH_INDEX_4 m))

(cl:ensure-generic-function 'CAN_RADAR_TGT_MATCH_CONFIDENCE_1-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TGT_MATCH_CONFIDENCE_1-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TGT_MATCH_CONFIDENCE_1-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TGT_MATCH_CONFIDENCE_1 instead.")
  (CAN_RADAR_TGT_MATCH_CONFIDENCE_1 m))

(cl:ensure-generic-function 'CAN_RADAR_TGT_MATCH_CONFIDENCE_2-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TGT_MATCH_CONFIDENCE_2-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TGT_MATCH_CONFIDENCE_2-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TGT_MATCH_CONFIDENCE_2 instead.")
  (CAN_RADAR_TGT_MATCH_CONFIDENCE_2 m))

(cl:ensure-generic-function 'CAN_RADAR_TGT_MATCH_CONFIDENCE_3-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TGT_MATCH_CONFIDENCE_3-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TGT_MATCH_CONFIDENCE_3-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TGT_MATCH_CONFIDENCE_3 instead.")
  (CAN_RADAR_TGT_MATCH_CONFIDENCE_3 m))

(cl:ensure-generic-function 'CAN_RADAR_TGT_MATCH_CONFIDENCE_4-val :lambda-list '(m))
(cl:defmethod CAN_RADAR_TGT_MATCH_CONFIDENCE_4-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_RADAR_TGT_MATCH_CONFIDENCE_4-val is deprecated.  Use autonavigation-msg:CAN_RADAR_TGT_MATCH_CONFIDENCE_4 instead.")
  (CAN_RADAR_TGT_MATCH_CONFIDENCE_4 m))

(cl:ensure-generic-function 'CAN_VIS_OBS_WIDTH-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_WIDTH-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_WIDTH-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_WIDTH instead.")
  (CAN_VIS_OBS_WIDTH m))

(cl:ensure-generic-function 'CAN_VIS_OBS_VISION_ANGLE_RATE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_VISION_ANGLE_RATE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_VISION_ANGLE_RATE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_VISION_ANGLE_RATE instead.")
  (CAN_VIS_OBS_VISION_ANGLE_RATE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_VISION_ANGLE_CENTROID-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_VISION_ANGLE_CENTROID-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_VISION_ANGLE_CENTROID-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_VISION_ANGLE_CENTROID instead.")
  (CAN_VIS_OBS_VISION_ANGLE_CENTROID m))

(cl:ensure-generic-function 'CAN_VIS_OBS_VISION_RANGE_RATE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_VISION_RANGE_RATE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_VISION_RANGE_RATE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_VISION_RANGE_RATE instead.")
  (CAN_VIS_OBS_VISION_RANGE_RATE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_VISION_LATERAL_RATE-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_VISION_LATERAL_RATE-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_VISION_LATERAL_RATE-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_VISION_LATERAL_RATE instead.")
  (CAN_VIS_OBS_VISION_LATERAL_RATE m))

(cl:ensure-generic-function 'CAN_VIS_OBS_VISION_WIDTH-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_VISION_WIDTH-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_VISION_WIDTH-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_VISION_WIDTH instead.")
  (CAN_VIS_OBS_VISION_WIDTH m))

(cl:ensure-generic-function 'CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST instead.")
  (CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST m))

(cl:ensure-generic-function 'CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST instead.")
  (CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST m))

(cl:ensure-generic-function 'CAN_VIS_OBS_RANGE_FUNC_ACT_EST-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_RANGE_FUNC_ACT_EST-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_RANGE_FUNC_ACT_EST-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_RANGE_FUNC_ACT_EST instead.")
  (CAN_VIS_OBS_RANGE_FUNC_ACT_EST m))

(cl:ensure-generic-function 'CAN_VIS_OBS_FCW_CALC_STATUS-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_FCW_CALC_STATUS-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_FCW_CALC_STATUS-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_FCW_CALC_STATUS instead.")
  (CAN_VIS_OBS_FCW_CALC_STATUS m))

(cl:ensure-generic-function 'CAN_VIS_OBS_PREDICTED_TTC-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_PREDICTED_TTC-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_PREDICTED_TTC-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_PREDICTED_TTC instead.")
  (CAN_VIS_OBS_PREDICTED_TTC m))

(cl:ensure-generic-function 'CAN_VIS_OBS_PREDICTED_LAT_POS-val :lambda-list '(m))
(cl:defmethod CAN_VIS_OBS_PREDICTED_LAT_POS-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_OBS_PREDICTED_LAT_POS-val is deprecated.  Use autonavigation-msg:CAN_VIS_OBS_PREDICTED_LAT_POS instead.")
  (CAN_VIS_OBS_PREDICTED_LAT_POS m))

(cl:ensure-generic-function 'CAN_OBJECT_HIGH_DECEL_FLAG-val :lambda-list '(m))
(cl:defmethod CAN_OBJECT_HIGH_DECEL_FLAG-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_OBJECT_HIGH_DECEL_FLAG-val is deprecated.  Use autonavigation-msg:CAN_OBJECT_HIGH_DECEL_FLAG instead.")
  (CAN_OBJECT_HIGH_DECEL_FLAG m))

(cl:ensure-generic-function 'CAN_VIS_HALF_BODY_DETECTION_FLAG-val :lambda-list '(m))
(cl:defmethod CAN_VIS_HALF_BODY_DETECTION_FLAG-val ((m <VisObs>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autonavigation-msg:CAN_VIS_HALF_BODY_DETECTION_FLAG-val is deprecated.  Use autonavigation-msg:CAN_VIS_HALF_BODY_DETECTION_FLAG instead.")
  (CAN_VIS_HALF_BODY_DETECTION_FLAG m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VisObs>) ostream)
  "Serializes a message object of type '<VisObs>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_COUNT)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_ANGLE_RATE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_ANGLE_CENTROID))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_RANGE_RATE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_RANGE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_LATERAL_RATE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'CAN_VIS_OBS_MANEUVER_STATE)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_DETECTION_STATUS)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_MOTION_TYPE)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_CROSSING_STATUS)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_ID)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_LOW_CONFIDENCE)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'CAN_VIS_OBS_LANE_NUMBER)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_TURN_INDICATOR)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_OBJECT_IN_PATH)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_HIGH_DECELERATION)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_FCW_STATUS)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_TTC_WITHOUT_ACC))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_ME_AWS)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_CIPO)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_TTC_WITH_ACC))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_TTC_WITH_ACC_CONF))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_CLASSIFICATION)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_COASTED)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_VISION_RANGE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_INDEX_1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_INDEX_2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_INDEX_3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_INDEX_4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TGT_MATCH_CONFIDENCE_1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TGT_MATCH_CONFIDENCE_2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TGT_MATCH_CONFIDENCE_3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TGT_MATCH_CONFIDENCE_4)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_WIDTH))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_VISION_ANGLE_RATE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_VISION_ANGLE_CENTROID))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_VISION_RANGE_RATE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_VISION_LATERAL_RATE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_VISION_WIDTH))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_RANGE_FUNC_ACT_EST))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_FCW_CALC_STATUS)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_PREDICTED_TTC))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CAN_VIS_OBS_PREDICTED_LAT_POS))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_OBJECT_HIGH_DECEL_FLAG)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_HALF_BODY_DETECTION_FLAG)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VisObs>) istream)
  "Deserializes a message object of type '<VisObs>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_COUNT)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_ANGLE_RATE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_ANGLE_CENTROID) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_RANGE_RATE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_RANGE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_LATERAL_RATE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_MANEUVER_STATE) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_DETECTION_STATUS)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_MOTION_TYPE)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_CROSSING_STATUS)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_ID)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_LOW_CONFIDENCE)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_LANE_NUMBER) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_TURN_INDICATOR)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_OBJECT_IN_PATH)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_HIGH_DECELERATION)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_FCW_STATUS)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_TTC_WITHOUT_ACC) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_ME_AWS)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_CIPO)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_TTC_WITH_ACC) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_TTC_WITH_ACC_CONF) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_CLASSIFICATION)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_COASTED)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_VISION_RANGE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_INDEX_1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_INDEX_2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_INDEX_3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TARGET_MATCH_INDEX_4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TGT_MATCH_CONFIDENCE_1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TGT_MATCH_CONFIDENCE_2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TGT_MATCH_CONFIDENCE_3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_RADAR_TGT_MATCH_CONFIDENCE_4)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_WIDTH) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_VISION_ANGLE_RATE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_VISION_ANGLE_CENTROID) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_VISION_RANGE_RATE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_VISION_LATERAL_RATE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_VISION_WIDTH) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_RANGE_FUNC_ACT_EST) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_OBS_FCW_CALC_STATUS)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_PREDICTED_TTC) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CAN_VIS_OBS_PREDICTED_LAT_POS) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_OBJECT_HIGH_DECEL_FLAG)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CAN_VIS_HALF_BODY_DETECTION_FLAG)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VisObs>)))
  "Returns string type for a message object of type '<VisObs>"
  "autonavigation/VisObs")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VisObs)))
  "Returns string type for a message object of type 'VisObs"
  "autonavigation/VisObs")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VisObs>)))
  "Returns md5sum for a message object of type '<VisObs>"
  "e8a43127f0607f3c6725c1cce9ca0c3c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VisObs)))
  "Returns md5sum for a message object of type 'VisObs"
  "e8a43127f0607f3c6725c1cce9ca0c3c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VisObs>)))
  "Returns full string definition for message of type '<VisObs>"
  (cl:format cl:nil "#VISION_OBSTACLE_MSG1~%uint8            CAN_VIS_OBS_COUNT~%float32          CAN_VIS_OBS_ANGLE_RATE~%float32          CAN_VIS_OBS_ANGLE_CENTROID~%float32          CAN_VIS_OBS_RANGE_RATE~%float32          CAN_VIS_OBS_RANGE ~%float32          CAN_VIS_OBS_LATERAL_RATE~%~%#VISION_OBSTACLE_MSG2~%int8             CAN_VIS_OBS_MANEUVER_STATE~%uint8            CAN_VIS_OBS_DETECTION_STATUS~%uint8            CAN_VIS_OBS_MOTION_TYPE~%uint8            CAN_VIS_OBS_CROSSING_STATUS~%uint8            CAN_VIS_OBS_ID~%uint8            CAN_VIS_OBS_LOW_CONFIDENCE~%int8             CAN_VIS_OBS_LANE_NUMBER~%uint8            CAN_VIS_OBS_TURN_INDICATOR~%uint8            CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR~%uint8            CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF~%uint8            CAN_VIS_OBS_OBJECT_IN_PATH~%uint8            CAN_VIS_OBS_HIGH_DECELERATION~%uint8            CAN_VIS_OBS_FCW_STATUS~%float32          CAN_VIS_OBS_TTC_WITHOUT_ACC~%uint8            CAN_VIS_OBS_ME_AWS~%uint8            CAN_VIS_OBS_CIPO~%float32          CAN_VIS_OBS_TTC_WITH_ACC~%float32          CAN_VIS_OBS_TTC_WITH_ACC_CONF~%uint8            CAN_VIS_OBS_CLASSIFICATION~%~%#VISION_OBSTACLE_MSG3~%uint8            CAN_RADAR_TARGET_MATCH_COASTED~%float32          CAN_VIS_OBS_VISION_RANGE~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_1~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_2~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_3~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_4~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_1~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_2~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_3~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_4~%float32          CAN_VIS_OBS_WIDTH~%~%~%#VISION_OBSTACLE_MSG4~%float32          CAN_VIS_OBS_VISION_ANGLE_RATE~%float32          CAN_VIS_OBS_VISION_ANGLE_CENTROID~%float32          CAN_VIS_OBS_VISION_RANGE_RATE~%float32          CAN_VIS_OBS_VISION_LATERAL_RATE~%float32          CAN_VIS_OBS_VISION_WIDTH~%~%#VISION_OBSTACLE_MSG5~%float32          CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST~%float32          CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST~%float32          CAN_VIS_OBS_RANGE_FUNC_ACT_EST~%uint8            CAN_VIS_OBS_FCW_CALC_STATUS~%float32          CAN_VIS_OBS_PREDICTED_TTC~%float32          CAN_VIS_OBS_PREDICTED_LAT_POS~%uint8            CAN_OBJECT_HIGH_DECEL_FLAG~%uint8            CAN_VIS_HALF_BODY_DETECTION_FLAG~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VisObs)))
  "Returns full string definition for message of type 'VisObs"
  (cl:format cl:nil "#VISION_OBSTACLE_MSG1~%uint8            CAN_VIS_OBS_COUNT~%float32          CAN_VIS_OBS_ANGLE_RATE~%float32          CAN_VIS_OBS_ANGLE_CENTROID~%float32          CAN_VIS_OBS_RANGE_RATE~%float32          CAN_VIS_OBS_RANGE ~%float32          CAN_VIS_OBS_LATERAL_RATE~%~%#VISION_OBSTACLE_MSG2~%int8             CAN_VIS_OBS_MANEUVER_STATE~%uint8            CAN_VIS_OBS_DETECTION_STATUS~%uint8            CAN_VIS_OBS_MOTION_TYPE~%uint8            CAN_VIS_OBS_CROSSING_STATUS~%uint8            CAN_VIS_OBS_ID~%uint8            CAN_VIS_OBS_LOW_CONFIDENCE~%int8             CAN_VIS_OBS_LANE_NUMBER~%uint8            CAN_VIS_OBS_TURN_INDICATOR~%uint8            CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR~%uint8            CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF~%uint8            CAN_VIS_OBS_OBJECT_IN_PATH~%uint8            CAN_VIS_OBS_HIGH_DECELERATION~%uint8            CAN_VIS_OBS_FCW_STATUS~%float32          CAN_VIS_OBS_TTC_WITHOUT_ACC~%uint8            CAN_VIS_OBS_ME_AWS~%uint8            CAN_VIS_OBS_CIPO~%float32          CAN_VIS_OBS_TTC_WITH_ACC~%float32          CAN_VIS_OBS_TTC_WITH_ACC_CONF~%uint8            CAN_VIS_OBS_CLASSIFICATION~%~%#VISION_OBSTACLE_MSG3~%uint8            CAN_RADAR_TARGET_MATCH_COASTED~%float32          CAN_VIS_OBS_VISION_RANGE~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_1~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_2~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_3~%uint8            CAN_RADAR_TARGET_MATCH_INDEX_4~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_1~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_2~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_3~%uint8            CAN_RADAR_TGT_MATCH_CONFIDENCE_4~%float32          CAN_VIS_OBS_WIDTH~%~%~%#VISION_OBSTACLE_MSG4~%float32          CAN_VIS_OBS_VISION_ANGLE_RATE~%float32          CAN_VIS_OBS_VISION_ANGLE_CENTROID~%float32          CAN_VIS_OBS_VISION_RANGE_RATE~%float32          CAN_VIS_OBS_VISION_LATERAL_RATE~%float32          CAN_VIS_OBS_VISION_WIDTH~%~%#VISION_OBSTACLE_MSG5~%float32          CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST~%float32          CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST~%float32          CAN_VIS_OBS_RANGE_FUNC_ACT_EST~%uint8            CAN_VIS_OBS_FCW_CALC_STATUS~%float32          CAN_VIS_OBS_PREDICTED_TTC~%float32          CAN_VIS_OBS_PREDICTED_LAT_POS~%uint8            CAN_OBJECT_HIGH_DECEL_FLAG~%uint8            CAN_VIS_HALF_BODY_DETECTION_FLAG~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VisObs>))
  (cl:+ 0
     1
     4
     4
     4
     4
     4
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
     4
     1
     1
     4
     4
     1
     1
     4
     1
     1
     1
     1
     1
     1
     1
     1
     4
     4
     4
     4
     4
     4
     4
     4
     4
     1
     4
     4
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VisObs>))
  "Converts a ROS message object to a list"
  (cl:list 'VisObs
    (cl:cons ':CAN_VIS_OBS_COUNT (CAN_VIS_OBS_COUNT msg))
    (cl:cons ':CAN_VIS_OBS_ANGLE_RATE (CAN_VIS_OBS_ANGLE_RATE msg))
    (cl:cons ':CAN_VIS_OBS_ANGLE_CENTROID (CAN_VIS_OBS_ANGLE_CENTROID msg))
    (cl:cons ':CAN_VIS_OBS_RANGE_RATE (CAN_VIS_OBS_RANGE_RATE msg))
    (cl:cons ':CAN_VIS_OBS_RANGE (CAN_VIS_OBS_RANGE msg))
    (cl:cons ':CAN_VIS_OBS_LATERAL_RATE (CAN_VIS_OBS_LATERAL_RATE msg))
    (cl:cons ':CAN_VIS_OBS_MANEUVER_STATE (CAN_VIS_OBS_MANEUVER_STATE msg))
    (cl:cons ':CAN_VIS_OBS_DETECTION_STATUS (CAN_VIS_OBS_DETECTION_STATUS msg))
    (cl:cons ':CAN_VIS_OBS_MOTION_TYPE (CAN_VIS_OBS_MOTION_TYPE msg))
    (cl:cons ':CAN_VIS_OBS_CROSSING_STATUS (CAN_VIS_OBS_CROSSING_STATUS msg))
    (cl:cons ':CAN_VIS_OBS_ID (CAN_VIS_OBS_ID msg))
    (cl:cons ':CAN_VIS_OBS_LOW_CONFIDENCE (CAN_VIS_OBS_LOW_CONFIDENCE msg))
    (cl:cons ':CAN_VIS_OBS_LANE_NUMBER (CAN_VIS_OBS_LANE_NUMBER msg))
    (cl:cons ':CAN_VIS_OBS_TURN_INDICATOR (CAN_VIS_OBS_TURN_INDICATOR msg))
    (cl:cons ':CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR (CAN_VIS_OBS_BRAKE_LIGHT_INDICATOR msg))
    (cl:cons ':CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF (CAN_VIS_OBS_TTC_WITHOUT_ACC_CONF msg))
    (cl:cons ':CAN_VIS_OBS_OBJECT_IN_PATH (CAN_VIS_OBS_OBJECT_IN_PATH msg))
    (cl:cons ':CAN_VIS_OBS_HIGH_DECELERATION (CAN_VIS_OBS_HIGH_DECELERATION msg))
    (cl:cons ':CAN_VIS_OBS_FCW_STATUS (CAN_VIS_OBS_FCW_STATUS msg))
    (cl:cons ':CAN_VIS_OBS_TTC_WITHOUT_ACC (CAN_VIS_OBS_TTC_WITHOUT_ACC msg))
    (cl:cons ':CAN_VIS_OBS_ME_AWS (CAN_VIS_OBS_ME_AWS msg))
    (cl:cons ':CAN_VIS_OBS_CIPO (CAN_VIS_OBS_CIPO msg))
    (cl:cons ':CAN_VIS_OBS_TTC_WITH_ACC (CAN_VIS_OBS_TTC_WITH_ACC msg))
    (cl:cons ':CAN_VIS_OBS_TTC_WITH_ACC_CONF (CAN_VIS_OBS_TTC_WITH_ACC_CONF msg))
    (cl:cons ':CAN_VIS_OBS_CLASSIFICATION (CAN_VIS_OBS_CLASSIFICATION msg))
    (cl:cons ':CAN_RADAR_TARGET_MATCH_COASTED (CAN_RADAR_TARGET_MATCH_COASTED msg))
    (cl:cons ':CAN_VIS_OBS_VISION_RANGE (CAN_VIS_OBS_VISION_RANGE msg))
    (cl:cons ':CAN_RADAR_TARGET_MATCH_INDEX_1 (CAN_RADAR_TARGET_MATCH_INDEX_1 msg))
    (cl:cons ':CAN_RADAR_TARGET_MATCH_INDEX_2 (CAN_RADAR_TARGET_MATCH_INDEX_2 msg))
    (cl:cons ':CAN_RADAR_TARGET_MATCH_INDEX_3 (CAN_RADAR_TARGET_MATCH_INDEX_3 msg))
    (cl:cons ':CAN_RADAR_TARGET_MATCH_INDEX_4 (CAN_RADAR_TARGET_MATCH_INDEX_4 msg))
    (cl:cons ':CAN_RADAR_TGT_MATCH_CONFIDENCE_1 (CAN_RADAR_TGT_MATCH_CONFIDENCE_1 msg))
    (cl:cons ':CAN_RADAR_TGT_MATCH_CONFIDENCE_2 (CAN_RADAR_TGT_MATCH_CONFIDENCE_2 msg))
    (cl:cons ':CAN_RADAR_TGT_MATCH_CONFIDENCE_3 (CAN_RADAR_TGT_MATCH_CONFIDENCE_3 msg))
    (cl:cons ':CAN_RADAR_TGT_MATCH_CONFIDENCE_4 (CAN_RADAR_TGT_MATCH_CONFIDENCE_4 msg))
    (cl:cons ':CAN_VIS_OBS_WIDTH (CAN_VIS_OBS_WIDTH msg))
    (cl:cons ':CAN_VIS_OBS_VISION_ANGLE_RATE (CAN_VIS_OBS_VISION_ANGLE_RATE msg))
    (cl:cons ':CAN_VIS_OBS_VISION_ANGLE_CENTROID (CAN_VIS_OBS_VISION_ANGLE_CENTROID msg))
    (cl:cons ':CAN_VIS_OBS_VISION_RANGE_RATE (CAN_VIS_OBS_VISION_RANGE_RATE msg))
    (cl:cons ':CAN_VIS_OBS_VISION_LATERAL_RATE (CAN_VIS_OBS_VISION_LATERAL_RATE msg))
    (cl:cons ':CAN_VIS_OBS_VISION_WIDTH (CAN_VIS_OBS_VISION_WIDTH msg))
    (cl:cons ':CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST (CAN_VIS_OBS_TTC_WO_ACC_FUNC_ACT_EST msg))
    (cl:cons ':CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST (CAN_VIS_OBS_TTC_W_ACC_FUNC_ACT_EST msg))
    (cl:cons ':CAN_VIS_OBS_RANGE_FUNC_ACT_EST (CAN_VIS_OBS_RANGE_FUNC_ACT_EST msg))
    (cl:cons ':CAN_VIS_OBS_FCW_CALC_STATUS (CAN_VIS_OBS_FCW_CALC_STATUS msg))
    (cl:cons ':CAN_VIS_OBS_PREDICTED_TTC (CAN_VIS_OBS_PREDICTED_TTC msg))
    (cl:cons ':CAN_VIS_OBS_PREDICTED_LAT_POS (CAN_VIS_OBS_PREDICTED_LAT_POS msg))
    (cl:cons ':CAN_OBJECT_HIGH_DECEL_FLAG (CAN_OBJECT_HIGH_DECEL_FLAG msg))
    (cl:cons ':CAN_VIS_HALF_BODY_DETECTION_FLAG (CAN_VIS_HALF_BODY_DETECTION_FLAG msg))
))
