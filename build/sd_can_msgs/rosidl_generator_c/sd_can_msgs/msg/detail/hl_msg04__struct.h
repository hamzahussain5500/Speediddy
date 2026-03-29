// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLMsg04.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG04__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG04__STRUCT_H_

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

/// Struct defined in msg/HLMsg04 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__HLMsg04
{
  std_msgs__msg__Header header;
  /// Range: (deg), Scale: 1E-007, Offset: 0
  double hl_latitude;
  /// Range: (deg), Scale: 1E-007, Offset: 0
  double hl_longitude;
} sd_can_msgs__msg__HLMsg04;

// Struct for a sequence of sd_can_msgs__msg__HLMsg04.
typedef struct sd_can_msgs__msg__HLMsg04__Sequence
{
  sd_can_msgs__msg__HLMsg04 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLMsg04__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG04__STRUCT_H_
