# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/PSAStatus01.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PSAStatus01(type):
    """Metaclass of message 'PSAStatus01'."""

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
            module = import_type_support('sd_can_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sd_can_msgs.msg.PSAStatus01')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__psa_status01
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__psa_status01
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__psa_status01
            cls._TYPE_SUPPORT = module.type_support_msg__msg__psa_status01
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__psa_status01

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


class PSAStatus01(metaclass=Metaclass_PSAStatus01):
    """Message class 'PSAStatus01'."""

    __slots__ = [
        '_header',
        '_psa_actual_pos_rad',
        '_psa_actual_speed_rad_s',
        '_psa_actual_torque_m_nm',
        '_psa_actual_mode_of_operation',
        '_psa_actual_current_a',
        '_psa_actual_voltage_v',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'psa_actual_pos_rad': 'double',
        'psa_actual_speed_rad_s': 'double',
        'psa_actual_torque_m_nm': 'double',
        'psa_actual_mode_of_operation': 'uint8',
        'psa_actual_current_a': 'double',
        'psa_actual_voltage_v': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.psa_actual_pos_rad = kwargs.get('psa_actual_pos_rad', float())
        self.psa_actual_speed_rad_s = kwargs.get('psa_actual_speed_rad_s', float())
        self.psa_actual_torque_m_nm = kwargs.get('psa_actual_torque_m_nm', float())
        self.psa_actual_mode_of_operation = kwargs.get('psa_actual_mode_of_operation', int())
        self.psa_actual_current_a = kwargs.get('psa_actual_current_a', float())
        self.psa_actual_voltage_v = kwargs.get('psa_actual_voltage_v', float())

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
        if self.psa_actual_pos_rad != other.psa_actual_pos_rad:
            return False
        if self.psa_actual_speed_rad_s != other.psa_actual_speed_rad_s:
            return False
        if self.psa_actual_torque_m_nm != other.psa_actual_torque_m_nm:
            return False
        if self.psa_actual_mode_of_operation != other.psa_actual_mode_of_operation:
            return False
        if self.psa_actual_current_a != other.psa_actual_current_a:
            return False
        if self.psa_actual_voltage_v != other.psa_actual_voltage_v:
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
    def psa_actual_pos_rad(self):
        """Message field 'psa_actual_pos_rad'."""
        return self._psa_actual_pos_rad

    @psa_actual_pos_rad.setter
    def psa_actual_pos_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_actual_pos_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_actual_pos_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_actual_pos_rad = value

    @builtins.property
    def psa_actual_speed_rad_s(self):
        """Message field 'psa_actual_speed_rad_s'."""
        return self._psa_actual_speed_rad_s

    @psa_actual_speed_rad_s.setter
    def psa_actual_speed_rad_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_actual_speed_rad_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_actual_speed_rad_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_actual_speed_rad_s = value

    @builtins.property
    def psa_actual_torque_m_nm(self):
        """Message field 'psa_actual_torque_m_nm'."""
        return self._psa_actual_torque_m_nm

    @psa_actual_torque_m_nm.setter
    def psa_actual_torque_m_nm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_actual_torque_m_nm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_actual_torque_m_nm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_actual_torque_m_nm = value

    @builtins.property
    def psa_actual_mode_of_operation(self):
        """Message field 'psa_actual_mode_of_operation'."""
        return self._psa_actual_mode_of_operation

    @psa_actual_mode_of_operation.setter
    def psa_actual_mode_of_operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'psa_actual_mode_of_operation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'psa_actual_mode_of_operation' field must be an unsigned integer in [0, 255]"
        self._psa_actual_mode_of_operation = value

    @builtins.property
    def psa_actual_current_a(self):
        """Message field 'psa_actual_current_a'."""
        return self._psa_actual_current_a

    @psa_actual_current_a.setter
    def psa_actual_current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_actual_current_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_actual_current_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_actual_current_a = value

    @builtins.property
    def psa_actual_voltage_v(self):
        """Message field 'psa_actual_voltage_v'."""
        return self._psa_actual_voltage_v

    @psa_actual_voltage_v.setter
    def psa_actual_voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_actual_voltage_v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_actual_voltage_v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_actual_voltage_v = value
