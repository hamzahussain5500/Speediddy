# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/DiagnosticWord01Updated.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiagnosticWord01Updated(type):
    """Metaclass of message 'DiagnosticWord01Updated'."""

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
                'sd_can_msgs.msg.DiagnosticWord01Updated')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostic_word01_updated
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostic_word01_updated
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostic_word01_updated
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostic_word01_updated
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostic_word01_updated

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


class DiagnosticWord01Updated(metaclass=Metaclass_DiagnosticWord01Updated):
    """Message class 'DiagnosticWord01Updated'."""

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
        '_ecu_timeout_em_fault',
        '_dem_cbafl_not_receive',
        '_ice_gear_low_oil_temp_warning',
        '_ice_engine_off_rejected',
        '_dem_pdu12_v_not_receive',
        '_ice_starting_fueling_failed',
        '_ice_starting_oil_heater_failed',
        '_ice_starting_starting_failed',
        '_ice_aps_warning',
        '_hl_counter_error',
        '_hl_timeout_error',
        '_ice_counter_error',
        '_ice_timeout_error',
        '_dem_cbafr_not_receive',
        '_ice_oil_temp_under_min_start_limit',
        '_pdu12_counter_error',
        '_pdu12_timeout_error',
        '_pdu48_counter_error',
        '_pdu48_timeout_error',
        '_dem_cbarl_not_receive',
        '_psa_counter_error',
        '_psa_derating',
        '_psa_error',
        '_psa_timeout_error',
        '_dem_cbarr_not_receive',
        '_em_stop_conditions_active',
        '_ml_stop_conditions_active',
        '_dcdc4812_under_min_start_limit',
        '_ice_override_wrong_config',
        '_bsu_wrong_init_config',
        '_ice_boost_warning',
        '_ice_coolant_pressure_warning',
        '_ice_coolant_temperature_warning',
        '_ice_fuel_pressure_warning',
        '_ice_gear_oil_temperature_warning',
        '_ice_oil_pressure_warning',
        '_ice_oil_temperature_warning',
        '_pdu12_active_anti_fire',
        '_ice_sensor_failure_warning',
        '_ice_target_gear_not_reached_warning',
        '_ice_fuel_volume_warning',
        '_rm_counter_error',
        '_rm_timeout_error',
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
        'ecu_timeout_em_fault': 'uint8',
        'dem_cbafl_not_receive': 'uint8',
        'ice_gear_low_oil_temp_warning': 'uint8',
        'ice_engine_off_rejected': 'uint8',
        'dem_pdu12_v_not_receive': 'uint8',
        'ice_starting_fueling_failed': 'uint8',
        'ice_starting_oil_heater_failed': 'uint8',
        'ice_starting_starting_failed': 'uint8',
        'ice_aps_warning': 'uint8',
        'hl_counter_error': 'uint8',
        'hl_timeout_error': 'uint8',
        'ice_counter_error': 'uint8',
        'ice_timeout_error': 'uint8',
        'dem_cbafr_not_receive': 'uint8',
        'ice_oil_temp_under_min_start_limit': 'uint8',
        'pdu12_counter_error': 'uint8',
        'pdu12_timeout_error': 'uint8',
        'pdu48_counter_error': 'uint8',
        'pdu48_timeout_error': 'uint8',
        'dem_cbarl_not_receive': 'uint8',
        'psa_counter_error': 'uint8',
        'psa_derating': 'uint8',
        'psa_error': 'uint8',
        'psa_timeout_error': 'uint8',
        'dem_cbarr_not_receive': 'uint8',
        'em_stop_conditions_active': 'uint8',
        'ml_stop_conditions_active': 'uint8',
        'dcdc4812_under_min_start_limit': 'uint8',
        'ice_override_wrong_config': 'uint8',
        'bsu_wrong_init_config': 'uint8',
        'ice_boost_warning': 'uint8',
        'ice_coolant_pressure_warning': 'uint8',
        'ice_coolant_temperature_warning': 'uint8',
        'ice_fuel_pressure_warning': 'uint8',
        'ice_gear_oil_temperature_warning': 'uint8',
        'ice_oil_pressure_warning': 'uint8',
        'ice_oil_temperature_warning': 'uint8',
        'pdu12_active_anti_fire': 'uint8',
        'ice_sensor_failure_warning': 'uint8',
        'ice_target_gear_not_reached_warning': 'uint8',
        'ice_fuel_volume_warning': 'uint8',
        'rm_counter_error': 'uint8',
        'rm_timeout_error': 'uint8',
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
        self.ecu_timeout_em_fault = kwargs.get('ecu_timeout_em_fault', int())
        self.dem_cbafl_not_receive = kwargs.get('dem_cbafl_not_receive', int())
        self.ice_gear_low_oil_temp_warning = kwargs.get('ice_gear_low_oil_temp_warning', int())
        self.ice_engine_off_rejected = kwargs.get('ice_engine_off_rejected', int())
        self.dem_pdu12_v_not_receive = kwargs.get('dem_pdu12_v_not_receive', int())
        self.ice_starting_fueling_failed = kwargs.get('ice_starting_fueling_failed', int())
        self.ice_starting_oil_heater_failed = kwargs.get('ice_starting_oil_heater_failed', int())
        self.ice_starting_starting_failed = kwargs.get('ice_starting_starting_failed', int())
        self.ice_aps_warning = kwargs.get('ice_aps_warning', int())
        self.hl_counter_error = kwargs.get('hl_counter_error', int())
        self.hl_timeout_error = kwargs.get('hl_timeout_error', int())
        self.ice_counter_error = kwargs.get('ice_counter_error', int())
        self.ice_timeout_error = kwargs.get('ice_timeout_error', int())
        self.dem_cbafr_not_receive = kwargs.get('dem_cbafr_not_receive', int())
        self.ice_oil_temp_under_min_start_limit = kwargs.get('ice_oil_temp_under_min_start_limit', int())
        self.pdu12_counter_error = kwargs.get('pdu12_counter_error', int())
        self.pdu12_timeout_error = kwargs.get('pdu12_timeout_error', int())
        self.pdu48_counter_error = kwargs.get('pdu48_counter_error', int())
        self.pdu48_timeout_error = kwargs.get('pdu48_timeout_error', int())
        self.dem_cbarl_not_receive = kwargs.get('dem_cbarl_not_receive', int())
        self.psa_counter_error = kwargs.get('psa_counter_error', int())
        self.psa_derating = kwargs.get('psa_derating', int())
        self.psa_error = kwargs.get('psa_error', int())
        self.psa_timeout_error = kwargs.get('psa_timeout_error', int())
        self.dem_cbarr_not_receive = kwargs.get('dem_cbarr_not_receive', int())
        self.em_stop_conditions_active = kwargs.get('em_stop_conditions_active', int())
        self.ml_stop_conditions_active = kwargs.get('ml_stop_conditions_active', int())
        self.dcdc4812_under_min_start_limit = kwargs.get('dcdc4812_under_min_start_limit', int())
        self.ice_override_wrong_config = kwargs.get('ice_override_wrong_config', int())
        self.bsu_wrong_init_config = kwargs.get('bsu_wrong_init_config', int())
        self.ice_boost_warning = kwargs.get('ice_boost_warning', int())
        self.ice_coolant_pressure_warning = kwargs.get('ice_coolant_pressure_warning', int())
        self.ice_coolant_temperature_warning = kwargs.get('ice_coolant_temperature_warning', int())
        self.ice_fuel_pressure_warning = kwargs.get('ice_fuel_pressure_warning', int())
        self.ice_gear_oil_temperature_warning = kwargs.get('ice_gear_oil_temperature_warning', int())
        self.ice_oil_pressure_warning = kwargs.get('ice_oil_pressure_warning', int())
        self.ice_oil_temperature_warning = kwargs.get('ice_oil_temperature_warning', int())
        self.pdu12_active_anti_fire = kwargs.get('pdu12_active_anti_fire', int())
        self.ice_sensor_failure_warning = kwargs.get('ice_sensor_failure_warning', int())
        self.ice_target_gear_not_reached_warning = kwargs.get('ice_target_gear_not_reached_warning', int())
        self.ice_fuel_volume_warning = kwargs.get('ice_fuel_volume_warning', int())
        self.rm_counter_error = kwargs.get('rm_counter_error', int())
        self.rm_timeout_error = kwargs.get('rm_timeout_error', int())

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
        if self.ecu_timeout_em_fault != other.ecu_timeout_em_fault:
            return False
        if self.dem_cbafl_not_receive != other.dem_cbafl_not_receive:
            return False
        if self.ice_gear_low_oil_temp_warning != other.ice_gear_low_oil_temp_warning:
            return False
        if self.ice_engine_off_rejected != other.ice_engine_off_rejected:
            return False
        if self.dem_pdu12_v_not_receive != other.dem_pdu12_v_not_receive:
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
        if self.dem_cbafr_not_receive != other.dem_cbafr_not_receive:
            return False
        if self.ice_oil_temp_under_min_start_limit != other.ice_oil_temp_under_min_start_limit:
            return False
        if self.pdu12_counter_error != other.pdu12_counter_error:
            return False
        if self.pdu12_timeout_error != other.pdu12_timeout_error:
            return False
        if self.pdu48_counter_error != other.pdu48_counter_error:
            return False
        if self.pdu48_timeout_error != other.pdu48_timeout_error:
            return False
        if self.dem_cbarl_not_receive != other.dem_cbarl_not_receive:
            return False
        if self.psa_counter_error != other.psa_counter_error:
            return False
        if self.psa_derating != other.psa_derating:
            return False
        if self.psa_error != other.psa_error:
            return False
        if self.psa_timeout_error != other.psa_timeout_error:
            return False
        if self.dem_cbarr_not_receive != other.dem_cbarr_not_receive:
            return False
        if self.em_stop_conditions_active != other.em_stop_conditions_active:
            return False
        if self.ml_stop_conditions_active != other.ml_stop_conditions_active:
            return False
        if self.dcdc4812_under_min_start_limit != other.dcdc4812_under_min_start_limit:
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
        if self.pdu12_active_anti_fire != other.pdu12_active_anti_fire:
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
    def ecu_timeout_em_fault(self):
        """Message field 'ecu_timeout_em_fault'."""
        return self._ecu_timeout_em_fault

    @ecu_timeout_em_fault.setter
    def ecu_timeout_em_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ecu_timeout_em_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ecu_timeout_em_fault' field must be an unsigned integer in [0, 255]"
        self._ecu_timeout_em_fault = value

    @builtins.property
    def dem_cbafl_not_receive(self):
        """Message field 'dem_cbafl_not_receive'."""
        return self._dem_cbafl_not_receive

    @dem_cbafl_not_receive.setter
    def dem_cbafl_not_receive(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dem_cbafl_not_receive' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dem_cbafl_not_receive' field must be an unsigned integer in [0, 255]"
        self._dem_cbafl_not_receive = value

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
    def dem_pdu12_v_not_receive(self):
        """Message field 'dem_pdu12_v_not_receive'."""
        return self._dem_pdu12_v_not_receive

    @dem_pdu12_v_not_receive.setter
    def dem_pdu12_v_not_receive(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dem_pdu12_v_not_receive' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dem_pdu12_v_not_receive' field must be an unsigned integer in [0, 255]"
        self._dem_pdu12_v_not_receive = value

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
    def dem_cbafr_not_receive(self):
        """Message field 'dem_cbafr_not_receive'."""
        return self._dem_cbafr_not_receive

    @dem_cbafr_not_receive.setter
    def dem_cbafr_not_receive(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dem_cbafr_not_receive' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dem_cbafr_not_receive' field must be an unsigned integer in [0, 255]"
        self._dem_cbafr_not_receive = value

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
    def pdu12_counter_error(self):
        """Message field 'pdu12_counter_error'."""
        return self._pdu12_counter_error

    @pdu12_counter_error.setter
    def pdu12_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu12_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu12_counter_error' field must be an unsigned integer in [0, 255]"
        self._pdu12_counter_error = value

    @builtins.property
    def pdu12_timeout_error(self):
        """Message field 'pdu12_timeout_error'."""
        return self._pdu12_timeout_error

    @pdu12_timeout_error.setter
    def pdu12_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu12_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu12_timeout_error' field must be an unsigned integer in [0, 255]"
        self._pdu12_timeout_error = value

    @builtins.property
    def pdu48_counter_error(self):
        """Message field 'pdu48_counter_error'."""
        return self._pdu48_counter_error

    @pdu48_counter_error.setter
    def pdu48_counter_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu48_counter_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu48_counter_error' field must be an unsigned integer in [0, 255]"
        self._pdu48_counter_error = value

    @builtins.property
    def pdu48_timeout_error(self):
        """Message field 'pdu48_timeout_error'."""
        return self._pdu48_timeout_error

    @pdu48_timeout_error.setter
    def pdu48_timeout_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu48_timeout_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu48_timeout_error' field must be an unsigned integer in [0, 255]"
        self._pdu48_timeout_error = value

    @builtins.property
    def dem_cbarl_not_receive(self):
        """Message field 'dem_cbarl_not_receive'."""
        return self._dem_cbarl_not_receive

    @dem_cbarl_not_receive.setter
    def dem_cbarl_not_receive(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dem_cbarl_not_receive' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dem_cbarl_not_receive' field must be an unsigned integer in [0, 255]"
        self._dem_cbarl_not_receive = value

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
    def dem_cbarr_not_receive(self):
        """Message field 'dem_cbarr_not_receive'."""
        return self._dem_cbarr_not_receive

    @dem_cbarr_not_receive.setter
    def dem_cbarr_not_receive(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dem_cbarr_not_receive' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dem_cbarr_not_receive' field must be an unsigned integer in [0, 255]"
        self._dem_cbarr_not_receive = value

    @builtins.property
    def em_stop_conditions_active(self):
        """Message field 'em_stop_conditions_active'."""
        return self._em_stop_conditions_active

    @em_stop_conditions_active.setter
    def em_stop_conditions_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'em_stop_conditions_active' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'em_stop_conditions_active' field must be an unsigned integer in [0, 255]"
        self._em_stop_conditions_active = value

    @builtins.property
    def ml_stop_conditions_active(self):
        """Message field 'ml_stop_conditions_active'."""
        return self._ml_stop_conditions_active

    @ml_stop_conditions_active.setter
    def ml_stop_conditions_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ml_stop_conditions_active' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ml_stop_conditions_active' field must be an unsigned integer in [0, 255]"
        self._ml_stop_conditions_active = value

    @builtins.property
    def dcdc4812_under_min_start_limit(self):
        """Message field 'dcdc4812_under_min_start_limit'."""
        return self._dcdc4812_under_min_start_limit

    @dcdc4812_under_min_start_limit.setter
    def dcdc4812_under_min_start_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dcdc4812_under_min_start_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dcdc4812_under_min_start_limit' field must be an unsigned integer in [0, 255]"
        self._dcdc4812_under_min_start_limit = value

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
    def pdu12_active_anti_fire(self):
        """Message field 'pdu12_active_anti_fire'."""
        return self._pdu12_active_anti_fire

    @pdu12_active_anti_fire.setter
    def pdu12_active_anti_fire(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu12_active_anti_fire' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pdu12_active_anti_fire' field must be an unsigned integer in [0, 255]"
        self._pdu12_active_anti_fire = value

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
