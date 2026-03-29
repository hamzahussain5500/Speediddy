# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempRear.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Badenia560TyreSurfaceTempRear(type):
    """Metaclass of message 'Badenia560TyreSurfaceTempRear'."""

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
                'sd_can_msgs.msg.Badenia560TyreSurfaceTempRear')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__badenia560_tyre_surface_temp_rear
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__badenia560_tyre_surface_temp_rear
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__badenia560_tyre_surface_temp_rear
            cls._TYPE_SUPPORT = module.type_support_msg__msg__badenia560_tyre_surface_temp_rear
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__badenia560_tyre_surface_temp_rear

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


class Badenia560TyreSurfaceTempRear(metaclass=Metaclass_Badenia560TyreSurfaceTempRear):
    """Message class 'Badenia560TyreSurfaceTempRear'."""

    __slots__ = [
        '_header',
        '_outer_rl',
        '_center_rl',
        '_inner_rl',
        '_outer_rr',
        '_center_rr',
        '_inner_rr',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'outer_rl': 'double',
        'center_rl': 'double',
        'inner_rl': 'double',
        'outer_rr': 'double',
        'center_rr': 'double',
        'inner_rr': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.outer_rl = kwargs.get('outer_rl', float())
        self.center_rl = kwargs.get('center_rl', float())
        self.inner_rl = kwargs.get('inner_rl', float())
        self.outer_rr = kwargs.get('outer_rr', float())
        self.center_rr = kwargs.get('center_rr', float())
        self.inner_rr = kwargs.get('inner_rr', float())

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
        if self.outer_rl != other.outer_rl:
            return False
        if self.center_rl != other.center_rl:
            return False
        if self.inner_rl != other.inner_rl:
            return False
        if self.outer_rr != other.outer_rr:
            return False
        if self.center_rr != other.center_rr:
            return False
        if self.inner_rr != other.inner_rr:
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
    def outer_rl(self):
        """Message field 'outer_rl'."""
        return self._outer_rl

    @outer_rl.setter
    def outer_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_rl = value

    @builtins.property
    def center_rl(self):
        """Message field 'center_rl'."""
        return self._center_rl

    @center_rl.setter
    def center_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_rl = value

    @builtins.property
    def inner_rl(self):
        """Message field 'inner_rl'."""
        return self._inner_rl

    @inner_rl.setter
    def inner_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_rl = value

    @builtins.property
    def outer_rr(self):
        """Message field 'outer_rr'."""
        return self._outer_rr

    @outer_rr.setter
    def outer_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'outer_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outer_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outer_rr = value

    @builtins.property
    def center_rr(self):
        """Message field 'center_rr'."""
        return self._center_rr

    @center_rr.setter
    def center_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_rr = value

    @builtins.property
    def inner_rr(self):
        """Message field 'inner_rr'."""
        return self._inner_rr

    @inner_rr.setter
    def inner_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inner_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inner_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inner_rr = value
