// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sd_map_msgs:msg/SnState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sd_map_msgs/msg/detail/sn_state__rosidl_typesupport_introspection_c.h"
#include "sd_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sd_map_msgs/msg/detail/sn_state__functions.h"
#include "sd_map_msgs/msg/detail/sn_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sd_map_msgs__msg__SnState__init(message_memory);
}

void sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_fini_function(void * message_memory)
{
  sd_map_msgs__msg__SnState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_message_member_array[6] = {
  {
    "idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnState, idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnState, ds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnState, d_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnState, n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epsi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnState, epsi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs__msg__SnState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_message_members = {
  "sd_map_msgs__msg",  // message namespace
  "SnState",  // message name
  6,  // number of fields
  sizeof(sd_map_msgs__msg__SnState),
  sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_message_member_array,  // message members
  sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_init_function,  // function to initialize message memory (memory has to be allocated)
  sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_message_type_support_handle = {
  0,
  &sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sd_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sd_map_msgs, msg, SnState)() {
  if (!sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_message_type_support_handle.typesupport_identifier) {
    sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sd_map_msgs__msg__SnState__rosidl_typesupport_introspection_c__SnState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
