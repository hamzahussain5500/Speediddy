# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/ICEStatus01.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ICEStatus01(type):
    """Metaclass of message 'ICEStatus01'."""

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
                'sd_can_msgs.msg.ICEStatus01')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ice_status01
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ice_status01
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ice_status01
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ice_status01
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ice_status01

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


class ICEStatus01(metaclass=Metaclass_ICEStatus01):
    """Message class 'ICEStatus01'."""

    __slots__ = [
        '_header',
        '_ice_actual_gear',
        '_ice_target_gear_ack',
        '_ice_actual_throttle',
        '_ice_target_throttle_ack',
        '_ice_push_to_pass_req',
        '_ice_push_to_pass_ack',
        '_ice_water_press_k_pa',
        '_ice_available_fuel_l',
        '_ice_downshift_available',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ice_actual_gear': 'double',
        'ice_target_gear_ack': 'double',
        'ice_actual_throttle': 'double',
        'ice_target_throttle_ack': 'double',
        'ice_push_to_pass_req': 'double',
        'ice_push_to_pass_ack': 'double',
        'ice_water_press_k_pa': 'double',
        'ice_available_fuel_l': 'double',
        'ice_downshift_available': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.ice_actual_gear = kwargs.get('ice_actual_gear', float())
        self.ice_target_gear_ack = kwargs.get('ice_target_gear_ack', float())
        self.ice_actual_throttle = kwargs.get('ice_actual_throttle', float())
        self.ice_target_throttle_ack = kwargs.get('ice_target_throttle_ack', float())
        self.ice_push_to_pass_req = kwargs.get('ice_push_to_pass_req', float())
        self.ice_push_to_pass_ack = kwargs.get('ice_push_to_pass_ack', float())
        self.ice_water_press_k_pa = kwargs.get('ice_water_press_k_pa', float())
        self.ice_available_fuel_l = kwargs.get('ice_available_fuel_l', float())
        self.ice_downshift_available = kwargs.get('ice_downshift_available', float())

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
        if self.ice_actual_gear != other.ice_actual_gear:
            return False
        if self.ice_target_gear_ack != other.ice_target_gear_ack:
            return False
        if self.ice_actual_throttle != other.ice_actual_throttle:
            return False
        if self.ice_target_throttle_ack != other.ice_target_throttle_ack:
            return False
        if self.ice_push_to_pass_req != other.ice_push_to_pass_req:
            return False
        if self.ice_push_to_pass_ack != other.ice_push_to_pass_ack:
            return False
        if self.ice_water_press_k_pa != other.ice_water_press_k_pa:
            return False
        if self.ice_available_fuel_l != other.ice_available_fuel_l:
            return False
        if self.ice_downshift_available != other.ice_downshift_available:
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
    def ice_actual_gear(self):
        """Message field 'ice_actual_gear'."""
        return self._ice_actual_gear

    @ice_actual_gear.setter
    def ice_actual_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_actual_gear' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_actual_gear' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_actual_gear = value

    @builtins.property
    def ice_target_gear_ack(self):
        """Message field 'ice_target_gear_ack'."""
        return self._ice_target_gear_ack

    @ice_target_gear_ack.setter
    def ice_target_gear_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_target_gear_ack' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_target_gear_ack' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_target_gear_ack = value

    @builtins.property
    def ice_actual_throttle(self):
        """Message field 'ice_actual_throttle'."""
        return self._ice_actual_throttle

    @ice_actual_throttle.setter
    def ice_actual_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_actual_throttle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_actual_throttle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_actual_throttle = value

    @builtins.property
    def ice_target_throttle_ack(self):
        """Message field 'ice_target_throttle_ack'."""
        return self._ice_target_throttle_ack

    @ice_target_throttle_ack.setter
    def ice_target_throttle_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_target_throttle_ack' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_target_throttle_ack' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_target_throttle_ack = value

    @builtins.property
    def ice_push_to_pass_req(self):
        """Message field 'ice_push_to_pass_req'."""
        return self._ice_push_to_pass_req

    @ice_push_to_pass_req.setter
    def ice_push_to_pass_req(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_push_to_pass_req' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_push_to_pass_req' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_push_to_pass_req = value

    @builtins.property
    def ice_push_to_pass_ack(self):
        """Message field 'ice_push_to_pass_ack'."""
        return self._ice_push_to_pass_ack

    @ice_push_to_pass_ack.setter
    def ice_push_to_pass_ack(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_push_to_pass_ack' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_push_to_pass_ack' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_push_to_pass_ack = value

    @builtins.property
    def ice_water_press_k_pa(self):
        """Message field 'ice_water_press_k_pa'."""
        return self._ice_water_press_k_pa

    @ice_water_press_k_pa.setter
    def ice_water_press_k_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_water_press_k_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_water_press_k_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_water_press_k_pa = value

    @builtins.property
    def ice_available_fuel_l(self):
        """Message field 'ice_available_fuel_l'."""
        return self._ice_available_fuel_l

    @ice_available_fuel_l.setter
    def ice_available_fuel_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_available_fuel_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_available_fuel_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_available_fuel_l = value

    @builtins.property
    def ice_downshift_available(self):
        """Message field 'ice_downshift_available'."""
        return self._ice_downshift_available

    @ice_downshift_available.setter
    def ice_downshift_available(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ice_downshift_available' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ice_downshift_available' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ice_downshift_available = value
