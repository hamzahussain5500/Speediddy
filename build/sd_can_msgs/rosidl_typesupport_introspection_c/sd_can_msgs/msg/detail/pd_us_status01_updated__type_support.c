// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sd_can_msgs:msg/PdUsStatus01Updated.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sd_can_msgs/msg/detail/pd_us_status01_updated__rosidl_typesupport_introspection_c.h"
#include "sd_can_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sd_can_msgs/msg/detail/pd_us_status01_updated__functions.h"
#include "sd_can_msgs/msg/detail/pd_us_status01_updated__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sd_can_msgs__msg__PdUsStatus01Updated__init(message_memory);
}

void sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_fini_function(void * message_memory)
{
  sd_can_msgs__msg__PdUsStatus01Updated__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__PdUsStatus01Updated, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pdu12_power_supply_voltage_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__PdUsStatus01Updated, pdu12_power_supply_voltage_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pdu12_total_current_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__PdUsStatus01Updated, pdu12_total_current_a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pdu48_power_supply_voltage_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__PdUsStatus01Updated, pdu48_power_supply_voltage_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pdu48_total_current_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs__msg__PdUsStatus01Updated, pdu48_total_current_a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_members = {
  "sd_can_msgs__msg",  // message namespace
  "PdUsStatus01Updated",  // message name
  5,  // number of fields
  sizeof(sd_can_msgs__msg__PdUsStatus01Updated),
  sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_member_array,  // message members
  sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_init_function,  // function to initialize message memory (memory has to be allocated)
  sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_type_support_handle = {
  0,
  &sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sd_can_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sd_can_msgs, msg, PdUsStatus01Updated)() {
  sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_type_support_handle.typesupport_identifier) {
    sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sd_can_msgs__msg__PdUsStatus01Updated__rosidl_typesupport_introspection_c__PdUsStatus01Updated_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
