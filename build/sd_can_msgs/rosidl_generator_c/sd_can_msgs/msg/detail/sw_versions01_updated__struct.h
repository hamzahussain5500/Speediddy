// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/SwVersions01Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__STRUCT_H_

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

/// Struct defined in msg/SwVersions01Updated in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__SwVersions01Updated
{
  std_msgs__msg__Header header;
  /// Software version information for BSU and other components
  /// BSU Software Minor Version (0..127)
  uint8_t bsu_sw_minor_version;
  /// BSU Software Major Version (0..31)
  uint8_t bsu_sw_major_version;
  /// BSU Software Build Version (0..1023)
  uint16_t bsu_sw_build_version;
  /// PSA Software Minor Version (0..127)
  uint8_t psa_sw_minor_version;
  /// PSA Software Major Version (0..31)
  uint8_t psa_sw_major_version;
  /// PSA Software Build Version (0..1023)
  uint16_t psa_sw_build_version;
  /// PDU12 Software Version (0..255)
  uint8_t pdu12_sw_version;
  /// PDU48 Software Version (0..255)
  uint8_t pdu48_sw_version;
} sd_can_msgs__msg__SwVersions01Updated;

// Struct for a sequence of sd_can_msgs__msg__SwVersions01Updated.
typedef struct sd_can_msgs__msg__SwVersions01Updated__Sequence
{
  sd_can_msgs__msg__SwVersions01Updated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__SwVersions01Updated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__STRUCT_H_
