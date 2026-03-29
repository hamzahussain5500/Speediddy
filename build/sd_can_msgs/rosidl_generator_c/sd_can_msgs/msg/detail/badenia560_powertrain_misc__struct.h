// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560PowertrainMisc.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__STRUCT_H_

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

/// Struct defined in msg/Badenia560PowertrainMisc in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560PowertrainMisc
{
  std_msgs__msg__Header header;
  /// ========== v5 NEW: Battery Monitoring ==========
  /// 12V Battery State of Charge, Range: 0..100, Scale: 1, Offset: 0
  uint8_t b12_soc;
  /// 48V Battery State of Charge, Range: 0..100, Scale: 1, Offset: 0
  uint8_t b48_soc;
  /// 12V Battery Temperature, Range: -, Scale: 1, Offset: 0
  uint8_t b12_temp;
  /// 48V Battery Temperature, Range: -, Scale: 1, Offset: 0
  uint8_t b48_temp;
  /// ========== Existing Signals ==========
  /// Throttle valve position, Range: -, Scale: 0.1, Offset: 0 (removed in DBC v5)
  double throttle_position;
  /// Rev limiter, Range: -, Scale: 1, Offset: 0
  double engine_speed_limit;
  /// Estimated fuel usage, Range: -, Scale: 0.01, Offset: 0
  double fuel_used_kg;
} sd_can_msgs__msg__Badenia560PowertrainMisc;

// Struct for a sequence of sd_can_msgs__msg__Badenia560PowertrainMisc.
typedef struct sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence
{
  sd_can_msgs__msg__Badenia560PowertrainMisc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__STRUCT_H_
