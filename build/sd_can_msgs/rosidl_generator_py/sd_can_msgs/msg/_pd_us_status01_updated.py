# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/PdUsStatus01Updated.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PdUsStatus01Updated(type):
    """Metaclass of message 'PdUsStatus01Updated'."""

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
                'sd_can_msgs.msg.PdUsStatus01Updated')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pd_us_status01_updated
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pd_us_status01_updated
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pd_us_status01_updated
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pd_us_status01_updated
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pd_us_status01_updated

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


class PdUsStatus01Updated(metaclass=Metaclass_PdUsStatus01Updated):
    """Message class 'PdUsStatus01Updated'."""

    __slots__ = [
        '_header',
        '_pdu12_power_supply_voltage_v',
        '_pdu12_total_current_a',
        '_pdu48_power_supply_voltage_v',
        '_pdu48_total_current_a',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pdu12_power_supply_voltage_v': 'uint16',
        'pdu12_total_current_a': 'uint16',
        'pdu48_power_supply_voltage_v': 'uint16',
        'pdu48_total_current_a': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pdu12_power_supply_voltage_v = kwargs.get('pdu12_power_supply_voltage_v', int())
        self.pdu12_total_current_a = kwargs.get('pdu12_total_current_a', int())
        self.pdu48_power_supply_voltage_v = kwargs.get('pdu48_power_supply_voltage_v', int())
        self.pdu48_total_current_a = kwargs.get('pdu48_total_current_a', int())

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
                isinstance(value, int), \
                "The 'pdu12_power_supply_voltage_v' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pdu12_power_supply_voltage_v' field must be an unsigned integer in [0, 65535]"
        self._pdu12_power_supply_voltage_v = value

    @builtins.property
    def pdu12_total_current_a(self):
        """Message field 'pdu12_total_current_a'."""
        return self._pdu12_total_current_a

    @pdu12_total_current_a.setter
    def pdu12_total_current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu12_total_current_a' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pdu12_total_current_a' field must be an unsigned integer in [0, 65535]"
        self._pdu12_total_current_a = value

    @builtins.property
    def pdu48_power_supply_voltage_v(self):
        """Message field 'pdu48_power_supply_voltage_v'."""
        return self._pdu48_power_supply_voltage_v

    @pdu48_power_supply_voltage_v.setter
    def pdu48_power_supply_voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu48_power_supply_voltage_v' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pdu48_power_supply_voltage_v' field must be an unsigned integer in [0, 65535]"
        self._pdu48_power_supply_voltage_v = value

    @builtins.property
    def pdu48_total_current_a(self):
        """Message field 'pdu48_total_current_a'."""
        return self._pdu48_total_current_a

    @pdu48_total_current_a.setter
    def pdu48_total_current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu48_total_current_a' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pdu48_total_current_a' field must be an unsigned integer in [0, 65535]"
        self._pdu48_total_current_a = value
