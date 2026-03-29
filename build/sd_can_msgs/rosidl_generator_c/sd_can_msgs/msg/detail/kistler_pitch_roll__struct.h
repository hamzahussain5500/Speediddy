// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/KistlerPitchRoll.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_PITCH_ROLL__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_PITCH_ROLL__STRUCT_H_

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

/// Struct defined in msg/KistlerPitchRoll in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__KistlerPitchRoll
{
  std_msgs__msg__Header header;
  /// Range: -4500..4500 (-45..45 °), Scale: 0.01, Offset: 0
  double pitch;
  /// Range: -4500..4500 (-45..45 °), Scale: 0.01, Offset: 0
  double roll;
  /// Range: 0..65535 (0..65535 -), Scale: 1, Offset: 0
  uint16_t timestamp;
  /// Range: 0..65535 (0..655.35 m), Scale: 0.01, Offset: 0
  double radius;
} sd_can_msgs__msg__KistlerPitchRoll;

// Struct for a sequence of sd_can_msgs__msg__KistlerPitchRoll.
typedef struct sd_can_msgs__msg__KistlerPitchRoll__Sequence
{
  sd_can_msgs__msg__KistlerPitchRoll * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__KistlerPitchRoll__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_PITCH_ROLL__STRUCT_H_
