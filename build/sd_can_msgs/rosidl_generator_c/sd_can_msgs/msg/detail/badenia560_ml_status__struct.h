// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560MLStatus.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__STRUCT_H_

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

/// Struct defined in msg/Badenia560MLStatus in the package sd_can_msgs.
/**
  * Badenia560 ML Status (NEW in v5)
  * Frame ID: 0x100
  * ML status relay from BSU
  * BSU Prefill Request signals
 */
typedef struct sd_can_msgs__msg__Badenia560MLStatus
{
  std_msgs__msg__Header header;
  /// ========== BSU PREFILL REQUEST SIGNALS ==========
  /// Relay of BSU prefill request values for all four corners
  /// BSU Prefill Request Front Left, Range: 0..1, Scale: 1, Offset: 0
  uint8_t bsu_prefill_req_fl;
  /// BSU Prefill Request Front Right, Range: 0..1, Scale: 1, Offset: 0
  uint8_t bsu_prefill_req_fr;
  /// BSU Prefill Request Rear Left, Range: 0..1, Scale: 1, Offset: 0
  uint8_t bsu_prefill_req_rl;
  /// BSU Prefill Request Rear Right, Range: 0..1, Scale: 1, Offset: 0
  uint8_t bsu_prefill_req_rr;
} sd_can_msgs__msg__Badenia560MLStatus;

// Struct for a sequence of sd_can_msgs__msg__Badenia560MLStatus.
typedef struct sd_can_msgs__msg__Badenia560MLStatus__Sequence
{
  sd_can_msgs__msg__Badenia560MLStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560MLStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__STRUCT_H_
