# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/HLMsg06.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HLMsg06(type):
    """Metaclass of message 'HLMsg06'."""

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
                'sd_can_msgs.msg.HLMsg06')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hl_msg06
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hl_msg06
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hl_msg06
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hl_msg06
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hl_msg06

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


class HLMsg06(metaclass=Metaclass_HLMsg06):
    """Message class 'HLMsg06'."""

    __slots__ = [
        '_header',
        '_hl_pc_temp',
        '_hl_cpu_usage',
        '_hl_gpu_usage',
        '_hl_gpu_temp',
        '_hl_perception_acc',
        '_hl_localization_acc',
        '_hl_watts_consumed',
        '_hl_aggressiveness',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hl_pc_temp': 'int8',
        'hl_cpu_usage': 'uint8',
        'hl_gpu_usage': 'uint8',
        'hl_gpu_temp': 'int8',
        'hl_perception_acc': 'uint8',
        'hl_localization_acc': 'uint8',
        'hl_watts_consumed': 'uint16',
        'hl_aggressiveness': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
        self.hl_pc_temp = kwargs.get('hl_pc_temp', int())
        self.hl_cpu_usage = kwargs.get('hl_cpu_usage', int())
        self.hl_gpu_usage = kwargs.get('hl_gpu_usage', int())
        self.hl_gpu_temp = kwargs.get('hl_gpu_temp', int())
        self.hl_perception_acc = kwargs.get('hl_perception_acc', int())
        self.hl_localization_acc = kwargs.get('hl_localization_acc', int())
        self.hl_watts_consumed = kwargs.get('hl_watts_consumed', int())
        self.hl_aggressiveness = kwargs.get('hl_aggressiveness', int())

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
        if self.hl_pc_temp != other.hl_pc_temp:
            return False
        if self.hl_cpu_usage != other.hl_cpu_usage:
            return False
        if self.hl_gpu_usage != other.hl_gpu_usage:
            return False
        if self.hl_gpu_temp != other.hl_gpu_temp:
            return False
        if self.hl_perception_acc != other.hl_perception_acc:
            return False
        if self.hl_localization_acc != other.hl_localization_acc:
            return False
        if self.hl_watts_consumed != other.hl_watts_consumed:
            return False
        if self.hl_aggressiveness != other.hl_aggressiveness:
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
    def hl_pc_temp(self):
        """Message field 'hl_pc_temp'."""
        return self._hl_pc_temp

    @hl_pc_temp.setter
    def hl_pc_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_pc_temp' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'hl_pc_temp' field must be an integer in [-128, 127]"
        self._hl_pc_temp = value

    @builtins.property
    def hl_cpu_usage(self):
        """Message field 'hl_cpu_usage'."""
        return self._hl_cpu_usage

    @hl_cpu_usage.setter
    def hl_cpu_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_cpu_usage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_cpu_usage' field must be an unsigned integer in [0, 255]"
        self._hl_cpu_usage = value

    @builtins.property
    def hl_gpu_usage(self):
        """Message field 'hl_gpu_usage'."""
        return self._hl_gpu_usage

    @hl_gpu_usage.setter
    def hl_gpu_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_gpu_usage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_gpu_usage' field must be an unsigned integer in [0, 255]"
        self._hl_gpu_usage = value

    @builtins.property
    def hl_gpu_temp(self):
        """Message field 'hl_gpu_temp'."""
        return self._hl_gpu_temp

    @hl_gpu_temp.setter
    def hl_gpu_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_gpu_temp' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'hl_gpu_temp' field must be an integer in [-128, 127]"
        self._hl_gpu_temp = value

    @builtins.property
    def hl_perception_acc(self):
        """Message field 'hl_perception_acc'."""
        return self._hl_perception_acc

    @hl_perception_acc.setter
    def hl_perception_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_perception_acc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_perception_acc' field must be an unsigned integer in [0, 255]"
        self._hl_perception_acc = value

    @builtins.property
    def hl_localization_acc(self):
        """Message field 'hl_localization_acc'."""
        return self._hl_localization_acc

    @hl_localization_acc.setter
    def hl_localization_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_localization_acc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_localization_acc' field must be an unsigned integer in [0, 255]"
        self._hl_localization_acc = value

    @builtins.property
    def hl_watts_consumed(self):
        """Message field 'hl_watts_consumed'."""
        return self._hl_watts_consumed

    @hl_watts_consumed.setter
    def hl_watts_consumed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_watts_consumed' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hl_watts_consumed' field must be an unsigned integer in [0, 65535]"
        self._hl_watts_consumed = value

    @builtins.property
    def hl_aggressiveness(self):
        """Message field 'hl_aggressiveness'."""
        return self._hl_aggressiveness

    @hl_aggressiveness.setter
    def hl_aggressiveness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_aggressiveness' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_aggressiveness' field must be an unsigned integer in [0, 255]"
        self._hl_aggressiveness = value
