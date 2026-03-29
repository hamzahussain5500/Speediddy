// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/WheelsSpeed01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__STRUCT_H_

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

/// Struct defined in msg/WheelsSpeed01 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__WheelsSpeed01
{
  std_msgs__msg__Header header;
  /// Range: 0..16380 (0..409.5 rad_s), Scale: 0.025, Offset: 0
  double wss_speed_fl_rad_s;
  /// Range: 0..16380 (0..409.5 rad_s), Scale: 0.025, Offset: 0
  double wss_speed_fr_rad_s;
  /// Range: 0..16380 (0..409.5 rad_s), Scale: 0.025, Offset: 0
  double wss_speed_rl_rad_s;
  /// Range: 0..16380 (0..409.5 rad_s), Scale: 0.025, Offset: 0
  double wss_speed_rr_rad_s;
} sd_can_msgs__msg__WheelsSpeed01;

// Struct for a sequence of sd_can_msgs__msg__WheelsSpeed01.
typedef struct sd_can_msgs__msg__WheelsSpeed01__Sequence
{
  sd_can_msgs__msg__WheelsSpeed01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__WheelsSpeed01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__STRUCT_H_
