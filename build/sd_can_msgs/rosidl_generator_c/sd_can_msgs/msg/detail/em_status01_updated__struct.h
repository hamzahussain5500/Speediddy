// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/EMStatus01Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_UPDATED__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_UPDATED__STRUCT_H_

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

/// Struct defined in msg/EMStatus01Updated in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__EMStatus01Updated
{
  std_msgs__msg__Header header;
  /// EM status for the system
  /// Voltage in volts (0..25.4 bar)
  uint8_t dcdc4812_voltage_v;
  /// EM status code
  uint16_t em_status;
  /// Deceleration 1 in m/s
  uint16_t hl_stop_deceleration_1;
  /// Deceleration 2 in m/s
  uint16_t hl_stop_deceleration_2;
  /// Time to deceleration 1 in seconds
  uint16_t hl_stop_time_to_dec_1;
  /// Time to deceleration 2 in seconds
  uint16_t hl_stop_time_to_dec_2;
} sd_can_msgs__msg__EMStatus01Updated;

// Struct for a sequence of sd_can_msgs__msg__EMStatus01Updated.
typedef struct sd_can_msgs__msg__EMStatus01Updated__Sequence
{
  sd_can_msgs__msg__EMStatus01Updated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__EMStatus01Updated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_UPDATED__STRUCT_H_
