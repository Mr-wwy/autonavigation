Header      head
LocalPose   localPose
GpsPosition gpsPos

int32        vehicleNum
VehicleObj[] vehicles
int8[]       vehicleLane
int32        pedestrianNum
PedestrianObj[] pedestrians
int8[]       pedestrianLane

int32        laneNum
LaneObj[]    lanes
int32        currentLane

# static obstacles, 50m farther 
int32 farObjectNum
FarStaticObj[] farStaticObjects 

EntityKeyPoint[] keyPoints
int32  keyPointNum

RoadMarking[] parkSpace
int32  parkSpaceNum

int32 roadMarkingNum
RoadMarking[] roadMarkings

int32 signNum      
Sign[] signs

int32 lightNum      
Light[] lights


