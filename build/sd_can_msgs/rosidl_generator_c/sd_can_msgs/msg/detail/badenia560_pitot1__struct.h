// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560Pitot1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT1__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT1__STRUCT_H_

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

/// Struct defined in msg/Badenia560Pitot1 in the package sd_can_msgs.
/**
  * Message for Badenia560 Pitot Packet 1
 */
typedef struct sd_can_msgs__msg__Badenia560Pitot1
{
  std_msgs__msg__Header header;
  /// Air temperature in degrees Celsius
  double pitot_air_temp;
  /// Board temperature in degrees Celsius
  double pitot_board_temp;
} sd_can_msgs__msg__Badenia560Pitot1;

// Struct for a sequence of sd_can_msgs__msg__Badenia560Pitot1.
typedef struct sd_can_msgs__msg__Badenia560Pitot1__Sequence
{
  sd_can_msgs__msg__Badenia560Pitot1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560Pitot1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT1__STRUCT_H_
