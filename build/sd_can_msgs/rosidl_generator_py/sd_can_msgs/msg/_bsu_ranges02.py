# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/BSURanges02.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSURanges02(type):
    """Metaclass of message 'BSURanges02'."""

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
                'sd_can_msgs.msg.BSURanges02')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsu_ranges02
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsu_ranges02
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsu_ranges02
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsu_ranges02
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsu_ranges02

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


class BSURanges02(metaclass=Metaclass_BSURanges02):
    """Message class 'BSURanges02'."""

    __slots__ = [
        '_header',
        '_psa_min_angle_rad',
        '_psa_max_angle_rad',
        '_psa_min_angle_speed_rad_s',
        '_psa_max_angle_speed_rad_s',
        '_psa_min_torque_m_nm',
        '_psa_max_torque_m_nm',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'psa_min_angle_rad': 'double',
        'psa_max_angle_rad': 'double',
        'psa_min_angle_speed_rad_s': 'double',
        'psa_max_angle_speed_rad_s': 'double',
        'psa_min_torque_m_nm': 'double',
        'psa_max_torque_m_nm': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.psa_min_angle_rad = kwargs.get('psa_min_angle_rad', float())
        self.psa_max_angle_rad = kwargs.get('psa_max_angle_rad', float())
        self.psa_min_angle_speed_rad_s = kwargs.get('psa_min_angle_speed_rad_s', float())
        self.psa_max_angle_speed_rad_s = kwargs.get('psa_max_angle_speed_rad_s', float())
        self.psa_min_torque_m_nm = kwargs.get('psa_min_torque_m_nm', float())
        self.psa_max_torque_m_nm = kwargs.get('psa_max_torque_m_nm', float())

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
        if self.psa_min_angle_rad != other.psa_min_angle_rad:
            return False
        if self.psa_max_angle_rad != other.psa_max_angle_rad:
            return False
        if self.psa_min_angle_speed_rad_s != other.psa_min_angle_speed_rad_s:
            return False
        if self.psa_max_angle_speed_rad_s != other.psa_max_angle_speed_rad_s:
            return False
        if self.psa_min_torque_m_nm != other.psa_min_torque_m_nm:
            return False
        if self.psa_max_torque_m_nm != other.psa_max_torque_m_nm:
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
    def psa_min_angle_rad(self):
        """Message field 'psa_min_angle_rad'."""
        return self._psa_min_angle_rad

    @psa_min_angle_rad.setter
    def psa_min_angle_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_min_angle_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_min_angle_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_min_angle_rad = value

    @builtins.property
    def psa_max_angle_rad(self):
        """Message field 'psa_max_angle_rad'."""
        return self._psa_max_angle_rad

    @psa_max_angle_rad.setter
    def psa_max_angle_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_max_angle_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_max_angle_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_max_angle_rad = value

    @builtins.property
    def psa_min_angle_speed_rad_s(self):
        """Message field 'psa_min_angle_speed_rad_s'."""
        return self._psa_min_angle_speed_rad_s

    @psa_min_angle_speed_rad_s.setter
    def psa_min_angle_speed_rad_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_min_angle_speed_rad_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_min_angle_speed_rad_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_min_angle_speed_rad_s = value

    @builtins.property
    def psa_max_angle_speed_rad_s(self):
        """Message field 'psa_max_angle_speed_rad_s'."""
        return self._psa_max_angle_speed_rad_s

    @psa_max_angle_speed_rad_s.setter
    def psa_max_angle_speed_rad_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_max_angle_speed_rad_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_max_angle_speed_rad_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_max_angle_speed_rad_s = value

    @builtins.property
    def psa_min_torque_m_nm(self):
        """Message field 'psa_min_torque_m_nm'."""
        return self._psa_min_torque_m_nm

    @psa_min_torque_m_nm.setter
    def psa_min_torque_m_nm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_min_torque_m_nm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_min_torque_m_nm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_min_torque_m_nm = value

    @builtins.property
    def psa_max_torque_m_nm(self):
        """Message field 'psa_max_torque_m_nm'."""
        return self._psa_max_torque_m_nm

    @psa_max_torque_m_nm.setter
    def psa_max_torque_m_nm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psa_max_torque_m_nm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psa_max_torque_m_nm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psa_max_torque_m_nm = value
