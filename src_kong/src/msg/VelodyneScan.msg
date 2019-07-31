# Velodyne LIDAR scan packets.

Header           header         # standard ROS message header
LocalPose   localPose
GpsPosition gpsPos

VelodynePacket[] packets        # vector of raw packets

