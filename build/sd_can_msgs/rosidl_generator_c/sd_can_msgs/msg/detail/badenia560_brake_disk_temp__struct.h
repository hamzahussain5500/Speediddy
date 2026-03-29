// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560BrakeDiskTemp.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__STRUCT_H_

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

/// Struct defined in msg/Badenia560BrakeDiskTemp in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560BrakeDiskTemp
{
  std_msgs__msg__Header header;
  /// 0,0 - 1000,0, Range: -, Scale: 0.1, Offset: 0
  double brake_disk_temp_fl;
  /// 0,0 - 1000,0, Range: -, Scale: 0.1, Offset: 0
  double brake_disk_temp_fr;
  /// 0,0 - 1000,0, Range: -, Scale: 0.1, Offset: 0
  double brake_disk_temp_rr;
  /// 0,0 - 1000,0, Range: -, Scale: 0.1, Offset: 0
  double brake_disk_temp_rl;
} sd_can_msgs__msg__Badenia560BrakeDiskTemp;

// Struct for a sequence of sd_can_msgs__msg__Badenia560BrakeDiskTemp.
typedef struct sd_can_msgs__msg__Badenia560BrakeDiskTemp__Sequence
{
  sd_can_msgs__msg__Badenia560BrakeDiskTemp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560BrakeDiskTemp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__STRUCT_H_
