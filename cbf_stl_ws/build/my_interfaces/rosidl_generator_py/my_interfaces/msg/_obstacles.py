# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_interfaces:msg/Obstacles.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'o_radius'
# Member 'ox_pose'
# Member 'oy_pose'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Obstacles(type):
    """Metaclass of message 'Obstacles'."""

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
            module = import_type_support('my_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interfaces.msg.Obstacles')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacles
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacles
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacles
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacles
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacles

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Obstacles(metaclass=Metaclass_Obstacles):
    """Message class 'Obstacles'."""

    __slots__ = [
        '_o_radius',
        '_ox_pose',
        '_oy_pose',
        '_o_number',
    ]

    _fields_and_field_types = {
        'o_radius': 'sequence<float>',
        'ox_pose': 'sequence<float>',
        'oy_pose': 'sequence<float>',
        'o_number': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.o_radius = array.array('f', kwargs.get('o_radius', []))
        self.ox_pose = array.array('f', kwargs.get('ox_pose', []))
        self.oy_pose = array.array('f', kwargs.get('oy_pose', []))
        self.o_number = kwargs.get('o_number', int())

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
        if self.o_radius != other.o_radius:
            return False
        if self.ox_pose != other.ox_pose:
            return False
        if self.oy_pose != other.oy_pose:
            return False
        if self.o_number != other.o_number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def o_radius(self):
        """Message field 'o_radius'."""
        return self._o_radius

    @o_radius.setter
    def o_radius(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'o_radius' array.array() must have the type code of 'f'"
            self._o_radius = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'o_radius' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._o_radius = array.array('f', value)

    @builtins.property
    def ox_pose(self):
        """Message field 'ox_pose'."""
        return self._ox_pose

    @ox_pose.setter
    def ox_pose(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ox_pose' array.array() must have the type code of 'f'"
            self._ox_pose = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ox_pose' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ox_pose = array.array('f', value)

    @builtins.property
    def oy_pose(self):
        """Message field 'oy_pose'."""
        return self._oy_pose

    @oy_pose.setter
    def oy_pose(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'oy_pose' array.array() must have the type code of 'f'"
            self._oy_pose = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'oy_pose' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._oy_pose = array.array('f', value)

    @builtins.property
    def o_number(self):
        """Message field 'o_number'."""
        return self._o_number

    @o_number.setter
    def o_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'o_number' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'o_number' field must be an integer in [-2147483648, 2147483647]"
        self._o_number = value
