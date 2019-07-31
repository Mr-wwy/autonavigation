# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autonavigation/VelodyneCloud.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import autonavigation.msg
import std_msgs.msg

class VelodyneCloud(genpy.Message):
  _md5sum = "2cf27eda1de2cc36bd0e586bd1d64f77"
  _type = "autonavigation/VelodyneCloud"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
Header      head
LocalPose   localPose
GpsPosition gpsPos

uint32           ringNum
VelodyneLine[]   pointCloud

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: autonavigation/LocalPose
#LocalPose msg

float64 time			  
#centimeter  
int32 dr_x
int32 dr_y
int32 dr_z
#0.01degree
int32 dr_heading
int32 dr_roll
int32 dr_pitch		    

#left_front wheel speed,cm/s
int32 lf_speed
#right_front wheel speed,cm/s		    
int32 rf_speed
#left_rear wheel speed,cm/s		    
int32 lr_speed
#right_rear wheel speed,cm/s		    
int32 rr_speed		    

#imu三轴陀螺速度 0.01degree/s
int32 rot_x
int32 rot_y                      
int32 rot_z                      
#imu三轴加速度  0.01m/s^2
int32 acc_x                      
int32 acc_y                      
int32 acc_z                      

int32 batteryState
int32 batteryEnergy           #0-100

#-3000(right)~3000(left) degree  0.01degree/s
int32 steer   
#0(zero)~100(full)                  
int32 brake                 
#0(zero)~100(full)     
int32 fuel      
#PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3                 
int8  trans                      
int8  VehicleState
#DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2
int8  mode                       
#dr运行状态
int8 drStatus
#错误状态		    
int8 errorStatus		    
int8 emergency_flag
int8 hardswitch_on


================================================================================
MSG: autonavigation/GpsPosition
#gps info is updated
char          gps_flag               
uint32        gps_week
#millisecond in a week
float64       gps_millisecond   
#经纬度，单位为度     
float64	      longitude		      
float64	      laltitude
#高斯投影位置,cm
float64	      gaussX		      
float64       gaussY
#height,     cm
float64         height  
#欧拉角，单位为0.01度                
int32         pitch                   
int32         roll
#欧拉角，单位为0.01度,向东为零度，逆时针0-360                    
int32         azimuth                 

#north速度，单位为cm/s
int32         northVelocity           
int32         eastVelocity
int32         upVelocity
#系统运行状态
int32         positionStatus	      

#imu三轴陀螺速度 0.01degree/s
int32	        rot_x                      
int32           rot_y                      
int32           rot_z                      

#imu三轴加速度  0.01m/s^2
int32           acc_x                      
int32           acc_y                      
int32           acc_z                      
	

================================================================================
MSG: autonavigation/VelodyneLine

VelodynePoint[] velodyneline

================================================================================
MSG: autonavigation/VelodynePoint
# velodyne point 

int16  x             #cm
int16  y            
int16  z
uint16  intensity     #0-255
uint16  angleH        #0.01degree
uint16  angleV        #0.01degree
uint8   ring

"""
  __slots__ = ['head','localPose','gpsPos','ringNum','pointCloud']
  _slot_types = ['std_msgs/Header','autonavigation/LocalPose','autonavigation/GpsPosition','uint32','autonavigation/VelodyneLine[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       head,localPose,gpsPos,ringNum,pointCloud

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VelodyneCloud, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.head is None:
        self.head = std_msgs.msg.Header()
      if self.localPose is None:
        self.localPose = autonavigation.msg.LocalPose()
      if self.gpsPos is None:
        self.gpsPos = autonavigation.msg.GpsPosition()
      if self.ringNum is None:
        self.ringNum = 0
      if self.pointCloud is None:
        self.pointCloud = []
    else:
      self.head = std_msgs.msg.Header()
      self.localPose = autonavigation.msg.LocalPose()
      self.gpsPos = autonavigation.msg.GpsPosition()
      self.ringNum = 0
      self.pointCloud = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.head.seq, _x.head.stamp.secs, _x.head.stamp.nsecs))
      _x = self.head.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_d21i7bBI6d13iI.pack(_x.localPose.time, _x.localPose.dr_x, _x.localPose.dr_y, _x.localPose.dr_z, _x.localPose.dr_heading, _x.localPose.dr_roll, _x.localPose.dr_pitch, _x.localPose.lf_speed, _x.localPose.rf_speed, _x.localPose.lr_speed, _x.localPose.rr_speed, _x.localPose.rot_x, _x.localPose.rot_y, _x.localPose.rot_z, _x.localPose.acc_x, _x.localPose.acc_y, _x.localPose.acc_z, _x.localPose.batteryState, _x.localPose.batteryEnergy, _x.localPose.steer, _x.localPose.brake, _x.localPose.fuel, _x.localPose.trans, _x.localPose.VehicleState, _x.localPose.mode, _x.localPose.drStatus, _x.localPose.errorStatus, _x.localPose.emergency_flag, _x.localPose.hardswitch_on, _x.gpsPos.gps_flag, _x.gpsPos.gps_week, _x.gpsPos.gps_millisecond, _x.gpsPos.longitude, _x.gpsPos.laltitude, _x.gpsPos.gaussX, _x.gpsPos.gaussY, _x.gpsPos.height, _x.gpsPos.pitch, _x.gpsPos.roll, _x.gpsPos.azimuth, _x.gpsPos.northVelocity, _x.gpsPos.eastVelocity, _x.gpsPos.upVelocity, _x.gpsPos.positionStatus, _x.gpsPos.rot_x, _x.gpsPos.rot_y, _x.gpsPos.rot_z, _x.gpsPos.acc_x, _x.gpsPos.acc_y, _x.gpsPos.acc_z, _x.ringNum))
      length = len(self.pointCloud)
      buff.write(_struct_I.pack(length))
      for val1 in self.pointCloud:
        length = len(val1.velodyneline)
        buff.write(_struct_I.pack(length))
        for val2 in val1.velodyneline:
          _x = val2
          buff.write(_struct_3h3HB.pack(_x.x, _x.y, _x.z, _x.intensity, _x.angleH, _x.angleV, _x.ring))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.head is None:
        self.head = std_msgs.msg.Header()
      if self.localPose is None:
        self.localPose = autonavigation.msg.LocalPose()
      if self.gpsPos is None:
        self.gpsPos = autonavigation.msg.GpsPosition()
      if self.pointCloud is None:
        self.pointCloud = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.head.seq, _x.head.stamp.secs, _x.head.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.head.frame_id = str[start:end].decode('utf-8')
      else:
        self.head.frame_id = str[start:end]
      _x = self
      start = end
      end += 208
      (_x.localPose.time, _x.localPose.dr_x, _x.localPose.dr_y, _x.localPose.dr_z, _x.localPose.dr_heading, _x.localPose.dr_roll, _x.localPose.dr_pitch, _x.localPose.lf_speed, _x.localPose.rf_speed, _x.localPose.lr_speed, _x.localPose.rr_speed, _x.localPose.rot_x, _x.localPose.rot_y, _x.localPose.rot_z, _x.localPose.acc_x, _x.localPose.acc_y, _x.localPose.acc_z, _x.localPose.batteryState, _x.localPose.batteryEnergy, _x.localPose.steer, _x.localPose.brake, _x.localPose.fuel, _x.localPose.trans, _x.localPose.VehicleState, _x.localPose.mode, _x.localPose.drStatus, _x.localPose.errorStatus, _x.localPose.emergency_flag, _x.localPose.hardswitch_on, _x.gpsPos.gps_flag, _x.gpsPos.gps_week, _x.gpsPos.gps_millisecond, _x.gpsPos.longitude, _x.gpsPos.laltitude, _x.gpsPos.gaussX, _x.gpsPos.gaussY, _x.gpsPos.height, _x.gpsPos.pitch, _x.gpsPos.roll, _x.gpsPos.azimuth, _x.gpsPos.northVelocity, _x.gpsPos.eastVelocity, _x.gpsPos.upVelocity, _x.gpsPos.positionStatus, _x.gpsPos.rot_x, _x.gpsPos.rot_y, _x.gpsPos.rot_z, _x.gpsPos.acc_x, _x.gpsPos.acc_y, _x.gpsPos.acc_z, _x.ringNum,) = _struct_d21i7bBI6d13iI.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.pointCloud = []
      for i in range(0, length):
        val1 = autonavigation.msg.VelodyneLine()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.velodyneline = []
        for i in range(0, length):
          val2 = autonavigation.msg.VelodynePoint()
          _x = val2
          start = end
          end += 13
          (_x.x, _x.y, _x.z, _x.intensity, _x.angleH, _x.angleV, _x.ring,) = _struct_3h3HB.unpack(str[start:end])
          val1.velodyneline.append(val2)
        self.pointCloud.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.head.seq, _x.head.stamp.secs, _x.head.stamp.nsecs))
      _x = self.head.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_d21i7bBI6d13iI.pack(_x.localPose.time, _x.localPose.dr_x, _x.localPose.dr_y, _x.localPose.dr_z, _x.localPose.dr_heading, _x.localPose.dr_roll, _x.localPose.dr_pitch, _x.localPose.lf_speed, _x.localPose.rf_speed, _x.localPose.lr_speed, _x.localPose.rr_speed, _x.localPose.rot_x, _x.localPose.rot_y, _x.localPose.rot_z, _x.localPose.acc_x, _x.localPose.acc_y, _x.localPose.acc_z, _x.localPose.batteryState, _x.localPose.batteryEnergy, _x.localPose.steer, _x.localPose.brake, _x.localPose.fuel, _x.localPose.trans, _x.localPose.VehicleState, _x.localPose.mode, _x.localPose.drStatus, _x.localPose.errorStatus, _x.localPose.emergency_flag, _x.localPose.hardswitch_on, _x.gpsPos.gps_flag, _x.gpsPos.gps_week, _x.gpsPos.gps_millisecond, _x.gpsPos.longitude, _x.gpsPos.laltitude, _x.gpsPos.gaussX, _x.gpsPos.gaussY, _x.gpsPos.height, _x.gpsPos.pitch, _x.gpsPos.roll, _x.gpsPos.azimuth, _x.gpsPos.northVelocity, _x.gpsPos.eastVelocity, _x.gpsPos.upVelocity, _x.gpsPos.positionStatus, _x.gpsPos.rot_x, _x.gpsPos.rot_y, _x.gpsPos.rot_z, _x.gpsPos.acc_x, _x.gpsPos.acc_y, _x.gpsPos.acc_z, _x.ringNum))
      length = len(self.pointCloud)
      buff.write(_struct_I.pack(length))
      for val1 in self.pointCloud:
        length = len(val1.velodyneline)
        buff.write(_struct_I.pack(length))
        for val2 in val1.velodyneline:
          _x = val2
          buff.write(_struct_3h3HB.pack(_x.x, _x.y, _x.z, _x.intensity, _x.angleH, _x.angleV, _x.ring))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.head is None:
        self.head = std_msgs.msg.Header()
      if self.localPose is None:
        self.localPose = autonavigation.msg.LocalPose()
      if self.gpsPos is None:
        self.gpsPos = autonavigation.msg.GpsPosition()
      if self.pointCloud is None:
        self.pointCloud = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.head.seq, _x.head.stamp.secs, _x.head.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.head.frame_id = str[start:end].decode('utf-8')
      else:
        self.head.frame_id = str[start:end]
      _x = self
      start = end
      end += 208
      (_x.localPose.time, _x.localPose.dr_x, _x.localPose.dr_y, _x.localPose.dr_z, _x.localPose.dr_heading, _x.localPose.dr_roll, _x.localPose.dr_pitch, _x.localPose.lf_speed, _x.localPose.rf_speed, _x.localPose.lr_speed, _x.localPose.rr_speed, _x.localPose.rot_x, _x.localPose.rot_y, _x.localPose.rot_z, _x.localPose.acc_x, _x.localPose.acc_y, _x.localPose.acc_z, _x.localPose.batteryState, _x.localPose.batteryEnergy, _x.localPose.steer, _x.localPose.brake, _x.localPose.fuel, _x.localPose.trans, _x.localPose.VehicleState, _x.localPose.mode, _x.localPose.drStatus, _x.localPose.errorStatus, _x.localPose.emergency_flag, _x.localPose.hardswitch_on, _x.gpsPos.gps_flag, _x.gpsPos.gps_week, _x.gpsPos.gps_millisecond, _x.gpsPos.longitude, _x.gpsPos.laltitude, _x.gpsPos.gaussX, _x.gpsPos.gaussY, _x.gpsPos.height, _x.gpsPos.pitch, _x.gpsPos.roll, _x.gpsPos.azimuth, _x.gpsPos.northVelocity, _x.gpsPos.eastVelocity, _x.gpsPos.upVelocity, _x.gpsPos.positionStatus, _x.gpsPos.rot_x, _x.gpsPos.rot_y, _x.gpsPos.rot_z, _x.gpsPos.acc_x, _x.gpsPos.acc_y, _x.gpsPos.acc_z, _x.ringNum,) = _struct_d21i7bBI6d13iI.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.pointCloud = []
      for i in range(0, length):
        val1 = autonavigation.msg.VelodyneLine()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.velodyneline = []
        for i in range(0, length):
          val2 = autonavigation.msg.VelodynePoint()
          _x = val2
          start = end
          end += 13
          (_x.x, _x.y, _x.z, _x.intensity, _x.angleH, _x.angleV, _x.ring,) = _struct_3h3HB.unpack(str[start:end])
          val1.velodyneline.append(val2)
        self.pointCloud.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_d21i7bBI6d13iI = struct.Struct("<d21i7bBI6d13iI")
_struct_3h3HB = struct.Struct("<3h3HB")
