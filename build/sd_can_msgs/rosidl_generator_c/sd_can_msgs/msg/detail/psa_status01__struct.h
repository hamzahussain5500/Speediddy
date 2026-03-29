// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/PSAStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS01__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS01__STRUCT_H_

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

/// Struct defined in msg/PSAStatus01 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__PSAStatus01
{
  std_msgs__msg__Header header;
  /// Range: 0..10200 (-25.5..25.5 rad), Scale: 0.005, Offset: -25.5
  double psa_actual_pos_rad;
  /// Range: 0..5100 (-255..255 rad_s), Scale: 0.1, Offset: -255
  double psa_actual_speed_rad_s;
  /// Range: 0..6400 (-32000..32000 mNm), Scale: 10, Offset: -32000
  double psa_actual_torque_m_nm;
  /// Range: 0..7 (0..7 enum), Scale: 1, Offset: 0
  uint8_t psa_actual_mode_of_operation;
  /// Range: 0..1000 (-50..50 A), Scale: 0.1, Offset: -50
  double psa_actual_current_a;
  /// Range: 0..160 (0..64 V), Scale: 0.4, Offset: 0
  double psa_actual_voltage_v;
} sd_can_msgs__msg__PSAStatus01;

// Struct for a sequence of sd_can_msgs__msg__PSAStatus01.
typedef struct sd_can_msgs__msg__PSAStatus01__Sequence
{
  sd_can_msgs__msg__PSAStatus01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__PSAStatus01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__PSA_STATUS01__STRUCT_H_
