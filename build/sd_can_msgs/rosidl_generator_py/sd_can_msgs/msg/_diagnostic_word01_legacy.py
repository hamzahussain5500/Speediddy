# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/DiagnosticWord01Legacy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiagnosticWord01Legacy(type):
    """Metaclass of message 'DiagnosticWord01Legacy'."""

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
                'sd_can_msgs.msg.DiagnosticWord01Legacy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostic_word01_legacy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostic_word01_legacy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostic_word01_legacy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostic_word01_legacy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostic_word01_legacy

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


class DiagnosticWord01Legacy(metaclass=Metaclass_DiagnosticWord01Legacy):
    """Message class 'DiagnosticWord01Legacy'."""

    __slots__ = [
        '_header',
        '_bms_starting_faild',
        '_bms_timeout_error',
        '_cba_fl_counter_error',
        '_cba_fl_derating',
        '_cba_fl_error',
        '_cba_fl_timeout_error',
        '_cba_fr_counter_error',
        '_cba_fr_derating',
        '_cba_fr_error',
        '_cba_fr_timeout_error',
        '_cba_rl_counter_error',
        '_cba_rl_derating',
        '_cba_rl_error',
        '_cba_rl_timeout_error',
        '_cba_rr_counter_error',
        '_cba_rr_derating',
        '_cba_rr_error',
        '_cba_rr_timeout_error',
        '_dcdc_starting_faild',
        '_dcdc_timeout_error',
        '_ice_error',
        '_ice_gear_low_oil_temp_warning',
        '_ice_engine_off_rejected',
        '_ice_starting_fueling_failed',
        '_ice_starting_oil_heater_failed',
        '_ice_starting_starting_failed',
        '_ice_aps_warning',
        '_hl_counter_error',
        '_hl_timeout_error',
        '_ice_counter_error',
        '_ice_timeout_error',
        '_emb_line_press_over_max_start_limit',
        '_ice_oil_temp_under_min_start_limit',
        '_pdu1_counter_error',
        '_pdu1_timeout_error',
        '_pdu2_counter_error',
        '_pdu2_timeout_error',
        '_em_piston_hall_not_ready',
        '_psa_counter_error',
        '_psa_derating',
        '_psa_error',
        '_psa_timeout_error',
        '_emb_tank_press_under_level1',
        '_emb_tank_press_under_level2',
        '_emb_tank_press_under_level3',
        '_emb_tank_press_under_min_start_limit',
        '_ice_override_wrong_config',
        '_bsu_wrong_init_config',
        '_ice_boost_warning',
        '_ice_coolant_pressure_warning',
        '_ice_coolant_temperature_warning',
        '_ice_fuel_pressure_warning',
        '_ice_gear_oil_temperature_warning',
        '_ice_oil_pressure_warning',
        '_ice_oil_temperature_warning',
        '_ice_over_rpm_warning',
        '_ice_sensor_failure_warning',
        '_ice_target_gear_not_reached_warning',
        '_ice_fuel_volume_warning',
        '_rm_counter_error',
        '_rm_timeout_error',
        '_ice_diagnostic_spare',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'bms_starting_faild': 'uint8',
        'bms_timeout_error': 'uint8',
        'cba_fl_counter_error': 'uint8',
        'cba_fl_derating': 'uint8',
        'cba_fl_error': 'uint8',
        'cba_fl_timeout_error': 'uint8',
        'cba_fr_counter_error': 'uint8',
        'cba_fr_derating': 'uint8',
        'cba_fr_error': 'uint8',
        'cba_fr_timeout_error': 'uint8',
        'cba_rl_counter_error': 'uint8',
        'cba_rl_derating': 'uint8',
        'cba_rl_error': 'uint8',
        'cba_rl_timeout_error': 'uint8',
        'cba_rr_counter_error': 'uint8',
        'cba_rr_derating': 'uint8',
        'cba_rr_error': 'uint8',
        'cba_rr_timeout_error': 'uint8',
        'dcdc_starting_faild': 'uint8',
        'dcdc_timeout_error': 'uint8',
        'ice_error': 'uint8',
        'ice_gear_low_oil_temp_warning': 'uint8',
        'ice_engine_off_rejected': 'uint8',
        'ice_starting_fueling_failed': 'uint8',
        'ice_starting_oil_heater_failed': 'uint8',
        'ice_starting_starting_failed': 'uint8',
        'ice_aps_warning': 'uint8',
        'hl_counter_error': 'uint8',
        'hl_timeout_error': 'uint8',
        'ice_counter_error': 'uint8',
        'ice_timeout_error': 'uint8',
        'emb_line_press_over_max_start_limit': 'uint8',
        'ice_oil_temp_under_min_start_limit': 'uint8',
        'pdu1_counter_error': 'uint8',
        'pdu1_timeout_error': 'uint8',
        'pdu2_counter_error': 'uint8',
        'pdu2_timeout_error': 'uint8',
        'em_piston_hall_not_ready': 'uint8',
        'psa_counter_error': 'uint8',
        'psa_derating': 'uint8',
        'psa_error': 'uint8',
        'psa_timeout_error': 'uint8',
        'emb_tank_press_under_level1': 'uint8',
        'emb_tank_press_under_level2': 'uint8',
        'emb_tank_press_under_level3': 'uint8',
        'emb_tank_press_under_min_start_limit': 'uint8',
        'ice_override_wrong_config': 'uint8',
        'bsu_wrong_init_config': 'uint8',
        'ice_boost_warning': 'uint8',
        'ice_coolant_pressure_warning': 'uint8',
        'ice_coolant_temperature_warning': 'uint8',
        'ice_fuel_pressure_warning': 'uint8',
        'ice_gear_oil_temperature_warning': 'uint8',
        'ice_oil_pressure_warning': 'uint8',
        'ice_oil_temperature_warning': 'uint8',
        'ice_over_rpm_warning': 'uint8',
        'ice_sensor_failure_warning': 'uint8',
        'ice_target_gear_not_reached_warning': 'uint8',
        'ice_fuel_volume_warning': 'uint8',
        'rm_counter_error': 'uint8',
        'rm_timeout_error': 'uint8',
        'ice_diagnostic_spare': 'uint8',
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
        self.bms_starting_faild = kwargs.get('bms_starting_faild', int())
        self.bms_timeout_error = kwargs.get('bms_timeout_error', int())
        self.cba_fl_counter_error = kwargs.get('cba_fl_counter_error', int())
        self.cba_fl_derating = kwargs.get('cba_fl_derating', int())
        self.cba_fl_error = kwargs.get('cba_fl_error', int())
        self.cba_fl_timeout_error = kwargs.get('cba_fl_timeout_error', int())
        self.cba_fr_counter_error = kwargs.get('cba_fr_counter_error', int())
        self.cba_fr_derating = kwargs.get('cba_fr_derating', int())
        self.cba_fr_error = kwargs.get('cba_fr_error', int())
        self.cba_fr_timeout_error = kwargs.get('cba_fr_timeout_error', int())
        self.cba_rl_counter_error = kwargs.get('cba_rl_counter_error', int())
        self.cba_rl_derating = kwargs.get('cba_rl_derating', int())
        self.cba_rl_error = kwargs.get('cba_rl_error', int())
        self.cba_rl_timeout_error = kwargs.get('cba_rl_timeout_error', int())
        self.cba_rr_counter_error = kwargs.get('cba_rr_counter_error', int())
        self.cba_rr_derating = kwargs.get('cba_rr_derating', int())
        self.cba_rr_error = kwargs.get('cba_rr_error', int())
        self.cba_rr_timeout_error = kwargs.get('cba_rr_timeout_error', int())
        self.dcdc_starting_faild = kwargs.get('dcdc_starting_faild', int())
        self.dcdc_timeout_error = kwargs.get('dcdc_timeout_error', int())
        self.ice_error = kwargs.get('ice_error', int())
        self.ice_gear_low_oil_temp_warning = kwargs.get('ice_gear_low_oil_temp_warning', int())
        self.ice_engine_off_rejected = kwargs.get('ice_engine_off_rejected', int())
        self.ice_starting_fueling_failed = kwargs.get('ice_starting_fueling_failed', int())
        self.ice_starting_oil_heater_failed = kwargs.get('ice_starting_oil_heater_failed', int())
        self.ice_starting_starting_failed = kwargs.get('ice_starting_starting_failed', int())
        self.ice_aps_warning = kwargs.get('ice_aps_warning', int())
        self.hl_counter_error = kwargs.get('hl_counter_error', int())
        self.hl_timeout_error = kwargs.get('hl_timeout_error', int())
        self.ice_counter_error = kwargs.get('ice_counter_error', int())
        self.ice_timeout_error = kwargs.get('ice_timeout_error', int())
        self.emb_line_press_over_max_start_limit = kwargs.get('emb_line_press_over_max_start_limit', int())
        self.ice_oil_temp_under_min_start_limit = kwargs.get('ice_oil_temp_under_min_start_limit', int())
        self.pdu1_counter_error = kwargs.get('pdu1_counter_error', int())
        self.pdu1_timeout_error = kwargs.get('pdu1_timeout_error', int())
        self.pdu2_counter_error = kwargs.get('pdu2_counter_error', int())
        self.pdu2_timeout_error = kwargs.get('pdu2_timeout_error', int())
        self.em_piston_hall_not_ready = kwargs.get('em_piston_hall_not_ready', int())
        self.psa_counter_error = kwargs.get('psa_counter_error', int())
        self.psa_derating = kwargs.get('psa_derating', int())
        self.psa_error = kwargs.get('psa_error', int())
        self.psa_timeout_error = kwargs.get('psa_timeout_error', int())
        self.emb_tank_press_under_level1 = kwargs.get('emb_tank_press_under_level1', int())
        self.emb_tank_press_under_level2 = kwargs.get('emb_tank_press_under_level2', int())
        self.emb_tank_press_under_level3 = kwargs.get('emb_tank_press_under_level3', int())
        self.emb_tank_press_under_min_start_limit = kwargs.get('emb_tank_press_under_min_start_limit', int())
        self.ice_override_wrong_config = kwargs.get('ice_override_wrong_config', int())
        self.bsu_wrong_init_config = kwargs.get('bsu_wrong_init_config', int())
        self.ice_boost_warning = kwargs.get('ice_boost_warning', int())
        self.ice_coolant_pressure_warning = kwargs.get('ice_coolant_pressure_warning', int())
        self.ice_coolant_temperature_warning = kwargs.get('ice_coolant_temperature_warning', int())
        self.ice_fuel_pressure_warning = kwargs.get('ice_fuel_pressure_warning', int())
        self.ice_gear_oil_temperature_warning = kwargs.get('ice_gear_oil_temperature_warning', int())
        self.ice_oil_pressure_warning = kwargs.get('ice_oil_pressure_warning', int())
        self.ice_oil_temperature_warning = kwargs.get('ice_oil_temperature_warning', int())
        self.ice_over_rpm_warning = kwargs.get('ice_over_rpm_warning', int())
        self.ice_sensor_failure_warning = kwargs.get('ice_sensor_failure_warning', int())
        self.ice_target_gear_not_reached_warning = kwargs.get('ice_target_gear_not_reached_warning', int())
        self.ice_fuel_volume_warning = kwargs.get('ice_fuel_volume_warning', int())
        self.rm_counter_error = kwargs.get('rm_counter_error', int())
        self.rm_timeout_error = kwargs.get('rm_timeout_error', int())
        self.ice_diagnostic_spare = kwargs.get('ice_diagnostic_spare', int())

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
        if self.bms_starting_faild != other.bms_starting_faild:
            return False
        if self.bms_timeout_error != other.bms_timeout_error:
            return False
        if self.cba_fl_counter_error != other.cba_fl_counter_error:
            return False
        if self.cba_fl_derating != other.cba_fl_derating:
            return False
        if self.cba_fl_error != other.cba_fl_error:
            return False
        if self.cba_fl_timeout_error != other.cba_fl_timeout_error:
            return False
        if self.cba_fr_counter_error != other.cba_fr_counter_error:
            return False
        if self.cba_fr_derating != other.cba_fr_derating:
            return False
        if self.cba_fr_error != other.cba_fr_error:
            return False
        if self.cba_fr_timeout_error != other.cba_fr_timeout_error:
            return False
        if self.cba_rl_counter_error != other.cba_rl_counter_error:
            return False
        if self.cba_rl_derating != other.cba_rl_derating:
            return False
        if self.cba_rl_error != other.cba_rl_error:
            return False
        if self.cba_rl_timeout_error != other.cba_rl_timeout_error:
            return False
        if self.cba_rr_counter_error != other.cba_rr_counter_error:
            return False
        if self.cba_rr_derating != other.cba_rr_derating:
            return False
        if self.cba_rr_error != other.cba_rr_error:
            return False
        if self.cba_rr_timeout_error != other.cba_rr_timeout_error:
            return False
        if self.dcdc_starting_faild != other.dcdc_starting_faild:
            return False
        if self.dcdc_timeout_error != other.dcdc_timeout_error:
            return False
        if self.ice_error != other.ice_error:
            return False
        if self.ice_gear_low_oil_temp_warning != other.ice_gear_low_oil_temp_warning:
            return False
        if self.ice_engine_off_rejected != other.ice_engine_off_rejected:
            return False
        if self.ice_starting_fueling_failed != other.ice_starting_fueling_failed:
            return False
        if self.ice_starting_oil_heater_failed != other.ice_starting_oil_heater_failed:
            return False
        if self.ice_starting_starting_failed != other.ice_starting_starting_failed:
            return False
        if self.ice_aps_warning != other.ice_aps_warning:
            return False
        if self.hl_counter_error != other.hl_counter_error:
            return False
        if self.hl_timeout_error != other.hl_timeout_error:
            return False
        if self.ice_counter_error != other.ice_counter_error:
            return False
        if self.ice_timeout_error != other.ice_timeout_error:
            return False
        if self.emb_line_press_over_max_start_limit != other.emb_line_press_over_max_start_limit:
            return False
        if self.ice_oil_temp_under_min_start_limit != other.ice_oil_temp_under_min_start_limit:
            return False
        if self.pdu1_counter_error != other.pdu1_counter_error:
            return False
        if self.pdu1_timeout_error != other.pdu1_timeout_error:
            return False
        if self.pdu2_counter_error != other.pdu2_counter_error:
            return False
        if self.pdu2_timeout_error != other.pdu2_timeout_error:
            return False
        if self.em_piston_hall_not_ready != other.em_piston_hall_not_ready:
            return False
        if self.psa_counter_error != other.psa_counter_error:
            return False
        if self.psa_derating != other.psa_derating:
            return False
        if self.psa_error != other.psa_error:
            return False
        if self.psa_timeout_error != other.psa_timeout_error:
            return False
        if self.emb_tank_press_under_level1 != other.emb_tank_press_under_level1:
            return False
        if self.emb_tank_press_under_level2 != other.emb_tank_press_under_level2:
            return False
        if self.emb_tank_press_under_level3 != other.emb_tank_press_under_level3:
            return False
        if self.emb_tank_press_under_min_start_limit != other.emb_tank_press_under_min_start_limit:
            return False
        if self.ice_override_wrong_config != other.ice_override_wrong_config:
            return False
        if self.bsu_wrong_init_config != other.bsu_wrong_init_config:
            return False
        if self.ice_boost_warning != other.ice_boost_warning:
            return False
        if self.ice_coolant_pressure_warning != other.ice_coolant_pressure_warning:
            return False
        if self.ice_coolant_temperature_warning != other.ice_coolant_temperature_warning:
            return False
        if self.ice_fuel_pressure_warning != other.ice_fuel_pressure_warning:
            return False
        if self.ice_gear_oil_temperature_warning != other.ice_gear_oil_temperature_warning:
            return False
        if self.ice_oil_pressure_warning != other.ice_oil_pressure_warning:
            return False
        if self.ice_oil_temperature_warning != other.ice_oil_temperature_warning:
            return False
        if self.ice_over_rpm_warning != other.ice_over_rpm_warning:
            return False
        if self.ice_sensor_failure_warning != other.ice_sensor_failure_warning:
            return False
        if self.ice_target_gear_not_reached_warning != other.ice_target_gear_not_reached_warning:
            return False
        if self.ice_fuel_volume_warning != other.ice_fuel_volume_warning:
            return False
        if self.rm_counter_error != other.rm_counter_error:
            return False
        if self.rm_timeout_error != other.rm_timeout_error:
            return False
        if self.ice_diagnostic_spare != other.ice_diagnostic_spare:
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
    def bms_starting_faild(self):
        """Message field 'bms_starting_faild'."""
        return self._bms_starting_faild

    @bms_starting_faild.setter
    def bms_starting_faild(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_starting_faild' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bms_starting_faild' field must be an unsigned integer in [0, 255]"
        self._bms_starting_faild = value

    @builtins.property
    def bms_timeout_error(self):
        """Message field 'bms_timeout_error'."""
        return self._bms_timeout_error

    @bms_timeout_error.setter
    def bms_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bms_timeout_error' field must be an unsigned integer in [0, 255]"
        self._bms_timeout_error = value

    @builtins.property
    def cba_fl_counter_error(self):
        """Message field 'cba_fl_counter_error'."""
        return self._cba_fl_counter_error

    @cba_fl_counter_error.setter
    def cba_fl_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fl_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fl_counter_error' field must be an unsigned integer in [0, 255]"
        self._cba_fl_counter_error = value

    @builtins.property
    def cba_fl_derating(self):
        """Message field 'cba_fl_derating'."""
        return self._cba_fl_derating

    @cba_fl_derating.setter
    def cba_fl_derating(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fl_derating' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fl_derating' field must be an unsigned integer in [0, 255]"
        self._cba_fl_derating = value

    @builtins.property
    def cba_fl_error(self):
        """Message field 'cba_fl_error'."""
        return self._cba_fl_error

    @cba_fl_error.setter
    def cba_fl_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fl_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fl_error' field must be an unsigned integer in [0, 255]"
        self._cba_fl_error = value

    @builtins.property
    def cba_fl_timeout_error(self):
        """Message field 'cba_fl_timeout_error'."""
        return self._cba_fl_timeout_error

    @cba_fl_timeout_error.setter
    def cba_fl_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fl_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fl_timeout_error' field must be an unsigned integer in [0, 255]"
        self._cba_fl_timeout_error = value

    @builtins.property
    def cba_fr_counter_error(self):
        """Message field 'cba_fr_counter_error'."""
        return self._cba_fr_counter_error

    @cba_fr_counter_error.setter
    def cba_fr_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fr_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fr_counter_error' field must be an unsigned integer in [0, 255]"
        self._cba_fr_counter_error = value

    @builtins.property
    def cba_fr_derating(self):
        """Message field 'cba_fr_derating'."""
        return self._cba_fr_derating

    @cba_fr_derating.setter
    def cba_fr_derating(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fr_derating' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fr_derating' field must be an unsigned integer in [0, 255]"
        self._cba_fr_derating = value

    @builtins.property
    def cba_fr_error(self):
        """Message field 'cba_fr_error'."""
        return self._cba_fr_error

    @cba_fr_error.setter
    def cba_fr_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fr_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fr_error' field must be an unsigned integer in [0, 255]"
        self._cba_fr_error = value

    @builtins.property
    def cba_fr_timeout_error(self):
        """Message field 'cba_fr_timeout_error'."""
        return self._cba_fr_timeout_error

    @cba_fr_timeout_error.setter
    def cba_fr_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fr_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fr_timeout_error' field must be an unsigned integer in [0, 255]"
        self._cba_fr_timeout_error = value

    @builtins.property
    def cba_rl_counter_error(self):
        """Message field 'cba_rl_counter_error'."""
        return self._cba_rl_counter_error

    @cba_rl_counter_error.setter
    def cba_rl_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_rl_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_rl_counter_error' field must be an unsigned integer in [0, 255]"
        self._cba_rl_counter_error = value

    @builtins.property
    def cba_rl_derating(self):
        """Message field 'cba_rl_derating'."""
        return self._cba_rl_derating

    @cba_rl_derating.setter
    def cba_rl_derating(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_rl_derating' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_rl_derating' field must be an unsigned integer in [0, 255]"
        self._cba_rl_derating = value

    @builtins.property
    def cba_rl_error(self):
        """Message field 'cba_rl_error'."""
        return self._cba_rl_error

    @cba_rl_error.setter
    def cba_rl_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_rl_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_rl_error' field must be an unsigned integer in [0, 255]"
        self._cba_rl_error = value

    @builtins.property
    def cba_rl_timeout_error(self):
        """Message field 'cba_rl_timeout_error'."""
        return self._cba_rl_timeout_error

    @cba_rl_timeout_error.setter
    def cba_rl_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_rl_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_rl_timeout_error' field must be an unsigned integer in [0, 255]"
        self._cba_rl_timeout_error = value

    @builtins.property
    def cba_rr_counter_error(self):
        """Message field 'cba_rr_counter_error'."""
        return self._cba_rr_counter_error

    @cba_rr_counter_error.setter
    def cba_rr_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_rr_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_rr_counter_error' field must be an unsigned integer in [0, 255]"
        self._cba_rr_counter_error = value

    @builtins.property
    def cba_rr_derating(self):
        """Message field 'cba_rr_derating'."""
        return self._cba_rr_derating

    @cba_rr_derating.setter
    def cba_rr_derating(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_rr_derating' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_rr_derating' field must be an unsigned integer in [0, 255]"
        self._cba_rr_derating = value

    @builtins.property
    def cba_rr_error(self):
        """Message field 'cba_rr_error'."""
        return self._cba_rr_error

    @cba_rr_error.setter
    def cba_rr_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_rr_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_rr_error' field must be an unsigned integer in [0, 255]"
        self._cba_rr_error = value

    @builtins.property
    def cba_rr_timeout_error(self):
        """Message field 'cba_rr_timeout_error'."""
        return self._cba_rr_timeout_error

    @cba_rr_timeout_error.setter
    def cba_rr_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_rr_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_rr_timeout_error' field must be an unsigned integer in [0, 255]"
        self._cba_rr_timeout_error = value

    @builtins.property
    def dcdc_starting_faild(self):
        """Message field 'dcdc_starting_faild'."""
        return self._dcdc_starting_faild

    @dcdc_starting_faild.setter
    def dcdc_starting_faild(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dcdc_starting_faild' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dcdc_starting_faild' field must be an unsigned integer in [0, 255]"
        self._dcdc_starting_faild = value

    @builtins.property
    def dcdc_timeout_error(self):
        """Message field 'dcdc_timeout_error'."""
        return self._dcdc_timeout_error

    @dcdc_timeout_error.setter
    def dcdc_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dcdc_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dcdc_timeout_error' field must be an unsigned integer in [0, 255]"
        self._dcdc_timeout_error = value

    @builtins.property
    def ice_error(self):
        """Message field 'ice_error'."""
        return self._ice_error

    @ice_error.setter
    def ice_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_error' field must be an unsigned integer in [0, 255]"
        self._ice_error = value

    @builtins.property
    def ice_gear_low_oil_temp_warning(self):
        """Message field 'ice_gear_low_oil_temp_warning'."""
        return self._ice_gear_low_oil_temp_warning

    @ice_gear_low_oil_temp_warning.setter
    def ice_gear_low_oil_temp_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_gear_low_oil_temp_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_gear_low_oil_temp_warning' field must be an unsigned integer in [0, 255]"
        self._ice_gear_low_oil_temp_warning = value

    @builtins.property
    def ice_engine_off_rejected(self):
        """Message field 'ice_engine_off_rejected'."""
        return self._ice_engine_off_rejected

    @ice_engine_off_rejected.setter
    def ice_engine_off_rejected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_engine_off_rejected' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_engine_off_rejected' field must be an unsigned integer in [0, 255]"
        self._ice_engine_off_rejected = value

    @builtins.property
    def ice_starting_fueling_failed(self):
        """Message field 'ice_starting_fueling_failed'."""
        return self._ice_starting_fueling_failed

    @ice_starting_fueling_failed.setter
    def ice_starting_fueling_failed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_starting_fueling_failed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_starting_fueling_failed' field must be an unsigned integer in [0, 255]"
        self._ice_starting_fueling_failed = value

    @builtins.property
    def ice_starting_oil_heater_failed(self):
        """Message field 'ice_starting_oil_heater_failed'."""
        return self._ice_starting_oil_heater_failed

    @ice_starting_oil_heater_failed.setter
    def ice_starting_oil_heater_failed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_starting_oil_heater_failed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_starting_oil_heater_failed' field must be an unsigned integer in [0, 255]"
        self._ice_starting_oil_heater_failed = value

    @builtins.property
    def ice_starting_starting_failed(self):
        """Message field 'ice_starting_starting_failed'."""
        return self._ice_starting_starting_failed

    @ice_starting_starting_failed.setter
    def ice_starting_starting_failed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_starting_starting_failed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_starting_starting_failed' field must be an unsigned integer in [0, 255]"
        self._ice_starting_starting_failed = value

    @builtins.property
    def ice_aps_warning(self):
        """Message field 'ice_aps_warning'."""
        return self._ice_aps_warning

    @ice_aps_warning.setter
    def ice_aps_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_aps_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_aps_warning' field must be an unsigned integer in [0, 255]"
        self._ice_aps_warning = value

    @builtins.property
    def hl_counter_error(self):
        """Message field 'hl_counter_error'."""
        return self._hl_counter_error

    @hl_counter_error.setter
    def hl_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_counter_error' field must be an unsigned integer in [0, 255]"
        self._hl_counter_error = value

    @builtins.property
    def hl_timeout_error(self):
        """Message field 'hl_timeout_error'."""
        return self._hl_timeout_error

    @hl_timeout_error.setter
    def hl_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hl_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hl_timeout_error' field must be an unsigned integer in [0, 255]"
        self._hl_timeout_error = value

    @builtins.property
    def ice_counter_error(self):
        """Message field 'ice_counter_error'."""
        return self._ice_counter_error

    @ice_counter_error.setter
    def ice_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_counter_error' field must be an unsigned integer in [0, 255]"
        self._ice_counter_error = value

    @builtins.property
    def ice_timeout_error(self):
        """Message field 'ice_timeout_error'."""
        return self._ice_timeout_error

    @ice_timeout_error.setter
    def ice_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_timeout_error' field must be an unsigned integer in [0, 255]"
        self._ice_timeout_error = value

    @builtins.property
    def emb_line_press_over_max_start_limit(self):
        """Message field 'emb_line_press_over_max_start_limit'."""
        return self._emb_line_press_over_max_start_limit

    @emb_line_press_over_max_start_limit.setter
    def emb_line_press_over_max_start_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emb_line_press_over_max_start_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emb_line_press_over_max_start_limit' field must be an unsigned integer in [0, 255]"
        self._emb_line_press_over_max_start_limit = value

    @builtins.property
    def ice_oil_temp_under_min_start_limit(self):
        """Message field 'ice_oil_temp_under_min_start_limit'."""
        return self._ice_oil_temp_under_min_start_limit

    @ice_oil_temp_under_min_start_limit.setter
    def ice_oil_temp_under_min_start_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_oil_temp_under_min_start_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_oil_temp_under_min_start_limit' field must be an unsigned integer in [0, 255]"
        self._ice_oil_temp_under_min_start_limit = value

    @builtins.property
    def pdu1_counter_error(self):
        """Message field 'pdu1_counter_error'."""
        return self._pdu1_counter_error

    @pdu1_counter_error.setter
    def pdu1_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu1_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu1_counter_error' field must be an unsigned integer in [0, 255]"
        self._pdu1_counter_error = value

    @builtins.property
    def pdu1_timeout_error(self):
        """Message field 'pdu1_timeout_error'."""
        return self._pdu1_timeout_error

    @pdu1_timeout_error.setter
    def pdu1_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu1_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu1_timeout_error' field must be an unsigned integer in [0, 255]"
        self._pdu1_timeout_error = value

    @builtins.property
    def pdu2_counter_error(self):
        """Message field 'pdu2_counter_error'."""
        return self._pdu2_counter_error

    @pdu2_counter_error.setter
    def pdu2_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu2_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu2_counter_error' field must be an unsigned integer in [0, 255]"
        self._pdu2_counter_error = value

    @builtins.property
    def pdu2_timeout_error(self):
        """Message field 'pdu2_timeout_error'."""
        return self._pdu2_timeout_error

    @pdu2_timeout_error.setter
    def pdu2_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu2_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu2_timeout_error' field must be an unsigned integer in [0, 255]"
        self._pdu2_timeout_error = value

    @builtins.property
    def em_piston_hall_not_ready(self):
        """Message field 'em_piston_hall_not_ready'."""
        return self._em_piston_hall_not_ready

    @em_piston_hall_not_ready.setter
    def em_piston_hall_not_ready(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'em_piston_hall_not_ready' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'em_piston_hall_not_ready' field must be an unsigned integer in [0, 255]"
        self._em_piston_hall_not_ready = value

    @builtins.property
    def psa_counter_error(self):
        """Message field 'psa_counter_error'."""
        return self._psa_counter_error

    @psa_counter_error.setter
    def psa_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'psa_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'psa_counter_error' field must be an unsigned integer in [0, 255]"
        self._psa_counter_error = value

    @builtins.property
    def psa_derating(self):
        """Message field 'psa_derating'."""
        return self._psa_derating

    @psa_derating.setter
    def psa_derating(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'psa_derating' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'psa_derating' field must be an unsigned integer in [0, 255]"
        self._psa_derating = value

    @builtins.property
    def psa_error(self):
        """Message field 'psa_error'."""
        return self._psa_error

    @psa_error.setter
    def psa_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'psa_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'psa_error' field must be an unsigned integer in [0, 255]"
        self._psa_error = value

    @builtins.property
    def psa_timeout_error(self):
        """Message field 'psa_timeout_error'."""
        return self._psa_timeout_error

    @psa_timeout_error.setter
    def psa_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'psa_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'psa_timeout_error' field must be an unsigned integer in [0, 255]"
        self._psa_timeout_error = value

    @builtins.property
    def emb_tank_press_under_level1(self):
        """Message field 'emb_tank_press_under_level1'."""
        return self._emb_tank_press_under_level1

    @emb_tank_press_under_level1.setter
    def emb_tank_press_under_level1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emb_tank_press_under_level1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emb_tank_press_under_level1' field must be an unsigned integer in [0, 255]"
        self._emb_tank_press_under_level1 = value

    @builtins.property
    def emb_tank_press_under_level2(self):
        """Message field 'emb_tank_press_under_level2'."""
        return self._emb_tank_press_under_level2

    @emb_tank_press_under_level2.setter
    def emb_tank_press_under_level2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emb_tank_press_under_level2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emb_tank_press_under_level2' field must be an unsigned integer in [0, 255]"
        self._emb_tank_press_under_level2 = value

    @builtins.property
    def emb_tank_press_under_level3(self):
        """Message field 'emb_tank_press_under_level3'."""
        return self._emb_tank_press_under_level3

    @emb_tank_press_under_level3.setter
    def emb_tank_press_under_level3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emb_tank_press_under_level3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emb_tank_press_under_level3' field must be an unsigned integer in [0, 255]"
        self._emb_tank_press_under_level3 = value

    @builtins.property
    def emb_tank_press_under_min_start_limit(self):
        """Message field 'emb_tank_press_under_min_start_limit'."""
        return self._emb_tank_press_under_min_start_limit

    @emb_tank_press_under_min_start_limit.setter
    def emb_tank_press_under_min_start_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emb_tank_press_under_min_start_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emb_tank_press_under_min_start_limit' field must be an unsigned integer in [0, 255]"
        self._emb_tank_press_under_min_start_limit = value

    @builtins.property
    def ice_override_wrong_config(self):
        """Message field 'ice_override_wrong_config'."""
        return self._ice_override_wrong_config

    @ice_override_wrong_config.setter
    def ice_override_wrong_config(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_override_wrong_config' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_override_wrong_config' field must be an unsigned integer in [0, 255]"
        self._ice_override_wrong_config = value

    @builtins.property
    def bsu_wrong_init_config(self):
        """Message field 'bsu_wrong_init_config'."""
        return self._bsu_wrong_init_config

    @bsu_wrong_init_config.setter
    def bsu_wrong_init_config(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsu_wrong_init_config' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsu_wrong_init_config' field must be an unsigned integer in [0, 255]"
        self._bsu_wrong_init_config = value

    @builtins.property
    def ice_boost_warning(self):
        """Message field 'ice_boost_warning'."""
        return self._ice_boost_warning

    @ice_boost_warning.setter
    def ice_boost_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_boost_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_boost_warning' field must be an unsigned integer in [0, 255]"
        self._ice_boost_warning = value

    @builtins.property
    def ice_coolant_pressure_warning(self):
        """Message field 'ice_coolant_pressure_warning'."""
        return self._ice_coolant_pressure_warning

    @ice_coolant_pressure_warning.setter
    def ice_coolant_pressure_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_coolant_pressure_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_coolant_pressure_warning' field must be an unsigned integer in [0, 255]"
        self._ice_coolant_pressure_warning = value

    @builtins.property
    def ice_coolant_temperature_warning(self):
        """Message field 'ice_coolant_temperature_warning'."""
        return self._ice_coolant_temperature_warning

    @ice_coolant_temperature_warning.setter
    def ice_coolant_temperature_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_coolant_temperature_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_coolant_temperature_warning' field must be an unsigned integer in [0, 255]"
        self._ice_coolant_temperature_warning = value

    @builtins.property
    def ice_fuel_pressure_warning(self):
        """Message field 'ice_fuel_pressure_warning'."""
        return self._ice_fuel_pressure_warning

    @ice_fuel_pressure_warning.setter
    def ice_fuel_pressure_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_fuel_pressure_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_fuel_pressure_warning' field must be an unsigned integer in [0, 255]"
        self._ice_fuel_pressure_warning = value

    @builtins.property
    def ice_gear_oil_temperature_warning(self):
        """Message field 'ice_gear_oil_temperature_warning'."""
        return self._ice_gear_oil_temperature_warning

    @ice_gear_oil_temperature_warning.setter
    def ice_gear_oil_temperature_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_gear_oil_temperature_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_gear_oil_temperature_warning' field must be an unsigned integer in [0, 255]"
        self._ice_gear_oil_temperature_warning = value

    @builtins.property
    def ice_oil_pressure_warning(self):
        """Message field 'ice_oil_pressure_warning'."""
        return self._ice_oil_pressure_warning

    @ice_oil_pressure_warning.setter
    def ice_oil_pressure_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_oil_pressure_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_oil_pressure_warning' field must be an unsigned integer in [0, 255]"
        self._ice_oil_pressure_warning = value

    @builtins.property
    def ice_oil_temperature_warning(self):
        """Message field 'ice_oil_temperature_warning'."""
        return self._ice_oil_temperature_warning

    @ice_oil_temperature_warning.setter
    def ice_oil_temperature_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_oil_temperature_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_oil_temperature_warning' field must be an unsigned integer in [0, 255]"
        self._ice_oil_temperature_warning = value

    @builtins.property
    def ice_over_rpm_warning(self):
        """Message field 'ice_over_rpm_warning'."""
        return self._ice_over_rpm_warning

    @ice_over_rpm_warning.setter
    def ice_over_rpm_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_over_rpm_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_over_rpm_warning' field must be an unsigned integer in [0, 255]"
        self._ice_over_rpm_warning = value

    @builtins.property
    def ice_sensor_failure_warning(self):
        """Message field 'ice_sensor_failure_warning'."""
        return self._ice_sensor_failure_warning

    @ice_sensor_failure_warning.setter
    def ice_sensor_failure_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_sensor_failure_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_sensor_failure_warning' field must be an unsigned integer in [0, 255]"
        self._ice_sensor_failure_warning = value

    @builtins.property
    def ice_target_gear_not_reached_warning(self):
        """Message field 'ice_target_gear_not_reached_warning'."""
        return self._ice_target_gear_not_reached_warning

    @ice_target_gear_not_reached_warning.setter
    def ice_target_gear_not_reached_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_target_gear_not_reached_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_target_gear_not_reached_warning' field must be an unsigned integer in [0, 255]"
        self._ice_target_gear_not_reached_warning = value

    @builtins.property
    def ice_fuel_volume_warning(self):
        """Message field 'ice_fuel_volume_warning'."""
        return self._ice_fuel_volume_warning

    @ice_fuel_volume_warning.setter
    def ice_fuel_volume_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_fuel_volume_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_fuel_volume_warning' field must be an unsigned integer in [0, 255]"
        self._ice_fuel_volume_warning = value

    @builtins.property
    def rm_counter_error(self):
        """Message field 'rm_counter_error'."""
        return self._rm_counter_error

    @rm_counter_error.setter
    def rm_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rm_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rm_counter_error' field must be an unsigned integer in [0, 255]"
        self._rm_counter_error = value

    @builtins.property
    def rm_timeout_error(self):
        """Message field 'rm_timeout_error'."""
        return self._rm_timeout_error

    @rm_timeout_error.setter
    def rm_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rm_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rm_timeout_error' field must be an unsigned integer in [0, 255]"
        self._rm_timeout_error = value

    @builtins.property
    def ice_diagnostic_spare(self):
        """Message field 'ice_diagnostic_spare'."""
        return self._ice_diagnostic_spare

    @ice_diagnostic_spare.setter
    def ice_diagnostic_spare(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ice_diagnostic_spare' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ice_diagnostic_spare' field must be an unsigned integer in [0, 255]"
        self._ice_diagnostic_spare = value
