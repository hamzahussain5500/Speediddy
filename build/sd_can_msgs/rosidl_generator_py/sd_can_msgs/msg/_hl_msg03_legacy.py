# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/HLMsg03Legacy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HLMsg03Legacy(type):
    """Metaclass of message 'HLMsg03Legacy'."""

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
                'sd_can_msgs.msg.HLMsg03Legacy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hl_msg03_legacy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hl_msg03_legacy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hl_msg03_legacy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hl_msg03_legacy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hl_msg03_legacy

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


class HLMsg03Legacy(metaclass=Metaclass_HLMsg03Legacy):
    """Message class 'HLMsg03Legacy'."""

    __slots__ = [
        '_header',
        '_hl_alive_03',
        '_hl_dbw_enable',
        '_hl_push_to_pass_on',
        '_hl_pdu1_activate_gnss',
        '_hl_pdu1_activate_oss',
        '_hl_ice_enable',
        '_hl_pdu1_activate_lidar_r',
        '_hl_pdu1_activate_lidar_cn',
        '_hl_pdu1_activate_lidar_l',
        '_hl_pdu1_activate_radar_rear',
        '_hl_pdu1_activate_radar_cn',
        '_hl_pdu1_activate_radar_r',
        '_hl_pdu1_activate_radar_l',
        '_ice_start_fuel_level_l',
        '_hl_crancking_by_pass',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hl_alive_03': 'uint8',
        'hl_dbw_enable': 'uint8',
        'hl_push_to_pass_on': 'uint8',
        'hl_pdu1_activate_gnss': 'uint8',
        'hl_pdu1_activate_oss': 'uint8',
        'hl_ice_enable': 'uint8',
        'hl_pdu1_activate_lidar_r': 'uint8',
        'hl_pdu1_activate_lidar_cn': 'uint8',
        'hl_pdu1_activate_lidar_l': 'uint8',
        'hl_pdu1_activate_radar_rear': 'uint8',
        'hl_pdu1_activate_radar_cn': 'uint8',
        'hl_pdu1_activate_radar_r': 'uint8',
        'hl_pdu1_activate_radar_l': 'uint8',
        'ice_start_fuel_level_l': 'double',
        'hl_crancking_by_pass': 'uint8',
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.hl_alive_03 = kwargs.get('hl_alive_03', int())
        self.hl_dbw_enable = kwargs.get('hl_dbw_enable', int())
        self.hl_push_to_pass_on = kwargs.get('hl_push_to_pass_on', int())
        self.hl_pdu1_activate_gnss = kwargs.get('hl_pdu1_activate_gnss', int())
        self.hl_pdu1_activate_oss = kwargs.get('hl_pdu1_activate_oss', int())
        self.hl_ice_enable = kwargs.get('hl_ice_enable', int())
        self.hl_pdu1_activate_lidar_r = kwargs.get('hl_pdu1_activate_lidar_r', int())
        self.hl_pdu1_activate_lidar_cn = kwargs.get('hl_pdu1_activate_lidar_cn', int())
        self.hl_pdu1_activate_lidar_l = kwargs.get('hl_pdu1_activate_lidar_l', int())
        self.hl_pdu1_activate_radar_rear = kwargs.get('hl_pdu1_activate_radar_rear', int())
        self.hl_pdu1_activate_radar_cn = kwargs.get('hl_pdu1_activate_radar_cn', int())
        self.hl_pdu1_activate_radar_r = kwargs.get('hl_pdu1_activate_radar_r', int())
        self.hl_pdu1_activate_radar_l = kwargs.get('hl_pdu1_activate_radar_l', int())
        self.ice_start_fuel_level_l = kwargs.get('ice_start_fuel_level_l', float())
        self.hl_crancking_by_pass = kwargs.get('hl_crancking_by_pass', int())

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
        if self.hl_alive_03 != other.hl_alive_03:
            return False
        if self.hl_dbw_enable != other.hl_dbw_enable:
            return False
        if self.hl_push_to_pass_on != other.hl_push_to_pass_on:
            return False
        if self.hl_pdu1_activate_gnss != other.hl_pdu1_activate_gnss:
            return False
        if self.hl_pdu1_activate_oss != other.hl_pdu1_activate_oss:
            return False
        if self.hl_ice_enable != other.hl_ice_enable:
            return False
        if self.hl_pdu1_activate_lidar_r != other.hl_pdu1_activate_lidar_r:
            return False
        if self.hl_pdu1_activate_lidar_cn != other.hl_pdu1_activate_lidar_cn:
            return False
        if self.hl_pdu1_activate_lidar_l != other.hl_pdu1_activate_lidar_l:
            return False
        if self.hl_pdu1_activate_radar_rear != other.hl_pdu1_activate_radar_rear:
            return False
        if self.hl_pdu1_activate_radar_cn != other.hl_pdu1_activate_radar_cn:
            return False
        if self.hl_pdu1_activate_radar_r != other.hl_pdu1_activate_radar_r:
            return False
        if self.hl_pdu1_activate_radar_l != other.hl_pdu1_activate_radar_l:
            return False
        if self.ice_start_fuel_level_l != other.ice_start_fuel_level_l:
            return False
        if self.hl_crancking_by_pass != other.hl_crancking_by_pass:
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
    def hl_alive_03(self):
        """Message field 'hl_alive_03'."""
        return self._hl_alive_03

    @hl_alive_03.setter
    def hl_alive_03(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_alive_03' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_alive_03' field must be an unsigned integer in [0, 255]"
        self._hl_alive_03 = value

    @builtins.property
    def hl_dbw_enable(self):
        """Message field 'hl_dbw_enable'."""
        return self._hl_dbw_enable

    @hl_dbw_enable.setter
    def hl_dbw_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_dbw_enable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_dbw_enable' field must be an unsigned integer in [0, 255]"
        self._hl_dbw_enable = value

    @builtins.property
    def hl_push_to_pass_on(self):
        """Message field 'hl_push_to_pass_on'."""
        return self._hl_push_to_pass_on

    @hl_push_to_pass_on.setter
    def hl_push_to_pass_on(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_push_to_pass_on' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_push_to_pass_on' field must be an unsigned integer in [0, 255]"
        self._hl_push_to_pass_on = value

    @builtins.property
    def hl_pdu1_activate_gnss(self):
        """Message field 'hl_pdu1_activate_gnss'."""
        return self._hl_pdu1_activate_gnss

    @hl_pdu1_activate_gnss.setter
    def hl_pdu1_activate_gnss(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_gnss' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_gnss' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_gnss = value

    @builtins.property
    def hl_pdu1_activate_oss(self):
        """Message field 'hl_pdu1_activate_oss'."""
        return self._hl_pdu1_activate_oss

    @hl_pdu1_activate_oss.setter
    def hl_pdu1_activate_oss(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_oss' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_oss' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_oss = value

    @builtins.property
    def hl_ice_enable(self):
        """Message field 'hl_ice_enable'."""
        return self._hl_ice_enable

    @hl_ice_enable.setter
    def hl_ice_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_ice_enable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_ice_enable' field must be an unsigned integer in [0, 255]"
        self._hl_ice_enable = value

    @builtins.property
    def hl_pdu1_activate_lidar_r(self):
        """Message field 'hl_pdu1_activate_lidar_r'."""
        return self._hl_pdu1_activate_lidar_r

    @hl_pdu1_activate_lidar_r.setter
    def hl_pdu1_activate_lidar_r(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_lidar_r' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_lidar_r' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_lidar_r = value

    @builtins.property
    def hl_pdu1_activate_lidar_cn(self):
        """Message field 'hl_pdu1_activate_lidar_cn'."""
        return self._hl_pdu1_activate_lidar_cn

    @hl_pdu1_activate_lidar_cn.setter
    def hl_pdu1_activate_lidar_cn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_lidar_cn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_lidar_cn' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_lidar_cn = value

    @builtins.property
    def hl_pdu1_activate_lidar_l(self):
        """Message field 'hl_pdu1_activate_lidar_l'."""
        return self._hl_pdu1_activate_lidar_l

    @hl_pdu1_activate_lidar_l.setter
    def hl_pdu1_activate_lidar_l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_lidar_l' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_lidar_l' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_lidar_l = value

    @builtins.property
    def hl_pdu1_activate_radar_rear(self):
        """Message field 'hl_pdu1_activate_radar_rear'."""
        return self._hl_pdu1_activate_radar_rear

    @hl_pdu1_activate_radar_rear.setter
    def hl_pdu1_activate_radar_rear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_radar_rear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_radar_rear' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_radar_rear = value

    @builtins.property
    def hl_pdu1_activate_radar_cn(self):
        """Message field 'hl_pdu1_activate_radar_cn'."""
        return self._hl_pdu1_activate_radar_cn

    @hl_pdu1_activate_radar_cn.setter
    def hl_pdu1_activate_radar_cn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_radar_cn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_radar_cn' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_radar_cn = value

    @builtins.property
    def hl_pdu1_activate_radar_r(self):
        """Message field 'hl_pdu1_activate_radar_r'."""
        return self._hl_pdu1_activate_radar_r

    @hl_pdu1_activate_radar_r.setter
    def hl_pdu1_activate_radar_r(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_radar_r' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_radar_r' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_radar_r = value

    @builtins.property
    def hl_pdu1_activate_radar_l(self):
        """Message field 'hl_pdu1_activate_radar_l'."""
        return self._hl_pdu1_activate_radar_l

    @hl_pdu1_activate_radar_l.setter
    def hl_pdu1_activate_radar_l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_radar_l' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_radar_l' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_radar_l = value

    @builtins.property
    def ice_start_fuel_level_l(self):
        """Message field 'ice_start_fuel_level_l'."""
        return self._ice_start_fuel_level_l

    @ice_start_fuel_level_l.setter
    def ice_start_fuel_level_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_start_fuel_level_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_start_fuel_level_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_start_fuel_level_l = value

    @builtins.property
    def hl_crancking_by_pass(self):
        """Message field 'hl_crancking_by_pass'."""
        return self._hl_crancking_by_pass

    @hl_crancking_by_pass.setter
    def hl_crancking_by_pass(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_crancking_by_pass' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_crancking_by_pass' field must be an unsigned integer in [0, 255]"
        self._hl_crancking_by_pass = value
