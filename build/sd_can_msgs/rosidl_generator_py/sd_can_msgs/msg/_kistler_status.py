# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/KistlerStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KistlerStatus(type):
    """Metaclass of message 'KistlerStatus'."""

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
                'sd_can_msgs.msg.KistlerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kistler_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kistler_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kistler_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kistler_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kistler_status

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


class KistlerStatus(metaclass=Metaclass_KistlerStatus):
    """Message class 'KistlerStatus'."""

    __slots__ = [
        '_header',
        '_sensor_id',
        '_temperature',
        '_lamp_current',
        '_filter_setting',
        '_stst',
        '_filter_off_on',
        '_lamp_current_control',
        '_temperature_ok',
        '_head_status',
        '_angle_switched_off',
        '_direction',
        '_ang_vel_correction',
        '_direction_motion',
        '_direction_mounting',
        '_direction_head_is_valid',
        '_direction_head',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_id': 'uint16',
        'temperature': 'double',
        'lamp_current': 'double',
        'filter_setting': 'uint8',
        'stst': 'uint8',
        'filter_off_on': 'uint8',
        'lamp_current_control': 'uint8',
        'temperature_ok': 'uint8',
        'head_status': 'uint8',
        'angle_switched_off': 'uint8',
        'direction': 'uint8',
        'ang_vel_correction': 'uint8',
        'direction_motion': 'uint8',
        'direction_mounting': 'uint8',
        'direction_head_is_valid': 'uint8',
        'direction_head': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.sensor_id = kwargs.get('sensor_id', int())
        self.temperature = kwargs.get('temperature', float())
        self.lamp_current = kwargs.get('lamp_current', float())
        self.filter_setting = kwargs.get('filter_setting', int())
        self.stst = kwargs.get('stst', int())
        self.filter_off_on = kwargs.get('filter_off_on', int())
        self.lamp_current_control = kwargs.get('lamp_current_control', int())
        self.temperature_ok = kwargs.get('temperature_ok', int())
        self.head_status = kwargs.get('head_status', int())
        self.angle_switched_off = kwargs.get('angle_switched_off', int())
        self.direction = kwargs.get('direction', int())
        self.ang_vel_correction = kwargs.get('ang_vel_correction', int())
        self.direction_motion = kwargs.get('direction_motion', int())
        self.direction_mounting = kwargs.get('direction_mounting', int())
        self.direction_head_is_valid = kwargs.get('direction_head_is_valid', int())
        self.direction_head = kwargs.get('direction_head', int())

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
        if self.sensor_id != other.sensor_id:
            return False
        if self.temperature != other.temperature:
            return False
        if self.lamp_current != other.lamp_current:
            return False
        if self.filter_setting != other.filter_setting:
            return False
        if self.stst != other.stst:
            return False
        if self.filter_off_on != other.filter_off_on:
            return False
        if self.lamp_current_control != other.lamp_current_control:
            return False
        if self.temperature_ok != other.temperature_ok:
            return False
        if self.head_status != other.head_status:
            return False
        if self.angle_switched_off != other.angle_switched_off:
            return False
        if self.direction != other.direction:
            return False
        if self.ang_vel_correction != other.ang_vel_correction:
            return False
        if self.direction_motion != other.direction_motion:
            return False
        if self.direction_mounting != other.direction_mounting:
            return False
        if self.direction_head_is_valid != other.direction_head_is_valid:
            return False
        if self.direction_head != other.direction_head:
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
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sensor_id' field must be an unsigned integer in [0, 65535]"
        self._sensor_id = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'temperature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._temperature = value

    @builtins.property
    def lamp_current(self):
        """Message field 'lamp_current'."""
        return self._lamp_current

    @lamp_current.setter
    def lamp_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lamp_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lamp_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lamp_current = value

    @builtins.property
    def filter_setting(self):
        """Message field 'filter_setting'."""
        return self._filter_setting

    @filter_setting.setter
    def filter_setting(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_setting' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'filter_setting' field must be an unsigned integer in [0, 255]"
        self._filter_setting = value

    @builtins.property
    def stst(self):
        """Message field 'stst'."""
        return self._stst

    @stst.setter
    def stst(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stst' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stst' field must be an unsigned integer in [0, 255]"
        self._stst = value

    @builtins.property
    def filter_off_on(self):
        """Message field 'filter_off_on'."""
        return self._filter_off_on

    @filter_off_on.setter
    def filter_off_on(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_off_on' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'filter_off_on' field must be an unsigned integer in [0, 255]"
        self._filter_off_on = value

    @builtins.property
    def lamp_current_control(self):
        """Message field 'lamp_current_control'."""
        return self._lamp_current_control

    @lamp_current_control.setter
    def lamp_current_control(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lamp_current_control' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lamp_current_control' field must be an unsigned integer in [0, 255]"
        self._lamp_current_control = value

    @builtins.property
    def temperature_ok(self):
        """Message field 'temperature_ok'."""
        return self._temperature_ok

    @temperature_ok.setter
    def temperature_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature_ok' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temperature_ok' field must be an unsigned integer in [0, 255]"
        self._temperature_ok = value

    @builtins.property
    def head_status(self):
        """Message field 'head_status'."""
        return self._head_status

    @head_status.setter
    def head_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'head_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'head_status' field must be an unsigned integer in [0, 255]"
        self._head_status = value

    @builtins.property
    def angle_switched_off(self):
        """Message field 'angle_switched_off'."""
        return self._angle_switched_off

    @angle_switched_off.setter
    def angle_switched_off(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle_switched_off' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'angle_switched_off' field must be an unsigned integer in [0, 255]"
        self._angle_switched_off = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'direction' field must be an unsigned integer in [0, 255]"
        self._direction = value

    @builtins.property
    def ang_vel_correction(self):
        """Message field 'ang_vel_correction'."""
        return self._ang_vel_correction

    @ang_vel_correction.setter
    def ang_vel_correction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ang_vel_correction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ang_vel_correction' field must be an unsigned integer in [0, 255]"
        self._ang_vel_correction = value

    @builtins.property
    def direction_motion(self):
        """Message field 'direction_motion'."""
        return self._direction_motion

    @direction_motion.setter
    def direction_motion(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction_motion' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'direction_motion' field must be an unsigned integer in [0, 255]"
        self._direction_motion = value

    @builtins.property
    def direction_mounting(self):
        """Message field 'direction_mounting'."""
        return self._direction_mounting

    @direction_mounting.setter
    def direction_mounting(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction_mounting' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'direction_mounting' field must be an unsigned integer in [0, 255]"
        self._direction_mounting = value

    @builtins.property
    def direction_head_is_valid(self):
        """Message field 'direction_head_is_valid'."""
        return self._direction_head_is_valid

    @direction_head_is_valid.setter
    def direction_head_is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction_head_is_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'direction_head_is_valid' field must be an unsigned integer in [0, 255]"
        self._direction_head_is_valid = value

    @builtins.property
    def direction_head(self):
        """Message field 'direction_head'."""
        return self._direction_head

    @direction_head.setter
    def direction_head(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction_head' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'direction_head' field must be an unsigned integer in [0, 255]"
        self._direction_head = value
