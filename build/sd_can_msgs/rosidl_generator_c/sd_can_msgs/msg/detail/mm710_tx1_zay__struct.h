// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/MM710TX1ZAY.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__STRUCT_H_

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

/// Struct defined in msg/MM710TX1ZAY in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__MM710TX1ZAY
{
  std_msgs__msg__Header header;
  /// Fields from DBC file in order (by bit position)
  /// MM710_CRC_TX1 (56|8)
  uint8_t crc;
  /// MM710_AY_STAT (52|4)
  uint8_t ay_stat;
  /// MM710_MSG_CNT_TX1 (48|4)
  uint8_t msg_cnt;
  /// MM710_AccY (32|16) in G
  double ay;
  /// MM710_TEMP_RATE_Z (24|8) in °C
  double temp_rate_z;
  /// MM710_YawRate_STAT (20|4)
  uint8_t yaw_rate_stat;
  /// MM710_CLU_STAT (16|4)
  uint8_t clu_stat;
  /// MM710_YawRate (0|16) in °/s
  double yaw_rate;
} sd_can_msgs__msg__MM710TX1ZAY;

// Struct for a sequence of sd_can_msgs__msg__MM710TX1ZAY.
typedef struct sd_can_msgs__msg__MM710TX1ZAY__Sequence
{
  sd_can_msgs__msg__MM710TX1ZAY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__MM710TX1ZAY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__STRUCT_H_
