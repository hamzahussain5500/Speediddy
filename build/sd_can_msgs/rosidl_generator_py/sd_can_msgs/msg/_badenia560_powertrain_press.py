# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/Badenia560PowertrainPress.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Badenia560PowertrainPress(type):
    """Metaclass of message 'Badenia560PowertrainPress'."""

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
                'sd_can_msgs.msg.Badenia560PowertrainPress')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__badenia560_powertrain_press
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__badenia560_powertrain_press
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__badenia560_powertrain_press
            cls._TYPE_SUPPORT = module.type_support_msg__msg__badenia560_powertrain_press
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__badenia560_powertrain_press

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


class Badenia560PowertrainPress(metaclass=Metaclass_Badenia560PowertrainPress):
    """Message class 'Badenia560PowertrainPress'."""

    __slots__ = [
        '_header',
        '_m_pushrod_strain_fl',
        '_m_pushrod_strain_fr',
        '_engine_oil_pressure',
        '_coolant_pressure',
        '_fuel_press_direct',
        '_boost_pressure',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'm_pushrod_strain_fl': 'double',
        'm_pushrod_strain_fr': 'double',
        'engine_oil_pressure': 'double',
        'coolant_pressure': 'double',
        'fuel_press_direct': 'double',
        'boost_pressure': 'double',
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
        self.m_pushrod_strain_fl = kwargs.get('m_pushrod_strain_fl', float())
        self.m_pushrod_strain_fr = kwargs.get('m_pushrod_strain_fr', float())
        self.engine_oil_pressure = kwargs.get('engine_oil_pressure', float())
        self.coolant_pressure = kwargs.get('coolant_pressure', float())
        self.fuel_press_direct = kwargs.get('fuel_press_direct', float())
        self.boost_pressure = kwargs.get('boost_pressure', float())

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
        if self.m_pushrod_strain_fl != other.m_pushrod_strain_fl:
            return False
        if self.m_pushrod_strain_fr != other.m_pushrod_strain_fr:
            return False
        if self.engine_oil_pressure != other.engine_oil_pressure:
            return False
        if self.coolant_pressure != other.coolant_pressure:
            return False
        if self.fuel_press_direct != other.fuel_press_direct:
            return False
        if self.boost_pressure != other.boost_pressure:
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
    def m_pushrod_strain_fl(self):
        """Message field 'm_pushrod_strain_fl'."""
        return self._m_pushrod_strain_fl

    @m_pushrod_strain_fl.setter
    def m_pushrod_strain_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_pushrod_strain_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_pushrod_strain_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_pushrod_strain_fl = value

    @builtins.property
    def m_pushrod_strain_fr(self):
        """Message field 'm_pushrod_strain_fr'."""
        return self._m_pushrod_strain_fr

    @m_pushrod_strain_fr.setter
    def m_pushrod_strain_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_pushrod_strain_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_pushrod_strain_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_pushrod_strain_fr = value

    @builtins.property
    def engine_oil_pressure(self):
        """Message field 'engine_oil_pressure'."""
        return self._engine_oil_pressure

    @engine_oil_pressure.setter
    def engine_oil_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_oil_pressure' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'engine_oil_pressure' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._engine_oil_pressure = value

    @builtins.property
    def coolant_pressure(self):
        """Message field 'coolant_pressure'."""
        return self._coolant_pressure

    @coolant_pressure.setter
    def coolant_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'coolant_pressure' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'coolant_pressure' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._coolant_pressure = value

    @builtins.property
    def fuel_press_direct(self):
        """Message field 'fuel_press_direct'."""
        return self._fuel_press_direct

    @fuel_press_direct.setter
    def fuel_press_direct(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_press_direct' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fuel_press_direct' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fuel_press_direct = value

    @builtins.property
    def boost_pressure(self):
        """Message field 'boost_pressure'."""
        return self._boost_pressure

    @boost_pressure.setter
    def boost_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boost_pressure' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'boost_pressure' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._boost_pressure = value
