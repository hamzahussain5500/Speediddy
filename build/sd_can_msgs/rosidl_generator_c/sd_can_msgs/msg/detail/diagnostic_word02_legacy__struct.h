// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/DiagnosticWord02Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__STRUCT_H_

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

/// Struct defined in msg/DiagnosticWord02Legacy in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__DiagnosticWord02Legacy
{
  std_msgs__msg__Header header;
  bool rc_force_race_mode;
  bool rc_beacon_time_out;
} sd_can_msgs__msg__DiagnosticWord02Legacy;

// Struct for a sequence of sd_can_msgs__msg__DiagnosticWord02Legacy.
typedef struct sd_can_msgs__msg__DiagnosticWord02Legacy__Sequence
{
  sd_can_msgs__msg__DiagnosticWord02Legacy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__DiagnosticWord02Legacy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__STRUCT_H_
