// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_map_msgs:msg/SnLaneState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__STRUCT_H_
#define SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sn_state'
#include "sd_map_msgs/msg/detail/sn_state__struct.h"

/// Struct defined in msg/SnLaneState in the package sd_map_msgs.
/**
  * Projection and geometry relative to the lane's ref_curv
 */
typedef struct sd_map_msgs__msg__SnLaneState
{
  sd_map_msgs__msg__SnState sn_state;
  /// True if the point is inside the lane borders
  bool is_inside_borders;
  /// Distance to nearest border; 0 if inside
  double dist_to_border;
} sd_map_msgs__msg__SnLaneState;

// Struct for a sequence of sd_map_msgs__msg__SnLaneState.
typedef struct sd_map_msgs__msg__SnLaneState__Sequence
{
  sd_map_msgs__msg__SnLaneState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_map_msgs__msg__SnLaneState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__STRUCT_H_
