# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/PdUsStatus01.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PdUsStatus01(type):
    """Metaclass of message 'PdUsStatus01'."""

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
                'sd_can_msgs.msg.PdUsStatus01')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pd_us_status01
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pd_us_status01
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pd_us_status01
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pd_us_status01
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pd_us_status01

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


class PdUsStatus01(metaclass=Metaclass_PdUsStatus01):
    """Message class 'PdUsStatus01'."""

    __slots__ = [
        '_header',
        '_pdu12_power_supply_voltage_v',
        '_pdu12_total_current_a',
        '_pdu48_power_supply_voltage_v',
        '_pdu48_total_current_a',
        '_pdu1_power_supply_voltage_v_legacy',
        '_pdu1_total_current_a_legacy',
        '_pdu2_power_supply_voltage_v_legacy',
        '_pdu2_total_current_a_legacy',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pdu12_power_supply_voltage_v': 'double',
        'pdu12_total_current_a': 'double',
        'pdu48_power_supply_voltage_v': 'double',
        'pdu48_total_current_a': 'double',
        'pdu1_power_supply_voltage_v_legacy': 'double',
        'pdu1_total_current_a_legacy': 'double',
        'pdu2_power_supply_voltage_v_legacy': 'double',
        'pdu2_total_current_a_legacy': 'double',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pdu12_power_supply_voltage_v = kwargs.get('pdu12_power_supply_voltage_v', float())
        self.pdu12_total_current_a = kwargs.get('pdu12_total_current_a', float())
        self.pdu48_power_supply_voltage_v = kwargs.get('pdu48_power_supply_voltage_v', float())
        self.pdu48_total_current_a = kwargs.get('pdu48_total_current_a', float())
        self.pdu1_power_supply_voltage_v_legacy = kwargs.get('pdu1_power_supply_voltage_v_legacy', float())
        self.pdu1_total_current_a_legacy = kwargs.get('pdu1_total_current_a_legacy', float())
        self.pdu2_power_supply_voltage_v_legacy = kwargs.get('pdu2_power_supply_voltage_v_legacy', float())
        self.pdu2_total_current_a_legacy = kwargs.get('pdu2_total_current_a_legacy', float())

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
        if self.pdu12_power_supply_voltage_v != other.pdu12_power_supply_voltage_v:
            return False
        if self.pdu12_total_current_a != other.pdu12_total_current_a:
            return False
        if self.pdu48_power_supply_voltage_v != other.pdu48_power_supply_voltage_v:
            return False
        if self.pdu48_total_current_a != other.pdu48_total_current_a:
            return False
        if self.pdu1_power_supply_voltage_v_legacy != other.pdu1_power_supply_voltage_v_legacy:
            return False
        if self.pdu1_total_current_a_legacy != other.pdu1_total_current_a_legacy:
            return False
        if self.pdu2_power_supply_voltage_v_legacy != other.pdu2_power_supply_voltage_v_legacy:
            return False
        if self.pdu2_total_current_a_legacy != other.pdu2_total_current_a_legacy:
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
    def pdu12_power_supply_voltage_v(self):
        """Message field 'pdu12_power_supply_voltage_v'."""
        return self._pdu12_power_supply_voltage_v

    @pdu12_power_supply_voltage_v.setter
    def pdu12_power_supply_voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdu12_power_supply_voltage_v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdu12_power_supply_voltage_v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdu12_power_supply_voltage_v = value

    @builtins.property
    def pdu12_total_current_a(self):
        """Message field 'pdu12_total_current_a'."""
        return self._pdu12_total_current_a

    @pdu12_total_current_a.setter
    def pdu12_total_current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdu12_total_current_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdu12_total_current_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdu12_total_current_a = value

    @builtins.property
    def pdu48_power_supply_voltage_v(self):
        """Message field 'pdu48_power_supply_voltage_v'."""
        return self._pdu48_power_supply_voltage_v

    @pdu48_power_supply_voltage_v.setter
    def pdu48_power_supply_voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdu48_power_supply_voltage_v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdu48_power_supply_voltage_v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdu48_power_supply_voltage_v = value

    @builtins.property
    def pdu48_total_current_a(self):
        """Message field 'pdu48_total_current_a'."""
        return self._pdu48_total_current_a

    @pdu48_total_current_a.setter
    def pdu48_total_current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdu48_total_current_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdu48_total_current_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdu48_total_current_a = value

    @builtins.property
    def pdu1_power_supply_voltage_v_legacy(self):
        """Message field 'pdu1_power_supply_voltage_v_legacy'."""
        return self._pdu1_power_supply_voltage_v_legacy

    @pdu1_power_supply_voltage_v_legacy.setter
    def pdu1_power_supply_voltage_v_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdu1_power_supply_voltage_v_legacy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdu1_power_supply_voltage_v_legacy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdu1_power_supply_voltage_v_legacy = value

    @builtins.property
    def pdu1_total_current_a_legacy(self):
        """Message field 'pdu1_total_current_a_legacy'."""
        return self._pdu1_total_current_a_legacy

    @pdu1_total_current_a_legacy.setter
    def pdu1_total_current_a_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdu1_total_current_a_legacy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdu1_total_current_a_legacy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdu1_total_current_a_legacy = value

    @builtins.property
    def pdu2_power_supply_voltage_v_legacy(self):
        """Message field 'pdu2_power_supply_voltage_v_legacy'."""
        return self._pdu2_power_supply_voltage_v_legacy

    @pdu2_power_supply_voltage_v_legacy.setter
    def pdu2_power_supply_voltage_v_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdu2_power_supply_voltage_v_legacy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdu2_power_supply_voltage_v_legacy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdu2_power_supply_voltage_v_legacy = value

    @builtins.property
    def pdu2_total_current_a_legacy(self):
        """Message field 'pdu2_total_current_a_legacy'."""
        return self._pdu2_total_current_a_legacy

    @pdu2_total_current_a_legacy.setter
    def pdu2_total_current_a_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdu2_total_current_a_legacy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdu2_total_current_a_legacy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdu2_total_current_a_legacy = value
