// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sd_map_msgs:msg/SnMapState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sd_map_msgs/msg/detail/sn_map_state__rosidl_typesupport_introspection_c.h"
#include "sd_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sd_map_msgs/msg/detail/sn_map_state__functions.h"
#include "sd_map_msgs/msg/detail/sn_map_state__struct.h"


// Include directives for member types
// Member `track_sn_state`
// Member `pitlane_sn_state`
#include "sd_map_msgs/msg/sn_lane_state.h"
// Member `track_sn_state`
// Member `pitlane_sn_state`
#include "sd_map_msgs/msg/detail/sn_lane_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sd_map_msgs__msg__SnMapState__init(message_memory);
}

void sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_fini_function(void * message_memory)
{
  sd_map_msgs__msg__SnMapState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_member_array[3] = {
  {
    "current_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnMapState, current_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_sn_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnMapState, track_sn_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitlane_sn_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnMapState, pitlane_sn_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_members = {
  "sd_map_msgs__msg",  // message namespace
  "SnMapState",  // message name
  3,  // number of fields
  sizeof(sd_map_msgs__msg__SnMapState),
  sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_member_array,  // message members
  sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_init_function,  // function to initialize message memory (memory has to be allocated)
  sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_type_support_handle = {
  0,
  &sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sd_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sd_map_msgs, msg, SnMapState)() {
  sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sd_map_msgs, msg, SnLaneState)();
  sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sd_map_msgs, msg, SnLaneState)();
  if (!sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_type_support_handle.typesupport_identifier) {
    sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sd_map_msgs__msg__SnMapState__rosidl_typesupport_introspection_c__SnMapState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
