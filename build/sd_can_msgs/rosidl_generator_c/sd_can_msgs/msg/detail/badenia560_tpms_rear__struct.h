// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560TpmsRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__STRUCT_H_

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

/// Struct defined in msg/Badenia560TpmsRear in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560TpmsRear
{
  std_msgs__msg__Header header;
  /// Range: -, Scale: 0.1, Offset: 0
  double tpr4_temp_rl;
  /// Range: -, Scale: 0.1, Offset: 0
  double tpr4_temp_rr;
  /// Range: -, Scale: 0.1, Offset: 0
  double tpr4_abs_press_rl;
  /// Range: -, Scale: 0.1, Offset: 0
  double tpr4_abs_press_rr;
} sd_can_msgs__msg__Badenia560TpmsRear;

// Struct for a sequence of sd_can_msgs__msg__Badenia560TpmsRear.
typedef struct sd_can_msgs__msg__Badenia560TpmsRear__Sequence
{
  sd_can_msgs__msg__Badenia560TpmsRear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560TpmsRear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__STRUCT_H_
