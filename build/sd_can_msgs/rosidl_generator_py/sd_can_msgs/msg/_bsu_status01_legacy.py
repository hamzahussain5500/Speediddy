# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/BSUStatus01Legacy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSUStatus01Legacy(type):
    """Metaclass of message 'BSUStatus01Legacy'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BSU_HL_STOP_REQUEST_FALSE': 0,
        'BSU_HL_STOP_REQUEST_TRUE': 1,
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
                'sd_can_msgs.msg.BSUStatus01Legacy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsu_status01_legacy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsu_status01_legacy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsu_status01_legacy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsu_status01_legacy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsu_status01_legacy

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BSU_HL_STOP_REQUEST_FALSE': cls.__constants['BSU_HL_STOP_REQUEST_FALSE'],
            'BSU_HL_STOP_REQUEST_TRUE': cls.__constants['BSU_HL_STOP_REQUEST_TRUE'],
        }

    @property
    def BSU_HL_STOP_REQUEST_FALSE(self):
        """Message constant 'BSU_HL_STOP_REQUEST_FALSE'."""
        return Metaclass_BSUStatus01Legacy.__constants['BSU_HL_STOP_REQUEST_FALSE']

    @property
    def BSU_HL_STOP_REQUEST_TRUE(self):
        """Message constant 'BSU_HL_STOP_REQUEST_TRUE'."""
        return Metaclass_BSUStatus01Legacy.__constants['BSU_HL_STOP_REQUEST_TRUE']


class BSUStatus01Legacy(metaclass=Metaclass_BSUStatus01Legacy):
    """
    Message class 'BSUStatus01Legacy'.

    Constants:
      BSU_HL_STOP_REQUEST_FALSE
      BSU_HL_STOP_REQUEST_TRUE
    """

    __slots__ = [
        '_header',
        '_bsu_hl_stop_request',
        '_bsu_hl_warning',
        '_bsu_em_stop_activated',
        '_bsu_ml_stop_activated',
        '_bsu_alive_counter',
        '_bsu_status',
        '_abs_external_enable_ack',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'bsu_hl_stop_request': 'uint8',
        'bsu_hl_warning': 'uint8',
        'bsu_em_stop_activated': 'uint8',
        'bsu_ml_stop_activated': 'uint8',
        'bsu_alive_counter': 'uint8',
        'bsu_status': 'uint16',
        'abs_external_enable_ack': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.bsu_hl_stop_request = kwargs.get('bsu_hl_stop_request', int())
        self.bsu_hl_warning = kwargs.get('bsu_hl_warning', int())
        self.bsu_em_stop_activated = kwargs.get('bsu_em_stop_activated', int())
        self.bsu_ml_stop_activated = kwargs.get('bsu_ml_stop_activated', int())
        self.bsu_alive_counter = kwargs.get('bsu_alive_counter', int())
        self.bsu_status = kwargs.get('bsu_status', int())
        self.abs_external_enable_ack = kwargs.get('abs_external_enable_ack', int())

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
        if self.bsu_hl_stop_request != other.bsu_hl_stop_request:
            return False
        if self.bsu_hl_warning != other.bsu_hl_warning:
            return False
        if self.bsu_em_stop_activated != other.bsu_em_stop_activated:
            return False
        if self.bsu_ml_stop_activated != other.bsu_ml_stop_activated:
            return False
        if self.bsu_alive_counter != other.bsu_alive_counter:
            return False
        if self.bsu_status != other.bsu_status:
            return False
        if self.abs_external_enable_ack != other.abs_external_enable_ack:
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
    def bsu_hl_stop_request(self):
        """Message field 'bsu_hl_stop_request'."""
        return self._bsu_hl_stop_request

    @bsu_hl_stop_request.setter
    def bsu_hl_stop_request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsu_hl_stop_request' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsu_hl_stop_request' field must be an unsigned integer in [0, 255]"
        self._bsu_hl_stop_request = value

    @builtins.property
    def bsu_hl_warning(self):
        """Message field 'bsu_hl_warning'."""
        return self._bsu_hl_warning

    @bsu_hl_warning.setter
    def bsu_hl_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsu_hl_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsu_hl_warning' field must be an unsigned integer in [0, 255]"
        self._bsu_hl_warning = value

    @builtins.property
    def bsu_em_stop_activated(self):
        """Message field 'bsu_em_stop_activated'."""
        return self._bsu_em_stop_activated

    @bsu_em_stop_activated.setter
    def bsu_em_stop_activated(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsu_em_stop_activated' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsu_em_stop_activated' field must be an unsigned integer in [0, 255]"
        self._bsu_em_stop_activated = value

    @builtins.property
    def bsu_ml_stop_activated(self):
        """Message field 'bsu_ml_stop_activated'."""
        return self._bsu_ml_stop_activated

    @bsu_ml_stop_activated.setter
    def bsu_ml_stop_activated(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsu_ml_stop_activated' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsu_ml_stop_activated' field must be an unsigned integer in [0, 255]"
        self._bsu_ml_stop_activated = value

    @builtins.property
    def bsu_alive_counter(self):
        """Message field 'bsu_alive_counter'."""
        return self._bsu_alive_counter

    @bsu_alive_counter.setter
    def bsu_alive_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsu_alive_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsu_alive_counter' field must be an unsigned integer in [0, 255]"
        self._bsu_alive_counter = value

    @builtins.property
    def bsu_status(self):
        """Message field 'bsu_status'."""
        return self._bsu_status

    @bsu_status.setter
    def bsu_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsu_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bsu_status' field must be an unsigned integer in [0, 65535]"
        self._bsu_status = value

    @builtins.property
    def abs_external_enable_ack(self):
        """Message field 'abs_external_enable_ack'."""
        return self._abs_external_enable_ack

    @abs_external_enable_ack.setter
    def abs_external_enable_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'abs_external_enable_ack' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'abs_external_enable_ack' field must be an unsigned integer in [0, 255]"
        self._abs_external_enable_ack = value
