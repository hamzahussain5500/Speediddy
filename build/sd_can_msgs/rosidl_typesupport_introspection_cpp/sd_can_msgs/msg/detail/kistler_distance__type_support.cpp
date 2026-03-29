// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sd_can_msgs:msg/KistlerDistance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sd_can_msgs/msg/detail/kistler_distance__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sd_can_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KistlerDistance_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sd_can_msgs::msg::KistlerDistance(_init);
}

void KistlerDistance_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sd_can_msgs::msg::KistlerDistance *>(message_memory);
  typed_message->~KistlerDistance();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KistlerDistance_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs::msg::KistlerDistance, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sd_can_msgs::msg::KistlerDistance, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KistlerDistance_message_members = {
  "sd_can_msgs::msg",  // message namespace
  "KistlerDistance",  // message name
  2,  // number of fields
  sizeof(sd_can_msgs::msg::KistlerDistance),
  KistlerDistance_message_member_array,  // message members
  KistlerDistance_init_function,  // function to initialize message memory (memory has to be allocated)
  KistlerDistance_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KistlerDistance_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KistlerDistance_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sd_can_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sd_can_msgs::msg::KistlerDistance>()
{
  return &::sd_can_msgs::msg::rosidl_typesupport_introspection_cpp::KistlerDistance_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sd_can_msgs, msg, KistlerDistance)() {
  return &::sd_can_msgs::msg::rosidl_typesupport_introspection_cpp::KistlerDistance_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
