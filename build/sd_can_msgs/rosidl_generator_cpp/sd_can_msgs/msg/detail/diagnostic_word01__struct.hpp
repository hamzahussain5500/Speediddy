// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_can_msgs__msg__DiagnosticWord01 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__DiagnosticWord01 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticWord01_
{
  using Type = DiagnosticWord01_<ContainerAllocator>;

  explicit DiagnosticWord01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bms_starting_faild = 0;
      this->bms_timeout_error = 0;
      this->cba_fl_counter_error = 0;
      this->cba_fl_derating = 0;
      this->cba_fl_error = 0;
      this->cba_fl_timeout_error = 0;
      this->cba_fr_counter_error = 0;
      this->cba_fr_derating = 0;
      this->cba_fr_error = 0;
      this->cba_fr_timeout_error = 0;
      this->cba_rl_counter_error = 0;
      this->cba_rl_derating = 0;
      this->cba_rl_error = 0;
      this->cba_rl_timeout_error = 0;
      this->cba_rr_counter_error = 0;
      this->cba_rr_derating = 0;
      this->cba_rr_error = 0;
      this->cba_rr_timeout_error = 0;
      this->dcdc_starting_faild = 0;
      this->dcdc_timeout_error = 0;
      this->ecu_timeout_em_fault = 0;
      this->dem_cbafl_not_receive = 0;
      this->ice_gear_low_oil_temp_warning = 0;
      this->ice_engine_off_rejected = 0;
      this->dem_pdu12_v_not_receive = 0;
      this->ice_starting_fueling_failed = 0;
      this->ice_starting_oil_heater_failed = 0;
      this->ice_starting_starting_failed = 0;
      this->ice_aps_warning = 0;
      this->hl_counter_error = 0;
      this->hl_timeout_error = 0;
      this->ice_counter_error = 0;
      this->ice_timeout_error = 0;
      this->dem_cbafr_not_receive = 0;
      this->ice_oil_temp_under_min_start_limit = 0;
      this->pdu12_counter_error = 0;
      this->pdu12_timeout_error = 0;
      this->pdu48_counter_error = 0;
      this->pdu48_timeout_error = 0;
      this->dem_cbarl_not_receive = 0;
      this->psa_counter_error = 0;
      this->psa_derating = 0;
      this->psa_error = 0;
      this->psa_timeout_error = 0;
      this->dem_cbarr_not_receive = 0;
      this->em_stop_conditions_active = 0;
      this->ml_stop_conditions_active = 0;
      this->dcdc4812_under_min_start_limit = 0;
      this->ice_override_wrong_config = 0;
      this->bsu_wrong_init_config = 0;
      this->ice_boost_warning = 0;
      this->ice_coolant_pressure_warning = 0;
      this->ice_coolant_temperature_warning = 0;
      this->ice_fuel_pressure_warning = 0;
      this->ice_gear_oil_temperature_warning = 0;
      this->ice_oil_pressure_warning = 0;
      this->ice_oil_temperature_warning = 0;
      this->pdu12_active_anti_fire = 0;
      this->ice_sensor_failure_warning = 0;
      this->ice_target_gear_not_reached_warning = 0;
      this->ice_fuel_volume_warning = 0;
      this->rm_counter_error = 0;
      this->rm_timeout_error = 0;
      this->psa_steer_slip_warning = 0;
      this->ice_error_legacy = 0;
      this->emb_line_press_over_max_start_limit_legacy = 0;
      this->pdu1_counter_error_legacy = 0;
      this->pdu1_timeout_error_legacy = 0;
      this->pdu2_counter_error_legacy = 0;
      this->pdu2_timeout_error_legacy = 0;
      this->em_piston_hall_not_ready_legacy = 0;
      this->emb_tank_press_under_level1_legacy = 0;
      this->emb_tank_press_under_level2_legacy = 0;
      this->emb_tank_press_under_level3_legacy = 0;
      this->emb_tank_press_under_min_start_limit_legacy = 0;
      this->ice_over_rpm_warning_legacy = 0;
      this->ice_diagnostic_spare_legacy = 0;
    }
  }

  explicit DiagnosticWord01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bms_starting_faild = 0;
      this->bms_timeout_error = 0;
      this->cba_fl_counter_error = 0;
      this->cba_fl_derating = 0;
      this->cba_fl_error = 0;
      this->cba_fl_timeout_error = 0;
      this->cba_fr_counter_error = 0;
      this->cba_fr_derating = 0;
      this->cba_fr_error = 0;
      this->cba_fr_timeout_error = 0;
      this->cba_rl_counter_error = 0;
      this->cba_rl_derating = 0;
      this->cba_rl_error = 0;
      this->cba_rl_timeout_error = 0;
      this->cba_rr_counter_error = 0;
      this->cba_rr_derating = 0;
      this->cba_rr_error = 0;
      this->cba_rr_timeout_error = 0;
      this->dcdc_starting_faild = 0;
      this->dcdc_timeout_error = 0;
      this->ecu_timeout_em_fault = 0;
      this->dem_cbafl_not_receive = 0;
      this->ice_gear_low_oil_temp_warning = 0;
      this->ice_engine_off_rejected = 0;
      this->dem_pdu12_v_not_receive = 0;
      this->ice_starting_fueling_failed = 0;
      this->ice_starting_oil_heater_failed = 0;
      this->ice_starting_starting_failed = 0;
      this->ice_aps_warning = 0;
      this->hl_counter_error = 0;
      this->hl_timeout_error = 0;
      this->ice_counter_error = 0;
      this->ice_timeout_error = 0;
      this->dem_cbafr_not_receive = 0;
      this->ice_oil_temp_under_min_start_limit = 0;
      this->pdu12_counter_error = 0;
      this->pdu12_timeout_error = 0;
      this->pdu48_counter_error = 0;
      this->pdu48_timeout_error = 0;
      this->dem_cbarl_not_receive = 0;
      this->psa_counter_error = 0;
      this->psa_derating = 0;
      this->psa_error = 0;
      this->psa_timeout_error = 0;
      this->dem_cbarr_not_receive = 0;
      this->em_stop_conditions_active = 0;
      this->ml_stop_conditions_active = 0;
      this->dcdc4812_under_min_start_limit = 0;
      this->ice_override_wrong_config = 0;
      this->bsu_wrong_init_config = 0;
      this->ice_boost_warning = 0;
      this->ice_coolant_pressure_warning = 0;
      this->ice_coolant_temperature_warning = 0;
      this->ice_fuel_pressure_warning = 0;
      this->ice_gear_oil_temperature_warning = 0;
      this->ice_oil_pressure_warning = 0;
      this->ice_oil_temperature_warning = 0;
      this->pdu12_active_anti_fire = 0;
      this->ice_sensor_failure_warning = 0;
      this->ice_target_gear_not_reached_warning = 0;
      this->ice_fuel_volume_warning = 0;
      this->rm_counter_error = 0;
      this->rm_timeout_error = 0;
      this->psa_steer_slip_warning = 0;
      this->ice_error_legacy = 0;
      this->emb_line_press_over_max_start_limit_legacy = 0;
      this->pdu1_counter_error_legacy = 0;
      this->pdu1_timeout_error_legacy = 0;
      this->pdu2_counter_error_legacy = 0;
      this->pdu2_timeout_error_legacy = 0;
      this->em_piston_hall_not_ready_legacy = 0;
      this->emb_tank_press_under_level1_legacy = 0;
      this->emb_tank_press_under_level2_legacy = 0;
      this->emb_tank_press_under_level3_legacy = 0;
      this->emb_tank_press_under_min_start_limit_legacy = 0;
      this->ice_over_rpm_warning_legacy = 0;
      this->ice_diagnostic_spare_legacy = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bms_starting_faild_type =
    uint8_t;
  _bms_starting_faild_type bms_starting_faild;
  using _bms_timeout_error_type =
    uint8_t;
  _bms_timeout_error_type bms_timeout_error;
  using _cba_fl_counter_error_type =
    uint8_t;
  _cba_fl_counter_error_type cba_fl_counter_error;
  using _cba_fl_derating_type =
    uint8_t;
  _cba_fl_derating_type cba_fl_derating;
  using _cba_fl_error_type =
    uint8_t;
  _cba_fl_error_type cba_fl_error;
  using _cba_fl_timeout_error_type =
    uint8_t;
  _cba_fl_timeout_error_type cba_fl_timeout_error;
  using _cba_fr_counter_error_type =
    uint8_t;
  _cba_fr_counter_error_type cba_fr_counter_error;
  using _cba_fr_derating_type =
    uint8_t;
  _cba_fr_derating_type cba_fr_derating;
  using _cba_fr_error_type =
    uint8_t;
  _cba_fr_error_type cba_fr_error;
  using _cba_fr_timeout_error_type =
    uint8_t;
  _cba_fr_timeout_error_type cba_fr_timeout_error;
  using _cba_rl_counter_error_type =
    uint8_t;
  _cba_rl_counter_error_type cba_rl_counter_error;
  using _cba_rl_derating_type =
    uint8_t;
  _cba_rl_derating_type cba_rl_derating;
  using _cba_rl_error_type =
    uint8_t;
  _cba_rl_error_type cba_rl_error;
  using _cba_rl_timeout_error_type =
    uint8_t;
  _cba_rl_timeout_error_type cba_rl_timeout_error;
  using _cba_rr_counter_error_type =
    uint8_t;
  _cba_rr_counter_error_type cba_rr_counter_error;
  using _cba_rr_derating_type =
    uint8_t;
  _cba_rr_derating_type cba_rr_derating;
  using _cba_rr_error_type =
    uint8_t;
  _cba_rr_error_type cba_rr_error;
  using _cba_rr_timeout_error_type =
    uint8_t;
  _cba_rr_timeout_error_type cba_rr_timeout_error;
  using _dcdc_starting_faild_type =
    uint8_t;
  _dcdc_starting_faild_type dcdc_starting_faild;
  using _dcdc_timeout_error_type =
    uint8_t;
  _dcdc_timeout_error_type dcdc_timeout_error;
  using _ecu_timeout_em_fault_type =
    uint8_t;
  _ecu_timeout_em_fault_type ecu_timeout_em_fault;
  using _dem_cbafl_not_receive_type =
    uint8_t;
  _dem_cbafl_not_receive_type dem_cbafl_not_receive;
  using _ice_gear_low_oil_temp_warning_type =
    uint8_t;
  _ice_gear_low_oil_temp_warning_type ice_gear_low_oil_temp_warning;
  using _ice_engine_off_rejected_type =
    uint8_t;
  _ice_engine_off_rejected_type ice_engine_off_rejected;
  using _dem_pdu12_v_not_receive_type =
    uint8_t;
  _dem_pdu12_v_not_receive_type dem_pdu12_v_not_receive;
  using _ice_starting_fueling_failed_type =
    uint8_t;
  _ice_starting_fueling_failed_type ice_starting_fueling_failed;
  using _ice_starting_oil_heater_failed_type =
    uint8_t;
  _ice_starting_oil_heater_failed_type ice_starting_oil_heater_failed;
  using _ice_starting_starting_failed_type =
    uint8_t;
  _ice_starting_starting_failed_type ice_starting_starting_failed;
  using _ice_aps_warning_type =
    uint8_t;
  _ice_aps_warning_type ice_aps_warning;
  using _hl_counter_error_type =
    uint8_t;
  _hl_counter_error_type hl_counter_error;
  using _hl_timeout_error_type =
    uint8_t;
  _hl_timeout_error_type hl_timeout_error;
  using _ice_counter_error_type =
    uint8_t;
  _ice_counter_error_type ice_counter_error;
  using _ice_timeout_error_type =
    uint8_t;
  _ice_timeout_error_type ice_timeout_error;
  using _dem_cbafr_not_receive_type =
    uint8_t;
  _dem_cbafr_not_receive_type dem_cbafr_not_receive;
  using _ice_oil_temp_under_min_start_limit_type =
    uint8_t;
  _ice_oil_temp_under_min_start_limit_type ice_oil_temp_under_min_start_limit;
  using _pdu12_counter_error_type =
    uint8_t;
  _pdu12_counter_error_type pdu12_counter_error;
  using _pdu12_timeout_error_type =
    uint8_t;
  _pdu12_timeout_error_type pdu12_timeout_error;
  using _pdu48_counter_error_type =
    uint8_t;
  _pdu48_counter_error_type pdu48_counter_error;
  using _pdu48_timeout_error_type =
    uint8_t;
  _pdu48_timeout_error_type pdu48_timeout_error;
  using _dem_cbarl_not_receive_type =
    uint8_t;
  _dem_cbarl_not_receive_type dem_cbarl_not_receive;
  using _psa_counter_error_type =
    uint8_t;
  _psa_counter_error_type psa_counter_error;
  using _psa_derating_type =
    uint8_t;
  _psa_derating_type psa_derating;
  using _psa_error_type =
    uint8_t;
  _psa_error_type psa_error;
  using _psa_timeout_error_type =
    uint8_t;
  _psa_timeout_error_type psa_timeout_error;
  using _dem_cbarr_not_receive_type =
    uint8_t;
  _dem_cbarr_not_receive_type dem_cbarr_not_receive;
  using _em_stop_conditions_active_type =
    uint8_t;
  _em_stop_conditions_active_type em_stop_conditions_active;
  using _ml_stop_conditions_active_type =
    uint8_t;
  _ml_stop_conditions_active_type ml_stop_conditions_active;
  using _dcdc4812_under_min_start_limit_type =
    uint8_t;
  _dcdc4812_under_min_start_limit_type dcdc4812_under_min_start_limit;
  using _ice_override_wrong_config_type =
    uint8_t;
  _ice_override_wrong_config_type ice_override_wrong_config;
  using _bsu_wrong_init_config_type =
    uint8_t;
  _bsu_wrong_init_config_type bsu_wrong_init_config;
  using _ice_boost_warning_type =
    uint8_t;
  _ice_boost_warning_type ice_boost_warning;
  using _ice_coolant_pressure_warning_type =
    uint8_t;
  _ice_coolant_pressure_warning_type ice_coolant_pressure_warning;
  using _ice_coolant_temperature_warning_type =
    uint8_t;
  _ice_coolant_temperature_warning_type ice_coolant_temperature_warning;
  using _ice_fuel_pressure_warning_type =
    uint8_t;
  _ice_fuel_pressure_warning_type ice_fuel_pressure_warning;
  using _ice_gear_oil_temperature_warning_type =
    uint8_t;
  _ice_gear_oil_temperature_warning_type ice_gear_oil_temperature_warning;
  using _ice_oil_pressure_warning_type =
    uint8_t;
  _ice_oil_pressure_warning_type ice_oil_pressure_warning;
  using _ice_oil_temperature_warning_type =
    uint8_t;
  _ice_oil_temperature_warning_type ice_oil_temperature_warning;
  using _pdu12_active_anti_fire_type =
    uint8_t;
  _pdu12_active_anti_fire_type pdu12_active_anti_fire;
  using _ice_sensor_failure_warning_type =
    uint8_t;
  _ice_sensor_failure_warning_type ice_sensor_failure_warning;
  using _ice_target_gear_not_reached_warning_type =
    uint8_t;
  _ice_target_gear_not_reached_warning_type ice_target_gear_not_reached_warning;
  using _ice_fuel_volume_warning_type =
    uint8_t;
  _ice_fuel_volume_warning_type ice_fuel_volume_warning;
  using _rm_counter_error_type =
    uint8_t;
  _rm_counter_error_type rm_counter_error;
  using _rm_timeout_error_type =
    uint8_t;
  _rm_timeout_error_type rm_timeout_error;
  using _psa_steer_slip_warning_type =
    uint8_t;
  _psa_steer_slip_warning_type psa_steer_slip_warning;
  using _ice_error_legacy_type =
    uint8_t;
  _ice_error_legacy_type ice_error_legacy;
  using _emb_line_press_over_max_start_limit_legacy_type =
    uint8_t;
  _emb_line_press_over_max_start_limit_legacy_type emb_line_press_over_max_start_limit_legacy;
  using _pdu1_counter_error_legacy_type =
    uint8_t;
  _pdu1_counter_error_legacy_type pdu1_counter_error_legacy;
  using _pdu1_timeout_error_legacy_type =
    uint8_t;
  _pdu1_timeout_error_legacy_type pdu1_timeout_error_legacy;
  using _pdu2_counter_error_legacy_type =
    uint8_t;
  _pdu2_counter_error_legacy_type pdu2_counter_error_legacy;
  using _pdu2_timeout_error_legacy_type =
    uint8_t;
  _pdu2_timeout_error_legacy_type pdu2_timeout_error_legacy;
  using _em_piston_hall_not_ready_legacy_type =
    uint8_t;
  _em_piston_hall_not_ready_legacy_type em_piston_hall_not_ready_legacy;
  using _emb_tank_press_under_level1_legacy_type =
    uint8_t;
  _emb_tank_press_under_level1_legacy_type emb_tank_press_under_level1_legacy;
  using _emb_tank_press_under_level2_legacy_type =
    uint8_t;
  _emb_tank_press_under_level2_legacy_type emb_tank_press_under_level2_legacy;
  using _emb_tank_press_under_level3_legacy_type =
    uint8_t;
  _emb_tank_press_under_level3_legacy_type emb_tank_press_under_level3_legacy;
  using _emb_tank_press_under_min_start_limit_legacy_type =
    uint8_t;
  _emb_tank_press_under_min_start_limit_legacy_type emb_tank_press_under_min_start_limit_legacy;
  using _ice_over_rpm_warning_legacy_type =
    uint8_t;
  _ice_over_rpm_warning_legacy_type ice_over_rpm_warning_legacy;
  using _ice_diagnostic_spare_legacy_type =
    uint8_t;
  _ice_diagnostic_spare_legacy_type ice_diagnostic_spare_legacy;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bms_starting_faild(
    const uint8_t & _arg)
  {
    this->bms_starting_faild = _arg;
    return *this;
  }
  Type & set__bms_timeout_error(
    const uint8_t & _arg)
  {
    this->bms_timeout_error = _arg;
    return *this;
  }
  Type & set__cba_fl_counter_error(
    const uint8_t & _arg)
  {
    this->cba_fl_counter_error = _arg;
    return *this;
  }
  Type & set__cba_fl_derating(
    const uint8_t & _arg)
  {
    this->cba_fl_derating = _arg;
    return *this;
  }
  Type & set__cba_fl_error(
    const uint8_t & _arg)
  {
    this->cba_fl_error = _arg;
    return *this;
  }
  Type & set__cba_fl_timeout_error(
    const uint8_t & _arg)
  {
    this->cba_fl_timeout_error = _arg;
    return *this;
  }
  Type & set__cba_fr_counter_error(
    const uint8_t & _arg)
  {
    this->cba_fr_counter_error = _arg;
    return *this;
  }
  Type & set__cba_fr_derating(
    const uint8_t & _arg)
  {
    this->cba_fr_derating = _arg;
    return *this;
  }
  Type & set__cba_fr_error(
    const uint8_t & _arg)
  {
    this->cba_fr_error = _arg;
    return *this;
  }
  Type & set__cba_fr_timeout_error(
    const uint8_t & _arg)
  {
    this->cba_fr_timeout_error = _arg;
    return *this;
  }
  Type & set__cba_rl_counter_error(
    const uint8_t & _arg)
  {
    this->cba_rl_counter_error = _arg;
    return *this;
  }
  Type & set__cba_rl_derating(
    const uint8_t & _arg)
  {
    this->cba_rl_derating = _arg;
    return *this;
  }
  Type & set__cba_rl_error(
    const uint8_t & _arg)
  {
    this->cba_rl_error = _arg;
    return *this;
  }
  Type & set__cba_rl_timeout_error(
    const uint8_t & _arg)
  {
    this->cba_rl_timeout_error = _arg;
    return *this;
  }
  Type & set__cba_rr_counter_error(
    const uint8_t & _arg)
  {
    this->cba_rr_counter_error = _arg;
    return *this;
  }
  Type & set__cba_rr_derating(
    const uint8_t & _arg)
  {
    this->cba_rr_derating = _arg;
    return *this;
  }
  Type & set__cba_rr_error(
    const uint8_t & _arg)
  {
    this->cba_rr_error = _arg;
    return *this;
  }
  Type & set__cba_rr_timeout_error(
    const uint8_t & _arg)
  {
    this->cba_rr_timeout_error = _arg;
    return *this;
  }
  Type & set__dcdc_starting_faild(
    const uint8_t & _arg)
  {
    this->dcdc_starting_faild = _arg;
    return *this;
  }
  Type & set__dcdc_timeout_error(
    const uint8_t & _arg)
  {
    this->dcdc_timeout_error = _arg;
    return *this;
  }
  Type & set__ecu_timeout_em_fault(
    const uint8_t & _arg)
  {
    this->ecu_timeout_em_fault = _arg;
    return *this;
  }
  Type & set__dem_cbafl_not_receive(
    const uint8_t & _arg)
  {
    this->dem_cbafl_not_receive = _arg;
    return *this;
  }
  Type & set__ice_gear_low_oil_temp_warning(
    const uint8_t & _arg)
  {
    this->ice_gear_low_oil_temp_warning = _arg;
    return *this;
  }
  Type & set__ice_engine_off_rejected(
    const uint8_t & _arg)
  {
    this->ice_engine_off_rejected = _arg;
    return *this;
  }
  Type & set__dem_pdu12_v_not_receive(
    const uint8_t & _arg)
  {
    this->dem_pdu12_v_not_receive = _arg;
    return *this;
  }
  Type & set__ice_starting_fueling_failed(
    const uint8_t & _arg)
  {
    this->ice_starting_fueling_failed = _arg;
    return *this;
  }
  Type & set__ice_starting_oil_heater_failed(
    const uint8_t & _arg)
  {
    this->ice_starting_oil_heater_failed = _arg;
    return *this;
  }
  Type & set__ice_starting_starting_failed(
    const uint8_t & _arg)
  {
    this->ice_starting_starting_failed = _arg;
    return *this;
  }
  Type & set__ice_aps_warning(
    const uint8_t & _arg)
  {
    this->ice_aps_warning = _arg;
    return *this;
  }
  Type & set__hl_counter_error(
    const uint8_t & _arg)
  {
    this->hl_counter_error = _arg;
    return *this;
  }
  Type & set__hl_timeout_error(
    const uint8_t & _arg)
  {
    this->hl_timeout_error = _arg;
    return *this;
  }
  Type & set__ice_counter_error(
    const uint8_t & _arg)
  {
    this->ice_counter_error = _arg;
    return *this;
  }
  Type & set__ice_timeout_error(
    const uint8_t & _arg)
  {
    this->ice_timeout_error = _arg;
    return *this;
  }
  Type & set__dem_cbafr_not_receive(
    const uint8_t & _arg)
  {
    this->dem_cbafr_not_receive = _arg;
    return *this;
  }
  Type & set__ice_oil_temp_under_min_start_limit(
    const uint8_t & _arg)
  {
    this->ice_oil_temp_under_min_start_limit = _arg;
    return *this;
  }
  Type & set__pdu12_counter_error(
    const uint8_t & _arg)
  {
    this->pdu12_counter_error = _arg;
    return *this;
  }
  Type & set__pdu12_timeout_error(
    const uint8_t & _arg)
  {
    this->pdu12_timeout_error = _arg;
    return *this;
  }
  Type & set__pdu48_counter_error(
    const uint8_t & _arg)
  {
    this->pdu48_counter_error = _arg;
    return *this;
  }
  Type & set__pdu48_timeout_error(
    const uint8_t & _arg)
  {
    this->pdu48_timeout_error = _arg;
    return *this;
  }
  Type & set__dem_cbarl_not_receive(
    const uint8_t & _arg)
  {
    this->dem_cbarl_not_receive = _arg;
    return *this;
  }
  Type & set__psa_counter_error(
    const uint8_t & _arg)
  {
    this->psa_counter_error = _arg;
    return *this;
  }
  Type & set__psa_derating(
    const uint8_t & _arg)
  {
    this->psa_derating = _arg;
    return *this;
  }
  Type & set__psa_error(
    const uint8_t & _arg)
  {
    this->psa_error = _arg;
    return *this;
  }
  Type & set__psa_timeout_error(
    const uint8_t & _arg)
  {
    this->psa_timeout_error = _arg;
    return *this;
  }
  Type & set__dem_cbarr_not_receive(
    const uint8_t & _arg)
  {
    this->dem_cbarr_not_receive = _arg;
    return *this;
  }
  Type & set__em_stop_conditions_active(
    const uint8_t & _arg)
  {
    this->em_stop_conditions_active = _arg;
    return *this;
  }
  Type & set__ml_stop_conditions_active(
    const uint8_t & _arg)
  {
    this->ml_stop_conditions_active = _arg;
    return *this;
  }
  Type & set__dcdc4812_under_min_start_limit(
    const uint8_t & _arg)
  {
    this->dcdc4812_under_min_start_limit = _arg;
    return *this;
  }
  Type & set__ice_override_wrong_config(
    const uint8_t & _arg)
  {
    this->ice_override_wrong_config = _arg;
    return *this;
  }
  Type & set__bsu_wrong_init_config(
    const uint8_t & _arg)
  {
    this->bsu_wrong_init_config = _arg;
    return *this;
  }
  Type & set__ice_boost_warning(
    const uint8_t & _arg)
  {
    this->ice_boost_warning = _arg;
    return *this;
  }
  Type & set__ice_coolant_pressure_warning(
    const uint8_t & _arg)
  {
    this->ice_coolant_pressure_warning = _arg;
    return *this;
  }
  Type & set__ice_coolant_temperature_warning(
    const uint8_t & _arg)
  {
    this->ice_coolant_temperature_warning = _arg;
    return *this;
  }
  Type & set__ice_fuel_pressure_warning(
    const uint8_t & _arg)
  {
    this->ice_fuel_pressure_warning = _arg;
    return *this;
  }
  Type & set__ice_gear_oil_temperature_warning(
    const uint8_t & _arg)
  {
    this->ice_gear_oil_temperature_warning = _arg;
    return *this;
  }
  Type & set__ice_oil_pressure_warning(
    const uint8_t & _arg)
  {
    this->ice_oil_pressure_warning = _arg;
    return *this;
  }
  Type & set__ice_oil_temperature_warning(
    const uint8_t & _arg)
  {
    this->ice_oil_temperature_warning = _arg;
    return *this;
  }
  Type & set__pdu12_active_anti_fire(
    const uint8_t & _arg)
  {
    this->pdu12_active_anti_fire = _arg;
    return *this;
  }
  Type & set__ice_sensor_failure_warning(
    const uint8_t & _arg)
  {
    this->ice_sensor_failure_warning = _arg;
    return *this;
  }
  Type & set__ice_target_gear_not_reached_warning(
    const uint8_t & _arg)
  {
    this->ice_target_gear_not_reached_warning = _arg;
    return *this;
  }
  Type & set__ice_fuel_volume_warning(
    const uint8_t & _arg)
  {
    this->ice_fuel_volume_warning = _arg;
    return *this;
  }
  Type & set__rm_counter_error(
    const uint8_t & _arg)
  {
    this->rm_counter_error = _arg;
    return *this;
  }
  Type & set__rm_timeout_error(
    const uint8_t & _arg)
  {
    this->rm_timeout_error = _arg;
    return *this;
  }
  Type & set__psa_steer_slip_warning(
    const uint8_t & _arg)
  {
    this->psa_steer_slip_warning = _arg;
    return *this;
  }
  Type & set__ice_error_legacy(
    const uint8_t & _arg)
  {
    this->ice_error_legacy = _arg;
    return *this;
  }
  Type & set__emb_line_press_over_max_start_limit_legacy(
    const uint8_t & _arg)
  {
    this->emb_line_press_over_max_start_limit_legacy = _arg;
    return *this;
  }
  Type & set__pdu1_counter_error_legacy(
    const uint8_t & _arg)
  {
    this->pdu1_counter_error_legacy = _arg;
    return *this;
  }
  Type & set__pdu1_timeout_error_legacy(
    const uint8_t & _arg)
  {
    this->pdu1_timeout_error_legacy = _arg;
    return *this;
  }
  Type & set__pdu2_counter_error_legacy(
    const uint8_t & _arg)
  {
    this->pdu2_counter_error_legacy = _arg;
    return *this;
  }
  Type & set__pdu2_timeout_error_legacy(
    const uint8_t & _arg)
  {
    this->pdu2_timeout_error_legacy = _arg;
    return *this;
  }
  Type & set__em_piston_hall_not_ready_legacy(
    const uint8_t & _arg)
  {
    this->em_piston_hall_not_ready_legacy = _arg;
    return *this;
  }
  Type & set__emb_tank_press_under_level1_legacy(
    const uint8_t & _arg)
  {
    this->emb_tank_press_under_level1_legacy = _arg;
    return *this;
  }
  Type & set__emb_tank_press_under_level2_legacy(
    const uint8_t & _arg)
  {
    this->emb_tank_press_under_level2_legacy = _arg;
    return *this;
  }
  Type & set__emb_tank_press_under_level3_legacy(
    const uint8_t & _arg)
  {
    this->emb_tank_press_under_level3_legacy = _arg;
    return *this;
  }
  Type & set__emb_tank_press_under_min_start_limit_legacy(
    const uint8_t & _arg)
  {
    this->emb_tank_press_under_min_start_limit_legacy = _arg;
    return *this;
  }
  Type & set__ice_over_rpm_warning_legacy(
    const uint8_t & _arg)
  {
    this->ice_over_rpm_warning_legacy = _arg;
    return *this;
  }
  Type & set__ice_diagnostic_spare_legacy(
    const uint8_t & _arg)
  {
    this->ice_diagnostic_spare_legacy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__DiagnosticWord01
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__DiagnosticWord01
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticWord01_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bms_starting_faild != other.bms_starting_faild) {
      return false;
    }
    if (this->bms_timeout_error != other.bms_timeout_error) {
      return false;
    }
    if (this->cba_fl_counter_error != other.cba_fl_counter_error) {
      return false;
    }
    if (this->cba_fl_derating != other.cba_fl_derating) {
      return false;
    }
    if (this->cba_fl_error != other.cba_fl_error) {
      return false;
    }
    if (this->cba_fl_timeout_error != other.cba_fl_timeout_error) {
      return false;
    }
    if (this->cba_fr_counter_error != other.cba_fr_counter_error) {
      return false;
    }
    if (this->cba_fr_derating != other.cba_fr_derating) {
      return false;
    }
    if (this->cba_fr_error != other.cba_fr_error) {
      return false;
    }
    if (this->cba_fr_timeout_error != other.cba_fr_timeout_error) {
      return false;
    }
    if (this->cba_rl_counter_error != other.cba_rl_counter_error) {
      return false;
    }
    if (this->cba_rl_derating != other.cba_rl_derating) {
      return false;
    }
    if (this->cba_rl_error != other.cba_rl_error) {
      return false;
    }
    if (this->cba_rl_timeout_error != other.cba_rl_timeout_error) {
      return false;
    }
    if (this->cba_rr_counter_error != other.cba_rr_counter_error) {
      return false;
    }
    if (this->cba_rr_derating != other.cba_rr_derating) {
      return false;
    }
    if (this->cba_rr_error != other.cba_rr_error) {
      return false;
    }
    if (this->cba_rr_timeout_error != other.cba_rr_timeout_error) {
      return false;
    }
    if (this->dcdc_starting_faild != other.dcdc_starting_faild) {
      return false;
    }
    if (this->dcdc_timeout_error != other.dcdc_timeout_error) {
      return false;
    }
    if (this->ecu_timeout_em_fault != other.ecu_timeout_em_fault) {
      return false;
    }
    if (this->dem_cbafl_not_receive != other.dem_cbafl_not_receive) {
      return false;
    }
    if (this->ice_gear_low_oil_temp_warning != other.ice_gear_low_oil_temp_warning) {
      return false;
    }
    if (this->ice_engine_off_rejected != other.ice_engine_off_rejected) {
      return false;
    }
    if (this->dem_pdu12_v_not_receive != other.dem_pdu12_v_not_receive) {
      return false;
    }
    if (this->ice_starting_fueling_failed != other.ice_starting_fueling_failed) {
      return false;
    }
    if (this->ice_starting_oil_heater_failed != other.ice_starting_oil_heater_failed) {
      return false;
    }
    if (this->ice_starting_starting_failed != other.ice_starting_starting_failed) {
      return false;
    }
    if (this->ice_aps_warning != other.ice_aps_warning) {
      return false;
    }
    if (this->hl_counter_error != other.hl_counter_error) {
      return false;
    }
    if (this->hl_timeout_error != other.hl_timeout_error) {
      return false;
    }
    if (this->ice_counter_error != other.ice_counter_error) {
      return false;
    }
    if (this->ice_timeout_error != other.ice_timeout_error) {
      return false;
    }
    if (this->dem_cbafr_not_receive != other.dem_cbafr_not_receive) {
      return false;
    }
    if (this->ice_oil_temp_under_min_start_limit != other.ice_oil_temp_under_min_start_limit) {
      return false;
    }
    if (this->pdu12_counter_error != other.pdu12_counter_error) {
      return false;
    }
    if (this->pdu12_timeout_error != other.pdu12_timeout_error) {
      return false;
    }
    if (this->pdu48_counter_error != other.pdu48_counter_error) {
      return false;
    }
    if (this->pdu48_timeout_error != other.pdu48_timeout_error) {
      return false;
    }
    if (this->dem_cbarl_not_receive != other.dem_cbarl_not_receive) {
      return false;
    }
    if (this->psa_counter_error != other.psa_counter_error) {
      return false;
    }
    if (this->psa_derating != other.psa_derating) {
      return false;
    }
    if (this->psa_error != other.psa_error) {
      return false;
    }
    if (this->psa_timeout_error != other.psa_timeout_error) {
      return false;
    }
    if (this->dem_cbarr_not_receive != other.dem_cbarr_not_receive) {
      return false;
    }
    if (this->em_stop_conditions_active != other.em_stop_conditions_active) {
      return false;
    }
    if (this->ml_stop_conditions_active != other.ml_stop_conditions_active) {
      return false;
    }
    if (this->dcdc4812_under_min_start_limit != other.dcdc4812_under_min_start_limit) {
      return false;
    }
    if (this->ice_override_wrong_config != other.ice_override_wrong_config) {
      return false;
    }
    if (this->bsu_wrong_init_config != other.bsu_wrong_init_config) {
      return false;
    }
    if (this->ice_boost_warning != other.ice_boost_warning) {
      return false;
    }
    if (this->ice_coolant_pressure_warning != other.ice_coolant_pressure_warning) {
      return false;
    }
    if (this->ice_coolant_temperature_warning != other.ice_coolant_temperature_warning) {
      return false;
    }
    if (this->ice_fuel_pressure_warning != other.ice_fuel_pressure_warning) {
      return false;
    }
    if (this->ice_gear_oil_temperature_warning != other.ice_gear_oil_temperature_warning) {
      return false;
    }
    if (this->ice_oil_pressure_warning != other.ice_oil_pressure_warning) {
      return false;
    }
    if (this->ice_oil_temperature_warning != other.ice_oil_temperature_warning) {
      return false;
    }
    if (this->pdu12_active_anti_fire != other.pdu12_active_anti_fire) {
      return false;
    }
    if (this->ice_sensor_failure_warning != other.ice_sensor_failure_warning) {
      return false;
    }
    if (this->ice_target_gear_not_reached_warning != other.ice_target_gear_not_reached_warning) {
      return false;
    }
    if (this->ice_fuel_volume_warning != other.ice_fuel_volume_warning) {
      return false;
    }
    if (this->rm_counter_error != other.rm_counter_error) {
      return false;
    }
    if (this->rm_timeout_error != other.rm_timeout_error) {
      return false;
    }
    if (this->psa_steer_slip_warning != other.psa_steer_slip_warning) {
      return false;
    }
    if (this->ice_error_legacy != other.ice_error_legacy) {
      return false;
    }
    if (this->emb_line_press_over_max_start_limit_legacy != other.emb_line_press_over_max_start_limit_legacy) {
      return false;
    }
    if (this->pdu1_counter_error_legacy != other.pdu1_counter_error_legacy) {
      return false;
    }
    if (this->pdu1_timeout_error_legacy != other.pdu1_timeout_error_legacy) {
      return false;
    }
    if (this->pdu2_counter_error_legacy != other.pdu2_counter_error_legacy) {
      return false;
    }
    if (this->pdu2_timeout_error_legacy != other.pdu2_timeout_error_legacy) {
      return false;
    }
    if (this->em_piston_hall_not_ready_legacy != other.em_piston_hall_not_ready_legacy) {
      return false;
    }
    if (this->emb_tank_press_under_level1_legacy != other.emb_tank_press_under_level1_legacy) {
      return false;
    }
    if (this->emb_tank_press_under_level2_legacy != other.emb_tank_press_under_level2_legacy) {
      return false;
    }
    if (this->emb_tank_press_under_level3_legacy != other.emb_tank_press_under_level3_legacy) {
      return false;
    }
    if (this->emb_tank_press_under_min_start_limit_legacy != other.emb_tank_press_under_min_start_limit_legacy) {
      return false;
    }
    if (this->ice_over_rpm_warning_legacy != other.ice_over_rpm_warning_legacy) {
      return false;
    }
    if (this->ice_diagnostic_spare_legacy != other.ice_diagnostic_spare_legacy) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticWord01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticWord01_

// alias to use template instance with default allocator
using DiagnosticWord01 =
  sd_can_msgs::msg::DiagnosticWord01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01__STRUCT_HPP_
