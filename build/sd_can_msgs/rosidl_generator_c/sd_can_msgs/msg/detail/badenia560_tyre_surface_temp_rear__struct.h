// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__STRUCT_H_

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

/// Struct defined in msg/Badenia560TyreSurfaceTempRear in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560TyreSurfaceTempRear
{
  std_msgs__msg__Header header;
  /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
  double outer_rl;
  /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
  double center_rl;
  /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
  double inner_rl;
  /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
  double outer_rr;
  /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
  double center_rr;
  /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
  double inner_rr;
} sd_can_msgs__msg__Badenia560TyreSurfaceTempRear;

// Struct for a sequence of sd_can_msgs__msg__Badenia560TyreSurfaceTempRear.
typedef struct sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence
{
  sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__STRUCT_H_
