// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/RcStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__STRUCT_H_

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

/// Struct defined in msg/RcStatus01 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__RcStatus01
{
  std_msgs__msg__Header header;
  uint8_t rc_session_type;
  uint8_t rc_car_flag;
  uint16_t rc_track_flag;
  uint8_t rc_sector_flag;
} sd_can_msgs__msg__RcStatus01;

// Struct for a sequence of sd_can_msgs__msg__RcStatus01.
typedef struct sd_can_msgs__msg__RcStatus01__Sequence
{
  sd_can_msgs__msg__RcStatus01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__RcStatus01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__STRUCT_H_
