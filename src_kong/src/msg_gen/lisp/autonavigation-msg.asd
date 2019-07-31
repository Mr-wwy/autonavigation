
(cl:in-package :asdf)

(defsystem "autonavigation-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Logitech" :depends-on ("_package_Logitech"))
    (:file "_package_Logitech" :depends-on ("_package"))
    (:file "GpsTime" :depends-on ("_package_GpsTime"))
    (:file "_package_GpsTime" :depends-on ("_package"))
    (:file "ProcessLog" :depends-on ("_package_ProcessLog"))
    (:file "_package_ProcessLog" :depends-on ("_package"))
    (:file "TrafficMark" :depends-on ("_package_TrafficMark"))
    (:file "_package_TrafficMark" :depends-on ("_package"))
    (:file "GlobalPoint" :depends-on ("_package_GlobalPoint"))
    (:file "_package_GlobalPoint" :depends-on ("_package"))
    (:file "FarStaticObj" :depends-on ("_package_FarStaticObj"))
    (:file "_package_FarStaticObj" :depends-on ("_package"))
    (:file "WayPoint" :depends-on ("_package_WayPoint"))
    (:file "_package_WayPoint" :depends-on ("_package"))
    (:file "Ping" :depends-on ("_package_Ping"))
    (:file "_package_Ping" :depends-on ("_package"))
    (:file "Image" :depends-on ("_package_Image"))
    (:file "_package_Image" :depends-on ("_package"))
    (:file "VehicleObj" :depends-on ("_package_VehicleObj"))
    (:file "_package_VehicleObj" :depends-on ("_package"))
    (:file "VehicleInfo" :depends-on ("_package_VehicleInfo"))
    (:file "_package_VehicleInfo" :depends-on ("_package"))
    (:file "PathProperty" :depends-on ("_package_PathProperty"))
    (:file "_package_PathProperty" :depends-on ("_package"))
    (:file "TrackerCMD" :depends-on ("_package_TrackerCMD"))
    (:file "_package_TrackerCMD" :depends-on ("_package"))
    (:file "IFVData" :depends-on ("_package_IFVData"))
    (:file "_package_IFVData" :depends-on ("_package"))
    (:file "RemoteCmd" :depends-on ("_package_RemoteCmd"))
    (:file "_package_RemoteCmd" :depends-on ("_package"))
    (:file "TrafficSign" :depends-on ("_package_TrafficSign"))
    (:file "_package_TrafficSign" :depends-on ("_package"))
    (:file "SetT0" :depends-on ("_package_SetT0"))
    (:file "_package_SetT0" :depends-on ("_package"))
    (:file "PedestrianInfo" :depends-on ("_package_PedestrianInfo"))
    (:file "_package_PedestrianInfo" :depends-on ("_package"))
    (:file "EntityMap" :depends-on ("_package_EntityMap"))
    (:file "_package_EntityMap" :depends-on ("_package"))
    (:file "LaneInfo" :depends-on ("_package_LaneInfo"))
    (:file "_package_LaneInfo" :depends-on ("_package"))
    (:file "PedestrianObj" :depends-on ("_package_PedestrianObj"))
    (:file "_package_PedestrianObj" :depends-on ("_package"))
    (:file "EntityKeyPoint" :depends-on ("_package_EntityKeyPoint"))
    (:file "_package_EntityKeyPoint" :depends-on ("_package"))
    (:file "GpsPosition" :depends-on ("_package_GpsPosition"))
    (:file "_package_GpsPosition" :depends-on ("_package"))
    (:file "PositiveObstacle" :depends-on ("_package_PositiveObstacle"))
    (:file "_package_PositiveObstacle" :depends-on ("_package"))
    (:file "VideoImage" :depends-on ("_package_VideoImage"))
    (:file "_package_VideoImage" :depends-on ("_package"))
    (:file "LocalPath" :depends-on ("_package_LocalPath"))
    (:file "_package_LocalPath" :depends-on ("_package"))
    (:file "MissionManage" :depends-on ("_package_MissionManage"))
    (:file "_package_MissionManage" :depends-on ("_package"))
    (:file "LocalAttributeMap" :depends-on ("_package_LocalAttributeMap"))
    (:file "_package_LocalAttributeMap" :depends-on ("_package"))
    (:file "UltrasonicData" :depends-on ("_package_UltrasonicData"))
    (:file "_package_UltrasonicData" :depends-on ("_package"))
    (:file "RadarObject" :depends-on ("_package_RadarObject"))
    (:file "_package_RadarObject" :depends-on ("_package"))
    (:file "VelodynePoint" :depends-on ("_package_VelodynePoint"))
    (:file "_package_VelodynePoint" :depends-on ("_package"))
    (:file "ControlCommand" :depends-on ("_package_ControlCommand"))
    (:file "_package_ControlCommand" :depends-on ("_package"))
    (:file "TrafficLight" :depends-on ("_package_TrafficLight"))
    (:file "_package_TrafficLight" :depends-on ("_package"))
    (:file "LadarPoint" :depends-on ("_package_LadarPoint"))
    (:file "_package_LadarPoint" :depends-on ("_package"))
    (:file "Light" :depends-on ("_package_Light"))
    (:file "_package_Light" :depends-on ("_package"))
    (:file "VehicleServoStates" :depends-on ("_package_VehicleServoStates"))
    (:file "_package_VehicleServoStates" :depends-on ("_package"))
    (:file "RadarRawTarget" :depends-on ("_package_RadarRawTarget"))
    (:file "_package_RadarRawTarget" :depends-on ("_package"))
    (:file "SatelliteVehicleStatus" :depends-on ("_package_SatelliteVehicleStatus"))
    (:file "_package_SatelliteVehicleStatus" :depends-on ("_package"))
    (:file "VisObs" :depends-on ("_package_VisObs"))
    (:file "_package_VisObs" :depends-on ("_package"))
    (:file "LocalPose" :depends-on ("_package_LocalPose"))
    (:file "_package_LocalPose" :depends-on ("_package"))
    (:file "ParkingSpace" :depends-on ("_package_ParkingSpace"))
    (:file "_package_ParkingSpace" :depends-on ("_package"))
    (:file "LadarData" :depends-on ("_package_LadarData"))
    (:file "_package_LadarData" :depends-on ("_package"))
    (:file "Sign" :depends-on ("_package_Sign"))
    (:file "_package_Sign" :depends-on ("_package"))
    (:file "VelodyneScan" :depends-on ("_package_VelodyneScan"))
    (:file "_package_VelodyneScan" :depends-on ("_package"))
    (:file "LaneObj" :depends-on ("_package_LaneObj"))
    (:file "_package_LaneObj" :depends-on ("_package"))
    (:file "GlobalTask" :depends-on ("_package_GlobalTask"))
    (:file "_package_GlobalTask" :depends-on ("_package"))
    (:file "TrackerPath" :depends-on ("_package_TrackerPath"))
    (:file "_package_TrackerPath" :depends-on ("_package"))
    (:file "SatelliteCommand" :depends-on ("_package_SatelliteCommand"))
    (:file "_package_SatelliteCommand" :depends-on ("_package"))
    (:file "SteerServoStatus" :depends-on ("_package_SteerServoStatus"))
    (:file "_package_SteerServoStatus" :depends-on ("_package"))
    (:file "VelodyneCloud" :depends-on ("_package_VelodyneCloud"))
    (:file "_package_VelodyneCloud" :depends-on ("_package"))
    (:file "RecvWayPoints" :depends-on ("_package_RecvWayPoints"))
    (:file "_package_RecvWayPoints" :depends-on ("_package"))
    (:file "VelodynePacket" :depends-on ("_package_VelodynePacket"))
    (:file "_package_VelodynePacket" :depends-on ("_package"))
    (:file "PathBoundary" :depends-on ("_package_PathBoundary"))
    (:file "_package_PathBoundary" :depends-on ("_package"))
    (:file "VehicleStatus" :depends-on ("_package_VehicleStatus"))
    (:file "_package_VehicleStatus" :depends-on ("_package"))
    (:file "ObstaclePoint" :depends-on ("_package_ObstaclePoint"))
    (:file "_package_ObstaclePoint" :depends-on ("_package"))
    (:file "SpeedServoStatus" :depends-on ("_package_SpeedServoStatus"))
    (:file "_package_SpeedServoStatus" :depends-on ("_package"))
    (:file "VelodyneLine" :depends-on ("_package_VelodyneLine"))
    (:file "_package_VelodyneLine" :depends-on ("_package"))
    (:file "LocalCoordinate" :depends-on ("_package_LocalCoordinate"))
    (:file "_package_LocalCoordinate" :depends-on ("_package"))
    (:file "RadarData" :depends-on ("_package_RadarData"))
    (:file "_package_RadarData" :depends-on ("_package"))
    (:file "RoadMarking" :depends-on ("_package_RoadMarking"))
    (:file "_package_RoadMarking" :depends-on ("_package"))
  ))