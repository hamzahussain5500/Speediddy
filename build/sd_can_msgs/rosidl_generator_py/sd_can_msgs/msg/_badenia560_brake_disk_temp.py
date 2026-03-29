# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/Badenia560BrakeDiskTemp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Badenia560BrakeDiskTemp(type):
    """Metaclass of message 'Badenia560BrakeDiskTemp'."""

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
                'sd_can_msgs.msg.Badenia560BrakeDiskTemp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__badenia560_brake_disk_temp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__badenia560_brake_disk_temp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__badenia560_brake_disk_temp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__badenia560_brake_disk_temp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__badenia560_brake_disk_temp

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


class Badenia560BrakeDiskTemp(metaclass=Metaclass_Badenia560BrakeDiskTemp):
    """Message class 'Badenia560BrakeDiskTemp'."""

    __slots__ = [
        '_header',
        '_brake_disk_temp_fl',
        '_brake_disk_temp_fr',
        '_brake_disk_temp_rr',
        '_brake_disk_temp_rl',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'brake_disk_temp_fl': 'double',
        'brake_disk_temp_fr': 'double',
        'brake_disk_temp_rr': 'double',
        'brake_disk_temp_rl': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.brake_disk_temp_fl = kwargs.get('brake_disk_temp_fl', float())
        self.brake_disk_temp_fr = kwargs.get('brake_disk_temp_fr', float())
        self.brake_disk_temp_rr = kwargs.get('brake_disk_temp_rr', float())
        self.brake_disk_temp_rl = kwargs.get('brake_disk_temp_rl', float())

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
        if self.brake_disk_temp_fl != other.brake_disk_temp_fl:
            return False
        if self.brake_disk_temp_fr != other.brake_disk_temp_fr:
            return False
        if self.brake_disk_temp_rr != other.brake_disk_temp_rr:
            return False
        if self.brake_disk_temp_rl != other.brake_disk_temp_rl:
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
    def brake_disk_temp_fl(self):
        """Message field 'brake_disk_temp_fl'."""
        return self._brake_disk_temp_fl

    @brake_disk_temp_fl.setter
    def brake_disk_temp_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_disk_temp_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_disk_temp_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_disk_temp_fl = value

    @builtins.property
    def brake_disk_temp_fr(self):
        """Message field 'brake_disk_temp_fr'."""
        return self._brake_disk_temp_fr

    @brake_disk_temp_fr.setter
    def brake_disk_temp_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_disk_temp_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_disk_temp_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_disk_temp_fr = value

    @builtins.property
    def brake_disk_temp_rr(self):
        """Message field 'brake_disk_temp_rr'."""
        return self._brake_disk_temp_rr

    @brake_disk_temp_rr.setter
    def brake_disk_temp_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_disk_temp_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_disk_temp_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_disk_temp_rr = value

    @builtins.property
    def brake_disk_temp_rl(self):
        """Message field 'brake_disk_temp_rl'."""
        return self._brake_disk_temp_rl

    @brake_disk_temp_rl.setter
    def brake_disk_temp_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_disk_temp_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_disk_temp_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_disk_temp_rl = value
