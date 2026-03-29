// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/CbaStatusFl.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__STRUCT_H_

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

/// Struct defined in msg/CbaStatusFl in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__CbaStatusFl
{
  std_msgs__msg__Header header;
  /// Range: 0..4095 (0..40950000 Pa), Scale: 10000, Offset: 0
  double cba_actual_pressure_fl_pa;
  /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
  double cba_actual_pressure_fl;
  /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
  double cba_target_pressure_fl_ack;
  /// Range: 0..1000 (-50..50 A), Scale: 0.1, Offset: -50
  double cba_actual_current_fl_a;
  /// Range: 0..255 (0..102 V), Scale: 0.4, Offset: 0
  double cba_voltage_fl_v;
} sd_can_msgs__msg__CbaStatusFl;

// Struct for a sequence of sd_can_msgs__msg__CbaStatusFl.
typedef struct sd_can_msgs__msg__CbaStatusFl__Sequence
{
  sd_can_msgs__msg__CbaStatusFl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__CbaStatusFl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__STRUCT_H_
