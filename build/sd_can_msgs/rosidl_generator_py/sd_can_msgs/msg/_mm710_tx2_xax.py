# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/MM710TX2XAX.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MM710TX2XAX(type):
    """Metaclass of message 'MM710TX2XAX'."""

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
                'sd_can_msgs.msg.MM710TX2XAX')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mm710_tx2_xax
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mm710_tx2_xax
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mm710_tx2_xax
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mm710_tx2_xax
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mm710_tx2_xax

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


class MM710TX2XAX(metaclass=Metaclass_MM710TX2XAX):
    """Message class 'MM710TX2XAX'."""

    __slots__ = [
        '_header',
        '_crc',
        '_ax_stat',
        '_msg_cnt',
        '_ax',
        '_clu_diag',
        '_roll_rate_stat',
        '_clu_stat',
        '_roll_rate',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'crc': 'uint8',
        'ax_stat': 'uint8',
        'msg_cnt': 'uint8',
        'ax': 'double',
        'clu_diag': 'uint8',
        'roll_rate_stat': 'uint8',
        'clu_stat': 'uint8',
        'roll_rate': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.crc = kwargs.get('crc', int())
        self.ax_stat = kwargs.get('ax_stat', int())
        self.msg_cnt = kwargs.get('msg_cnt', int())
        self.ax = kwargs.get('ax', float())
        self.clu_diag = kwargs.get('clu_diag', int())
        self.roll_rate_stat = kwargs.get('roll_rate_stat', int())
        self.clu_stat = kwargs.get('clu_stat', int())
        self.roll_rate = kwargs.get('roll_rate', float())

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
        if self.ax_stat != other.ax_stat:
            return False
        if self.msg_cnt != other.msg_cnt:
            return False
        if self.ax != other.ax:
            return False
        if self.clu_diag != other.clu_diag:
            return False
        if self.roll_rate_stat != other.roll_rate_stat:
            return False
        if self.clu_stat != other.clu_stat:
            return False
        if self.roll_rate != other.roll_rate:
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
    def ax_stat(self):
        """Message field 'ax_stat'."""
        return self._ax_stat

    @ax_stat.setter
    def ax_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ax_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ax_stat' field must be an unsigned integer in [0, 255]"
        self._ax_stat = value

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
    def ax(self):
        """Message field 'ax'."""
        return self._ax

    @ax.setter
    def ax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ax' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ax = value

    @builtins.property
    def clu_diag(self):
        """Message field 'clu_diag'."""
        return self._clu_diag

    @clu_diag.setter
    def clu_diag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clu_diag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'clu_diag' field must be an unsigned integer in [0, 255]"
        self._clu_diag = value

    @builtins.property
    def roll_rate_stat(self):
        """Message field 'roll_rate_stat'."""
        return self._roll_rate_stat

    @roll_rate_stat.setter
    def roll_rate_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roll_rate_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'roll_rate_stat' field must be an unsigned integer in [0, 255]"
        self._roll_rate_stat = value

    @builtins.property
    def clu_stat(self):
        """Message field 'clu_stat'."""
        return self._clu_stat

    @clu_stat.setter
    def clu_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clu_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'clu_stat' field must be an unsigned integer in [0, 255]"
        self._clu_stat = value

    @builtins.property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll_rate = value
