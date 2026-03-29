// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/MM710TX3YAZ.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__STRUCT_H_

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

/// Struct defined in msg/MM710TX3YAZ in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__MM710TX3YAZ
{
  std_msgs__msg__Header header;
  /// Fields from DBC file in order (by bit position)
  /// MM710_CRC_TX3 (56|8)
  uint8_t crc;
  /// MM710_AZ_STAT (52|4)
  uint8_t az_stat;
  /// MM710_MSG_CNT_TX3 (48|4)
  uint8_t msg_cnt;
  /// MM710_AccZ (32|16) in G
  double az;
  /// MM710_PitchRate_STAT (20|4)
  uint8_t pitch_rate_stat;
  /// MM710_HW_Index (16|4)
  int8_t hw_index;
  /// MM710_PitchRate (0|16) in °/s
  double pitch_rate;
} sd_can_msgs__msg__MM710TX3YAZ;

// Struct for a sequence of sd_can_msgs__msg__MM710TX3YAZ.
typedef struct sd_can_msgs__msg__MM710TX3YAZ__Sequence
{
  sd_can_msgs__msg__MM710TX3YAZ * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__MM710TX3YAZ__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__STRUCT_H_
