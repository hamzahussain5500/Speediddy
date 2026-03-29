# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/DiagnosticWord02Updated.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiagnosticWord02Updated(type):
    """Metaclass of message 'DiagnosticWord02Updated'."""

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
                'sd_can_msgs.msg.DiagnosticWord02Updated')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostic_word02_updated
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostic_word02_updated
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostic_word02_updated
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostic_word02_updated
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostic_word02_updated

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


class DiagnosticWord02Updated(metaclass=Metaclass_DiagnosticWord02Updated):
    """Message class 'DiagnosticWord02Updated'."""

    __slots__ = [
        '_header',
        '_rc_force_race_mode',
        '_rc_beacon_time_out',
        '_display_timeout_error',
        '_rm_red_flag',
        '_rm_safe_stop',
        '_display_counter_error',
        '_cba_em_brake_sat_not_received',
        '_cba_sat_values_not_received',
        '_ice_oil_temp_start_limit_not_rec',
        '_ml_stop_brake_sat_not_received',
        '_psa_sat_values_not_received',
        '_limp_sat_values_not_received',
        '_fan_car_speed_max_value_not_rec',
        '_fan_car_speed_min_value_not_rec',
        '_fan_water_temp_max_value_not_rec',
        '_fan_water_temp_min_value_not_rec',
        '_heater_oil_temp_max_value_not_rec',
        '_ice_fuel_pres_start_limit_not_rec',
        '_ice_oil_temp_by_pass_not_received',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'rc_force_race_mode': 'uint8',
        'rc_beacon_time_out': 'uint8',
        'display_timeout_error': 'uint8',
        'rm_red_flag': 'uint8',
        'rm_safe_stop': 'uint8',
        'display_counter_error': 'uint8',
        'cba_em_brake_sat_not_received': 'uint8',
        'cba_sat_values_not_received': 'uint8',
        'ice_oil_temp_start_limit_not_rec': 'uint8',
        'ml_stop_brake_sat_not_received': 'uint8',
        'psa_sat_values_not_received': 'uint8',
        'limp_sat_values_not_received': 'uint8',
        'fan_car_speed_max_value_not_rec': 'uint8',
        'fan_car_speed_min_value_not_rec': 'uint8',
        'fan_water_temp_max_value_not_rec': 'uint8',
        'fan_water_temp_min_value_not_rec': 'uint8',
        'heater_oil_temp_max_value_not_rec': 'uint8',
        'ice_fuel_pres_start_limit_not_rec': 'uint8',
        'ice_oil_temp_by_pass_not_received': 'uint8',
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
        self.rc_force_race_mode = kwargs.get('rc_force_race_mode', int())
        self.rc_beacon_time_out = kwargs.get('rc_beacon_time_out', int())
        self.display_timeout_error = kwargs.get('display_timeout_error', int())
        self.rm_red_flag = kwargs.get('rm_red_flag', int())
        self.rm_safe_stop = kwargs.get('rm_safe_stop', int())
        self.display_counter_error = kwargs.get('display_counter_error', int())
        self.cba_em_brake_sat_not_received = kwargs.get('cba_em_brake_sat_not_received', int())
        self.cba_sat_values_not_received = kwargs.get('cba_sat_values_not_received', int())
        self.ice_oil_temp_start_limit_not_rec = kwargs.get('ice_oil_temp_start_limit_not_rec', int())
        self.ml_stop_brake_sat_not_received = kwargs.get('ml_stop_brake_sat_not_received', int())
        self.psa_sat_values_not_received = kwargs.get('psa_sat_values_not_received', int())
        self.limp_sat_values_not_received = kwargs.get('limp_sat_values_not_received', int())
        self.fan_car_speed_max_value_not_rec = kwargs.get('fan_car_speed_max_value_not_rec', int())
        self.fan_car_speed_min_value_not_rec = kwargs.get('fan_car_speed_min_value_not_rec', int())
        self.fan_water_temp_max_value_not_rec = kwargs.get('fan_water_temp_max_value_not_rec', int())
        self.fan_water_temp_min_value_not_rec = kwargs.get('fan_water_temp_min_value_not_rec', int())
        self.heater_oil_temp_max_value_not_rec = kwargs.get('heater_oil_temp_max_value_not_rec', int())
        self.ice_fuel_pres_start_limit_not_rec = kwargs.get('ice_fuel_pres_start_limit_not_rec', int())
        self.ice_oil_temp_by_pass_not_received = kwargs.get('ice_oil_temp_by_pass_not_received', int())

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
        if self.rc_force_race_mode != other.rc_force_race_mode:
            return False
        if self.rc_beacon_time_out != other.rc_beacon_time_out:
            return False
        if self.display_timeout_error != other.display_timeout_error:
            return False
        if self.rm_red_flag != other.rm_red_flag:
            return False
        if self.rm_safe_stop != other.rm_safe_stop:
            return False
        if self.display_counter_error != other.display_counter_error:
            return False
        if self.cba_em_brake_sat_not_received != other.cba_em_brake_sat_not_received:
            return False
        if self.cba_sat_values_not_received != other.cba_sat_values_not_received:
            return False
        if self.ice_oil_temp_start_limit_not_rec != other.ice_oil_temp_start_limit_not_rec:
            return False
        if self.ml_stop_brake_sat_not_received != other.ml_stop_brake_sat_not_received:
            return False
        if self.psa_sat_values_not_received != other.psa_sat_values_not_received:
            return False
        if self.limp_sat_values_not_received != other.limp_sat_values_not_received:
            return False
        if self.fan_car_speed_max_value_not_rec != other.fan_car_speed_max_value_not_rec:
            return False
        if self.fan_car_speed_min_value_not_rec != other.fan_car_speed_min_value_not_rec:
            return False
        if self.fan_water_temp_max_value_not_rec != other.fan_water_temp_max_value_not_rec:
            return False
        if self.fan_water_temp_min_value_not_rec != other.fan_water_temp_min_value_not_rec:
            return False
        if self.heater_oil_temp_max_value_not_rec != other.heater_oil_temp_max_value_not_rec:
            return False
        if self.ice_fuel_pres_start_limit_not_rec != other.ice_fuel_pres_start_limit_not_rec:
            return False
        if self.ice_oil_temp_by_pass_not_received != other.ice_oil_temp_by_pass_not_received:
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
    def rc_force_race_mode(self):
        """Message field 'rc_force_race_mode'."""
        return self._rc_force_race_mode

    @rc_force_race_mode.setter
    def rc_force_race_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_force_race_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rc_force_race_mode' field must be an unsigned integer in [0, 255]"
        self._rc_force_race_mode = value

    @builtins.property
    def rc_beacon_time_out(self):
        """Message field 'rc_beacon_time_out'."""
        return self._rc_beacon_time_out

    @rc_beacon_time_out.setter
    def rc_beacon_time_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_beacon_time_out' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rc_beacon_time_out' field must be an unsigned integer in [0, 255]"
        self._rc_beacon_time_out = value

    @builtins.property
    def display_timeout_error(self):
        """Message field 'display_timeout_error'."""
        return self._display_timeout_error

    @display_timeout_error.setter
    def display_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'display_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'display_timeout_error' field must be an unsigned integer in [0, 255]"
        self._display_timeout_error = value

    @builtins.property
    def rm_red_flag(self):
        """Message field 'rm_red_flag'."""
        return self._rm_red_flag

    @rm_red_flag.setter
    def rm_red_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rm_red_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rm_red_flag' field must be an unsigned integer in [0, 255]"
        self._rm_red_flag = value

    @builtins.property
    def rm_safe_stop(self):
        """Message field 'rm_safe_stop'."""
        return self._rm_safe_stop

    @rm_safe_stop.setter
    def rm_safe_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rm_safe_stop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rm_safe_stop' field must be an unsigned integer in [0, 255]"
        self._rm_safe_stop = value

    @builtins.property
    def display_counter_error(self):
        """Message field 'display_counter_error'."""
        return self._display_counter_error

    @display_counter_error.setter
    def display_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'display_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'display_counter_error' field must be an unsigned integer in [0, 255]"
        self._display_counter_error = value

    @builtins.property
    def cba_em_brake_sat_not_received(self):
        """Message field 'cba_em_brake_sat_not_received'."""
        return self._cba_em_brake_sat_not_received

    @cba_em_brake_sat_not_received.setter
    def cba_em_brake_sat_not_received(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_em_brake_sat_not_received' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_em_brake_sat_not_received' field must be an unsigned integer in [0, 255]"
        self._cba_em_brake_sat_not_received = value

    @builtins.property
    def cba_sat_values_not_received(self):
        """Message field 'cba_sat_values_not_received'."""
        return self._cba_sat_values_not_received

    @cba_sat_values_not_received.setter
    def cba_sat_values_not_received(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_sat_values_not_received' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_sat_values_not_received' field must be an unsigned integer in [0, 255]"
        self._cba_sat_values_not_received = value

    @builtins.property
    def ice_oil_temp_start_limit_not_rec(self):
        """Message field 'ice_oil_temp_start_limit_not_rec'."""
        return self._ice_oil_temp_start_limit_not_rec

    @ice_oil_temp_start_limit_not_rec.setter
    def ice_oil_temp_start_limit_not_rec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_oil_temp_start_limit_not_rec' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_oil_temp_start_limit_not_rec' field must be an unsigned integer in [0, 255]"
        self._ice_oil_temp_start_limit_not_rec = value

    @builtins.property
    def ml_stop_brake_sat_not_received(self):
        """Message field 'ml_stop_brake_sat_not_received'."""
        return self._ml_stop_brake_sat_not_received

    @ml_stop_brake_sat_not_received.setter
    def ml_stop_brake_sat_not_received(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ml_stop_brake_sat_not_received' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ml_stop_brake_sat_not_received' field must be an unsigned integer in [0, 255]"
        self._ml_stop_brake_sat_not_received = value

    @builtins.property
    def psa_sat_values_not_received(self):
        """Message field 'psa_sat_values_not_received'."""
        return self._psa_sat_values_not_received

    @psa_sat_values_not_received.setter
    def psa_sat_values_not_received(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'psa_sat_values_not_received' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'psa_sat_values_not_received' field must be an unsigned integer in [0, 255]"
        self._psa_sat_values_not_received = value

    @builtins.property
    def limp_sat_values_not_received(self):
        """Message field 'limp_sat_values_not_received'."""
        return self._limp_sat_values_not_received

    @limp_sat_values_not_received.setter
    def limp_sat_values_not_received(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'limp_sat_values_not_received' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'limp_sat_values_not_received' field must be an unsigned integer in [0, 255]"
        self._limp_sat_values_not_received = value

    @builtins.property
    def fan_car_speed_max_value_not_rec(self):
        """Message field 'fan_car_speed_max_value_not_rec'."""
        return self._fan_car_speed_max_value_not_rec

    @fan_car_speed_max_value_not_rec.setter
    def fan_car_speed_max_value_not_rec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan_car_speed_max_value_not_rec' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fan_car_speed_max_value_not_rec' field must be an unsigned integer in [0, 255]"
        self._fan_car_speed_max_value_not_rec = value

    @builtins.property
    def fan_car_speed_min_value_not_rec(self):
        """Message field 'fan_car_speed_min_value_not_rec'."""
        return self._fan_car_speed_min_value_not_rec

    @fan_car_speed_min_value_not_rec.setter
    def fan_car_speed_min_value_not_rec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan_car_speed_min_value_not_rec' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fan_car_speed_min_value_not_rec' field must be an unsigned integer in [0, 255]"
        self._fan_car_speed_min_value_not_rec = value

    @builtins.property
    def fan_water_temp_max_value_not_rec(self):
        """Message field 'fan_water_temp_max_value_not_rec'."""
        return self._fan_water_temp_max_value_not_rec

    @fan_water_temp_max_value_not_rec.setter
    def fan_water_temp_max_value_not_rec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan_water_temp_max_value_not_rec' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fan_water_temp_max_value_not_rec' field must be an unsigned integer in [0, 255]"
        self._fan_water_temp_max_value_not_rec = value

    @builtins.property
    def fan_water_temp_min_value_not_rec(self):
        """Message field 'fan_water_temp_min_value_not_rec'."""
        return self._fan_water_temp_min_value_not_rec

    @fan_water_temp_min_value_not_rec.setter
    def fan_water_temp_min_value_not_rec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan_water_temp_min_value_not_rec' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fan_water_temp_min_value_not_rec' field must be an unsigned integer in [0, 255]"
        self._fan_water_temp_min_value_not_rec = value

    @builtins.property
    def heater_oil_temp_max_value_not_rec(self):
        """Message field 'heater_oil_temp_max_value_not_rec'."""
        return self._heater_oil_temp_max_value_not_rec

    @heater_oil_temp_max_value_not_rec.setter
    def heater_oil_temp_max_value_not_rec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heater_oil_temp_max_value_not_rec' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'heater_oil_temp_max_value_not_rec' field must be an unsigned integer in [0, 255]"
        self._heater_oil_temp_max_value_not_rec = value

    @builtins.property
    def ice_fuel_pres_start_limit_not_rec(self):
        """Message field 'ice_fuel_pres_start_limit_not_rec'."""
        return self._ice_fuel_pres_start_limit_not_rec

    @ice_fuel_pres_start_limit_not_rec.setter
    def ice_fuel_pres_start_limit_not_rec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_fuel_pres_start_limit_not_rec' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_fuel_pres_start_limit_not_rec' field must be an unsigned integer in [0, 255]"
        self._ice_fuel_pres_start_limit_not_rec = value

    @builtins.property
    def ice_oil_temp_by_pass_not_received(self):
        """Message field 'ice_oil_temp_by_pass_not_received'."""
        return self._ice_oil_temp_by_pass_not_received

    @ice_oil_temp_by_pass_not_received.setter
    def ice_oil_temp_by_pass_not_received(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_oil_temp_by_pass_not_received' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_oil_temp_by_pass_not_received' field must be an unsigned integer in [0, 255]"
        self._ice_oil_temp_by_pass_not_received = value
