# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sentry_urdf/pathResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class pathResult(genpy.Message):
  _md5sum = "bd61aa226e76d94c618869ee7171e1a0"
  _type = "sentry_urdf/pathResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition
int32 output
geometry_msgs/Pose final_pose
int32 goal_stamp

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['output','final_pose','goal_stamp']
  _slot_types = ['int32','geometry_msgs/Pose','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       output,final_pose,goal_stamp

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(pathResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.output is None:
        self.output = 0
      if self.final_pose is None:
        self.final_pose = geometry_msgs.msg.Pose()
      if self.goal_stamp is None:
        self.goal_stamp = 0
    else:
      self.output = 0
      self.final_pose = geometry_msgs.msg.Pose()
      self.goal_stamp = 0

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
      buff.write(_struct_i7di.pack(_x.output, _x.final_pose.position.x, _x.final_pose.position.y, _x.final_pose.position.z, _x.final_pose.orientation.x, _x.final_pose.orientation.y, _x.final_pose.orientation.z, _x.final_pose.orientation.w, _x.goal_stamp))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.final_pose is None:
        self.final_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 64
      (_x.output, _x.final_pose.position.x, _x.final_pose.position.y, _x.final_pose.position.z, _x.final_pose.orientation.x, _x.final_pose.orientation.y, _x.final_pose.orientation.z, _x.final_pose.orientation.w, _x.goal_stamp,) = _struct_i7di.unpack(str[start:end])
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
      buff.write(_struct_i7di.pack(_x.output, _x.final_pose.position.x, _x.final_pose.position.y, _x.final_pose.position.z, _x.final_pose.orientation.x, _x.final_pose.orientation.y, _x.final_pose.orientation.z, _x.final_pose.orientation.w, _x.goal_stamp))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.final_pose is None:
        self.final_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 64
      (_x.output, _x.final_pose.position.x, _x.final_pose.position.y, _x.final_pose.position.z, _x.final_pose.orientation.x, _x.final_pose.orientation.y, _x.final_pose.orientation.z, _x.final_pose.orientation.w, _x.goal_stamp,) = _struct_i7di.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i7di = struct.Struct("<i7di")
