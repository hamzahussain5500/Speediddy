// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/PSAStatus02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__STRUCT_H_

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

/// Struct defined in msg/PSAStatus02 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__PSAStatus02
{
  std_msgs__msg__Header header;
  double psa_target_psa_control_ack;
  double psa_actual_pos;
  double psa_actual_speed;
  double psa_actual_torque;
} sd_can_msgs__msg__PSAStatus02;

// Struct for a sequence of sd_can_msgs__msg__PSAStatus02.
typedef struct sd_can_msgs__msg__PSAStatus02__Sequence
{
  sd_can_msgs__msg__PSAStatus02 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__PSAStatus02__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS02__STRUCT_H_
