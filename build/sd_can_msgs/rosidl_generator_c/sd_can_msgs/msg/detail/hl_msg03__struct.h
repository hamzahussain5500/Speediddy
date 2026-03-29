// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLMsg03.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__STRUCT_H_

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
// Member 'header_legacy'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/HLMsg03 in the package sd_can_msgs.
/**
  * EAC24BsuHlMsg03.msg
 */
typedef struct sd_can_msgs__msg__HLMsg03
{
  std_msgs__msg__Header header;
  /// HL message for the system
  /// Alive status (0..15)
  uint8_t hl_alive_03;
  /// DBW (Drive by Wire) enabled status (0..1)
  uint8_t hl_dbw_enable;
  /// Push-to-pass status (0..1)
  uint8_t hl_push_to_pass_on;
  /// GNSS activation status (0..1)
  uint8_t hl_pdu12_activate_gnss;
  /// OSS activation status (0..1)
  uint8_t hl_pdu12_activate_oss;
  /// ICE (Internal Combustion Engine) enabled status (0..1)
  uint8_t hl_ice_enable;
  /// ========== NEW v7 ML SUPERVISOR SIGNAL ==========
  /// ML Supervisor Activation Status (0..1) - New in v7
  uint8_t hl_ml_supervisor_activation;
  /// =================================================
  /// Lidar activation status (0..1)
  uint8_t hl_pdu12_activate_lidar;
  /// Radar activation status (0..1)
  uint8_t hl_pdu12_activate_radar;
  /// Start fuel level in liters (0..655.35)
  double ice_start_fuel_level_l;
  /// Cranking bypass status (0..1)
  uint8_t hl_crancking_by_pass;
  /// Switch-off confirmation status (0..1)
  uint8_t hl_switch_off_ok;
  std_msgs__msg__Header header_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_gnss_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_oss_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_lidar_r_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_lidar_cn_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_lidar_l_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_radar_rear_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_radar_cn_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_radar_r_legacy;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_radar_l_legacy;
} sd_can_msgs__msg__HLMsg03;

// Struct for a sequence of sd_can_msgs__msg__HLMsg03.
typedef struct sd_can_msgs__msg__HLMsg03__Sequence
{
  sd_can_msgs__msg__HLMsg03 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLMsg03__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__STRUCT_H_
