// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_map_msgs:msg/SnMapState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__STRUCT_H_
#define SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'track_sn_state'
// Member 'pitlane_sn_state'
#include "sd_map_msgs/msg/detail/sn_lane_state__struct.h"

/// Struct defined in msg/SnMapState in the package sd_map_msgs.
/**
  * Classification of the point's location
 */
typedef struct sd_map_msgs__msg__SnMapState
{
  uint8_t current_lane;
  /// Projection and border data for the track lane
  sd_map_msgs__msg__SnLaneState track_sn_state;
  /// Projection and border data for the pitlane lane
  sd_map_msgs__msg__SnLaneState pitlane_sn_state;
} sd_map_msgs__msg__SnMapState;

// Struct for a sequence of sd_map_msgs__msg__SnMapState.
typedef struct sd_map_msgs__msg__SnMapState__Sequence
{
  sd_map_msgs__msg__SnMapState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_map_msgs__msg__SnMapState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__STRUCT_H_
