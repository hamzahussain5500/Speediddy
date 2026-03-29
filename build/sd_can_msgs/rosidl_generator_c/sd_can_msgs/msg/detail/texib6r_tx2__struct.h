// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/TEXIB6rTx2.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX2__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX2__STRUCT_H_

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

/// Struct defined in msg/TEXIB6rTx2 in the package sd_can_msgs.
/**
  * Message definition for CAN ID 601 (TEXIB6r_Tx2)
 */
typedef struct sd_can_msgs__msg__TEXIB6rTx2
{
  std_msgs__msg__Header header;
  /// Gyroscope Z-axis
  double gyr_z;
  /// Gyroscope Y-axis
  double gyr_y;
  /// Gyroscope X-axis
  double gyr_x;
} sd_can_msgs__msg__TEXIB6rTx2;

// Struct for a sequence of sd_can_msgs__msg__TEXIB6rTx2.
typedef struct sd_can_msgs__msg__TEXIB6rTx2__Sequence
{
  sd_can_msgs__msg__TEXIB6rTx2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__TEXIB6rTx2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX2__STRUCT_H_
