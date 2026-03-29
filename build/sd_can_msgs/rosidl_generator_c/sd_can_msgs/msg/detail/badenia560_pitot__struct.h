// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560Pitot.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__STRUCT_H_

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

/// Struct defined in msg/Badenia560Pitot in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560Pitot
{
  std_msgs__msg__Header header;
  /// Range: -, Scale: 0.01, Offset: 0
  double pitot_front_press;
  /// Range: -, Scale: 0.01, Offset: 0
  double pitot_yaw_press;
  /// Range: -, Scale: 0.01, Offset: 600
  double pitot_absolute_press;
  /// Range: -, Scale: 0.1, Offset: 0
  double pitot_air_temp;
} sd_can_msgs__msg__Badenia560Pitot;

// Struct for a sequence of sd_can_msgs__msg__Badenia560Pitot.
typedef struct sd_can_msgs__msg__Badenia560Pitot__Sequence
{
  sd_can_msgs__msg__Badenia560Pitot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560Pitot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__STRUCT_H_
