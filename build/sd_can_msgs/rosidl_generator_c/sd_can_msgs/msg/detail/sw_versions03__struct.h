// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/SwVersions03.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__STRUCT_H_

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

/// Struct defined in msg/SwVersions03 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__SwVersions03
{
  std_msgs__msg__Header header;
  uint8_t cba_rl_sw_minor_version;
  uint8_t cba_rl_sw_major_version;
  uint16_t cba_rl_sw_build_version;
  uint8_t cba_rr_sw_minor_version;
  uint8_t cba_rr_sw_major_version;
  uint16_t cba_rr_sw_build_version;
} sd_can_msgs__msg__SwVersions03;

// Struct for a sequence of sd_can_msgs__msg__SwVersions03.
typedef struct sd_can_msgs__msg__SwVersions03__Sequence
{
  sd_can_msgs__msg__SwVersions03 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__SwVersions03__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__STRUCT_H_
