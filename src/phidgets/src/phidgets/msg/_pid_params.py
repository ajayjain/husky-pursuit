"""autogenerated by genpy from phidgets/pid_params.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class pid_params(genpy.Message):
  _md5sum = "9d70688daa83757a45f48acc5f836447"
  _type = "phidgets/pid_params"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
int32 index
int32 mode
int32 direction
int32 target_position
float32 target_velocity
float32 p_gain
float32 i_gain
float32 d_gain
float32 acc_ff
float32 fri_ff
float32 vel_ff
float32 hold
float32 bias
float32 accel
float32 trans
float32 lag
float32 min
float32 max
float32 slew

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

"""
  __slots__ = ['header','index','mode','direction','target_position','target_velocity','p_gain','i_gain','d_gain','acc_ff','fri_ff','vel_ff','hold','bias','accel','trans','lag','min','max','slew']
  _slot_types = ['std_msgs/Header','int32','int32','int32','int32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,index,mode,direction,target_position,target_velocity,p_gain,i_gain,d_gain,acc_ff,fri_ff,vel_ff,hold,bias,accel,trans,lag,min,max,slew

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(pid_params, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.index is None:
        self.index = 0
      if self.mode is None:
        self.mode = 0
      if self.direction is None:
        self.direction = 0
      if self.target_position is None:
        self.target_position = 0
      if self.target_velocity is None:
        self.target_velocity = 0.
      if self.p_gain is None:
        self.p_gain = 0.
      if self.i_gain is None:
        self.i_gain = 0.
      if self.d_gain is None:
        self.d_gain = 0.
      if self.acc_ff is None:
        self.acc_ff = 0.
      if self.fri_ff is None:
        self.fri_ff = 0.
      if self.vel_ff is None:
        self.vel_ff = 0.
      if self.hold is None:
        self.hold = 0.
      if self.bias is None:
        self.bias = 0.
      if self.accel is None:
        self.accel = 0.
      if self.trans is None:
        self.trans = 0.
      if self.lag is None:
        self.lag = 0.
      if self.min is None:
        self.min = 0.
      if self.max is None:
        self.max = 0.
      if self.slew is None:
        self.slew = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.index = 0
      self.mode = 0
      self.direction = 0
      self.target_position = 0
      self.target_velocity = 0.
      self.p_gain = 0.
      self.i_gain = 0.
      self.d_gain = 0.
      self.acc_ff = 0.
      self.fri_ff = 0.
      self.vel_ff = 0.
      self.hold = 0.
      self.bias = 0.
      self.accel = 0.
      self.trans = 0.
      self.lag = 0.
      self.min = 0.
      self.max = 0.
      self.slew = 0.

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4i15f.pack(_x.index, _x.mode, _x.direction, _x.target_position, _x.target_velocity, _x.p_gain, _x.i_gain, _x.d_gain, _x.acc_ff, _x.fri_ff, _x.vel_ff, _x.hold, _x.bias, _x.accel, _x.trans, _x.lag, _x.min, _x.max, _x.slew))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 76
      (_x.index, _x.mode, _x.direction, _x.target_position, _x.target_velocity, _x.p_gain, _x.i_gain, _x.d_gain, _x.acc_ff, _x.fri_ff, _x.vel_ff, _x.hold, _x.bias, _x.accel, _x.trans, _x.lag, _x.min, _x.max, _x.slew,) = _struct_4i15f.unpack(str[start:end])
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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4i15f.pack(_x.index, _x.mode, _x.direction, _x.target_position, _x.target_velocity, _x.p_gain, _x.i_gain, _x.d_gain, _x.acc_ff, _x.fri_ff, _x.vel_ff, _x.hold, _x.bias, _x.accel, _x.trans, _x.lag, _x.min, _x.max, _x.slew))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 76
      (_x.index, _x.mode, _x.direction, _x.target_position, _x.target_velocity, _x.p_gain, _x.i_gain, _x.d_gain, _x.acc_ff, _x.fri_ff, _x.vel_ff, _x.hold, _x.bias, _x.accel, _x.trans, _x.lag, _x.min, _x.max, _x.slew,) = _struct_4i15f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_4i15f = struct.Struct("<4i15f")
