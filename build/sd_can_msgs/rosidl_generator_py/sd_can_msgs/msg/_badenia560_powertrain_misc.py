# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/Badenia560PowertrainMisc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Badenia560PowertrainMisc(type):
    """Metaclass of message 'Badenia560PowertrainMisc'."""

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
                'sd_can_msgs.msg.Badenia560PowertrainMisc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__badenia560_powertrain_misc
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__badenia560_powertrain_misc
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__badenia560_powertrain_misc
            cls._TYPE_SUPPORT = module.type_support_msg__msg__badenia560_powertrain_misc
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__badenia560_powertrain_misc

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


class Badenia560PowertrainMisc(metaclass=Metaclass_Badenia560PowertrainMisc):
    """Message class 'Badenia560PowertrainMisc'."""

    __slots__ = [
        '_header',
        '_b12_soc',
        '_b48_soc',
        '_b12_temp',
        '_b48_temp',
        '_throttle_position',
        '_engine_speed_limit',
        '_fuel_used_kg',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'b12_soc': 'uint8',
        'b48_soc': 'uint8',
        'b12_temp': 'uint8',
        'b48_temp': 'uint8',
        'throttle_position': 'double',
        'engine_speed_limit': 'double',
        'fuel_used_kg': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.b12_soc = kwargs.get('b12_soc', int())
        self.b48_soc = kwargs.get('b48_soc', int())
        self.b12_temp = kwargs.get('b12_temp', int())
        self.b48_temp = kwargs.get('b48_temp', int())
        self.throttle_position = kwargs.get('throttle_position', float())
        self.engine_speed_limit = kwargs.get('engine_speed_limit', float())
        self.fuel_used_kg = kwargs.get('fuel_used_kg', float())

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
        if self.b12_soc != other.b12_soc:
            return False
        if self.b48_soc != other.b48_soc:
            return False
        if self.b12_temp != other.b12_temp:
            return False
        if self.b48_temp != other.b48_temp:
            return False
        if self.throttle_position != other.throttle_position:
            return False
        if self.engine_speed_limit != other.engine_speed_limit:
            return False
        if self.fuel_used_kg != other.fuel_used_kg:
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
    def b12_soc(self):
        """Message field 'b12_soc'."""
        return self._b12_soc

    @b12_soc.setter
    def b12_soc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b12_soc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b12_soc' field must be an unsigned integer in [0, 255]"
        self._b12_soc = value

    @builtins.property
    def b48_soc(self):
        """Message field 'b48_soc'."""
        return self._b48_soc

    @b48_soc.setter
    def b48_soc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b48_soc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b48_soc' field must be an unsigned integer in [0, 255]"
        self._b48_soc = value

    @builtins.property
    def b12_temp(self):
        """Message field 'b12_temp'."""
        return self._b12_temp

    @b12_temp.setter
    def b12_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b12_temp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b12_temp' field must be an unsigned integer in [0, 255]"
        self._b12_temp = value

    @builtins.property
    def b48_temp(self):
        """Message field 'b48_temp'."""
        return self._b48_temp

    @b48_temp.setter
    def b48_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b48_temp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b48_temp' field must be an unsigned integer in [0, 255]"
        self._b48_temp = value

    @builtins.property
    def throttle_position(self):
        """Message field 'throttle_position'."""
        return self._throttle_position

    @throttle_position.setter
    def throttle_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle_position = value

    @builtins.property
    def engine_speed_limit(self):
        """Message field 'engine_speed_limit'."""
        return self._engine_speed_limit

    @engine_speed_limit.setter
    def engine_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_speed_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'engine_speed_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._engine_speed_limit = value

    @builtins.property
    def fuel_used_kg(self):
        """Message field 'fuel_used_kg'."""
        return self._fuel_used_kg

    @fuel_used_kg.setter
    def fuel_used_kg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_used_kg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fuel_used_kg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fuel_used_kg = value
