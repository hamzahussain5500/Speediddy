// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/TEXIB6rTx1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__STRUCT_H_

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

/// Struct defined in msg/TEXIB6rTx1 in the package sd_can_msgs.
/**
  * Message definition for CAN ID 600 (TEXIB6r_Tx1)
 */
typedef struct sd_can_msgs__msg__TEXIB6rTx1
{
  std_msgs__msg__Header header;
  /// Acceleration Z-axis
  double acc_z;
  /// Acceleration Y-axis
  double acc_y;
  /// Acceleration X-axis
  double acc_x;
} sd_can_msgs__msg__TEXIB6rTx1;

// Struct for a sequence of sd_can_msgs__msg__TEXIB6rTx1.
typedef struct sd_can_msgs__msg__TEXIB6rTx1__Sequence
{
  sd_can_msgs__msg__TEXIB6rTx1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__TEXIB6rTx1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__STRUCT_H_
