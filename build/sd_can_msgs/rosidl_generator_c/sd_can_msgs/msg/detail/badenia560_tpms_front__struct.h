// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560TpmsFront.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__STRUCT_H_

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

/// Struct defined in msg/Badenia560TpmsFront in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560TpmsFront
{
  std_msgs__msg__Header header;
  /// 0,0-204,7°C, Range: -, Scale: 0.1, Offset: 0
  double tpr4_temp_fl;
  /// 0,0-204,7°C, Range: -, Scale: 0.1, Offset: 0
  double tpr4_temp_fr;
  /// 0,0-6500,0mbar, Range: -, Scale: 0.1, Offset: 0
  double tpr4_abs_press_fr;
  /// 0,0-6500,0mbar, Range: -, Scale: 0.1, Offset: 0
  double tpr4_abs_press_fl;
} sd_can_msgs__msg__Badenia560TpmsFront;

// Struct for a sequence of sd_can_msgs__msg__Badenia560TpmsFront.
typedef struct sd_can_msgs__msg__Badenia560TpmsFront__Sequence
{
  sd_can_msgs__msg__Badenia560TpmsFront * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560TpmsFront__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__STRUCT_H_
