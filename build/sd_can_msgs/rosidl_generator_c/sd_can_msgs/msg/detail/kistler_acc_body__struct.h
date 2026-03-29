// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/KistlerAccBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_BODY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_BODY__STRUCT_H_

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

/// Struct defined in msg/KistlerAccBody in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__KistlerAccBody
{
  std_msgs__msg__Header header;
  /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
  double acc_x_body;
  /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
  double acc_y_body;
  /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
  double acc_z_body;
} sd_can_msgs__msg__KistlerAccBody;

// Struct for a sequence of sd_can_msgs__msg__KistlerAccBody.
typedef struct sd_can_msgs__msg__KistlerAccBody__Sequence
{
  sd_can_msgs__msg__KistlerAccBody * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__KistlerAccBody__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_BODY__STRUCT_H_
