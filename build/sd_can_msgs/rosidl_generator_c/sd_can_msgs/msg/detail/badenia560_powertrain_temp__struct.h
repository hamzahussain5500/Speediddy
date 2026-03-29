// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560PowertrainTemp.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__STRUCT_H_

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

/// Struct defined in msg/Badenia560PowertrainTemp in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560PowertrainTemp
{
  std_msgs__msg__Header header;
  /// ========== v5 NEW: Rear Pushrod Strain ==========
  /// Rear Left Pushrod Strain, Range: -, Scale: 1, Offset: 32768
  double m_pushrod_strain_rl;
  /// Rear Right Pushrod Strain, Range: -, Scale: 1, Offset: 32768
  double m_pushrod_strain_rr;
  /// ========== v5 NEW: BSU Diagnostics ==========
  /// BSU Prefill Diagnostics, Range: 0..15, Scale: 1, Offset: 0
  uint8_t bsu_prefill_diag;
  /// ========== Existing Signals ==========
  /// Engine oil temperature, Range: -, Scale: 1, Offset: -40
  double engine_oil_temperature;
  /// Engine water temperature, Range: -, Scale: 1, Offset: -40
  double coolant_temperature;
  /// Gearbox oil temperature, Range: -, Scale: 0.1, Offset: 0
  double gear_box_oil_temp;
} sd_can_msgs__msg__Badenia560PowertrainTemp;

// Struct for a sequence of sd_can_msgs__msg__Badenia560PowertrainTemp.
typedef struct sd_can_msgs__msg__Badenia560PowertrainTemp__Sequence
{
  sd_can_msgs__msg__Badenia560PowertrainTemp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560PowertrainTemp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__STRUCT_H_
