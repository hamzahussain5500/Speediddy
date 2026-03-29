// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLMsg05.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__STRUCT_H_

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

/// Struct defined in msg/HLMsg05 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__HLMsg05
{
  std_msgs__msg__Header header;
  /// Range: (m), Scale: 0.1, Offset: 0
  double hl_height;
  /// Range: (m/s), Scale: 0.005, Offset: 0
  double hl_vel_east;
  /// Range: (m/s), Scale: 0.005, Offset: 0
  double hl_vel_north;
  /// Range: (m/s), Scale: 0.005, Offset: 0
  double hl_vel_up;
} sd_can_msgs__msg__HLMsg05;

// Struct for a sequence of sd_can_msgs__msg__HLMsg05.
typedef struct sd_can_msgs__msg__HLMsg05__Sequence
{
  sd_can_msgs__msg__HLMsg05 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLMsg05__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__STRUCT_H_
