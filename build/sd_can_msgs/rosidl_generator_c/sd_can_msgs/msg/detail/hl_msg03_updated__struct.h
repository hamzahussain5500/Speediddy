// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLMsg03Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_UPDATED__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_UPDATED__STRUCT_H_

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

/// Struct defined in msg/HLMsg03Updated in the package sd_can_msgs.
/**
  * EAC24BsuHlMsg03.msg
 */
typedef struct sd_can_msgs__msg__HLMsg03Updated
{
  std_msgs__msg__Header header;
  /// HL message for the system
  /// Alive status (0..15)
  uint8_t hl_alive_03;
  /// DBW (Drive by Wire) enabled status (0..1)
  bool hl_dbw_enable;
  /// Push-to-pass status (0..1)
  uint8_t hl_push_to_pass_on;
  /// GNSS activation status (0..1)
  bool hl_pdu12_activate_gnss;
  /// OSS activation status (0..1)
  bool hl_pdu12_activate_oss;
  /// ICE (Internal Combustion Engine) enabled status (0..1)
  bool hl_ice_enable;
  /// Lidar activation status (0..1)
  bool hl_pdu12_activate_lidar;
  /// Radar activation status (0..1)
  bool hl_pdu12_activate_radar;
  /// Start fuel level in liters (0..655.35)
  uint16_t ice_start_fuel_level_l;
  /// Cranking bypass status (0..1)
  bool hl_crancking_by_pass;
  /// Switch-off confirmation status (0..1)
  bool hl_switch_off_ok;
} sd_can_msgs__msg__HLMsg03Updated;

// Struct for a sequence of sd_can_msgs__msg__HLMsg03Updated.
typedef struct sd_can_msgs__msg__HLMsg03Updated__Sequence
{
  sd_can_msgs__msg__HLMsg03Updated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLMsg03Updated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_UPDATED__STRUCT_H_
