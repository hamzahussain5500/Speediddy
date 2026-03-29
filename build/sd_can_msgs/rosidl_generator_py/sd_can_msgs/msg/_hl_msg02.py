# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/HLMsg02.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HLMsg02(type):
    """Metaclass of message 'HLMsg02'."""

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
                'sd_can_msgs.msg.HLMsg02')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hl_msg02
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hl_msg02
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hl_msg02
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hl_msg02
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hl_msg02

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


class HLMsg02(metaclass=Metaclass_HLMsg02):
    """Message class 'HLMsg02'."""

    __slots__ = [
        '_header',
        '_hl_alive_02',
        '_hl_psa_mode_of_operation',
        '_hl_target_psa_control',
        '_hl_psa_profile_acc_rad_s2',
        '_hl_psa_profile_dec_rad_s2',
        '_hl_psa_profile_vel_rad_s',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hl_alive_02': 'uint8',
        'hl_psa_mode_of_operation': 'uint8',
        'hl_target_psa_control': 'double',
        'hl_psa_profile_acc_rad_s2': 'uint16',
        'hl_psa_profile_dec_rad_s2': 'uint16',
        'hl_psa_profile_vel_rad_s': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.hl_alive_02 = kwargs.get('hl_alive_02', int())
        self.hl_psa_mode_of_operation = kwargs.get('hl_psa_mode_of_operation', int())
        self.hl_target_psa_control = kwargs.get('hl_target_psa_control', float())
        self.hl_psa_profile_acc_rad_s2 = kwargs.get('hl_psa_profile_acc_rad_s2', int())
        self.hl_psa_profile_dec_rad_s2 = kwargs.get('hl_psa_profile_dec_rad_s2', int())
        self.hl_psa_profile_vel_rad_s = kwargs.get('hl_psa_profile_vel_rad_s', int())

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
        if self.hl_alive_02 != other.hl_alive_02:
            return False
        if self.hl_psa_mode_of_operation != other.hl_psa_mode_of_operation:
            return False
        if self.hl_target_psa_control != other.hl_target_psa_control:
            return False
        if self.hl_psa_profile_acc_rad_s2 != other.hl_psa_profile_acc_rad_s2:
            return False
        if self.hl_psa_profile_dec_rad_s2 != other.hl_psa_profile_dec_rad_s2:
            return False
        if self.hl_psa_profile_vel_rad_s != other.hl_psa_profile_vel_rad_s:
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
    def hl_alive_02(self):
        """Message field 'hl_alive_02'."""
        return self._hl_alive_02

    @hl_alive_02.setter
    def hl_alive_02(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_alive_02' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_alive_02' field must be an unsigned integer in [0, 255]"
        self._hl_alive_02 = value

    @builtins.property
    def hl_psa_mode_of_operation(self):
        """Message field 'hl_psa_mode_of_operation'."""
        return self._hl_psa_mode_of_operation

    @hl_psa_mode_of_operation.setter
    def hl_psa_mode_of_operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_psa_mode_of_operation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_psa_mode_of_operation' field must be an unsigned integer in [0, 255]"
        self._hl_psa_mode_of_operation = value

    @builtins.property
    def hl_target_psa_control(self):
        """Message field 'hl_target_psa_control'."""
        return self._hl_target_psa_control

    @hl_target_psa_control.setter
    def hl_target_psa_control(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hl_target_psa_control' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hl_target_psa_control' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hl_target_psa_control = value

    @builtins.property
    def hl_psa_profile_acc_rad_s2(self):
        """Message field 'hl_psa_profile_acc_rad_s2'."""
        return self._hl_psa_profile_acc_rad_s2

    @hl_psa_profile_acc_rad_s2.setter
    def hl_psa_profile_acc_rad_s2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_psa_profile_acc_rad_s2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hl_psa_profile_acc_rad_s2' field must be an unsigned integer in [0, 65535]"
        self._hl_psa_profile_acc_rad_s2 = value

    @builtins.property
    def hl_psa_profile_dec_rad_s2(self):
        """Message field 'hl_psa_profile_dec_rad_s2'."""
        return self._hl_psa_profile_dec_rad_s2

    @hl_psa_profile_dec_rad_s2.setter
    def hl_psa_profile_dec_rad_s2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_psa_profile_dec_rad_s2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hl_psa_profile_dec_rad_s2' field must be an unsigned integer in [0, 65535]"
        self._hl_psa_profile_dec_rad_s2 = value

    @builtins.property
    def hl_psa_profile_vel_rad_s(self):
        """Message field 'hl_psa_profile_vel_rad_s'."""
        return self._hl_psa_profile_vel_rad_s

    @hl_psa_profile_vel_rad_s.setter
    def hl_psa_profile_vel_rad_s(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_psa_profile_vel_rad_s' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hl_psa_profile_vel_rad_s' field must be an unsigned integer in [0, 65535]"
        self._hl_psa_profile_vel_rad_s = value
