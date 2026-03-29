// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/DiagnosticWord01Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_UPDATED__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_UPDATED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/DiagnosticWord01Updated in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__DiagnosticWord01Updated
{
  std_msgs__msg__Header header;
  uint8_t bms_starting_faild;
  uint8_t bms_timeout_error;
  uint8_t cba_fl_counter_error;
  uint8_t cba_fl_derating;
  uint8_t cba_fl_error;
  uint8_t cba_fl_timeout_error;
  uint8_t cba_fr_counter_error;
  uint8_t cba_fr_derating;
  uint8_t cba_fr_error;
  uint8_t cba_fr_timeout_error;
  uint8_t cba_rl_counter_error;
  uint8_t cba_rl_derating;
  uint8_t cba_rl_error;
  uint8_t cba_rl_timeout_error;
  uint8_t cba_rr_counter_error;
  uint8_t cba_rr_derating;
  uint8_t cba_rr_error;
  uint8_t cba_rr_timeout_error;
  uint8_t dcdc_starting_faild;
  uint8_t dcdc_timeout_error;
  uint8_t ecu_timeout_em_fault;
  uint8_t dem_cbafl_not_receive;
  uint8_t ice_gear_low_oil_temp_warning;
  uint8_t ice_engine_off_rejected;
  uint8_t dem_pdu12_v_not_receive;
  uint8_t ice_starting_fueling_failed;
  uint8_t ice_starting_oil_heater_failed;
  uint8_t ice_starting_starting_failed;
  uint8_t ice_aps_warning;
  uint8_t hl_counter_error;
  uint8_t hl_timeout_error;
  uint8_t ice_counter_error;
  uint8_t ice_timeout_error;
  uint8_t dem_cbafr_not_receive;
  uint8_t ice_oil_temp_under_min_start_limit;
  uint8_t pdu12_counter_error;
  uint8_t pdu12_timeout_error;
  uint8_t pdu48_counter_error;
  uint8_t pdu48_timeout_error;
  uint8_t dem_cbarl_not_receive;
  uint8_t psa_counter_error;
  uint8_t psa_derating;
  uint8_t psa_error;
  uint8_t psa_timeout_error;
  uint8_t dem_cbarr_not_receive;
  uint8_t em_stop_conditions_active;
  uint8_t ml_stop_conditions_active;
  uint8_t dcdc4812_under_min_start_limit;
  uint8_t ice_override_wrong_config;
  uint8_t bsu_wrong_init_config;
  uint8_t ice_boost_warning;
  uint8_t ice_coolant_pressure_warning;
  uint8_t ice_coolant_temperature_warning;
  uint8_t ice_fuel_pressure_warning;
  uint8_t ice_gear_oil_temperature_warning;
  uint8_t ice_oil_pressure_warning;
  uint8_t ice_oil_temperature_warning;
  uint8_t pdu12_active_anti_fire;
  uint8_t ice_sensor_failure_warning;
  uint8_t ice_target_gear_not_reached_warning;
  uint8_t ice_fuel_volume_warning;
  uint8_t rm_counter_error;
  uint8_t rm_timeout_error;
} sd_can_msgs__msg__DiagnosticWord01Updated;

// Struct for a sequence of sd_can_msgs__msg__DiagnosticWord01Updated.
typedef struct sd_can_msgs__msg__DiagnosticWord01Updated__Sequence
{
  sd_can_msgs__msg__DiagnosticWord01Updated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__DiagnosticWord01Updated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_UPDATED__STRUCT_H_
