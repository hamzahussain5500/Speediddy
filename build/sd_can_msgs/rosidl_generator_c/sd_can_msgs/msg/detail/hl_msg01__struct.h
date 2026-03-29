// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLMsg01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__STRUCT_H_

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

/// Struct defined in msg/HLMsg01 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__HLMsg01
{
  std_msgs__msg__Header header;
  /// Range: 0..15 (0..15 uint), Scale: 1, Offset: 0
  uint8_t hl_alive_01;
  /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
  double hl_target_pressure_rr;
  /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
  double hl_target_pressure_rl;
  /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
  double hl_target_pressure_fr;
  /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
  double hl_target_pressure_fl;
  /// Range: 0..9 (-1..8 enum), Scale: 1, Offset: -1
  uint8_t hl_target_gear;
  /// Range: 0..1000 (0..100 %), Scale: 0.1, Offset: 0
  double hl_target_throttle;
} sd_can_msgs__msg__HLMsg01;

// Struct for a sequence of sd_can_msgs__msg__HLMsg01.
typedef struct sd_can_msgs__msg__HLMsg01__Sequence
{
  sd_can_msgs__msg__HLMsg01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLMsg01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__STRUCT_H_
