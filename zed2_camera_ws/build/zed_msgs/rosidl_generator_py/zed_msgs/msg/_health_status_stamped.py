# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zed_msgs:msg/HealthStatusStamped.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HealthStatusStamped(type):
    """Metaclass of message 'HealthStatusStamped'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'zed_msgs.msg.HealthStatusStamped')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__health_status_stamped
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__health_status_stamped
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__health_status_stamped
            cls._TYPE_SUPPORT = module.type_support_msg__msg__health_status_stamped
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__health_status_stamped

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HealthStatusStamped(metaclass=Metaclass_HealthStatusStamped):
    """Message class 'HealthStatusStamped'."""

    __slots__ = [
        '_header',
        '_serial_number',
        '_camera_name',
        '_low_image_quality',
        '_low_lighting',
        '_low_depth_reliability',
        '_low_motion_sensors_reliability',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'serial_number': 'uint32',
        'camera_name': 'string',
        'low_image_quality': 'boolean',
        'low_lighting': 'boolean',
        'low_depth_reliability': 'boolean',
        'low_motion_sensors_reliability': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.serial_number = kwargs.get('serial_number', int())
        self.camera_name = kwargs.get('camera_name', str())
        self.low_image_quality = kwargs.get('low_image_quality', bool())
        self.low_lighting = kwargs.get('low_lighting', bool())
        self.low_depth_reliability = kwargs.get('low_depth_reliability', bool())
        self.low_motion_sensors_reliability = kwargs.get('low_motion_sensors_reliability', bool())

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
        if self.header != other.header:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.camera_name != other.camera_name:
            return False
        if self.low_image_quality != other.low_image_quality:
            return False
        if self.low_lighting != other.low_lighting:
            return False
        if self.low_depth_reliability != other.low_depth_reliability:
            return False
        if self.low_motion_sensors_reliability != other.low_motion_sensors_reliability:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serial_number' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'serial_number' field must be an unsigned integer in [0, 4294967295]"
        self._serial_number = value

    @builtins.property
    def camera_name(self):
        """Message field 'camera_name'."""
        return self._camera_name

    @camera_name.setter
    def camera_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_name' field must be of type 'str'"
        self._camera_name = value

    @builtins.property
    def low_image_quality(self):
        """Message field 'low_image_quality'."""
        return self._low_image_quality

    @low_image_quality.setter
    def low_image_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'low_image_quality' field must be of type 'bool'"
        self._low_image_quality = value

    @builtins.property
    def low_lighting(self):
        """Message field 'low_lighting'."""
        return self._low_lighting

    @low_lighting.setter
    def low_lighting(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'low_lighting' field must be of type 'bool'"
        self._low_lighting = value

    @builtins.property
    def low_depth_reliability(self):
        """Message field 'low_depth_reliability'."""
        return self._low_depth_reliability

    @low_depth_reliability.setter
    def low_depth_reliability(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'low_depth_reliability' field must be of type 'bool'"
        self._low_depth_reliability = value

    @builtins.property
    def low_motion_sensors_reliability(self):
        """Message field 'low_motion_sensors_reliability'."""
        return self._low_motion_sensors_reliability

    @low_motion_sensors_reliability.setter
    def low_motion_sensors_reliability(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'low_motion_sensors_reliability' field must be of type 'bool'"
        self._low_motion_sensors_reliability = value
