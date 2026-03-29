// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/PdUsStatus01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_LEGACY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_LEGACY__STRUCT_H_

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

/// Struct defined in msg/PdUsStatus01Legacy in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__PdUsStatus01Legacy
{
  std_msgs__msg__Header header;
  /// Range: 0..250 (0..25 V), Scale: 0.1, Offset: 0
  double pdu1_power_supply_voltage_v;
  /// Range: 0..4090 (0..409 A), Scale: 0.1, Offset: 0
  double pdu1_total_current_a;
  /// Range: 0..250 (0..25 V), Scale: 0.1, Offset: 0
  double pdu2_power_supply_voltage_v;
  /// Range: 0..4090 (0..409 A), Scale: 0.1, Offset: 0
  double pdu2_total_current_a;
} sd_can_msgs__msg__PdUsStatus01Legacy;

// Struct for a sequence of sd_can_msgs__msg__PdUsStatus01Legacy.
typedef struct sd_can_msgs__msg__PdUsStatus01Legacy__Sequence
{
  sd_can_msgs__msg__PdUsStatus01Legacy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__PdUsStatus01Legacy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_LEGACY__STRUCT_H_
