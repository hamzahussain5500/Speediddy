# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/HLPCInfo1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HLPCInfo1(type):
    """Metaclass of message 'HLPCInfo1'."""

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
                'sd_can_msgs.msg.HLPCInfo1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hlpc_info1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hlpc_info1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hlpc_info1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hlpc_info1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hlpc_info1

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


class HLPCInfo1(metaclass=Metaclass_HLPCInfo1):
    """Message class 'HLPCInfo1'."""

    __slots__ = [
        '_header',
        '_hlpc_network_ping',
        '_hlpc_lidar_status_left',
        '_hlpc_lidar_status_front',
        '_hlpc_lidar_status_right',
        '_hlpc_radar_status_front',
        '_hlpc_radar_status_left',
        '_hlpc_radar_status_right',
        '_hlpc_radar_status_rear',
        '_hlpc_vector_nav_fix',
        '_hlpc_alive_c4',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hlpc_network_ping': 'uint16',
        'hlpc_lidar_status_left': 'uint8',
        'hlpc_lidar_status_front': 'uint8',
        'hlpc_lidar_status_right': 'uint8',
        'hlpc_radar_status_front': 'uint8',
        'hlpc_radar_status_left': 'uint8',
        'hlpc_radar_status_right': 'uint8',
        'hlpc_radar_status_rear': 'uint8',
        'hlpc_vector_nav_fix': 'uint8',
        'hlpc_alive_c4': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.hlpc_network_ping = kwargs.get('hlpc_network_ping', int())
        self.hlpc_lidar_status_left = kwargs.get('hlpc_lidar_status_left', int())
        self.hlpc_lidar_status_front = kwargs.get('hlpc_lidar_status_front', int())
        self.hlpc_lidar_status_right = kwargs.get('hlpc_lidar_status_right', int())
        self.hlpc_radar_status_front = kwargs.get('hlpc_radar_status_front', int())
        self.hlpc_radar_status_left = kwargs.get('hlpc_radar_status_left', int())
        self.hlpc_radar_status_right = kwargs.get('hlpc_radar_status_right', int())
        self.hlpc_radar_status_rear = kwargs.get('hlpc_radar_status_rear', int())
        self.hlpc_vector_nav_fix = kwargs.get('hlpc_vector_nav_fix', int())
        self.hlpc_alive_c4 = kwargs.get('hlpc_alive_c4', int())

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
        if self.hlpc_network_ping != other.hlpc_network_ping:
            return False
        if self.hlpc_lidar_status_left != other.hlpc_lidar_status_left:
            return False
        if self.hlpc_lidar_status_front != other.hlpc_lidar_status_front:
            return False
        if self.hlpc_lidar_status_right != other.hlpc_lidar_status_right:
            return False
        if self.hlpc_radar_status_front != other.hlpc_radar_status_front:
            return False
        if self.hlpc_radar_status_left != other.hlpc_radar_status_left:
            return False
        if self.hlpc_radar_status_right != other.hlpc_radar_status_right:
            return False
        if self.hlpc_radar_status_rear != other.hlpc_radar_status_rear:
            return False
        if self.hlpc_vector_nav_fix != other.hlpc_vector_nav_fix:
            return False
        if self.hlpc_alive_c4 != other.hlpc_alive_c4:
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
    def hlpc_network_ping(self):
        """Message field 'hlpc_network_ping'."""
        return self._hlpc_network_ping

    @hlpc_network_ping.setter
    def hlpc_network_ping(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_network_ping' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hlpc_network_ping' field must be an unsigned integer in [0, 65535]"
        self._hlpc_network_ping = value

    @builtins.property
    def hlpc_lidar_status_left(self):
        """Message field 'hlpc_lidar_status_left'."""
        return self._hlpc_lidar_status_left

    @hlpc_lidar_status_left.setter
    def hlpc_lidar_status_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_lidar_status_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_lidar_status_left' field must be an unsigned integer in [0, 255]"
        self._hlpc_lidar_status_left = value

    @builtins.property
    def hlpc_lidar_status_front(self):
        """Message field 'hlpc_lidar_status_front'."""
        return self._hlpc_lidar_status_front

    @hlpc_lidar_status_front.setter
    def hlpc_lidar_status_front(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_lidar_status_front' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_lidar_status_front' field must be an unsigned integer in [0, 255]"
        self._hlpc_lidar_status_front = value

    @builtins.property
    def hlpc_lidar_status_right(self):
        """Message field 'hlpc_lidar_status_right'."""
        return self._hlpc_lidar_status_right

    @hlpc_lidar_status_right.setter
    def hlpc_lidar_status_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_lidar_status_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_lidar_status_right' field must be an unsigned integer in [0, 255]"
        self._hlpc_lidar_status_right = value

    @builtins.property
    def hlpc_radar_status_front(self):
        """Message field 'hlpc_radar_status_front'."""
        return self._hlpc_radar_status_front

    @hlpc_radar_status_front.setter
    def hlpc_radar_status_front(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_radar_status_front' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_radar_status_front' field must be an unsigned integer in [0, 255]"
        self._hlpc_radar_status_front = value

    @builtins.property
    def hlpc_radar_status_left(self):
        """Message field 'hlpc_radar_status_left'."""
        return self._hlpc_radar_status_left

    @hlpc_radar_status_left.setter
    def hlpc_radar_status_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_radar_status_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_radar_status_left' field must be an unsigned integer in [0, 255]"
        self._hlpc_radar_status_left = value

    @builtins.property
    def hlpc_radar_status_right(self):
        """Message field 'hlpc_radar_status_right'."""
        return self._hlpc_radar_status_right

    @hlpc_radar_status_right.setter
    def hlpc_radar_status_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_radar_status_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_radar_status_right' field must be an unsigned integer in [0, 255]"
        self._hlpc_radar_status_right = value

    @builtins.property
    def hlpc_radar_status_rear(self):
        """Message field 'hlpc_radar_status_rear'."""
        return self._hlpc_radar_status_rear

    @hlpc_radar_status_rear.setter
    def hlpc_radar_status_rear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_radar_status_rear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_radar_status_rear' field must be an unsigned integer in [0, 255]"
        self._hlpc_radar_status_rear = value

    @builtins.property
    def hlpc_vector_nav_fix(self):
        """Message field 'hlpc_vector_nav_fix'."""
        return self._hlpc_vector_nav_fix

    @hlpc_vector_nav_fix.setter
    def hlpc_vector_nav_fix(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_vector_nav_fix' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_vector_nav_fix' field must be an unsigned integer in [0, 255]"
        self._hlpc_vector_nav_fix = value

    @builtins.property
    def hlpc_alive_c4(self):
        """Message field 'hlpc_alive_c4'."""
        return self._hlpc_alive_c4

    @hlpc_alive_c4.setter
    def hlpc_alive_c4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hlpc_alive_c4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hlpc_alive_c4' field must be an unsigned integer in [0, 255]"
        self._hlpc_alive_c4 = value
