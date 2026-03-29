# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/EMStatus01Legacy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EMStatus01Legacy(type):
    """Metaclass of message 'EMStatus01Legacy'."""

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
                'sd_can_msgs.msg.EMStatus01Legacy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__em_status01_legacy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__em_status01_legacy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__em_status01_legacy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__em_status01_legacy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__em_status01_legacy

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


class EMStatus01Legacy(metaclass=Metaclass_EMStatus01Legacy):
    """Message class 'EMStatus01Legacy'."""

    __slots__ = [
        '_header',
        '_emb_line_pressure_bar',
        '_emb_tank_pressure_bar',
        '_em_status',
        '_hl_stop_deceleration_1',
        '_hl_stop_deceleration_2',
        '_hl_stop_time_to_dec_1',
        '_hl_stop_time_to_dec_2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'emb_line_pressure_bar': 'double',
        'emb_tank_pressure_bar': 'double',
        'em_status': 'uint16',
        'hl_stop_deceleration_1': 'double',
        'hl_stop_deceleration_2': 'double',
        'hl_stop_time_to_dec_1': 'double',
        'hl_stop_time_to_dec_2': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.emb_line_pressure_bar = kwargs.get('emb_line_pressure_bar', float())
        self.emb_tank_pressure_bar = kwargs.get('emb_tank_pressure_bar', float())
        self.em_status = kwargs.get('em_status', int())
        self.hl_stop_deceleration_1 = kwargs.get('hl_stop_deceleration_1', float())
        self.hl_stop_deceleration_2 = kwargs.get('hl_stop_deceleration_2', float())
        self.hl_stop_time_to_dec_1 = kwargs.get('hl_stop_time_to_dec_1', float())
        self.hl_stop_time_to_dec_2 = kwargs.get('hl_stop_time_to_dec_2', float())

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
        if self.emb_line_pressure_bar != other.emb_line_pressure_bar:
            return False
        if self.emb_tank_pressure_bar != other.emb_tank_pressure_bar:
            return False
        if self.em_status != other.em_status:
            return False
        if self.hl_stop_deceleration_1 != other.hl_stop_deceleration_1:
            return False
        if self.hl_stop_deceleration_2 != other.hl_stop_deceleration_2:
            return False
        if self.hl_stop_time_to_dec_1 != other.hl_stop_time_to_dec_1:
            return False
        if self.hl_stop_time_to_dec_2 != other.hl_stop_time_to_dec_2:
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
    def emb_line_pressure_bar(self):
        """Message field 'emb_line_pressure_bar'."""
        return self._emb_line_pressure_bar

    @emb_line_pressure_bar.setter
    def emb_line_pressure_bar(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'emb_line_pressure_bar' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'emb_line_pressure_bar' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._emb_line_pressure_bar = value

    @builtins.property
    def emb_tank_pressure_bar(self):
        """Message field 'emb_tank_pressure_bar'."""
        return self._emb_tank_pressure_bar

    @emb_tank_pressure_bar.setter
    def emb_tank_pressure_bar(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'emb_tank_pressure_bar' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'emb_tank_pressure_bar' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._emb_tank_pressure_bar = value

    @builtins.property
    def em_status(self):
        """Message field 'em_status'."""
        return self._em_status

    @em_status.setter
    def em_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'em_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'em_status' field must be an unsigned integer in [0, 65535]"
        self._em_status = value

    @builtins.property
    def hl_stop_deceleration_1(self):
        """Message field 'hl_stop_deceleration_1'."""
        return self._hl_stop_deceleration_1

    @hl_stop_deceleration_1.setter
    def hl_stop_deceleration_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hl_stop_deceleration_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hl_stop_deceleration_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hl_stop_deceleration_1 = value

    @builtins.property
    def hl_stop_deceleration_2(self):
        """Message field 'hl_stop_deceleration_2'."""
        return self._hl_stop_deceleration_2

    @hl_stop_deceleration_2.setter
    def hl_stop_deceleration_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hl_stop_deceleration_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hl_stop_deceleration_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hl_stop_deceleration_2 = value

    @builtins.property
    def hl_stop_time_to_dec_1(self):
        """Message field 'hl_stop_time_to_dec_1'."""
        return self._hl_stop_time_to_dec_1

    @hl_stop_time_to_dec_1.setter
    def hl_stop_time_to_dec_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hl_stop_time_to_dec_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hl_stop_time_to_dec_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hl_stop_time_to_dec_1 = value

    @builtins.property
    def hl_stop_time_to_dec_2(self):
        """Message field 'hl_stop_time_to_dec_2'."""
        return self._hl_stop_time_to_dec_2

    @hl_stop_time_to_dec_2.setter
    def hl_stop_time_to_dec_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hl_stop_time_to_dec_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hl_stop_time_to_dec_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hl_stop_time_to_dec_2 = value
