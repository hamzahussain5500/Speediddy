// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/EMStatus01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__STRUCT_H_

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

/// Struct defined in msg/EMStatus01Legacy in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__EMStatus01Legacy
{
  std_msgs__msg__Header header;
  /// Range: 0..120 (0..12 bar)
  double emb_line_pressure_bar;
  /// Range: 0..120 (0..12 bar)
  double emb_tank_pressure_bar;
  /// Range: 0..1023 (0..1023 uint)
  uint16_t em_status;
  /// Range: 0..1023 (0..102.3 m/s)
  double hl_stop_deceleration_1;
  /// Range: 0..1023 (0..102.3 m/s)
  double hl_stop_deceleration_2;
  /// Range: 0..1023 (0..102.3 s)
  double hl_stop_time_to_dec_1;
  /// Range: 0..1023 (0..102.3 s)
  double hl_stop_time_to_dec_2;
} sd_can_msgs__msg__EMStatus01Legacy;

// Struct for a sequence of sd_can_msgs__msg__EMStatus01Legacy.
typedef struct sd_can_msgs__msg__EMStatus01Legacy__Sequence
{
  sd_can_msgs__msg__EMStatus01Legacy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__EMStatus01Legacy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__STRUCT_H_
