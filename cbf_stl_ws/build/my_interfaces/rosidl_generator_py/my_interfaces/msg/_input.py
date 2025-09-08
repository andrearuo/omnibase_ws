# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_interfaces:msg/Input.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'goal'
# Member 'goal2'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Input(type):
    """Metaclass of message 'Input'."""

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
                'my_interfaces.msg.Input')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__input

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Input(metaclass=Metaclass_Input):
    """Message class 'Input'."""

    __slots__ = [
        '_temp_operator',
        '_goal',
        '_goal2',
        '_ta',
        '_tb',
        '_tab',
    ]

    _fields_and_field_types = {
        'temp_operator': 'string',
        'goal': 'sequence<double>',
        'goal2': 'sequence<double>',
        'ta': 'int64',
        'tb': 'int64',
        'tab': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.temp_operator = kwargs.get('temp_operator', str())
        self.goal = array.array('d', kwargs.get('goal', []))
        self.goal2 = array.array('d', kwargs.get('goal2', []))
        self.ta = kwargs.get('ta', int())
        self.tb = kwargs.get('tb', int())
        self.tab = kwargs.get('tab', int())

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
        if self.temp_operator != other.temp_operator:
            return False
        if self.goal != other.goal:
            return False
        if self.goal2 != other.goal2:
            return False
        if self.ta != other.ta:
            return False
        if self.tb != other.tb:
            return False
        if self.tab != other.tab:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def temp_operator(self):
        """Message field 'temp_operator'."""
        return self._temp_operator

    @temp_operator.setter
    def temp_operator(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'temp_operator' field must be of type 'str'"
        self._temp_operator = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'goal' array.array() must have the type code of 'd'"
            self._goal = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'goal' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._goal = array.array('d', value)

    @builtins.property
    def goal2(self):
        """Message field 'goal2'."""
        return self._goal2

    @goal2.setter
    def goal2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'goal2' array.array() must have the type code of 'd'"
            self._goal2 = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'goal2' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._goal2 = array.array('d', value)

    @builtins.property
    def ta(self):
        """Message field 'ta'."""
        return self._ta

    @ta.setter
    def ta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ta' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ta' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ta = value

    @builtins.property
    def tb(self):
        """Message field 'tb'."""
        return self._tb

    @tb.setter
    def tb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tb' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'tb' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._tb = value

    @builtins.property
    def tab(self):
        """Message field 'tab'."""
        return self._tab

    @tab.setter
    def tab(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tab' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'tab' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._tab = value
