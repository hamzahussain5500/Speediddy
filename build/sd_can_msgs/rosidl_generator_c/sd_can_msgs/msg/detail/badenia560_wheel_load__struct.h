// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560WheelLoad.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__STRUCT_H_

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

/// Struct defined in msg/Badenia560WheelLoad in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560WheelLoad
{
  std_msgs__msg__Header header;
  /// -200,0 - 1438,3, Range: -, Scale: 0.1, Offset: -200
  double load_wheel_fl;
  /// -200,0 - 1438,3, Range: -, Scale: 0.1, Offset: -200
  double load_wheel_fr;
  /// -200,0 - 1438,3, Range: -, Scale: 0.1, Offset: -200
  double load_wheel_rr;
  /// -200,0 - 1438,3, Range: -, Scale: 0.1, Offset: -200
  double load_wheel_rl;
} sd_can_msgs__msg__Badenia560WheelLoad;

// Struct for a sequence of sd_can_msgs__msg__Badenia560WheelLoad.
typedef struct sd_can_msgs__msg__Badenia560WheelLoad__Sequence
{
  sd_can_msgs__msg__Badenia560WheelLoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560WheelLoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_WHEEL_LOAD__STRUCT_H_
