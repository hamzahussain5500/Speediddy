// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sd_can_msgs:msg/CbaStatusFl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sd_can_msgs/msg/detail/cba_status_fl__rosidl_typesupport_introspection_c.h"
#include "sd_can_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sd_can_msgs/msg/detail/cba_status_fl__functions.h"
#include "sd_can_msgs/msg/detail/cba_status_fl__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sd_can_msgs__msg__CbaStatusFl__init(message_memory);
}

void sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_fini_function(void * message_memory)
{
  sd_can_msgs__msg__CbaStatusFl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__CbaStatusFl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cba_actual_pressure_fl_pa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__CbaStatusFl, cba_actual_pressure_fl_pa),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cba_actual_pressure_fl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__CbaStatusFl, cba_actual_pressure_fl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cba_target_pressure_fl_ack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__CbaStatusFl, cba_target_pressure_fl_ack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cba_actual_current_fl_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__CbaStatusFl, cba_actual_current_fl_a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cba_voltage_fl_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__CbaStatusFl, cba_voltage_fl_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_members = {
  "sd_can_msgs__msg",  // message namespace
  "CbaStatusFl",  // message name
  6,  // number of fields
  sizeof(sd_can_msgs__msg__CbaStatusFl),
  sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_member_array,  // message members
  sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_init_function,  // function to initialize message memory (memory has to be allocated)
  sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_type_support_handle = {
  0,
  &sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sd_can_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sd_can_msgs, msg, CbaStatusFl)() {
  sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_type_support_handle.typesupport_identifier) {
    sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sd_can_msgs__msg__CbaStatusFl__rosidl_typesupport_introspection_c__CbaStatusFl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
