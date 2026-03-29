// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLMsg03Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__STRUCT_H_

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

/// Struct defined in msg/HLMsg03Legacy in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__HLMsg03Legacy
{
  std_msgs__msg__Header header;
  /// Range: 0..15 (0..15 uint)
  uint8_t hl_alive_03;
  /// Range: 0..1 (0..1 -)
  uint8_t hl_dbw_enable;
  /// Range: 0..1 (0..1 enum)
  uint8_t hl_push_to_pass_on;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_gnss;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_oss;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_ice_enable;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_lidar_r;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_lidar_cn;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_lidar_l;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_radar_rear;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_radar_cn;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_radar_r;
  /// Range: 0..1 (0..1 bool)
  uint8_t hl_pdu1_activate_radar_l;
  /// Range: 0..65535 (0..655.35 l)
  double ice_start_fuel_level_l;
  /// Range: 0..1 (0..1 -)
  uint8_t hl_crancking_by_pass;
} sd_can_msgs__msg__HLMsg03Legacy;

// Struct for a sequence of sd_can_msgs__msg__HLMsg03Legacy.
typedef struct sd_can_msgs__msg__HLMsg03Legacy__Sequence
{
  sd_can_msgs__msg__HLMsg03Legacy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLMsg03Legacy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__STRUCT_H_
