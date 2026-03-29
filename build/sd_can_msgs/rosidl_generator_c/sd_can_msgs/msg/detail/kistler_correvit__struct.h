// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/KistlerCorrevit.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__STRUCT_H_

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

/// Struct defined in msg/KistlerCorrevit in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__KistlerCorrevit
{
  std_msgs__msg__Header header;
  /// Range: -11111..11111 (-400..400 km/h), Scale: 0.036, Offset: 0
  double vel_x_cor;
  /// Range: -2778..2778 (-100..100 km/h), Scale: 0.036, Offset: 0
  double vel_y_cor;
  /// Range: -11111..11111 (-400..400 km/h), Scale: 0.036, Offset: 0
  double vel_cor;
  /// Range: -4500..4500 (-45..45 °), Scale: 0.01, Offset: 0
  double angle_cor;
} sd_can_msgs__msg__KistlerCorrevit;

// Struct for a sequence of sd_can_msgs__msg__KistlerCorrevit.
typedef struct sd_can_msgs__msg__KistlerCorrevit__Sequence
{
  sd_can_msgs__msg__KistlerCorrevit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__KistlerCorrevit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__STRUCT_H_
