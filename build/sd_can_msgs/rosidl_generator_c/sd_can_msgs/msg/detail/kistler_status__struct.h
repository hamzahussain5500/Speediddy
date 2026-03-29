// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/KistlerStatus.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__STRUCT_H_

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

/// Struct defined in msg/KistlerStatus in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__KistlerStatus
{
  std_msgs__msg__Header header;
  /// Range: 0..9999 (0..9999 -), Scale: 1, Offset: 0
  uint16_t sensor_id;
  /// Range: -128..127 (-128..127 °C), Scale: 1, Offset: 0
  double temperature;
  /// Range: 0..255 (0..2.55 A), Scale: 0.01, Offset: 0
  double lamp_current;
  /// Range: 0..255 (0..255 -), Scale: 1, Offset: 0
  uint8_t filter_setting;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t stst;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t filter_off_on;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t lamp_current_control;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t temperature_ok;
  /// Range: 0..3 (0..3 -), Scale: 1, Offset: 0
  uint8_t head_status;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t angle_switched_off;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t direction;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t ang_vel_correction;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t direction_motion;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t direction_mounting;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t direction_head_is_valid;
  /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
  uint8_t direction_head;
} sd_can_msgs__msg__KistlerStatus;

// Struct for a sequence of sd_can_msgs__msg__KistlerStatus.
typedef struct sd_can_msgs__msg__KistlerStatus__Sequence
{
  sd_can_msgs__msg__KistlerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__KistlerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__STRUCT_H_
