# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autonavigation/VideoImage.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import autonavigation.msg
import std_msgs.msg

class VideoImage(genpy.Message):
  _md5sum = "35f9c475e62c062c5d24b1f849b54e77"
  _type = "autonavigation/VideoImage"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#视频监控相机输出数据

uint32       unique_key               #自主行驶载车唯一标识，用于区分载车的id
uint32       gps_week                 #GPS周，时间零点为1980年1月6日零点，每1024周为一个循环周期
uint64       gps_millisecond          #取GPS周的毫秒级时间，用于自主载车判断是否更新了的数据
uint8        video_id                 #用于判断是哪一路监控视频
Image        image                    #图像数据

================================================================================
MSG: autonavigation/Image
# This message contains an uncompressed image
# (0, 0) is at top-left corner of image
#

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of cameara
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image
                     # If the frame_id here and the frame_id of the CameraInfo
                     # message associated with the image conflict
                     # the behavior is undefined

LocalPose   localPose
GpsPosition gpsPos

uint32 height         # image height, that is, number of rows
uint32 width          # image width, that is, number of columns

# The legal values for encoding are in file src/image_encodings.cpp
# If you want to standardize a new string format, join
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.

string encoding       # Encoding of pixels -- channel meaning, ordering, size
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h

uint8 is_bigendian    # is this data bigendian?
uint32 step           # Full row length in bytes
uint8[] data          # actual matrix data, size is (step * rows)

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
	
"""
  __slots__ = ['unique_key','gps_week','gps_millisecond','video_id','image']
  _slot_types = ['uint32','uint32','uint64','uint8','autonavigation/Image']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       unique_key,gps_week,gps_millisecond,video_id,image

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VideoImage, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.unique_key is None:
        self.unique_key = 0
      if self.gps_week is None:
        self.gps_week = 0
      if self.gps_millisecond is None:
        self.gps_millisecond = 0
      if self.video_id is None:
        self.video_id = 0
      if self.image is None:
        self.image = autonavigation.msg.Image()
    else:
      self.unique_key = 0
      self.gps_week = 0
      self.gps_millisecond = 0
      self.video_id = 0
      self.image = autonavigation.msg.Image()

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
      buff.write(_struct_2IQB3I.pack(_x.unique_key, _x.gps_week, _x.gps_millisecond, _x.video_id, _x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs))
      _x = self.image.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_d21i7bBI6d13i2I.pack(_x.image.localPose.time, _x.image.localPose.dr_x, _x.image.localPose.dr_y, _x.image.localPose.dr_z, _x.image.localPose.dr_heading, _x.image.localPose.dr_roll, _x.image.localPose.dr_pitch, _x.image.localPose.lf_speed, _x.image.localPose.rf_speed, _x.image.localPose.lr_speed, _x.image.localPose.rr_speed, _x.image.localPose.rot_x, _x.image.localPose.rot_y, _x.image.localPose.rot_z, _x.image.localPose.acc_x, _x.image.localPose.acc_y, _x.image.localPose.acc_z, _x.image.localPose.batteryState, _x.image.localPose.batteryEnergy, _x.image.localPose.steer, _x.image.localPose.brake, _x.image.localPose.fuel, _x.image.localPose.trans, _x.image.localPose.VehicleState, _x.image.localPose.mode, _x.image.localPose.drStatus, _x.image.localPose.errorStatus, _x.image.localPose.emergency_flag, _x.image.localPose.hardswitch_on, _x.image.gpsPos.gps_flag, _x.image.gpsPos.gps_week, _x.image.gpsPos.gps_millisecond, _x.image.gpsPos.longitude, _x.image.gpsPos.laltitude, _x.image.gpsPos.gaussX, _x.image.gpsPos.gaussY, _x.image.gpsPos.height, _x.image.gpsPos.pitch, _x.image.gpsPos.roll, _x.image.gpsPos.azimuth, _x.image.gpsPos.northVelocity, _x.image.gpsPos.eastVelocity, _x.image.gpsPos.upVelocity, _x.image.gpsPos.positionStatus, _x.image.gpsPos.rot_x, _x.image.gpsPos.rot_y, _x.image.gpsPos.rot_z, _x.image.gpsPos.acc_x, _x.image.gpsPos.acc_y, _x.image.gpsPos.acc_z, _x.image.height, _x.image.width))
      _x = self.image.encoding
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_BI.pack(_x.image.is_bigendian, _x.image.step))
      _x = self.image.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.image is None:
        self.image = autonavigation.msg.Image()
      end = 0
      _x = self
      start = end
      end += 29
      (_x.unique_key, _x.gps_week, _x.gps_millisecond, _x.video_id, _x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs,) = _struct_2IQB3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.image.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 212
      (_x.image.localPose.time, _x.image.localPose.dr_x, _x.image.localPose.dr_y, _x.image.localPose.dr_z, _x.image.localPose.dr_heading, _x.image.localPose.dr_roll, _x.image.localPose.dr_pitch, _x.image.localPose.lf_speed, _x.image.localPose.rf_speed, _x.image.localPose.lr_speed, _x.image.localPose.rr_speed, _x.image.localPose.rot_x, _x.image.localPose.rot_y, _x.image.localPose.rot_z, _x.image.localPose.acc_x, _x.image.localPose.acc_y, _x.image.localPose.acc_z, _x.image.localPose.batteryState, _x.image.localPose.batteryEnergy, _x.image.localPose.steer, _x.image.localPose.brake, _x.image.localPose.fuel, _x.image.localPose.trans, _x.image.localPose.VehicleState, _x.image.localPose.mode, _x.image.localPose.drStatus, _x.image.localPose.errorStatus, _x.image.localPose.emergency_flag, _x.image.localPose.hardswitch_on, _x.image.gpsPos.gps_flag, _x.image.gpsPos.gps_week, _x.image.gpsPos.gps_millisecond, _x.image.gpsPos.longitude, _x.image.gpsPos.laltitude, _x.image.gpsPos.gaussX, _x.image.gpsPos.gaussY, _x.image.gpsPos.height, _x.image.gpsPos.pitch, _x.image.gpsPos.roll, _x.image.gpsPos.azimuth, _x.image.gpsPos.northVelocity, _x.image.gpsPos.eastVelocity, _x.image.gpsPos.upVelocity, _x.image.gpsPos.positionStatus, _x.image.gpsPos.rot_x, _x.image.gpsPos.rot_y, _x.image.gpsPos.rot_z, _x.image.gpsPos.acc_x, _x.image.gpsPos.acc_y, _x.image.gpsPos.acc_z, _x.image.height, _x.image.width,) = _struct_d21i7bBI6d13i2I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.encoding = str[start:end].decode('utf-8')
      else:
        self.image.encoding = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.image.is_bigendian, _x.image.step,) = _struct_BI.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.image.data = str[start:end]
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
      buff.write(_struct_2IQB3I.pack(_x.unique_key, _x.gps_week, _x.gps_millisecond, _x.video_id, _x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs))
      _x = self.image.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_d21i7bBI6d13i2I.pack(_x.image.localPose.time, _x.image.localPose.dr_x, _x.image.localPose.dr_y, _x.image.localPose.dr_z, _x.image.localPose.dr_heading, _x.image.localPose.dr_roll, _x.image.localPose.dr_pitch, _x.image.localPose.lf_speed, _x.image.localPose.rf_speed, _x.image.localPose.lr_speed, _x.image.localPose.rr_speed, _x.image.localPose.rot_x, _x.image.localPose.rot_y, _x.image.localPose.rot_z, _x.image.localPose.acc_x, _x.image.localPose.acc_y, _x.image.localPose.acc_z, _x.image.localPose.batteryState, _x.image.localPose.batteryEnergy, _x.image.localPose.steer, _x.image.localPose.brake, _x.image.localPose.fuel, _x.image.localPose.trans, _x.image.localPose.VehicleState, _x.image.localPose.mode, _x.image.localPose.drStatus, _x.image.localPose.errorStatus, _x.image.localPose.emergency_flag, _x.image.localPose.hardswitch_on, _x.image.gpsPos.gps_flag, _x.image.gpsPos.gps_week, _x.image.gpsPos.gps_millisecond, _x.image.gpsPos.longitude, _x.image.gpsPos.laltitude, _x.image.gpsPos.gaussX, _x.image.gpsPos.gaussY, _x.image.gpsPos.height, _x.image.gpsPos.pitch, _x.image.gpsPos.roll, _x.image.gpsPos.azimuth, _x.image.gpsPos.northVelocity, _x.image.gpsPos.eastVelocity, _x.image.gpsPos.upVelocity, _x.image.gpsPos.positionStatus, _x.image.gpsPos.rot_x, _x.image.gpsPos.rot_y, _x.image.gpsPos.rot_z, _x.image.gpsPos.acc_x, _x.image.gpsPos.acc_y, _x.image.gpsPos.acc_z, _x.image.height, _x.image.width))
      _x = self.image.encoding
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_BI.pack(_x.image.is_bigendian, _x.image.step))
      _x = self.image.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.image is None:
        self.image = autonavigation.msg.Image()
      end = 0
      _x = self
      start = end
      end += 29
      (_x.unique_key, _x.gps_week, _x.gps_millisecond, _x.video_id, _x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs,) = _struct_2IQB3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.image.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 212
      (_x.image.localPose.time, _x.image.localPose.dr_x, _x.image.localPose.dr_y, _x.image.localPose.dr_z, _x.image.localPose.dr_heading, _x.image.localPose.dr_roll, _x.image.localPose.dr_pitch, _x.image.localPose.lf_speed, _x.image.localPose.rf_speed, _x.image.localPose.lr_speed, _x.image.localPose.rr_speed, _x.image.localPose.rot_x, _x.image.localPose.rot_y, _x.image.localPose.rot_z, _x.image.localPose.acc_x, _x.image.localPose.acc_y, _x.image.localPose.acc_z, _x.image.localPose.batteryState, _x.image.localPose.batteryEnergy, _x.image.localPose.steer, _x.image.localPose.brake, _x.image.localPose.fuel, _x.image.localPose.trans, _x.image.localPose.VehicleState, _x.image.localPose.mode, _x.image.localPose.drStatus, _x.image.localPose.errorStatus, _x.image.localPose.emergency_flag, _x.image.localPose.hardswitch_on, _x.image.gpsPos.gps_flag, _x.image.gpsPos.gps_week, _x.image.gpsPos.gps_millisecond, _x.image.gpsPos.longitude, _x.image.gpsPos.laltitude, _x.image.gpsPos.gaussX, _x.image.gpsPos.gaussY, _x.image.gpsPos.height, _x.image.gpsPos.pitch, _x.image.gpsPos.roll, _x.image.gpsPos.azimuth, _x.image.gpsPos.northVelocity, _x.image.gpsPos.eastVelocity, _x.image.gpsPos.upVelocity, _x.image.gpsPos.positionStatus, _x.image.gpsPos.rot_x, _x.image.gpsPos.rot_y, _x.image.gpsPos.rot_z, _x.image.gpsPos.acc_x, _x.image.gpsPos.acc_y, _x.image.gpsPos.acc_z, _x.image.height, _x.image.width,) = _struct_d21i7bBI6d13i2I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.encoding = str[start:end].decode('utf-8')
      else:
        self.image.encoding = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.image.is_bigendian, _x.image.step,) = _struct_BI.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.image.data = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2IQB3I = struct.Struct("<2IQB3I")
_struct_BI = struct.Struct("<BI")
_struct_d21i7bBI6d13i2I = struct.Struct("<d21i7bBI6d13i2I")
