# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/MM710TX3YAZ.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MM710TX3YAZ(type):
    """Metaclass of message 'MM710TX3YAZ'."""

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
                'sd_can_msgs.msg.MM710TX3YAZ')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mm710_tx3_yaz
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mm710_tx3_yaz
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mm710_tx3_yaz
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mm710_tx3_yaz
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mm710_tx3_yaz

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


class MM710TX3YAZ(metaclass=Metaclass_MM710TX3YAZ):
    """Message class 'MM710TX3YAZ'."""

    __slots__ = [
        '_header',
        '_crc',
        '_az_stat',
        '_msg_cnt',
        '_az',
        '_pitch_rate_stat',
        '_hw_index',
        '_pitch_rate',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'crc': 'uint8',
        'az_stat': 'uint8',
        'msg_cnt': 'uint8',
        'az': 'double',
        'pitch_rate_stat': 'uint8',
        'hw_index': 'int8',
        'pitch_rate': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.crc = kwargs.get('crc', int())
        self.az_stat = kwargs.get('az_stat', int())
        self.msg_cnt = kwargs.get('msg_cnt', int())
        self.az = kwargs.get('az', float())
        self.pitch_rate_stat = kwargs.get('pitch_rate_stat', int())
        self.hw_index = kwargs.get('hw_index', int())
        self.pitch_rate = kwargs.get('pitch_rate', float())

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
        if self.crc != other.crc:
            return False
        if self.az_stat != other.az_stat:
            return False
        if self.msg_cnt != other.msg_cnt:
            return False
        if self.az != other.az:
            return False
        if self.pitch_rate_stat != other.pitch_rate_stat:
            return False
        if self.hw_index != other.hw_index:
            return False
        if self.pitch_rate != other.pitch_rate:
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
    def crc(self):
        """Message field 'crc'."""
        return self._crc

    @crc.setter
    def crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crc' field must be an unsigned integer in [0, 255]"
        self._crc = value

    @builtins.property
    def az_stat(self):
        """Message field 'az_stat'."""
        return self._az_stat

    @az_stat.setter
    def az_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'az_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'az_stat' field must be an unsigned integer in [0, 255]"
        self._az_stat = value

    @builtins.property
    def msg_cnt(self):
        """Message field 'msg_cnt'."""
        return self._msg_cnt

    @msg_cnt.setter
    def msg_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_cnt' field must be an unsigned integer in [0, 255]"
        self._msg_cnt = value

    @builtins.property
    def az(self):
        """Message field 'az'."""
        return self._az

    @az.setter
    def az(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'az' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._az = value

    @builtins.property
    def pitch_rate_stat(self):
        """Message field 'pitch_rate_stat'."""
        return self._pitch_rate_stat

    @pitch_rate_stat.setter
    def pitch_rate_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pitch_rate_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pitch_rate_stat' field must be an unsigned integer in [0, 255]"
        self._pitch_rate_stat = value

    @builtins.property
    def hw_index(self):
        """Message field 'hw_index'."""
        return self._hw_index

    @hw_index.setter
    def hw_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hw_index' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'hw_index' field must be an integer in [-128, 127]"
        self._hw_index = value

    @builtins.property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch_rate = value
