#ID num
int32 ID       
# position, cm
int32 centerX
int32 centerY
# cm/s
int32 speed        
# 0.01degree   
int32 speedDirection  
int32 height         
# car, truck, bicycle, big obj, small obj, unknown obj 
int32 vehclass     

geometry_msgs/Polygon vehPolygon      

int32   vertexNumber
int32[] vertexX
int32[] vertexY
