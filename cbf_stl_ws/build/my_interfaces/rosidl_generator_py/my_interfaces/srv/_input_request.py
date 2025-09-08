# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_interfaces:srv/InputRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'goal'
# Member 'goal2'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InputRequest_Request(type):
    """Metaclass of message 'InputRequest_Request'."""

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
                'my_interfaces.srv.InputRequest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__input_request__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__input_request__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__input_request__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__input_request__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__input_request__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InputRequest_Request(metaclass=Metaclass_InputRequest_Request):
    """Message class 'InputRequest_Request'."""

    __slots__ = [
        '_temp_operator',
        '_goal',
        '_goal2',
        '_ta',
        '_tb',
        '_tab',
        '_epsilon',
        '_collision_avoidance',
        '_velocity_constraint',
        '_angular_constraint',
        '_eta',
        '_b0_min',
        '_b0_max',
        '_margin',
        '_k',
        '_esp',
    ]

    _fields_and_field_types = {
        'temp_operator': 'string',
        'goal': 'sequence<double>',
        'goal2': 'sequence<double>',
        'ta': 'int64',
        'tb': 'int64',
        'tab': 'int64',
        'epsilon': 'double',
        'collision_avoidance': 'boolean',
        'velocity_constraint': 'boolean',
        'angular_constraint': 'boolean',
        'eta': 'int64',
        'b0_min': 'double',
        'b0_max': 'double',
        'margin': 'double',
        'k': 'double',
        'esp': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.epsilon = kwargs.get('epsilon', float())
        self.collision_avoidance = kwargs.get('collision_avoidance', bool())
        self.velocity_constraint = kwargs.get('velocity_constraint', bool())
        self.angular_constraint = kwargs.get('angular_constraint', bool())
        self.eta = kwargs.get('eta', int())
        self.b0_min = kwargs.get('b0_min', float())
        self.b0_max = kwargs.get('b0_max', float())
        self.margin = kwargs.get('margin', float())
        self.k = kwargs.get('k', float())
        self.esp = kwargs.get('esp', int())

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
        if self.epsilon != other.epsilon:
            return False
        if self.collision_avoidance != other.collision_avoidance:
            return False
        if self.velocity_constraint != other.velocity_constraint:
            return False
        if self.angular_constraint != other.angular_constraint:
            return False
        if self.eta != other.eta:
            return False
        if self.b0_min != other.b0_min:
            return False
        if self.b0_max != other.b0_max:
            return False
        if self.margin != other.margin:
            return False
        if self.k != other.k:
            return False
        if self.esp != other.esp:
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

    @builtins.property
    def epsilon(self):
        """Message field 'epsilon'."""
        return self._epsilon

    @epsilon.setter
    def epsilon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'epsilon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'epsilon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._epsilon = value

    @builtins.property
    def collision_avoidance(self):
        """Message field 'collision_avoidance'."""
        return self._collision_avoidance

    @collision_avoidance.setter
    def collision_avoidance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'collision_avoidance' field must be of type 'bool'"
        self._collision_avoidance = value

    @builtins.property
    def velocity_constraint(self):
        """Message field 'velocity_constraint'."""
        return self._velocity_constraint

    @velocity_constraint.setter
    def velocity_constraint(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'velocity_constraint' field must be of type 'bool'"
        self._velocity_constraint = value

    @builtins.property
    def angular_constraint(self):
        """Message field 'angular_constraint'."""
        return self._angular_constraint

    @angular_constraint.setter
    def angular_constraint(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'angular_constraint' field must be of type 'bool'"
        self._angular_constraint = value

    @builtins.property
    def eta(self):
        """Message field 'eta'."""
        return self._eta

    @eta.setter
    def eta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eta' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'eta' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._eta = value

    @builtins.property
    def b0_min(self):
        """Message field 'b0_min'."""
        return self._b0_min

    @b0_min.setter
    def b0_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b0_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'b0_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._b0_min = value

    @builtins.property
    def b0_max(self):
        """Message field 'b0_max'."""
        return self._b0_max

    @b0_max.setter
    def b0_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b0_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'b0_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._b0_max = value

    @builtins.property
    def margin(self):
        """Message field 'margin'."""
        return self._margin

    @margin.setter
    def margin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'margin' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'margin' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._margin = value

    @builtins.property
    def k(self):
        """Message field 'k'."""
        return self._k

    @k.setter
    def k(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'k' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._k = value

    @builtins.property
    def esp(self):
        """Message field 'esp'."""
        return self._esp

    @esp.setter
    def esp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'esp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._esp = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InputRequest_Response(type):
    """Metaclass of message 'InputRequest_Response'."""

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
                'my_interfaces.srv.InputRequest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__input_request__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__input_request__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__input_request__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__input_request__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__input_request__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InputRequest_Response(metaclass=Metaclass_InputRequest_Response):
    """Message class 'InputRequest_Response'."""

    __slots__ = [
        '_answer',
    ]

    _fields_and_field_types = {
        'answer': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.answer = kwargs.get('answer', bool())

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
        if self.answer != other.answer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def answer(self):
        """Message field 'answer'."""
        return self._answer

    @answer.setter
    def answer(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'answer' field must be of type 'bool'"
        self._answer = value


class Metaclass_InputRequest(type):
    """Metaclass of service 'InputRequest'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interfaces.srv.InputRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__input_request

            from my_interfaces.srv import _input_request
            if _input_request.Metaclass_InputRequest_Request._TYPE_SUPPORT is None:
                _input_request.Metaclass_InputRequest_Request.__import_type_support__()
            if _input_request.Metaclass_InputRequest_Response._TYPE_SUPPORT is None:
                _input_request.Metaclass_InputRequest_Response.__import_type_support__()


class InputRequest(metaclass=Metaclass_InputRequest):
    from my_interfaces.srv._input_request import InputRequest_Request as Request
    from my_interfaces.srv._input_request import InputRequest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
