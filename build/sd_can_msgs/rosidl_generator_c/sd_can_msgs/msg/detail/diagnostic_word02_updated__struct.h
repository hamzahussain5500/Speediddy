// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/DiagnosticWord02Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__STRUCT_H_

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

/// Struct defined in msg/DiagnosticWord02Updated in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__DiagnosticWord02Updated
{
  std_msgs__msg__Header header;
  /// Diagnostic word information for BSU
  /// RC Force Race Mode (0..1)
  uint8_t rc_force_race_mode;
  /// RC Beacon Timeout (0..1)
  uint8_t rc_beacon_time_out;
  /// Display Timeout Error (0..1)
  uint8_t display_timeout_error;
  /// RM Red Flag (0..1)
  uint8_t rm_red_flag;
  /// RM Safe Stop (0..1)
  uint8_t rm_safe_stop;
  /// Display Counter Error (0..1)
  uint8_t display_counter_error;
  /// CBA EM Brake Sat Not Received (0..1)
  uint8_t cba_em_brake_sat_not_received;
  /// CBA Sat Values Not Received (0..1)
  uint8_t cba_sat_values_not_received;
  /// ICE Oil Temp Start Limit Not Received (0..1)
  uint8_t ice_oil_temp_start_limit_not_rec;
  /// ML Stop Brake Sat Not Received (0..1)
  uint8_t ml_stop_brake_sat_not_received;
  /// PSA Sat Values Not Received (0..1)
  uint8_t psa_sat_values_not_received;
  /// Limp Sat Values Not Received (0..1)
  uint8_t limp_sat_values_not_received;
  /// Fan Car Speed Max Value Not Received (0..1)
  uint8_t fan_car_speed_max_value_not_rec;
  /// Fan Car Speed Min Value Not Received (0..1)
  uint8_t fan_car_speed_min_value_not_rec;
  /// Fan Water Temp Max Value Not Received (0..1)
  uint8_t fan_water_temp_max_value_not_rec;
  /// Fan Water Temp Min Value Not Received (0..1)
  uint8_t fan_water_temp_min_value_not_rec;
  /// Heater Oil Temp Max Value Not Received (0..1)
  uint8_t heater_oil_temp_max_value_not_rec;
  /// ICE Fuel Pres Start Limit Not Received (0..1)
  uint8_t ice_fuel_pres_start_limit_not_rec;
  /// ICE Oil Temp Bypass Not Received (0..1)
  uint8_t ice_oil_temp_by_pass_not_received;
} sd_can_msgs__msg__DiagnosticWord02Updated;

// Struct for a sequence of sd_can_msgs__msg__DiagnosticWord02Updated.
typedef struct sd_can_msgs__msg__DiagnosticWord02Updated__Sequence
{
  sd_can_msgs__msg__DiagnosticWord02Updated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__DiagnosticWord02Updated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__STRUCT_H_
