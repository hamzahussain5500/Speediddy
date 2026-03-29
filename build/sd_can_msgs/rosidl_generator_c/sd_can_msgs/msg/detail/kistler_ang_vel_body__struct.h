// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/KistlerAngVelBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__STRUCT_H_

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

/// Struct defined in msg/KistlerAngVelBody in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__KistlerAngVelBody
{
  std_msgs__msg__Header header;
  /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
  double ang_vel_x_body;
  /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
  double ang_vel_y_body;
  /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
  double ang_vel_z_body;
} sd_can_msgs__msg__KistlerAngVelBody;

// Struct for a sequence of sd_can_msgs__msg__KistlerAngVelBody.
typedef struct sd_can_msgs__msg__KistlerAngVelBody__Sequence
{
  sd_can_msgs__msg__KistlerAngVelBody * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__KistlerAngVelBody__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__STRUCT_H_
