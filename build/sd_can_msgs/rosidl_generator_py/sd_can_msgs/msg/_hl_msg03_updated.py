# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/HLMsg03Updated.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HLMsg03Updated(type):
    """Metaclass of message 'HLMsg03Updated'."""

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
                'sd_can_msgs.msg.HLMsg03Updated')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hl_msg03_updated
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hl_msg03_updated
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hl_msg03_updated
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hl_msg03_updated
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hl_msg03_updated

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


class HLMsg03Updated(metaclass=Metaclass_HLMsg03Updated):
    """Message class 'HLMsg03Updated'."""

    __slots__ = [
        '_header',
        '_hl_alive_03',
        '_hl_dbw_enable',
        '_hl_push_to_pass_on',
        '_hl_pdu12_activate_gnss',
        '_hl_pdu12_activate_oss',
        '_hl_ice_enable',
        '_hl_pdu12_activate_lidar',
        '_hl_pdu12_activate_radar',
        '_ice_start_fuel_level_l',
        '_hl_crancking_by_pass',
        '_hl_switch_off_ok',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hl_alive_03': 'uint8',
        'hl_dbw_enable': 'boolean',
        'hl_push_to_pass_on': 'uint8',
        'hl_pdu12_activate_gnss': 'boolean',
        'hl_pdu12_activate_oss': 'boolean',
        'hl_ice_enable': 'boolean',
        'hl_pdu12_activate_lidar': 'boolean',
        'hl_pdu12_activate_radar': 'boolean',
        'ice_start_fuel_level_l': 'uint16',
        'hl_crancking_by_pass': 'boolean',
        'hl_switch_off_ok': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.hl_alive_03 = kwargs.get('hl_alive_03', int())
        self.hl_dbw_enable = kwargs.get('hl_dbw_enable', bool())
        self.hl_push_to_pass_on = kwargs.get('hl_push_to_pass_on', int())
        self.hl_pdu12_activate_gnss = kwargs.get('hl_pdu12_activate_gnss', bool())
        self.hl_pdu12_activate_oss = kwargs.get('hl_pdu12_activate_oss', bool())
        self.hl_ice_enable = kwargs.get('hl_ice_enable', bool())
        self.hl_pdu12_activate_lidar = kwargs.get('hl_pdu12_activate_lidar', bool())
        self.hl_pdu12_activate_radar = kwargs.get('hl_pdu12_activate_radar', bool())
        self.ice_start_fuel_level_l = kwargs.get('ice_start_fuel_level_l', int())
        self.hl_crancking_by_pass = kwargs.get('hl_crancking_by_pass', bool())
        self.hl_switch_off_ok = kwargs.get('hl_switch_off_ok', bool())

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
        if self.hl_pdu12_activate_gnss != other.hl_pdu12_activate_gnss:
            return False
        if self.hl_pdu12_activate_oss != other.hl_pdu12_activate_oss:
            return False
        if self.hl_ice_enable != other.hl_ice_enable:
            return False
        if self.hl_pdu12_activate_lidar != other.hl_pdu12_activate_lidar:
            return False
        if self.hl_pdu12_activate_radar != other.hl_pdu12_activate_radar:
            return False
        if self.ice_start_fuel_level_l != other.ice_start_fuel_level_l:
            return False
        if self.hl_crancking_by_pass != other.hl_crancking_by_pass:
            return False
        if self.hl_switch_off_ok != other.hl_switch_off_ok:
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
                isinstance(value, bool), \
                "The 'hl_dbw_enable' field must be of type 'bool'"
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
    def hl_pdu12_activate_gnss(self):
        """Message field 'hl_pdu12_activate_gnss'."""
        return self._hl_pdu12_activate_gnss

    @hl_pdu12_activate_gnss.setter
    def hl_pdu12_activate_gnss(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hl_pdu12_activate_gnss' field must be of type 'bool'"
        self._hl_pdu12_activate_gnss = value

    @builtins.property
    def hl_pdu12_activate_oss(self):
        """Message field 'hl_pdu12_activate_oss'."""
        return self._hl_pdu12_activate_oss

    @hl_pdu12_activate_oss.setter
    def hl_pdu12_activate_oss(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hl_pdu12_activate_oss' field must be of type 'bool'"
        self._hl_pdu12_activate_oss = value

    @builtins.property
    def hl_ice_enable(self):
        """Message field 'hl_ice_enable'."""
        return self._hl_ice_enable

    @hl_ice_enable.setter
    def hl_ice_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hl_ice_enable' field must be of type 'bool'"
        self._hl_ice_enable = value

    @builtins.property
    def hl_pdu12_activate_lidar(self):
        """Message field 'hl_pdu12_activate_lidar'."""
        return self._hl_pdu12_activate_lidar

    @hl_pdu12_activate_lidar.setter
    def hl_pdu12_activate_lidar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hl_pdu12_activate_lidar' field must be of type 'bool'"
        self._hl_pdu12_activate_lidar = value

    @builtins.property
    def hl_pdu12_activate_radar(self):
        """Message field 'hl_pdu12_activate_radar'."""
        return self._hl_pdu12_activate_radar

    @hl_pdu12_activate_radar.setter
    def hl_pdu12_activate_radar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hl_pdu12_activate_radar' field must be of type 'bool'"
        self._hl_pdu12_activate_radar = value

    @builtins.property
    def ice_start_fuel_level_l(self):
        """Message field 'ice_start_fuel_level_l'."""
        return self._ice_start_fuel_level_l

    @ice_start_fuel_level_l.setter
    def ice_start_fuel_level_l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_start_fuel_level_l' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ice_start_fuel_level_l' field must be an unsigned integer in [0, 65535]"
        self._ice_start_fuel_level_l = value

    @builtins.property
    def hl_crancking_by_pass(self):
        """Message field 'hl_crancking_by_pass'."""
        return self._hl_crancking_by_pass

    @hl_crancking_by_pass.setter
    def hl_crancking_by_pass(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hl_crancking_by_pass' field must be of type 'bool'"
        self._hl_crancking_by_pass = value

    @builtins.property
    def hl_switch_off_ok(self):
        """Message field 'hl_switch_off_ok'."""
        return self._hl_switch_off_ok

    @hl_switch_off_ok.setter
    def hl_switch_off_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hl_switch_off_ok' field must be of type 'bool'"
        self._hl_switch_off_ok = value
