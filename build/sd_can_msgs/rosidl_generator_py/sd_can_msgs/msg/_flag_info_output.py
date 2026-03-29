# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/FlagInfoOutput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FlagInfoOutput(type):
    """Metaclass of message 'FlagInfoOutput'."""

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
                'sd_can_msgs.msg.FlagInfoOutput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__flag_info_output
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__flag_info_output
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__flag_info_output
            cls._TYPE_SUPPORT = module.type_support_msg__msg__flag_info_output
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__flag_info_output

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


class FlagInfoOutput(metaclass=Metaclass_FlagInfoOutput):
    """Message class 'FlagInfoOutput'."""

    __slots__ = [
        '_header',
        '_led_status',
        '_free_running_counter',
        '_spare1_0x7_c',
        '_spare2_0x7_c',
        '_sm_session_type',
        '_sm_track_flag',
        '_sm_car_flag',
        '_crc_sm',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'led_status': 'uint8',
        'free_running_counter': 'uint8',
        'spare1_0x7_c': 'uint8',
        'spare2_0x7_c': 'uint8',
        'sm_session_type': 'uint8',
        'sm_track_flag': 'uint8',
        'sm_car_flag': 'uint8',
        'crc_sm': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.led_status = kwargs.get('led_status', int())
        self.free_running_counter = kwargs.get('free_running_counter', int())
        self.spare1_0x7_c = kwargs.get('spare1_0x7_c', int())
        self.spare2_0x7_c = kwargs.get('spare2_0x7_c', int())
        self.sm_session_type = kwargs.get('sm_session_type', int())
        self.sm_track_flag = kwargs.get('sm_track_flag', int())
        self.sm_car_flag = kwargs.get('sm_car_flag', int())
        self.crc_sm = kwargs.get('crc_sm', int())

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
        if self.led_status != other.led_status:
            return False
        if self.free_running_counter != other.free_running_counter:
            return False
        if self.spare1_0x7_c != other.spare1_0x7_c:
            return False
        if self.spare2_0x7_c != other.spare2_0x7_c:
            return False
        if self.sm_session_type != other.sm_session_type:
            return False
        if self.sm_track_flag != other.sm_track_flag:
            return False
        if self.sm_car_flag != other.sm_car_flag:
            return False
        if self.crc_sm != other.crc_sm:
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
    def led_status(self):
        """Message field 'led_status'."""
        return self._led_status

    @led_status.setter
    def led_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led_status' field must be an unsigned integer in [0, 255]"
        self._led_status = value

    @builtins.property
    def free_running_counter(self):
        """Message field 'free_running_counter'."""
        return self._free_running_counter

    @free_running_counter.setter
    def free_running_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'free_running_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'free_running_counter' field must be an unsigned integer in [0, 255]"
        self._free_running_counter = value

    @builtins.property
    def spare1_0x7_c(self):
        """Message field 'spare1_0x7_c'."""
        return self._spare1_0x7_c

    @spare1_0x7_c.setter
    def spare1_0x7_c(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spare1_0x7_c' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spare1_0x7_c' field must be an unsigned integer in [0, 255]"
        self._spare1_0x7_c = value

    @builtins.property
    def spare2_0x7_c(self):
        """Message field 'spare2_0x7_c'."""
        return self._spare2_0x7_c

    @spare2_0x7_c.setter
    def spare2_0x7_c(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spare2_0x7_c' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spare2_0x7_c' field must be an unsigned integer in [0, 255]"
        self._spare2_0x7_c = value

    @builtins.property
    def sm_session_type(self):
        """Message field 'sm_session_type'."""
        return self._sm_session_type

    @sm_session_type.setter
    def sm_session_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_session_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_session_type' field must be an unsigned integer in [0, 255]"
        self._sm_session_type = value

    @builtins.property
    def sm_track_flag(self):
        """Message field 'sm_track_flag'."""
        return self._sm_track_flag

    @sm_track_flag.setter
    def sm_track_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_track_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_track_flag' field must be an unsigned integer in [0, 255]"
        self._sm_track_flag = value

    @builtins.property
    def sm_car_flag(self):
        """Message field 'sm_car_flag'."""
        return self._sm_car_flag

    @sm_car_flag.setter
    def sm_car_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_car_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_car_flag' field must be an unsigned integer in [0, 255]"
        self._sm_car_flag = value

    @builtins.property
    def crc_sm(self):
        """Message field 'crc_sm'."""
        return self._crc_sm

    @crc_sm.setter
    def crc_sm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crc_sm' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crc_sm' field must be an unsigned integer in [0, 255]"
        self._crc_sm = value
