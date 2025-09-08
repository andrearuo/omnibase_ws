# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zed_msgs:msg/SvoStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SvoStatus(type):
    """Metaclass of message 'SvoStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_PLAYING': 0,
        'STATUS_PAUSED': 1,
        'STATUS_END': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('zed_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'zed_msgs.msg.SvoStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__svo_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__svo_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__svo_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__svo_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__svo_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_PLAYING': cls.__constants['STATUS_PLAYING'],
            'STATUS_PAUSED': cls.__constants['STATUS_PAUSED'],
            'STATUS_END': cls.__constants['STATUS_END'],
        }

    @property
    def STATUS_PLAYING(self):
        """Message constant 'STATUS_PLAYING'."""
        return Metaclass_SvoStatus.__constants['STATUS_PLAYING']

    @property
    def STATUS_PAUSED(self):
        """Message constant 'STATUS_PAUSED'."""
        return Metaclass_SvoStatus.__constants['STATUS_PAUSED']

    @property
    def STATUS_END(self):
        """Message constant 'STATUS_END'."""
        return Metaclass_SvoStatus.__constants['STATUS_END']


class SvoStatus(metaclass=Metaclass_SvoStatus):
    """
    Message class 'SvoStatus'.

    Constants:
      STATUS_PLAYING
      STATUS_PAUSED
      STATUS_END
    """

    __slots__ = [
        '_file_name',
        '_status',
        '_frame_ts',
        '_frame_id',
        '_total_frames',
        '_loop_active',
        '_loop_count',
        '_real_time_mode',
    ]

    _fields_and_field_types = {
        'file_name': 'string',
        'status': 'uint8',
        'frame_ts': 'uint64',
        'frame_id': 'uint32',
        'total_frames': 'uint32',
        'loop_active': 'boolean',
        'loop_count': 'uint32',
        'real_time_mode': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.file_name = kwargs.get('file_name', str())
        self.status = kwargs.get('status', int())
        self.frame_ts = kwargs.get('frame_ts', int())
        self.frame_id = kwargs.get('frame_id', int())
        self.total_frames = kwargs.get('total_frames', int())
        self.loop_active = kwargs.get('loop_active', bool())
        self.loop_count = kwargs.get('loop_count', int())
        self.real_time_mode = kwargs.get('real_time_mode', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.file_name != other.file_name:
            return False
        if self.status != other.status:
            return False
        if self.frame_ts != other.frame_ts:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.total_frames != other.total_frames:
            return False
        if self.loop_active != other.loop_active:
            return False
        if self.loop_count != other.loop_count:
            return False
        if self.real_time_mode != other.real_time_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def file_name(self):
        """Message field 'file_name'."""
        return self._file_name

    @file_name.setter
    def file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file_name' field must be of type 'str'"
        self._file_name = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def frame_ts(self):
        """Message field 'frame_ts'."""
        return self._frame_ts

    @frame_ts.setter
    def frame_ts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame_ts' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'frame_ts' field must be an unsigned integer in [0, 18446744073709551615]"
        self._frame_ts = value

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'frame_id' field must be an unsigned integer in [0, 4294967295]"
        self._frame_id = value

    @builtins.property
    def total_frames(self):
        """Message field 'total_frames'."""
        return self._total_frames

    @total_frames.setter
    def total_frames(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_frames' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_frames' field must be an unsigned integer in [0, 4294967295]"
        self._total_frames = value

    @builtins.property
    def loop_active(self):
        """Message field 'loop_active'."""
        return self._loop_active

    @loop_active.setter
    def loop_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'loop_active' field must be of type 'bool'"
        self._loop_active = value

    @builtins.property
    def loop_count(self):
        """Message field 'loop_count'."""
        return self._loop_count

    @loop_count.setter
    def loop_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loop_count' field must be an unsigned integer in [0, 4294967295]"
        self._loop_count = value

    @builtins.property
    def real_time_mode(self):
        """Message field 'real_time_mode'."""
        return self._real_time_mode

    @real_time_mode.setter
    def real_time_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'real_time_mode' field must be of type 'bool'"
        self._real_time_mode = value
