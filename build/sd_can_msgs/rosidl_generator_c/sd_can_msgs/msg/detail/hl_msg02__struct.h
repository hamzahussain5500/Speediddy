// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLMsg02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__STRUCT_H_

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

/// Struct defined in msg/HLMsg02 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__HLMsg02
{
  std_msgs__msg__Header header;
  /// Range: 0..15 (0..15 uint), Scale: 1, Offset: 0
  uint8_t hl_alive_02;
  /// Range: 0..7 (0..7 enum), Scale: 1, Offset: 0
  uint8_t hl_psa_mode_of_operation;
  /// Range: 0..4000 (-100..100 %), Scale: 0.05, Offset: -100
  double hl_target_psa_control;
  /// If This Signal is set to 0, Default value will be send by the BSU, Range: 0..20000 (0..2000 rad/s2), Scale: 0.1, Offset: 0
  uint16_t hl_psa_profile_acc_rad_s2;
  /// If This Signal is set to 0, Default value will be send by the BSU, Range: 0..20000 (0..2000 rad/s2), Scale: 0.1, Offset: 0
  uint16_t hl_psa_profile_dec_rad_s2;
  /// If This Signal is set to 0, Default value will be send by the BSU, Range: 0..20000 (0..2000 rad_s), Scale: 0.1, Offset: 0
  uint16_t hl_psa_profile_vel_rad_s;
} sd_can_msgs__msg__HLMsg02;

// Struct for a sequence of sd_can_msgs__msg__HLMsg02.
typedef struct sd_can_msgs__msg__HLMsg02__Sequence
{
  sd_can_msgs__msg__HLMsg02 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLMsg02__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__STRUCT_H_
