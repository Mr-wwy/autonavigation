int32 ID
int32 laneSeq                # 0,1,-1,2,-2,-3,3, from left to right
int32 laneType               # 0: white real, 1:yellow real, 2: white dotted, 3: yellow dotted, 4: predicted
int32 laneProb               # 0-100, probability
int32 lanePtNum
geometry_msgs/Point[]  lanePoint

