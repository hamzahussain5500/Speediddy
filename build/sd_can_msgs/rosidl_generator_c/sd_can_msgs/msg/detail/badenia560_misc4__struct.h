// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560Misc4.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__STRUCT_H_

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

/// Struct defined in msg/Badenia560Misc4 in the package sd_can_msgs.
/**
  * Badenia560 Misc4 (NEW in v5)
  * Frame ID: 0x453
  * TPMS Diagnostics - Transmission check and alive counters
 */
typedef struct sd_can_msgs__msg__Badenia560Misc4
{
  std_msgs__msg__Header header;
  /// ========== TPMS TRANSMISSION CHECK FLAGS ==========
  /// 0 = TPMS sensor is transmitting, 1 = Not transmitting
  /// Front Left TPMS Transmission Check, Range: 0..1, Scale: 1, Offset: 0
  uint8_t bad_tpms_check_fl;
  /// Front Right TPMS Transmission Check, Range: 0..1, Scale: 1, Offset: 0
  uint8_t bad_tpms_check_fr;
  /// Rear Left TPMS Transmission Check, Range: 0..1, Scale: 1, Offset: 0
  uint8_t bad_tpms_check_rl;
  /// Rear Right TPMS Transmission Check, Range: 0..1, Scale: 1, Offset: 0
  uint8_t bad_tpms_check_rr;
  /// ========== TPMS ALIVE COUNTERS ==========
  /// Alive signal from each TPMS sensor (increments with each transmission)
  /// Front Left TPMS Alive Count, Range: 0..255, Scale: 1, Offset: 0
  uint8_t bad_tpms_tx_count_fl;
  /// Front Right TPMS Alive Count, Range: 0..255, Scale: 1, Offset: 0
  uint8_t bad_tpms_tx_count_fr;
  /// Rear Left TPMS Alive Count, Range: 0..255, Scale: 1, Offset: 0
  uint8_t bad_tpms_tx_count_rl;
  /// Rear Right TPMS Alive Count, Range: 0..255, Scale: 1, Offset: 0
  uint8_t bad_tpms_tx_count_rr;
} sd_can_msgs__msg__Badenia560Misc4;

// Struct for a sequence of sd_can_msgs__msg__Badenia560Misc4.
typedef struct sd_can_msgs__msg__Badenia560Misc4__Sequence
{
  sd_can_msgs__msg__Badenia560Misc4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560Misc4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__STRUCT_H_
