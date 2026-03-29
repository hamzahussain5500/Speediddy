// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_map_msgs:msg/SnState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_STATE__STRUCT_H_
#define SD_MAP_MSGS__MSG__DETAIL__SN_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SnState in the package sd_map_msgs.
/**
  * Index on the reference line. -1 means uninitialized.
  * Closest reference line index
 */
typedef struct sd_map_msgs__msg__SnState
{
  uint32_t idx;
  /// Longitudinal offset (progress) from x_ref[idx], y_ref[idx], e.g 0.5m
  /// always less than 1.1m.
  /// Distance along the curve from the reference point to the projection
  double ds;
  /// ds / ds_curv_step. Progress in terms of index general coordinates.
  double d_idx;
  /// Lateral offset from the reference curve
  double n;
  /// Heading error w.r.t the reference curve
  double epsi;
  uint8_t status;
} sd_map_msgs__msg__SnState;

// Struct for a sequence of sd_map_msgs__msg__SnState.
typedef struct sd_map_msgs__msg__SnState__Sequence
{
  sd_map_msgs__msg__SnState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_map_msgs__msg__SnState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_STATE__STRUCT_H_
