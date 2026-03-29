// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sd_map_msgs:msg/SnLaneState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sd_map_msgs/msg/detail/sn_lane_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sd_map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SnLaneState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sd_map_msgs::msg::SnLaneState(_init);
}

void SnLaneState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sd_map_msgs::msg::SnLaneState *>(message_memory);
  typed_message->~SnLaneState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SnLaneState_message_member_array[3] = {
  {
    "sn_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sd_map_msgs::msg::SnState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs::msg::SnLaneState, sn_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_inside_borders",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs::msg::SnLaneState, is_inside_borders),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dist_to_border",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_map_msgs::msg::SnLaneState, dist_to_border),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SnLaneState_message_members = {
  "sd_map_msgs::msg",  // message namespace
  "SnLaneState",  // message name
  3,  // number of fields
  sizeof(sd_map_msgs::msg::SnLaneState),
  SnLaneState_message_member_array,  // message members
  SnLaneState_init_function,  // function to initialize message memory (memory has to be allocated)
  SnLaneState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SnLaneState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SnLaneState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sd_map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sd_map_msgs::msg::SnLaneState>()
{
  return &::sd_map_msgs::msg::rosidl_typesupport_introspection_cpp::SnLaneState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sd_map_msgs, msg, SnLaneState)() {
  return &::sd_map_msgs::msg::rosidl_typesupport_introspection_cpp::SnLaneState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
