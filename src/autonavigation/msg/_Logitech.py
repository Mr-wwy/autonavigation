# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autonavigation/Logitech.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Logitech(genpy.Message):
  _md5sum = "514b52ad33f160a6fe6f8bec1d48757b"
  _type = "autonavigation/Logitech"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#罗技力G27反馈方向盘

int16 SteeringWheel #规定右正左负值变化：0-540 
uint8 Clutch #离合器值：0-100，放松状态为0
uint8 Brake #刹车值:0-100，放松状态为0
uint8 SasPedal #油门值:0-100,放松状态为0
uint8 ShiftPaddlesL #左换档拨片定义为降档,空状态为0,按下为1
uint8 ShiftPaddlesR #右换档拨片定义为升档，空状态为0,按下为1
uint8 Ignition #点火为1,熄火为2,空状态为0
uint8 HandBrake #松手刹为1,拉手刹为2,空状态为0
uint8 StickShift #自动档，由十字架上下按键操作 0为P，1为R，2为N，3为D,4为S, 5为L 6为空档，7为切换到换档拨片
uint8 CrossL #十字架左键
uint8 CrossR #十字架右键
uint8 ManualTransmission #手动档换档杆:第一排依次为1,3,5档，第二排依次为2,4,6,R档
uint8[]  WheelFunctionKey #方向盘6个红色功能键 
uint8 ConcatenonSignal #未连接初始值为0,连接成功为1
uint8 cmd_reserve2 #预留
uint8 cmd_reserve3 #预留
uint8 cmd_reserve4 #预留
uint8 cmd_reserve5 #预留
"""
  __slots__ = ['SteeringWheel','Clutch','Brake','SasPedal','ShiftPaddlesL','ShiftPaddlesR','Ignition','HandBrake','StickShift','CrossL','CrossR','ManualTransmission','WheelFunctionKey','ConcatenonSignal','cmd_reserve2','cmd_reserve3','cmd_reserve4','cmd_reserve5']
  _slot_types = ['int16','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8[]','uint8','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       SteeringWheel,Clutch,Brake,SasPedal,ShiftPaddlesL,ShiftPaddlesR,Ignition,HandBrake,StickShift,CrossL,CrossR,ManualTransmission,WheelFunctionKey,ConcatenonSignal,cmd_reserve2,cmd_reserve3,cmd_reserve4,cmd_reserve5

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Logitech, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.SteeringWheel is None:
        self.SteeringWheel = 0
      if self.Clutch is None:
        self.Clutch = 0
      if self.Brake is None:
        self.Brake = 0
      if self.SasPedal is None:
        self.SasPedal = 0
      if self.ShiftPaddlesL is None:
        self.ShiftPaddlesL = 0
      if self.ShiftPaddlesR is None:
        self.ShiftPaddlesR = 0
      if self.Ignition is None:
        self.Ignition = 0
      if self.HandBrake is None:
        self.HandBrake = 0
      if self.StickShift is None:
        self.StickShift = 0
      if self.CrossL is None:
        self.CrossL = 0
      if self.CrossR is None:
        self.CrossR = 0
      if self.ManualTransmission is None:
        self.ManualTransmission = 0
      if self.WheelFunctionKey is None:
        self.WheelFunctionKey = ''
      if self.ConcatenonSignal is None:
        self.ConcatenonSignal = 0
      if self.cmd_reserve2 is None:
        self.cmd_reserve2 = 0
      if self.cmd_reserve3 is None:
        self.cmd_reserve3 = 0
      if self.cmd_reserve4 is None:
        self.cmd_reserve4 = 0
      if self.cmd_reserve5 is None:
        self.cmd_reserve5 = 0
    else:
      self.SteeringWheel = 0
      self.Clutch = 0
      self.Brake = 0
      self.SasPedal = 0
      self.ShiftPaddlesL = 0
      self.ShiftPaddlesR = 0
      self.Ignition = 0
      self.HandBrake = 0
      self.StickShift = 0
      self.CrossL = 0
      self.CrossR = 0
      self.ManualTransmission = 0
      self.WheelFunctionKey = ''
      self.ConcatenonSignal = 0
      self.cmd_reserve2 = 0
      self.cmd_reserve3 = 0
      self.cmd_reserve4 = 0
      self.cmd_reserve5 = 0

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
      buff.write(_struct_h11B.pack(_x.SteeringWheel, _x.Clutch, _x.Brake, _x.SasPedal, _x.ShiftPaddlesL, _x.ShiftPaddlesR, _x.Ignition, _x.HandBrake, _x.StickShift, _x.CrossL, _x.CrossR, _x.ManualTransmission))
      _x = self.WheelFunctionKey
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_5B.pack(_x.ConcatenonSignal, _x.cmd_reserve2, _x.cmd_reserve3, _x.cmd_reserve4, _x.cmd_reserve5))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 13
      (_x.SteeringWheel, _x.Clutch, _x.Brake, _x.SasPedal, _x.ShiftPaddlesL, _x.ShiftPaddlesR, _x.Ignition, _x.HandBrake, _x.StickShift, _x.CrossL, _x.CrossR, _x.ManualTransmission,) = _struct_h11B.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.WheelFunctionKey = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.ConcatenonSignal, _x.cmd_reserve2, _x.cmd_reserve3, _x.cmd_reserve4, _x.cmd_reserve5,) = _struct_5B.unpack(str[start:end])
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
      buff.write(_struct_h11B.pack(_x.SteeringWheel, _x.Clutch, _x.Brake, _x.SasPedal, _x.ShiftPaddlesL, _x.ShiftPaddlesR, _x.Ignition, _x.HandBrake, _x.StickShift, _x.CrossL, _x.CrossR, _x.ManualTransmission))
      _x = self.WheelFunctionKey
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_5B.pack(_x.ConcatenonSignal, _x.cmd_reserve2, _x.cmd_reserve3, _x.cmd_reserve4, _x.cmd_reserve5))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 13
      (_x.SteeringWheel, _x.Clutch, _x.Brake, _x.SasPedal, _x.ShiftPaddlesL, _x.ShiftPaddlesR, _x.Ignition, _x.HandBrake, _x.StickShift, _x.CrossL, _x.CrossR, _x.ManualTransmission,) = _struct_h11B.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.WheelFunctionKey = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.ConcatenonSignal, _x.cmd_reserve2, _x.cmd_reserve3, _x.cmd_reserve4, _x.cmd_reserve5,) = _struct_5B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_h11B = struct.Struct("<h11B")
_struct_5B = struct.Struct("<5B")
