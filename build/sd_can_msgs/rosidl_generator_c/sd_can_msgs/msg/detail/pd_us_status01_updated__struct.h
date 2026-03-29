// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/PdUsStatus01Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_UPDATED__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_UPDATED__STRUCT_H_

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

/// Struct defined in msg/PdUsStatus01Updated in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__PdUsStatus01Updated
{
  std_msgs__msg__Header header;
  /// Power Distribution Unit Status
  /// PDU12 power supply voltage (0..65.535 V)
  uint16_t pdu12_power_supply_voltage_v;
  /// PDU12 total current (0..409 A)
  uint16_t pdu12_total_current_a;
  /// PDU48 power supply voltage (0..65.535 V)
  uint16_t pdu48_power_supply_voltage_v;
  /// PDU48 total current (0..409 A)
  uint16_t pdu48_total_current_a;
} sd_can_msgs__msg__PdUsStatus01Updated;

// Struct for a sequence of sd_can_msgs__msg__PdUsStatus01Updated.
typedef struct sd_can_msgs__msg__PdUsStatus01Updated__Sequence
{
  sd_can_msgs__msg__PdUsStatus01Updated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__PdUsStatus01Updated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01_UPDATED__STRUCT_H_
