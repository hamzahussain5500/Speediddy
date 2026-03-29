// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560PowertrainPress.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__STRUCT_H_

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

/// Struct defined in msg/Badenia560PowertrainPress in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560PowertrainPress
{
  std_msgs__msg__Header header;
  /// ========== v5 NEW: Front Pushrod Strain ==========
  /// Front Left Pushrod Strain, Range: -, Scale: 1, Offset: 32768
  double m_pushrod_strain_fl;
  /// Front Right Pushrod Strain, Range: -, Scale: 1, Offset: 32768
  double m_pushrod_strain_fr;
  /// ========== Existing Signals ==========
  /// Engine oil pressure, Range: -, Scale: 0.1, Offset: 0 (removed in DBC v5)
  double engine_oil_pressure;
  /// Engine water pressure, Range: -, Scale: 0.1, Offset: 0 (removed in DBC v5)
  double coolant_pressure;
  /// GDI pressure, Range: -, Scale: 1, Offset: 0
  double fuel_press_direct;
  /// Boost pressure, Range: -, Scale: 0.1, Offset: 0
  double boost_pressure;
} sd_can_msgs__msg__Badenia560PowertrainPress;

// Struct for a sequence of sd_can_msgs__msg__Badenia560PowertrainPress.
typedef struct sd_can_msgs__msg__Badenia560PowertrainPress__Sequence
{
  sd_can_msgs__msg__Badenia560PowertrainPress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560PowertrainPress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__STRUCT_H_
