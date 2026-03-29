// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560Misc5.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC5__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC5__STRUCT_H_

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

/// Struct defined in msg/Badenia560Misc5 in the package sd_can_msgs.
/**
  * Badenia560 Misc5 (NEW in v5)
  * Frame ID: 0x454
  * TPMS Lifetime Counters - Total transmissions from each sensor
 */
typedef struct sd_can_msgs__msg__Badenia560Misc5
{
  std_msgs__msg__Header header;
  /// ========== TPMS LIFETIME TRANSMISSION COUNTERS ==========
  /// Total number of transmissions from each TPMS sensor over its lifetime
  /// Front Left TPMS Lifetime Count, Range: 0..4096, Scale: 1, Offset: 0
  uint16_t bad_tpms_tx_life_fl;
  /// Front Right TPMS Lifetime Count, Range: 0..4096, Scale: 1, Offset: 0
  uint16_t bad_tpms_tx_life_fr;
  /// Rear Left TPMS Lifetime Count, Range: 0..4096, Scale: 1, Offset: 0
  uint16_t bad_tpms_tx_life_rl;
  /// Rear Right TPMS Lifetime Count, Range: 0..4096, Scale: 1, Offset: 0
  uint16_t bad_tpms_tx_life_rr;
} sd_can_msgs__msg__Badenia560Misc5;

// Struct for a sequence of sd_can_msgs__msg__Badenia560Misc5.
typedef struct sd_can_msgs__msg__Badenia560Misc5__Sequence
{
  sd_can_msgs__msg__Badenia560Misc5 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560Misc5__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC5__STRUCT_H_
