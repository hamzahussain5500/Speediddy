// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/SwVersions01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_LEGACY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_LEGACY__STRUCT_H_

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

/// Struct defined in msg/SwVersions01Legacy in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__SwVersions01Legacy
{
  std_msgs__msg__Header header;
  /// Range: 0..127 (0..127 uint), Scale: 1, Offset: 0
  uint8_t bsu_sw_minor_version;
  /// Range: 0..31 (0..31 uint), Scale: 1, Offset: 0
  uint8_t bsu_sw_major_version;
  /// Range: 0..1023 (0..1023 uint), Scale: 1, Offset: 0
  uint16_t bsu_sw_build_version;
  /// Range: 0..127 (0..127 uint), Scale: 1, Offset: 0
  uint8_t psa_sw_minor_version;
  /// Range: 0..31 (0..31 uint), Scale: 1, Offset: 0
  uint8_t psa_sw_major_version;
  /// Range: 0..1023 (0..1023 uint), Scale: 1, Offset: 0
  uint16_t psa_sw_build_version;
  /// Range: 0..255 (0..255 uint), Scale: 1, Offset: 0
  uint8_t pdu1_sw_version;
  /// Range: 0..255 (0..255 uint), Scale: 1, Offset: 0
  uint8_t pdu2_sw_version;
} sd_can_msgs__msg__SwVersions01Legacy;

// Struct for a sequence of sd_can_msgs__msg__SwVersions01Legacy.
typedef struct sd_can_msgs__msg__SwVersions01Legacy__Sequence
{
  sd_can_msgs__msg__SwVersions01Legacy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__SwVersions01Legacy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_LEGACY__STRUCT_H_
