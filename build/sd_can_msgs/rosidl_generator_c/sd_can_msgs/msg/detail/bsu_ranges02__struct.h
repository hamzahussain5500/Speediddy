// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/BSURanges02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__STRUCT_H_

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

/// Struct defined in msg/BSURanges02 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__BSURanges02
{
  std_msgs__msg__Header header;
  double psa_min_angle_rad;
  /// Range: 0..255 (0..25.5 rad)
  double psa_max_angle_rad;
  /// Range: 0..255 (-255..0 rad_s)
  double psa_min_angle_speed_rad_s;
  /// Range: 0..255 (0..255 rad_s)
  double psa_max_angle_speed_rad_s;
  /// Range: 0..1976 (-19760..0 mNm)
  double psa_min_torque_m_nm;
  /// Range: 0..1976 (0..19760 mNm)
  double psa_max_torque_m_nm;
} sd_can_msgs__msg__BSURanges02;

// Struct for a sequence of sd_can_msgs__msg__BSURanges02.
typedef struct sd_can_msgs__msg__BSURanges02__Sequence
{
  sd_can_msgs__msg__BSURanges02 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__BSURanges02__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__STRUCT_H_
