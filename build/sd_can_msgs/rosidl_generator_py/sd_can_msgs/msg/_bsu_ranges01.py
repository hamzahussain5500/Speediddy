# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/BSURanges01.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSURanges01(type):
    """Metaclass of message 'BSURanges01'."""

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
                'sd_can_msgs.msg.BSURanges01')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsu_ranges01
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsu_ranges01
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsu_ranges01
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsu_ranges01
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsu_ranges01

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


class BSURanges01(metaclass=Metaclass_BSURanges01):
    """Message class 'BSURanges01'."""

    __slots__ = [
        '_header',
        '_cba_min_pressure_fl_pa',
        '_cba_max_pressure_fl_pa',
        '_cba_min_pressure_fr_pa',
        '_cba_max_pressure_fr_pa',
        '_cba_min_pressure_rl_pa',
        '_cba_max_pressure_rl_pa',
        '_cba_min_pressure_rr_pa',
        '_cba_max_pressure_rr_pa',
        '_ice_max_throttle',
        '_ice_min_throttle',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cba_min_pressure_fl_pa': 'double',
        'cba_max_pressure_fl_pa': 'double',
        'cba_min_pressure_fr_pa': 'double',
        'cba_max_pressure_fr_pa': 'double',
        'cba_min_pressure_rl_pa': 'double',
        'cba_max_pressure_rl_pa': 'double',
        'cba_min_pressure_rr_pa': 'double',
        'cba_max_pressure_rr_pa': 'double',
        'ice_max_throttle': 'double',
        'ice_min_throttle': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.cba_min_pressure_fl_pa = kwargs.get('cba_min_pressure_fl_pa', float())
        self.cba_max_pressure_fl_pa = kwargs.get('cba_max_pressure_fl_pa', float())
        self.cba_min_pressure_fr_pa = kwargs.get('cba_min_pressure_fr_pa', float())
        self.cba_max_pressure_fr_pa = kwargs.get('cba_max_pressure_fr_pa', float())
        self.cba_min_pressure_rl_pa = kwargs.get('cba_min_pressure_rl_pa', float())
        self.cba_max_pressure_rl_pa = kwargs.get('cba_max_pressure_rl_pa', float())
        self.cba_min_pressure_rr_pa = kwargs.get('cba_min_pressure_rr_pa', float())
        self.cba_max_pressure_rr_pa = kwargs.get('cba_max_pressure_rr_pa', float())
        self.ice_max_throttle = kwargs.get('ice_max_throttle', float())
        self.ice_min_throttle = kwargs.get('ice_min_throttle', float())

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
        if self.cba_min_pressure_fl_pa != other.cba_min_pressure_fl_pa:
            return False
        if self.cba_max_pressure_fl_pa != other.cba_max_pressure_fl_pa:
            return False
        if self.cba_min_pressure_fr_pa != other.cba_min_pressure_fr_pa:
            return False
        if self.cba_max_pressure_fr_pa != other.cba_max_pressure_fr_pa:
            return False
        if self.cba_min_pressure_rl_pa != other.cba_min_pressure_rl_pa:
            return False
        if self.cba_max_pressure_rl_pa != other.cba_max_pressure_rl_pa:
            return False
        if self.cba_min_pressure_rr_pa != other.cba_min_pressure_rr_pa:
            return False
        if self.cba_max_pressure_rr_pa != other.cba_max_pressure_rr_pa:
            return False
        if self.ice_max_throttle != other.ice_max_throttle:
            return False
        if self.ice_min_throttle != other.ice_min_throttle:
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
    def cba_min_pressure_fl_pa(self):
        """Message field 'cba_min_pressure_fl_pa'."""
        return self._cba_min_pressure_fl_pa

    @cba_min_pressure_fl_pa.setter
    def cba_min_pressure_fl_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_min_pressure_fl_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_min_pressure_fl_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_min_pressure_fl_pa = value

    @builtins.property
    def cba_max_pressure_fl_pa(self):
        """Message field 'cba_max_pressure_fl_pa'."""
        return self._cba_max_pressure_fl_pa

    @cba_max_pressure_fl_pa.setter
    def cba_max_pressure_fl_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_max_pressure_fl_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_max_pressure_fl_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_max_pressure_fl_pa = value

    @builtins.property
    def cba_min_pressure_fr_pa(self):
        """Message field 'cba_min_pressure_fr_pa'."""
        return self._cba_min_pressure_fr_pa

    @cba_min_pressure_fr_pa.setter
    def cba_min_pressure_fr_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_min_pressure_fr_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_min_pressure_fr_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_min_pressure_fr_pa = value

    @builtins.property
    def cba_max_pressure_fr_pa(self):
        """Message field 'cba_max_pressure_fr_pa'."""
        return self._cba_max_pressure_fr_pa

    @cba_max_pressure_fr_pa.setter
    def cba_max_pressure_fr_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_max_pressure_fr_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_max_pressure_fr_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_max_pressure_fr_pa = value

    @builtins.property
    def cba_min_pressure_rl_pa(self):
        """Message field 'cba_min_pressure_rl_pa'."""
        return self._cba_min_pressure_rl_pa

    @cba_min_pressure_rl_pa.setter
    def cba_min_pressure_rl_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_min_pressure_rl_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_min_pressure_rl_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_min_pressure_rl_pa = value

    @builtins.property
    def cba_max_pressure_rl_pa(self):
        """Message field 'cba_max_pressure_rl_pa'."""
        return self._cba_max_pressure_rl_pa

    @cba_max_pressure_rl_pa.setter
    def cba_max_pressure_rl_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_max_pressure_rl_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_max_pressure_rl_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_max_pressure_rl_pa = value

    @builtins.property
    def cba_min_pressure_rr_pa(self):
        """Message field 'cba_min_pressure_rr_pa'."""
        return self._cba_min_pressure_rr_pa

    @cba_min_pressure_rr_pa.setter
    def cba_min_pressure_rr_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_min_pressure_rr_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_min_pressure_rr_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_min_pressure_rr_pa = value

    @builtins.property
    def cba_max_pressure_rr_pa(self):
        """Message field 'cba_max_pressure_rr_pa'."""
        return self._cba_max_pressure_rr_pa

    @cba_max_pressure_rr_pa.setter
    def cba_max_pressure_rr_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_max_pressure_rr_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_max_pressure_rr_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_max_pressure_rr_pa = value

    @builtins.property
    def ice_max_throttle(self):
        """Message field 'ice_max_throttle'."""
        return self._ice_max_throttle

    @ice_max_throttle.setter
    def ice_max_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_max_throttle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_max_throttle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_max_throttle = value

    @builtins.property
    def ice_min_throttle(self):
        """Message field 'ice_min_throttle'."""
        return self._ice_min_throttle

    @ice_min_throttle.setter
    def ice_min_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_min_throttle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_min_throttle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_min_throttle = value
