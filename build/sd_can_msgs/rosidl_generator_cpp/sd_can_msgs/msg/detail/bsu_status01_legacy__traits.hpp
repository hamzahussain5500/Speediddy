// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/BSUStatus01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/bsu_status01_legacy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BSUStatus01Legacy & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bsu_hl_stop_request
  {
    out << "bsu_hl_stop_request: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_hl_stop_request, out);
    out << ", ";
  }

  // member: bsu_hl_warning
  {
    out << "bsu_hl_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_hl_warning, out);
    out << ", ";
  }

  // member: bsu_em_stop_activated
  {
    out << "bsu_em_stop_activated: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_em_stop_activated, out);
    out << ", ";
  }

  // member: bsu_ml_stop_activated
  {
    out << "bsu_ml_stop_activated: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_ml_stop_activated, out);
    out << ", ";
  }

  // member: bsu_alive_counter
  {
    out << "bsu_alive_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_alive_counter, out);
    out << ", ";
  }

  // member: bsu_status
  {
    out << "bsu_status: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_status, out);
    out << ", ";
  }

  // member: abs_external_enable_ack
  {
    out << "abs_external_enable_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_external_enable_ack, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BSUStatus01Legacy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: bsu_hl_stop_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bsu_hl_stop_request: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_hl_stop_request, out);
    out << "\n";
  }

  // member: bsu_hl_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bsu_hl_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_hl_warning, out);
    out << "\n";
  }

  // member: bsu_em_stop_activated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bsu_em_stop_activated: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_em_stop_activated, out);
    out << "\n";
  }

  // member: bsu_ml_stop_activated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bsu_ml_stop_activated: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_ml_stop_activated, out);
    out << "\n";
  }

  // member: bsu_alive_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bsu_alive_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_alive_counter, out);
    out << "\n";
  }

  // member: bsu_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bsu_status: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_status, out);
    out << "\n";
  }

  // member: abs_external_enable_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_external_enable_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_external_enable_ack, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BSUStatus01Legacy & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sd_can_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_can_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_can_msgs::msg::BSUStatus01Legacy & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::BSUStatus01Legacy & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::BSUStatus01Legacy>()
{
  return "sd_can_msgs::msg::BSUStatus01Legacy";
}

template<>
inline const char * name<sd_can_msgs::msg::BSUStatus01Legacy>()
{
  return "sd_can_msgs/msg/BSUStatus01Legacy";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::BSUStatus01Legacy>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::BSUStatus01Legacy>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::BSUStatus01Legacy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__TRAITS_HPP_
