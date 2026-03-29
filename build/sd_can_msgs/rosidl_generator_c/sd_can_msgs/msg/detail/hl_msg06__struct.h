// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLMsg06.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__STRUCT_H_

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

/// Struct defined in msg/HLMsg06 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__HLMsg06
{
  std_msgs__msg__Header header;
  /// ========== v7 BREAKING CHANGES ==========
  /// NOTE: In v7, hl_pc_temp is renamed to hl_cpu_temp in DBC
  /// For backward compatibility, we keep hl_pc_temp here and map it in the handler
  /// Range: (degC), Scale: 1, Offset: -40 (maps to hl_cpu_temp in v7)
  int8_t hl_pc_temp;
  /// Range: (%), Scale: 1, Offset: 0
  uint8_t hl_cpu_usage;
  /// Range: (%), Scale: 1, Offset: 0
  uint8_t hl_gpu_usage;
  /// NEW in v7: GPU Temperature Monitoring
  /// Range: (degC), Scale: 1, Offset: -40 - New in v7
  int8_t hl_gpu_temp;
  /// REMOVED in v7 (kept for backward compatibility, will be 0 in v7):
  /// Range: (%), Scale: 1, Offset: 0 - REMOVED in v7
  uint8_t hl_perception_acc;
  /// Range: (%), Scale: 1, Offset: 0 - REMOVED in v7
  uint8_t hl_localization_acc;
  /// Range: (W), Scale: 1, Offset: 0 - REMOVED in v7
  uint16_t hl_watts_consumed;
  /// Range: (enum), Scale: 1, Offset: 0 - REMOVED in v7
  uint8_t hl_aggressiveness;
} sd_can_msgs__msg__HLMsg06;

// Struct for a sequence of sd_can_msgs__msg__HLMsg06.
typedef struct sd_can_msgs__msg__HLMsg06__Sequence
{
  sd_can_msgs__msg__HLMsg06 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLMsg06__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__STRUCT_H_
