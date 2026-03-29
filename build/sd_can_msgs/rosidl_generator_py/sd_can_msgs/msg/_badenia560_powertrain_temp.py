# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/Badenia560PowertrainTemp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Badenia560PowertrainTemp(type):
    """Metaclass of message 'Badenia560PowertrainTemp'."""

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
                'sd_can_msgs.msg.Badenia560PowertrainTemp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__badenia560_powertrain_temp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__badenia560_powertrain_temp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__badenia560_powertrain_temp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__badenia560_powertrain_temp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__badenia560_powertrain_temp

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


class Badenia560PowertrainTemp(metaclass=Metaclass_Badenia560PowertrainTemp):
    """Message class 'Badenia560PowertrainTemp'."""

    __slots__ = [
        '_header',
        '_m_pushrod_strain_rl',
        '_m_pushrod_strain_rr',
        '_bsu_prefill_diag',
        '_engine_oil_temperature',
        '_coolant_temperature',
        '_gear_box_oil_temp',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'm_pushrod_strain_rl': 'double',
        'm_pushrod_strain_rr': 'double',
        'bsu_prefill_diag': 'uint8',
        'engine_oil_temperature': 'double',
        'coolant_temperature': 'double',
        'gear_box_oil_temp': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.m_pushrod_strain_rl = kwargs.get('m_pushrod_strain_rl', float())
        self.m_pushrod_strain_rr = kwargs.get('m_pushrod_strain_rr', float())
        self.bsu_prefill_diag = kwargs.get('bsu_prefill_diag', int())
        self.engine_oil_temperature = kwargs.get('engine_oil_temperature', float())
        self.coolant_temperature = kwargs.get('coolant_temperature', float())
        self.gear_box_oil_temp = kwargs.get('gear_box_oil_temp', float())

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
        if self.m_pushrod_strain_rl != other.m_pushrod_strain_rl:
            return False
        if self.m_pushrod_strain_rr != other.m_pushrod_strain_rr:
            return False
        if self.bsu_prefill_diag != other.bsu_prefill_diag:
            return False
        if self.engine_oil_temperature != other.engine_oil_temperature:
            return False
        if self.coolant_temperature != other.coolant_temperature:
            return False
        if self.gear_box_oil_temp != other.gear_box_oil_temp:
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
    def m_pushrod_strain_rl(self):
        """Message field 'm_pushrod_strain_rl'."""
        return self._m_pushrod_strain_rl

    @m_pushrod_strain_rl.setter
    def m_pushrod_strain_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_pushrod_strain_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_pushrod_strain_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_pushrod_strain_rl = value

    @builtins.property
    def m_pushrod_strain_rr(self):
        """Message field 'm_pushrod_strain_rr'."""
        return self._m_pushrod_strain_rr

    @m_pushrod_strain_rr.setter
    def m_pushrod_strain_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_pushrod_strain_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_pushrod_strain_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_pushrod_strain_rr = value

    @builtins.property
    def bsu_prefill_diag(self):
        """Message field 'bsu_prefill_diag'."""
        return self._bsu_prefill_diag

    @bsu_prefill_diag.setter
    def bsu_prefill_diag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsu_prefill_diag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsu_prefill_diag' field must be an unsigned integer in [0, 255]"
        self._bsu_prefill_diag = value

    @builtins.property
    def engine_oil_temperature(self):
        """Message field 'engine_oil_temperature'."""
        return self._engine_oil_temperature

    @engine_oil_temperature.setter
    def engine_oil_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_oil_temperature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'engine_oil_temperature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._engine_oil_temperature = value

    @builtins.property
    def coolant_temperature(self):
        """Message field 'coolant_temperature'."""
        return self._coolant_temperature

    @coolant_temperature.setter
    def coolant_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'coolant_temperature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'coolant_temperature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._coolant_temperature = value

    @builtins.property
    def gear_box_oil_temp(self):
        """Message field 'gear_box_oil_temp'."""
        return self._gear_box_oil_temp

    @gear_box_oil_temp.setter
    def gear_box_oil_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear_box_oil_temp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gear_box_oil_temp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gear_box_oil_temp = value
