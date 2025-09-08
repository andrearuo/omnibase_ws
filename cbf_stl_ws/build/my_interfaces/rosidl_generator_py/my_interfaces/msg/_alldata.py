# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_interfaces:msg/Alldata.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Alldata(type):
    """Metaclass of message 'Alldata'."""

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
                'my_interfaces.msg.Alldata')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__alldata
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__alldata
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__alldata
            cls._TYPE_SUPPORT = module.type_support_msg__msg__alldata
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__alldata

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Alldata(metaclass=Metaclass_Alldata):
    """Message class 'Alldata'."""

    __slots__ = [
        '_all_v_real',
        '_all_v_max',
        '_all_h_barrier',
        '_all_x_pos',
        '_all_y_pos',
        '_all_theta_rot',
        '_all_distance_hr',
        '_all_global_counter',
        '_all_temporal_operator_counter',
        '_all_flag_finish',
        '_all_obs_x_closer',
        '_all_obs_y_closer',
    ]

    _fields_and_field_types = {
        'all_v_real': 'float',
        'all_v_max': 'float',
        'all_h_barrier': 'float',
        'all_x_pos': 'float',
        'all_y_pos': 'float',
        'all_theta_rot': 'float',
        'all_distance_hr': 'float',
        'all_global_counter': 'int64',
        'all_temporal_operator_counter': 'int64',
        'all_flag_finish': 'boolean',
        'all_obs_x_closer': 'float',
        'all_obs_y_closer': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.all_v_real = kwargs.get('all_v_real', float())
        self.all_v_max = kwargs.get('all_v_max', float())
        self.all_h_barrier = kwargs.get('all_h_barrier', float())
        self.all_x_pos = kwargs.get('all_x_pos', float())
        self.all_y_pos = kwargs.get('all_y_pos', float())
        self.all_theta_rot = kwargs.get('all_theta_rot', float())
        self.all_distance_hr = kwargs.get('all_distance_hr', float())
        self.all_global_counter = kwargs.get('all_global_counter', int())
        self.all_temporal_operator_counter = kwargs.get('all_temporal_operator_counter', int())
        self.all_flag_finish = kwargs.get('all_flag_finish', bool())
        self.all_obs_x_closer = kwargs.get('all_obs_x_closer', float())
        self.all_obs_y_closer = kwargs.get('all_obs_y_closer', float())

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
        if self.all_v_real != other.all_v_real:
            return False
        if self.all_v_max != other.all_v_max:
            return False
        if self.all_h_barrier != other.all_h_barrier:
            return False
        if self.all_x_pos != other.all_x_pos:
            return False
        if self.all_y_pos != other.all_y_pos:
            return False
        if self.all_theta_rot != other.all_theta_rot:
            return False
        if self.all_distance_hr != other.all_distance_hr:
            return False
        if self.all_global_counter != other.all_global_counter:
            return False
        if self.all_temporal_operator_counter != other.all_temporal_operator_counter:
            return False
        if self.all_flag_finish != other.all_flag_finish:
            return False
        if self.all_obs_x_closer != other.all_obs_x_closer:
            return False
        if self.all_obs_y_closer != other.all_obs_y_closer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def all_v_real(self):
        """Message field 'all_v_real'."""
        return self._all_v_real

    @all_v_real.setter
    def all_v_real(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_v_real' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_v_real' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_v_real = value

    @builtins.property
    def all_v_max(self):
        """Message field 'all_v_max'."""
        return self._all_v_max

    @all_v_max.setter
    def all_v_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_v_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_v_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_v_max = value

    @builtins.property
    def all_h_barrier(self):
        """Message field 'all_h_barrier'."""
        return self._all_h_barrier

    @all_h_barrier.setter
    def all_h_barrier(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_h_barrier' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_h_barrier' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_h_barrier = value

    @builtins.property
    def all_x_pos(self):
        """Message field 'all_x_pos'."""
        return self._all_x_pos

    @all_x_pos.setter
    def all_x_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_x_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_x_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_x_pos = value

    @builtins.property
    def all_y_pos(self):
        """Message field 'all_y_pos'."""
        return self._all_y_pos

    @all_y_pos.setter
    def all_y_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_y_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_y_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_y_pos = value

    @builtins.property
    def all_theta_rot(self):
        """Message field 'all_theta_rot'."""
        return self._all_theta_rot

    @all_theta_rot.setter
    def all_theta_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_theta_rot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_theta_rot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_theta_rot = value

    @builtins.property
    def all_distance_hr(self):
        """Message field 'all_distance_hr'."""
        return self._all_distance_hr

    @all_distance_hr.setter
    def all_distance_hr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_distance_hr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_distance_hr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_distance_hr = value

    @builtins.property
    def all_global_counter(self):
        """Message field 'all_global_counter'."""
        return self._all_global_counter

    @all_global_counter.setter
    def all_global_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'all_global_counter' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'all_global_counter' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._all_global_counter = value

    @builtins.property
    def all_temporal_operator_counter(self):
        """Message field 'all_temporal_operator_counter'."""
        return self._all_temporal_operator_counter

    @all_temporal_operator_counter.setter
    def all_temporal_operator_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'all_temporal_operator_counter' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'all_temporal_operator_counter' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._all_temporal_operator_counter = value

    @builtins.property
    def all_flag_finish(self):
        """Message field 'all_flag_finish'."""
        return self._all_flag_finish

    @all_flag_finish.setter
    def all_flag_finish(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'all_flag_finish' field must be of type 'bool'"
        self._all_flag_finish = value

    @builtins.property
    def all_obs_x_closer(self):
        """Message field 'all_obs_x_closer'."""
        return self._all_obs_x_closer

    @all_obs_x_closer.setter
    def all_obs_x_closer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_obs_x_closer' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_obs_x_closer' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_obs_x_closer = value

    @builtins.property
    def all_obs_y_closer(self):
        """Message field 'all_obs_y_closer'."""
        return self._all_obs_y_closer

    @all_obs_y_closer.setter
    def all_obs_y_closer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'all_obs_y_closer' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'all_obs_y_closer' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._all_obs_y_closer = value
