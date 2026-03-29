# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/HLMsg03.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HLMsg03(type):
    """Metaclass of message 'HLMsg03'."""

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
                'sd_can_msgs.msg.HLMsg03')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hl_msg03
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hl_msg03
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hl_msg03
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hl_msg03
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hl_msg03

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


class HLMsg03(metaclass=Metaclass_HLMsg03):
    """Message class 'HLMsg03'."""

    __slots__ = [
        '_header',
        '_hl_alive_03',
        '_hl_dbw_enable',
        '_hl_push_to_pass_on',
        '_hl_pdu12_activate_gnss',
        '_hl_pdu12_activate_oss',
        '_hl_ice_enable',
        '_hl_ml_supervisor_activation',
        '_hl_pdu12_activate_lidar',
        '_hl_pdu12_activate_radar',
        '_ice_start_fuel_level_l',
        '_hl_crancking_by_pass',
        '_hl_switch_off_ok',
        '_header_legacy',
        '_hl_pdu1_activate_gnss_legacy',
        '_hl_pdu1_activate_oss_legacy',
        '_hl_pdu1_activate_lidar_r_legacy',
        '_hl_pdu1_activate_lidar_cn_legacy',
        '_hl_pdu1_activate_lidar_l_legacy',
        '_hl_pdu1_activate_radar_rear_legacy',
        '_hl_pdu1_activate_radar_cn_legacy',
        '_hl_pdu1_activate_radar_r_legacy',
        '_hl_pdu1_activate_radar_l_legacy',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hl_alive_03': 'uint8',
        'hl_dbw_enable': 'uint8',
        'hl_push_to_pass_on': 'uint8',
        'hl_pdu12_activate_gnss': 'uint8',
        'hl_pdu12_activate_oss': 'uint8',
        'hl_ice_enable': 'uint8',
        'hl_ml_supervisor_activation': 'uint8',
        'hl_pdu12_activate_lidar': 'uint8',
        'hl_pdu12_activate_radar': 'uint8',
        'ice_start_fuel_level_l': 'double',
        'hl_crancking_by_pass': 'uint8',
        'hl_switch_off_ok': 'uint8',
        'header_legacy': 'std_msgs/Header',
        'hl_pdu1_activate_gnss_legacy': 'uint8',
        'hl_pdu1_activate_oss_legacy': 'uint8',
        'hl_pdu1_activate_lidar_r_legacy': 'uint8',
        'hl_pdu1_activate_lidar_cn_legacy': 'uint8',
        'hl_pdu1_activate_lidar_l_legacy': 'uint8',
        'hl_pdu1_activate_radar_rear_legacy': 'uint8',
        'hl_pdu1_activate_radar_cn_legacy': 'uint8',
        'hl_pdu1_activate_radar_r_legacy': 'uint8',
        'hl_pdu1_activate_radar_l_legacy': 'uint8',
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.hl_pdu12_activate_gnss = kwargs.get('hl_pdu12_activate_gnss', int())
        self.hl_pdu12_activate_oss = kwargs.get('hl_pdu12_activate_oss', int())
        self.hl_ice_enable = kwargs.get('hl_ice_enable', int())
        self.hl_ml_supervisor_activation = kwargs.get('hl_ml_supervisor_activation', int())
        self.hl_pdu12_activate_lidar = kwargs.get('hl_pdu12_activate_lidar', int())
        self.hl_pdu12_activate_radar = kwargs.get('hl_pdu12_activate_radar', int())
        self.ice_start_fuel_level_l = kwargs.get('ice_start_fuel_level_l', float())
        self.hl_crancking_by_pass = kwargs.get('hl_crancking_by_pass', int())
        self.hl_switch_off_ok = kwargs.get('hl_switch_off_ok', int())
        from std_msgs.msg import Header
        self.header_legacy = kwargs.get('header_legacy', Header())
        self.hl_pdu1_activate_gnss_legacy = kwargs.get('hl_pdu1_activate_gnss_legacy', int())
        self.hl_pdu1_activate_oss_legacy = kwargs.get('hl_pdu1_activate_oss_legacy', int())
        self.hl_pdu1_activate_lidar_r_legacy = kwargs.get('hl_pdu1_activate_lidar_r_legacy', int())
        self.hl_pdu1_activate_lidar_cn_legacy = kwargs.get('hl_pdu1_activate_lidar_cn_legacy', int())
        self.hl_pdu1_activate_lidar_l_legacy = kwargs.get('hl_pdu1_activate_lidar_l_legacy', int())
        self.hl_pdu1_activate_radar_rear_legacy = kwargs.get('hl_pdu1_activate_radar_rear_legacy', int())
        self.hl_pdu1_activate_radar_cn_legacy = kwargs.get('hl_pdu1_activate_radar_cn_legacy', int())
        self.hl_pdu1_activate_radar_r_legacy = kwargs.get('hl_pdu1_activate_radar_r_legacy', int())
        self.hl_pdu1_activate_radar_l_legacy = kwargs.get('hl_pdu1_activate_radar_l_legacy', int())

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
        if self.hl_ml_supervisor_activation != other.hl_ml_supervisor_activation:
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
        if self.header_legacy != other.header_legacy:
            return False
        if self.hl_pdu1_activate_gnss_legacy != other.hl_pdu1_activate_gnss_legacy:
            return False
        if self.hl_pdu1_activate_oss_legacy != other.hl_pdu1_activate_oss_legacy:
            return False
        if self.hl_pdu1_activate_lidar_r_legacy != other.hl_pdu1_activate_lidar_r_legacy:
            return False
        if self.hl_pdu1_activate_lidar_cn_legacy != other.hl_pdu1_activate_lidar_cn_legacy:
            return False
        if self.hl_pdu1_activate_lidar_l_legacy != other.hl_pdu1_activate_lidar_l_legacy:
            return False
        if self.hl_pdu1_activate_radar_rear_legacy != other.hl_pdu1_activate_radar_rear_legacy:
            return False
        if self.hl_pdu1_activate_radar_cn_legacy != other.hl_pdu1_activate_radar_cn_legacy:
            return False
        if self.hl_pdu1_activate_radar_r_legacy != other.hl_pdu1_activate_radar_r_legacy:
            return False
        if self.hl_pdu1_activate_radar_l_legacy != other.hl_pdu1_activate_radar_l_legacy:
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
    def hl_pdu12_activate_gnss(self):
        """Message field 'hl_pdu12_activate_gnss'."""
        return self._hl_pdu12_activate_gnss

    @hl_pdu12_activate_gnss.setter
    def hl_pdu12_activate_gnss(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu12_activate_gnss' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu12_activate_gnss' field must be an unsigned integer in [0, 255]"
        self._hl_pdu12_activate_gnss = value

    @builtins.property
    def hl_pdu12_activate_oss(self):
        """Message field 'hl_pdu12_activate_oss'."""
        return self._hl_pdu12_activate_oss

    @hl_pdu12_activate_oss.setter
    def hl_pdu12_activate_oss(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu12_activate_oss' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu12_activate_oss' field must be an unsigned integer in [0, 255]"
        self._hl_pdu12_activate_oss = value

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
    def hl_ml_supervisor_activation(self):
        """Message field 'hl_ml_supervisor_activation'."""
        return self._hl_ml_supervisor_activation

    @hl_ml_supervisor_activation.setter
    def hl_ml_supervisor_activation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_ml_supervisor_activation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_ml_supervisor_activation' field must be an unsigned integer in [0, 255]"
        self._hl_ml_supervisor_activation = value

    @builtins.property
    def hl_pdu12_activate_lidar(self):
        """Message field 'hl_pdu12_activate_lidar'."""
        return self._hl_pdu12_activate_lidar

    @hl_pdu12_activate_lidar.setter
    def hl_pdu12_activate_lidar(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu12_activate_lidar' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu12_activate_lidar' field must be an unsigned integer in [0, 255]"
        self._hl_pdu12_activate_lidar = value

    @builtins.property
    def hl_pdu12_activate_radar(self):
        """Message field 'hl_pdu12_activate_radar'."""
        return self._hl_pdu12_activate_radar

    @hl_pdu12_activate_radar.setter
    def hl_pdu12_activate_radar(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu12_activate_radar' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu12_activate_radar' field must be an unsigned integer in [0, 255]"
        self._hl_pdu12_activate_radar = value

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

    @builtins.property
    def hl_switch_off_ok(self):
        """Message field 'hl_switch_off_ok'."""
        return self._hl_switch_off_ok

    @hl_switch_off_ok.setter
    def hl_switch_off_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_switch_off_ok' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_switch_off_ok' field must be an unsigned integer in [0, 255]"
        self._hl_switch_off_ok = value

    @builtins.property
    def header_legacy(self):
        """Message field 'header_legacy'."""
        return self._header_legacy

    @header_legacy.setter
    def header_legacy(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header_legacy' field must be a sub message of type 'Header'"
        self._header_legacy = value

    @builtins.property
    def hl_pdu1_activate_gnss_legacy(self):
        """Message field 'hl_pdu1_activate_gnss_legacy'."""
        return self._hl_pdu1_activate_gnss_legacy

    @hl_pdu1_activate_gnss_legacy.setter
    def hl_pdu1_activate_gnss_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_gnss_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_gnss_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_gnss_legacy = value

    @builtins.property
    def hl_pdu1_activate_oss_legacy(self):
        """Message field 'hl_pdu1_activate_oss_legacy'."""
        return self._hl_pdu1_activate_oss_legacy

    @hl_pdu1_activate_oss_legacy.setter
    def hl_pdu1_activate_oss_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_oss_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_oss_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_oss_legacy = value

    @builtins.property
    def hl_pdu1_activate_lidar_r_legacy(self):
        """Message field 'hl_pdu1_activate_lidar_r_legacy'."""
        return self._hl_pdu1_activate_lidar_r_legacy

    @hl_pdu1_activate_lidar_r_legacy.setter
    def hl_pdu1_activate_lidar_r_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_lidar_r_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_lidar_r_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_lidar_r_legacy = value

    @builtins.property
    def hl_pdu1_activate_lidar_cn_legacy(self):
        """Message field 'hl_pdu1_activate_lidar_cn_legacy'."""
        return self._hl_pdu1_activate_lidar_cn_legacy

    @hl_pdu1_activate_lidar_cn_legacy.setter
    def hl_pdu1_activate_lidar_cn_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_lidar_cn_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_lidar_cn_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_lidar_cn_legacy = value

    @builtins.property
    def hl_pdu1_activate_lidar_l_legacy(self):
        """Message field 'hl_pdu1_activate_lidar_l_legacy'."""
        return self._hl_pdu1_activate_lidar_l_legacy

    @hl_pdu1_activate_lidar_l_legacy.setter
    def hl_pdu1_activate_lidar_l_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_lidar_l_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_lidar_l_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_lidar_l_legacy = value

    @builtins.property
    def hl_pdu1_activate_radar_rear_legacy(self):
        """Message field 'hl_pdu1_activate_radar_rear_legacy'."""
        return self._hl_pdu1_activate_radar_rear_legacy

    @hl_pdu1_activate_radar_rear_legacy.setter
    def hl_pdu1_activate_radar_rear_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_radar_rear_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_radar_rear_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_radar_rear_legacy = value

    @builtins.property
    def hl_pdu1_activate_radar_cn_legacy(self):
        """Message field 'hl_pdu1_activate_radar_cn_legacy'."""
        return self._hl_pdu1_activate_radar_cn_legacy

    @hl_pdu1_activate_radar_cn_legacy.setter
    def hl_pdu1_activate_radar_cn_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_radar_cn_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_radar_cn_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_radar_cn_legacy = value

    @builtins.property
    def hl_pdu1_activate_radar_r_legacy(self):
        """Message field 'hl_pdu1_activate_radar_r_legacy'."""
        return self._hl_pdu1_activate_radar_r_legacy

    @hl_pdu1_activate_radar_r_legacy.setter
    def hl_pdu1_activate_radar_r_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_radar_r_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_radar_r_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_radar_r_legacy = value

    @builtins.property
    def hl_pdu1_activate_radar_l_legacy(self):
        """Message field 'hl_pdu1_activate_radar_l_legacy'."""
        return self._hl_pdu1_activate_radar_l_legacy

    @hl_pdu1_activate_radar_l_legacy.setter
    def hl_pdu1_activate_radar_l_legacy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pdu1_activate_radar_l_legacy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_pdu1_activate_radar_l_legacy' field must be an unsigned integer in [0, 255]"
        self._hl_pdu1_activate_radar_l_legacy = value
