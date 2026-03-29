// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/BSURanges01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__STRUCT_H_

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

/// Struct defined in msg/BSURanges01 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__BSURanges01
{
  std_msgs__msg__Header header;
  /// Range: 0..1 (0..100000 Pa)
  double cba_min_pressure_fl_pa;
  /// Range: 0..30 (5000000..20000000 Pa)
  double cba_max_pressure_fl_pa;
  /// Range: 0..1 (0..100000 Pa)
  double cba_min_pressure_fr_pa;
  /// Range: 0..30 (5000000..20000000 Pa)
  double cba_max_pressure_fr_pa;
  /// Range: 0..1 (0..100000 Pa)
  double cba_min_pressure_rl_pa;
  /// Range: 0..30 (5000000..20000000 Pa)
  double cba_max_pressure_rl_pa;
  /// Range: 0..1 (0..100000 Pa)
  double cba_min_pressure_rr_pa;
  /// Range: 0..30 (5000000..20000000 Pa)
  double cba_max_pressure_rr_pa;
  /// Range: 0..100 (0..100 %)
  double ice_max_throttle;
  /// Range: 0..100 (0..100 %)
  double ice_min_throttle;
} sd_can_msgs__msg__BSURanges01;

// Struct for a sequence of sd_can_msgs__msg__BSURanges01.
typedef struct sd_can_msgs__msg__BSURanges01__Sequence
{
  sd_can_msgs__msg__BSURanges01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__BSURanges01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__STRUCT_H_
