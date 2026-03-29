// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/HLMsg06.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/hl_msg06__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HLMsg06 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hl_pc_temp
  {
    out << "hl_pc_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pc_temp, out);
    out << ", ";
  }

  // member: hl_cpu_usage
  {
    out << "hl_cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_cpu_usage, out);
    out << ", ";
  }

  // member: hl_gpu_usage
  {
    out << "hl_gpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_gpu_usage, out);
    out << ", ";
  }

  // member: hl_gpu_temp
  {
    out << "hl_gpu_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_gpu_temp, out);
    out << ", ";
  }

  // member: hl_perception_acc
  {
    out << "hl_perception_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_perception_acc, out);
    out << ", ";
  }

  // member: hl_localization_acc
  {
    out << "hl_localization_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_localization_acc, out);
    out << ", ";
  }

  // member: hl_watts_consumed
  {
    out << "hl_watts_consumed: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_watts_consumed, out);
    out << ", ";
  }

  // member: hl_aggressiveness
  {
    out << "hl_aggressiveness: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_aggressiveness, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HLMsg06 & msg,
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

  // member: hl_pc_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_pc_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_pc_temp, out);
    out << "\n";
  }

  // member: hl_cpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_cpu_usage, out);
    out << "\n";
  }

  // member: hl_gpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_gpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_gpu_usage, out);
    out << "\n";
  }

  // member: hl_gpu_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_gpu_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_gpu_temp, out);
    out << "\n";
  }

  // member: hl_perception_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_perception_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_perception_acc, out);
    out << "\n";
  }

  // member: hl_localization_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_localization_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_localization_acc, out);
    out << "\n";
  }

  // member: hl_watts_consumed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_watts_consumed: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_watts_consumed, out);
    out << "\n";
  }

  // member: hl_aggressiveness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_aggressiveness: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_aggressiveness, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HLMsg06 & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::HLMsg06 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::HLMsg06 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::HLMsg06>()
{
  return "sd_can_msgs::msg::HLMsg06";
}

template<>
inline const char * name<sd_can_msgs::msg::HLMsg06>()
{
  return "sd_can_msgs/msg/HLMsg06";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::HLMsg06>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::HLMsg06>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::HLMsg06>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG06__TRAITS_HPP_
