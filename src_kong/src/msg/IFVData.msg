Header      head
LocalPose   localPose
GpsPosition gpsPos


#左车道线
float32     LKA_LANE_OFFSET_LEFT                 #LNTRK_HOST_STATE_MSG_1::CAN_LANE_OFFSET_LEFT
int8        LKA_LANE_DET_CONFIDENCE_LEFT         #LNTRK_HOST_STATE_MSG_1::CAN_LANE_DET_CONFIDENCE_LEFT
uint8       LKA_LANE_BOUNDARY_TYPE_LEFT          #LNTRK_HOST_STATE_MSG_2::CAN_LANE_BOUNDARY_TYPE_LEFT
int8        LKA_LEFT_MODEL_DEGREE                #LNTRK_HOST_STATE_MSG_2::CAN_LKA_LEFT_MODEL_DEGREE
float32     LKA_CURVATURE_LEFT                   #VFP_LKA_LANE_LEFT::CAN_LKA_CURVATURE_LEFT
float64     LKA_CURVATURE_DERIVATIVE_LEFT        #VFP_LKA_LANE_LEFT::CAN_LKA_CURVATURE_DERIVATIVE_LEFT
float32     LKA_HEADING_ANGLE_LEFT               #VFP_LKA_LANE_LEFT::CAN_LKA_HEADING_ANGLE_LEFT
uint8       LKA_YELLOW_LANE_MARKER_LEFT          #VFP_LKA_LANE_LEFT::CAN_LKA_YELLOW_LANE_MARKER_LEFT
float32     LKA_VIEW_RANGE_LEFT                  #VFP_LKA_LANE_LEFT::CAN_LKA_VIEW_RANGE_LEFT
uint8       LKA_VIEW_RANGE_AVAILABILITY_LEFT     #VFP_LKA_LANE_LEFT::CAN_LKA_VIEW_RANGE_AVAILABILITY_LEFT

#右车道线
float32     LKA_LANE_OFFSET_RIGHT                #LNTRK_HOST_STATE_MSG_1::CAN_LANE_OFFSET_RIGHT
int8        LKA_LANE_DET_CONFIDENCE_RIGHT        #LNTRK_HOST_STATE_MSG_1::CAN_LANE_DET_CONFIDENCE_RIGHT
uint8       LKA_LANE_BOUNDARY_TYPE_RIGHT         #LNTRK_HOST_STATE_MSG_2::CAN_LANE_BOUNDARY_TYPE_RIGHT
int8        LKA_RIGHT_MODEL_DEGREE               #LNTRK_HOST_STATE_MSG_2::CAN_LKA_RIGHT_MODEL_DEGREE
float32     LKA_CURVATURE_RIGHT                  #VFP_LKA_LANE_RIGHT::CAN_LKA_CURVATURE_RIGHT
float64     LKA_CURVATURE_DERIVATIVE_RIGHT       #VFP_LKA_LANE_RIGHT::CAN_LKA_CURVATURE_DERIVATIVE_RIGHT
float32     LKA_HEADING_ANGLE_RIGHT              #VFP_LKA_LANE_RIGHT::CAN_LKA_HEADING_ANGLE_RIGHT
uint8       LKA_YELLOW_LANE_MARKER_RIGHT         #VFP_LKA_LANE_RIGHT::CAN_LKA_YELLOW_LANE_MARKER_RIGHT
float32     LKA_VIEW_RANGE_RIGHT                 #VFP_LKA_LANE_RIGHT::CAN_LKA_VIEW_RANGE_RIGHT
uint8       LKA_VIEW_RANGE_AVAILABILITY_RIGHT    #VFP_LKA_LANE_RIGHT::CAN_LKA_VIEW_RANGE_AVAILABILITY_RIGHT

#左车道线2
float32     LKA_LANE_OFFSET_NEXT_LEFT
int8        LKA_LANE_DET_CONFIDENCE_NEXT_LEFT
uint8       LKA_LANE_BOUNDARY_TYPE_NEXT_LEFT
int8        LKA_NEXT_LEFT_MODEL_DEGREE
float32     LKA_CURVATURE_NEXT_LEFT
float64     LKA_CURVATURE_DERIVATIVE_NEXT_LEFT
float32     LKA_HEADING_ANGLE_NEXT_LEFT
uint8       LKA_YELLOW_LANE_MARKER_NEXT_LEFT
float32     LKA_VIEW_RANGE_NEXT_LEFT
uint8       LKA_VIEW_RANGE_AVAILABILITY_NEXT_LEFT

#右车道线2
float32     LKA_LANE_OFFSET_NEXT_RIGHT
int8        LKA_LANE_DET_CONFIDENCE_NEXT_RIGHT
uint8       LKA_LANE_BOUNDARY_TYPE_NEXT_RIGHT
int8        LKA_NEXT_RIGHT_MODEL_DEGREE
float32     LKA_CURVATURE_NEXT_RIGHT
float64     LKA_CURVATURE_DERIVATIVE_NEXT_RIGHT
float32     LKA_HEADING_ANGLE_NEXT_RIGHT
uint8       LKA_YELLOW_LANE_MARKER_NEXT_RIGHT
float32     LKA_VIEW_RANGE_NEXT_RIGHT
uint8       LKA_VIEW_RANGE_AVAILABILITY_NEXT_RIGHT


#物体
uint8       CAN_NO_OF_VIS_OBS_OUTPUT             #VFP_SYS_STATUS_MSG2::CAN_NO_OF_VIS_OBS_OUTPUT
VisObs[]    CAN_VIS_OBS
