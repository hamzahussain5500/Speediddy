# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_localization_msgs:msg/StateEstimation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'pos_accuracy'
# Member 'vel_accuracy'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateEstimation(type):
    """Metaclass of message 'StateEstimation'."""

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
            module = import_type_support('sd_localization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sd_localization_msgs.msg.StateEstimation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_estimation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_estimation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_estimation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_estimation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_estimation

            from sd_map_msgs.msg import SnMapState
            if SnMapState.__class__._TYPE_SUPPORT is None:
                SnMapState.__class__.__import_type_support__()

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


class StateEstimation(metaclass=Metaclass_StateEstimation):
    """Message class 'StateEstimation'."""

    __slots__ = [
        '_header',
        '_se_status',
        '_se_state',
        '_x_m',
        '_y_m',
        '_z_m',
        '_roll_rad',
        '_pitch_rad',
        '_yaw_rad',
        '_pos_accuracy',
        '_vel_accuracy',
        '_wx_radps',
        '_wy_radps',
        '_wz_radps',
        '_vx_mps',
        '_vy_mps',
        '_vz_mps',
        '_omega_w_fl',
        '_omega_w_fr',
        '_omega_w_rl',
        '_omega_w_rr',
        '_v_mps',
        '_v_raw_mps',
        '_beta_rad',
        '_ax_mps2',
        '_ay_mps2',
        '_az_mps2',
        '_valid_imu_b',
        '_yaw_vel_rad',
        '_kappa_radpm',
        '_dbeta_radps',
        '_ddyaw_radps2',
        '_ax_vel_mps2',
        '_ay_vel_mps2',
        '_lambda_fl_perc',
        '_lambda_fr_perc',
        '_lambda_rl_perc',
        '_lambda_rr_perc',
        '_valid_wheelsspeeds_b',
        '_alpha_fl_rad',
        '_alpha_fr_rad',
        '_alpha_rl_rad',
        '_alpha_rr_rad',
        '_diff_fr_alpha_rad',
        '_delta_wheel_rad',
        '_timestamp',
        '_gas',
        '_brake',
        '_clutch',
        '_gear',
        '_rpm',
        '_front_brake_pressure',
        '_rear_brake_pressure',
        '_vehicle_timestamp',
        '_residuals_status',
        '_std_dev_status',
        '_is_safe',
        '_cba_actual_pressure_fl_pa',
        '_cba_actual_pressure_fr_pa',
        '_cba_actual_pressure_rl_pa',
        '_cba_actual_pressure_rr_pa',
        '_sn_map_state',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'se_status': 'int32',
        'se_state': 'int32',
        'x_m': 'double',
        'y_m': 'double',
        'z_m': 'double',
        'roll_rad': 'double',
        'pitch_rad': 'double',
        'yaw_rad': 'double',
        'pos_accuracy': 'double[3]',
        'vel_accuracy': 'double[3]',
        'wx_radps': 'double',
        'wy_radps': 'double',
        'wz_radps': 'double',
        'vx_mps': 'double',
        'vy_mps': 'double',
        'vz_mps': 'double',
        'omega_w_fl': 'double',
        'omega_w_fr': 'double',
        'omega_w_rl': 'double',
        'omega_w_rr': 'double',
        'v_mps': 'double',
        'v_raw_mps': 'double',
        'beta_rad': 'double',
        'ax_mps2': 'double',
        'ay_mps2': 'double',
        'az_mps2': 'double',
        'valid_imu_b': 'boolean',
        'yaw_vel_rad': 'double',
        'kappa_radpm': 'double',
        'dbeta_radps': 'double',
        'ddyaw_radps2': 'double',
        'ax_vel_mps2': 'double',
        'ay_vel_mps2': 'double',
        'lambda_fl_perc': 'double',
        'lambda_fr_perc': 'double',
        'lambda_rl_perc': 'double',
        'lambda_rr_perc': 'double',
        'valid_wheelsspeeds_b': 'boolean',
        'alpha_fl_rad': 'double',
        'alpha_fr_rad': 'double',
        'alpha_rl_rad': 'double',
        'alpha_rr_rad': 'double',
        'diff_fr_alpha_rad': 'double',
        'delta_wheel_rad': 'double',
        'timestamp': 'double',
        'gas': 'double',
        'brake': 'double',
        'clutch': 'double',
        'gear': 'double',
        'rpm': 'double',
        'front_brake_pressure': 'double',
        'rear_brake_pressure': 'double',
        'vehicle_timestamp': 'double',
        'residuals_status': 'boolean',
        'std_dev_status': 'boolean',
        'is_safe': 'boolean',
        'cba_actual_pressure_fl_pa': 'double',
        'cba_actual_pressure_fr_pa': 'double',
        'cba_actual_pressure_rl_pa': 'double',
        'cba_actual_pressure_rr_pa': 'double',
        'sn_map_state': 'sd_map_msgs/SnMapState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sd_map_msgs', 'msg'], 'SnMapState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.se_status = kwargs.get('se_status', int())
        self.se_state = kwargs.get('se_state', int())
        self.x_m = kwargs.get('x_m', float())
        self.y_m = kwargs.get('y_m', float())
        self.z_m = kwargs.get('z_m', float())
        self.roll_rad = kwargs.get('roll_rad', float())
        self.pitch_rad = kwargs.get('pitch_rad', float())
        self.yaw_rad = kwargs.get('yaw_rad', float())
        if 'pos_accuracy' not in kwargs:
            self.pos_accuracy = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.pos_accuracy = kwargs.get('pos_accuracy')
        if 'vel_accuracy' not in kwargs:
            self.vel_accuracy = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.vel_accuracy = kwargs.get('vel_accuracy')
        self.wx_radps = kwargs.get('wx_radps', float())
        self.wy_radps = kwargs.get('wy_radps', float())
        self.wz_radps = kwargs.get('wz_radps', float())
        self.vx_mps = kwargs.get('vx_mps', float())
        self.vy_mps = kwargs.get('vy_mps', float())
        self.vz_mps = kwargs.get('vz_mps', float())
        self.omega_w_fl = kwargs.get('omega_w_fl', float())
        self.omega_w_fr = kwargs.get('omega_w_fr', float())
        self.omega_w_rl = kwargs.get('omega_w_rl', float())
        self.omega_w_rr = kwargs.get('omega_w_rr', float())
        self.v_mps = kwargs.get('v_mps', float())
        self.v_raw_mps = kwargs.get('v_raw_mps', float())
        self.beta_rad = kwargs.get('beta_rad', float())
        self.ax_mps2 = kwargs.get('ax_mps2', float())
        self.ay_mps2 = kwargs.get('ay_mps2', float())
        self.az_mps2 = kwargs.get('az_mps2', float())
        self.valid_imu_b = kwargs.get('valid_imu_b', bool())
        self.yaw_vel_rad = kwargs.get('yaw_vel_rad', float())
        self.kappa_radpm = kwargs.get('kappa_radpm', float())
        self.dbeta_radps = kwargs.get('dbeta_radps', float())
        self.ddyaw_radps2 = kwargs.get('ddyaw_radps2', float())
        self.ax_vel_mps2 = kwargs.get('ax_vel_mps2', float())
        self.ay_vel_mps2 = kwargs.get('ay_vel_mps2', float())
        self.lambda_fl_perc = kwargs.get('lambda_fl_perc', float())
        self.lambda_fr_perc = kwargs.get('lambda_fr_perc', float())
        self.lambda_rl_perc = kwargs.get('lambda_rl_perc', float())
        self.lambda_rr_perc = kwargs.get('lambda_rr_perc', float())
        self.valid_wheelsspeeds_b = kwargs.get('valid_wheelsspeeds_b', bool())
        self.alpha_fl_rad = kwargs.get('alpha_fl_rad', float())
        self.alpha_fr_rad = kwargs.get('alpha_fr_rad', float())
        self.alpha_rl_rad = kwargs.get('alpha_rl_rad', float())
        self.alpha_rr_rad = kwargs.get('alpha_rr_rad', float())
        self.diff_fr_alpha_rad = kwargs.get('diff_fr_alpha_rad', float())
        self.delta_wheel_rad = kwargs.get('delta_wheel_rad', float())
        self.timestamp = kwargs.get('timestamp', float())
        self.gas = kwargs.get('gas', float())
        self.brake = kwargs.get('brake', float())
        self.clutch = kwargs.get('clutch', float())
        self.gear = kwargs.get('gear', float())
        self.rpm = kwargs.get('rpm', float())
        self.front_brake_pressure = kwargs.get('front_brake_pressure', float())
        self.rear_brake_pressure = kwargs.get('rear_brake_pressure', float())
        self.vehicle_timestamp = kwargs.get('vehicle_timestamp', float())
        self.residuals_status = kwargs.get('residuals_status', bool())
        self.std_dev_status = kwargs.get('std_dev_status', bool())
        self.is_safe = kwargs.get('is_safe', bool())
        self.cba_actual_pressure_fl_pa = kwargs.get('cba_actual_pressure_fl_pa', float())
        self.cba_actual_pressure_fr_pa = kwargs.get('cba_actual_pressure_fr_pa', float())
        self.cba_actual_pressure_rl_pa = kwargs.get('cba_actual_pressure_rl_pa', float())
        self.cba_actual_pressure_rr_pa = kwargs.get('cba_actual_pressure_rr_pa', float())
        from sd_map_msgs.msg import SnMapState
        self.sn_map_state = kwargs.get('sn_map_state', SnMapState())

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
        if self.se_status != other.se_status:
            return False
        if self.se_state != other.se_state:
            return False
        if self.x_m != other.x_m:
            return False
        if self.y_m != other.y_m:
            return False
        if self.z_m != other.z_m:
            return False
        if self.roll_rad != other.roll_rad:
            return False
        if self.pitch_rad != other.pitch_rad:
            return False
        if self.yaw_rad != other.yaw_rad:
            return False
        if any(self.pos_accuracy != other.pos_accuracy):
            return False
        if any(self.vel_accuracy != other.vel_accuracy):
            return False
        if self.wx_radps != other.wx_radps:
            return False
        if self.wy_radps != other.wy_radps:
            return False
        if self.wz_radps != other.wz_radps:
            return False
        if self.vx_mps != other.vx_mps:
            return False
        if self.vy_mps != other.vy_mps:
            return False
        if self.vz_mps != other.vz_mps:
            return False
        if self.omega_w_fl != other.omega_w_fl:
            return False
        if self.omega_w_fr != other.omega_w_fr:
            return False
        if self.omega_w_rl != other.omega_w_rl:
            return False
        if self.omega_w_rr != other.omega_w_rr:
            return False
        if self.v_mps != other.v_mps:
            return False
        if self.v_raw_mps != other.v_raw_mps:
            return False
        if self.beta_rad != other.beta_rad:
            return False
        if self.ax_mps2 != other.ax_mps2:
            return False
        if self.ay_mps2 != other.ay_mps2:
            return False
        if self.az_mps2 != other.az_mps2:
            return False
        if self.valid_imu_b != other.valid_imu_b:
            return False
        if self.yaw_vel_rad != other.yaw_vel_rad:
            return False
        if self.kappa_radpm != other.kappa_radpm:
            return False
        if self.dbeta_radps != other.dbeta_radps:
            return False
        if self.ddyaw_radps2 != other.ddyaw_radps2:
            return False
        if self.ax_vel_mps2 != other.ax_vel_mps2:
            return False
        if self.ay_vel_mps2 != other.ay_vel_mps2:
            return False
        if self.lambda_fl_perc != other.lambda_fl_perc:
            return False
        if self.lambda_fr_perc != other.lambda_fr_perc:
            return False
        if self.lambda_rl_perc != other.lambda_rl_perc:
            return False
        if self.lambda_rr_perc != other.lambda_rr_perc:
            return False
        if self.valid_wheelsspeeds_b != other.valid_wheelsspeeds_b:
            return False
        if self.alpha_fl_rad != other.alpha_fl_rad:
            return False
        if self.alpha_fr_rad != other.alpha_fr_rad:
            return False
        if self.alpha_rl_rad != other.alpha_rl_rad:
            return False
        if self.alpha_rr_rad != other.alpha_rr_rad:
            return False
        if self.diff_fr_alpha_rad != other.diff_fr_alpha_rad:
            return False
        if self.delta_wheel_rad != other.delta_wheel_rad:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.gas != other.gas:
            return False
        if self.brake != other.brake:
            return False
        if self.clutch != other.clutch:
            return False
        if self.gear != other.gear:
            return False
        if self.rpm != other.rpm:
            return False
        if self.front_brake_pressure != other.front_brake_pressure:
            return False
        if self.rear_brake_pressure != other.rear_brake_pressure:
            return False
        if self.vehicle_timestamp != other.vehicle_timestamp:
            return False
        if self.residuals_status != other.residuals_status:
            return False
        if self.std_dev_status != other.std_dev_status:
            return False
        if self.is_safe != other.is_safe:
            return False
        if self.cba_actual_pressure_fl_pa != other.cba_actual_pressure_fl_pa:
            return False
        if self.cba_actual_pressure_fr_pa != other.cba_actual_pressure_fr_pa:
            return False
        if self.cba_actual_pressure_rl_pa != other.cba_actual_pressure_rl_pa:
            return False
        if self.cba_actual_pressure_rr_pa != other.cba_actual_pressure_rr_pa:
            return False
        if self.sn_map_state != other.sn_map_state:
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
    def se_status(self):
        """Message field 'se_status'."""
        return self._se_status

    @se_status.setter
    def se_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'se_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'se_status' field must be an integer in [-2147483648, 2147483647]"
        self._se_status = value

    @builtins.property
    def se_state(self):
        """Message field 'se_state'."""
        return self._se_state

    @se_state.setter
    def se_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'se_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'se_state' field must be an integer in [-2147483648, 2147483647]"
        self._se_state = value

    @builtins.property
    def x_m(self):
        """Message field 'x_m'."""
        return self._x_m

    @x_m.setter
    def x_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_m = value

    @builtins.property
    def y_m(self):
        """Message field 'y_m'."""
        return self._y_m

    @y_m.setter
    def y_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_m = value

    @builtins.property
    def z_m(self):
        """Message field 'z_m'."""
        return self._z_m

    @z_m.setter
    def z_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z_m = value

    @builtins.property
    def roll_rad(self):
        """Message field 'roll_rad'."""
        return self._roll_rad

    @roll_rad.setter
    def roll_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll_rad = value

    @builtins.property
    def pitch_rad(self):
        """Message field 'pitch_rad'."""
        return self._pitch_rad

    @pitch_rad.setter
    def pitch_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch_rad = value

    @builtins.property
    def yaw_rad(self):
        """Message field 'yaw_rad'."""
        return self._yaw_rad

    @yaw_rad.setter
    def yaw_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rad = value

    @builtins.property
    def pos_accuracy(self):
        """Message field 'pos_accuracy'."""
        return self._pos_accuracy

    @pos_accuracy.setter
    def pos_accuracy(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'pos_accuracy' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'pos_accuracy' numpy.ndarray() must have a size of 3"
            self._pos_accuracy = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'pos_accuracy' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pos_accuracy = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def vel_accuracy(self):
        """Message field 'vel_accuracy'."""
        return self._vel_accuracy

    @vel_accuracy.setter
    def vel_accuracy(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'vel_accuracy' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'vel_accuracy' numpy.ndarray() must have a size of 3"
            self._vel_accuracy = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'vel_accuracy' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._vel_accuracy = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def wx_radps(self):
        """Message field 'wx_radps'."""
        return self._wx_radps

    @wx_radps.setter
    def wx_radps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wx_radps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wx_radps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wx_radps = value

    @builtins.property
    def wy_radps(self):
        """Message field 'wy_radps'."""
        return self._wy_radps

    @wy_radps.setter
    def wy_radps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wy_radps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wy_radps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wy_radps = value

    @builtins.property
    def wz_radps(self):
        """Message field 'wz_radps'."""
        return self._wz_radps

    @wz_radps.setter
    def wz_radps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wz_radps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wz_radps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wz_radps = value

    @builtins.property
    def vx_mps(self):
        """Message field 'vx_mps'."""
        return self._vx_mps

    @vx_mps.setter
    def vx_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vx_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vx_mps = value

    @builtins.property
    def vy_mps(self):
        """Message field 'vy_mps'."""
        return self._vy_mps

    @vy_mps.setter
    def vy_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vy_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vy_mps = value

    @builtins.property
    def vz_mps(self):
        """Message field 'vz_mps'."""
        return self._vz_mps

    @vz_mps.setter
    def vz_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vz_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vz_mps = value

    @builtins.property
    def omega_w_fl(self):
        """Message field 'omega_w_fl'."""
        return self._omega_w_fl

    @omega_w_fl.setter
    def omega_w_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'omega_w_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'omega_w_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._omega_w_fl = value

    @builtins.property
    def omega_w_fr(self):
        """Message field 'omega_w_fr'."""
        return self._omega_w_fr

    @omega_w_fr.setter
    def omega_w_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'omega_w_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'omega_w_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._omega_w_fr = value

    @builtins.property
    def omega_w_rl(self):
        """Message field 'omega_w_rl'."""
        return self._omega_w_rl

    @omega_w_rl.setter
    def omega_w_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'omega_w_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'omega_w_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._omega_w_rl = value

    @builtins.property
    def omega_w_rr(self):
        """Message field 'omega_w_rr'."""
        return self._omega_w_rr

    @omega_w_rr.setter
    def omega_w_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'omega_w_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'omega_w_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._omega_w_rr = value

    @builtins.property
    def v_mps(self):
        """Message field 'v_mps'."""
        return self._v_mps

    @v_mps.setter
    def v_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_mps = value

    @builtins.property
    def v_raw_mps(self):
        """Message field 'v_raw_mps'."""
        return self._v_raw_mps

    @v_raw_mps.setter
    def v_raw_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_raw_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_raw_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_raw_mps = value

    @builtins.property
    def beta_rad(self):
        """Message field 'beta_rad'."""
        return self._beta_rad

    @beta_rad.setter
    def beta_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beta_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'beta_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._beta_rad = value

    @builtins.property
    def ax_mps2(self):
        """Message field 'ax_mps2'."""
        return self._ax_mps2

    @ax_mps2.setter
    def ax_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax_mps2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ax_mps2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ax_mps2 = value

    @builtins.property
    def ay_mps2(self):
        """Message field 'ay_mps2'."""
        return self._ay_mps2

    @ay_mps2.setter
    def ay_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ay_mps2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ay_mps2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ay_mps2 = value

    @builtins.property
    def az_mps2(self):
        """Message field 'az_mps2'."""
        return self._az_mps2

    @az_mps2.setter
    def az_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az_mps2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'az_mps2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._az_mps2 = value

    @builtins.property
    def valid_imu_b(self):
        """Message field 'valid_imu_b'."""
        return self._valid_imu_b

    @valid_imu_b.setter
    def valid_imu_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_imu_b' field must be of type 'bool'"
        self._valid_imu_b = value

    @builtins.property
    def yaw_vel_rad(self):
        """Message field 'yaw_vel_rad'."""
        return self._yaw_vel_rad

    @yaw_vel_rad.setter
    def yaw_vel_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_vel_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_vel_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_vel_rad = value

    @builtins.property
    def kappa_radpm(self):
        """Message field 'kappa_radpm'."""
        return self._kappa_radpm

    @kappa_radpm.setter
    def kappa_radpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kappa_radpm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kappa_radpm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kappa_radpm = value

    @builtins.property
    def dbeta_radps(self):
        """Message field 'dbeta_radps'."""
        return self._dbeta_radps

    @dbeta_radps.setter
    def dbeta_radps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dbeta_radps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dbeta_radps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dbeta_radps = value

    @builtins.property
    def ddyaw_radps2(self):
        """Message field 'ddyaw_radps2'."""
        return self._ddyaw_radps2

    @ddyaw_radps2.setter
    def ddyaw_radps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ddyaw_radps2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ddyaw_radps2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ddyaw_radps2 = value

    @builtins.property
    def ax_vel_mps2(self):
        """Message field 'ax_vel_mps2'."""
        return self._ax_vel_mps2

    @ax_vel_mps2.setter
    def ax_vel_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax_vel_mps2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ax_vel_mps2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ax_vel_mps2 = value

    @builtins.property
    def ay_vel_mps2(self):
        """Message field 'ay_vel_mps2'."""
        return self._ay_vel_mps2

    @ay_vel_mps2.setter
    def ay_vel_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ay_vel_mps2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ay_vel_mps2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ay_vel_mps2 = value

    @builtins.property
    def lambda_fl_perc(self):
        """Message field 'lambda_fl_perc'."""
        return self._lambda_fl_perc

    @lambda_fl_perc.setter
    def lambda_fl_perc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lambda_fl_perc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lambda_fl_perc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lambda_fl_perc = value

    @builtins.property
    def lambda_fr_perc(self):
        """Message field 'lambda_fr_perc'."""
        return self._lambda_fr_perc

    @lambda_fr_perc.setter
    def lambda_fr_perc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lambda_fr_perc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lambda_fr_perc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lambda_fr_perc = value

    @builtins.property
    def lambda_rl_perc(self):
        """Message field 'lambda_rl_perc'."""
        return self._lambda_rl_perc

    @lambda_rl_perc.setter
    def lambda_rl_perc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lambda_rl_perc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lambda_rl_perc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lambda_rl_perc = value

    @builtins.property
    def lambda_rr_perc(self):
        """Message field 'lambda_rr_perc'."""
        return self._lambda_rr_perc

    @lambda_rr_perc.setter
    def lambda_rr_perc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lambda_rr_perc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lambda_rr_perc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lambda_rr_perc = value

    @builtins.property
    def valid_wheelsspeeds_b(self):
        """Message field 'valid_wheelsspeeds_b'."""
        return self._valid_wheelsspeeds_b

    @valid_wheelsspeeds_b.setter
    def valid_wheelsspeeds_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_wheelsspeeds_b' field must be of type 'bool'"
        self._valid_wheelsspeeds_b = value

    @builtins.property
    def alpha_fl_rad(self):
        """Message field 'alpha_fl_rad'."""
        return self._alpha_fl_rad

    @alpha_fl_rad.setter
    def alpha_fl_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_fl_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_fl_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_fl_rad = value

    @builtins.property
    def alpha_fr_rad(self):
        """Message field 'alpha_fr_rad'."""
        return self._alpha_fr_rad

    @alpha_fr_rad.setter
    def alpha_fr_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_fr_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_fr_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_fr_rad = value

    @builtins.property
    def alpha_rl_rad(self):
        """Message field 'alpha_rl_rad'."""
        return self._alpha_rl_rad

    @alpha_rl_rad.setter
    def alpha_rl_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_rl_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_rl_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_rl_rad = value

    @builtins.property
    def alpha_rr_rad(self):
        """Message field 'alpha_rr_rad'."""
        return self._alpha_rr_rad

    @alpha_rr_rad.setter
    def alpha_rr_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_rr_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_rr_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_rr_rad = value

    @builtins.property
    def diff_fr_alpha_rad(self):
        """Message field 'diff_fr_alpha_rad'."""
        return self._diff_fr_alpha_rad

    @diff_fr_alpha_rad.setter
    def diff_fr_alpha_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_fr_alpha_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'diff_fr_alpha_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._diff_fr_alpha_rad = value

    @builtins.property
    def delta_wheel_rad(self):
        """Message field 'delta_wheel_rad'."""
        return self._delta_wheel_rad

    @delta_wheel_rad.setter
    def delta_wheel_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_wheel_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'delta_wheel_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._delta_wheel_rad = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def gas(self):
        """Message field 'gas'."""
        return self._gas

    @gas.setter
    def gas(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gas' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gas' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gas = value

    @builtins.property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake = value

    @builtins.property
    def clutch(self):
        """Message field 'clutch'."""
        return self._clutch

    @clutch.setter
    def clutch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'clutch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'clutch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._clutch = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gear' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gear = value

    @builtins.property
    def rpm(self):
        """Message field 'rpm'."""
        return self._rpm

    @rpm.setter
    def rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rpm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rpm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rpm = value

    @builtins.property
    def front_brake_pressure(self):
        """Message field 'front_brake_pressure'."""
        return self._front_brake_pressure

    @front_brake_pressure.setter
    def front_brake_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_brake_pressure' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_brake_pressure' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_brake_pressure = value

    @builtins.property
    def rear_brake_pressure(self):
        """Message field 'rear_brake_pressure'."""
        return self._rear_brake_pressure

    @rear_brake_pressure.setter
    def rear_brake_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_brake_pressure' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_brake_pressure' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_brake_pressure = value

    @builtins.property
    def vehicle_timestamp(self):
        """Message field 'vehicle_timestamp'."""
        return self._vehicle_timestamp

    @vehicle_timestamp.setter
    def vehicle_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vehicle_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vehicle_timestamp = value

    @builtins.property
    def residuals_status(self):
        """Message field 'residuals_status'."""
        return self._residuals_status

    @residuals_status.setter
    def residuals_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'residuals_status' field must be of type 'bool'"
        self._residuals_status = value

    @builtins.property
    def std_dev_status(self):
        """Message field 'std_dev_status'."""
        return self._std_dev_status

    @std_dev_status.setter
    def std_dev_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'std_dev_status' field must be of type 'bool'"
        self._std_dev_status = value

    @builtins.property
    def is_safe(self):
        """Message field 'is_safe'."""
        return self._is_safe

    @is_safe.setter
    def is_safe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_safe' field must be of type 'bool'"
        self._is_safe = value

    @builtins.property
    def cba_actual_pressure_fl_pa(self):
        """Message field 'cba_actual_pressure_fl_pa'."""
        return self._cba_actual_pressure_fl_pa

    @cba_actual_pressure_fl_pa.setter
    def cba_actual_pressure_fl_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_actual_pressure_fl_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_actual_pressure_fl_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_actual_pressure_fl_pa = value

    @builtins.property
    def cba_actual_pressure_fr_pa(self):
        """Message field 'cba_actual_pressure_fr_pa'."""
        return self._cba_actual_pressure_fr_pa

    @cba_actual_pressure_fr_pa.setter
    def cba_actual_pressure_fr_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_actual_pressure_fr_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_actual_pressure_fr_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_actual_pressure_fr_pa = value

    @builtins.property
    def cba_actual_pressure_rl_pa(self):
        """Message field 'cba_actual_pressure_rl_pa'."""
        return self._cba_actual_pressure_rl_pa

    @cba_actual_pressure_rl_pa.setter
    def cba_actual_pressure_rl_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_actual_pressure_rl_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_actual_pressure_rl_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_actual_pressure_rl_pa = value

    @builtins.property
    def cba_actual_pressure_rr_pa(self):
        """Message field 'cba_actual_pressure_rr_pa'."""
        return self._cba_actual_pressure_rr_pa

    @cba_actual_pressure_rr_pa.setter
    def cba_actual_pressure_rr_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cba_actual_pressure_rr_pa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cba_actual_pressure_rr_pa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cba_actual_pressure_rr_pa = value

    @builtins.property
    def sn_map_state(self):
        """Message field 'sn_map_state'."""
        return self._sn_map_state

    @sn_map_state.setter
    def sn_map_state(self, value):
        if __debug__:
            from sd_map_msgs.msg import SnMapState
            assert \
                isinstance(value, SnMapState), \
                "The 'sn_map_state' field must be a sub message of type 'SnMapState'"
        self._sn_map_state = value
