// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/HLMsg02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/hl_msg02__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HLMsg02 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hl_alive_02
  {
    out << "hl_alive_02: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_alive_02, out);
    out << ", ";
  }

  // member: hl_psa_mode_of_operation
  {
    out << "hl_psa_mode_of_operation: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_psa_mode_of_operation, out);
    out << ", ";
  }

  // member: hl_target_psa_control
  {
    out << "hl_target_psa_control: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_target_psa_control, out);
    out << ", ";
  }

  // member: hl_psa_profile_acc_rad_s2
  {
    out << "hl_psa_profile_acc_rad_s2: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_psa_profile_acc_rad_s2, out);
    out << ", ";
  }

  // member: hl_psa_profile_dec_rad_s2
  {
    out << "hl_psa_profile_dec_rad_s2: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_psa_profile_dec_rad_s2, out);
    out << ", ";
  }

  // member: hl_psa_profile_vel_rad_s
  {
    out << "hl_psa_profile_vel_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_psa_profile_vel_rad_s, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HLMsg02 & msg,
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

  // member: hl_alive_02
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_alive_02: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_alive_02, out);
    out << "\n";
  }

  // member: hl_psa_mode_of_operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_psa_mode_of_operation: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_psa_mode_of_operation, out);
    out << "\n";
  }

  // member: hl_target_psa_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_target_psa_control: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_target_psa_control, out);
    out << "\n";
  }

  // member: hl_psa_profile_acc_rad_s2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_psa_profile_acc_rad_s2: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_psa_profile_acc_rad_s2, out);
    out << "\n";
  }

  // member: hl_psa_profile_dec_rad_s2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_psa_profile_dec_rad_s2: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_psa_profile_dec_rad_s2, out);
    out << "\n";
  }

  // member: hl_psa_profile_vel_rad_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_psa_profile_vel_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_psa_profile_vel_rad_s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HLMsg02 & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::HLMsg02 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::HLMsg02 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::HLMsg02>()
{
  return "sd_can_msgs::msg::HLMsg02";
}

template<>
inline const char * name<sd_can_msgs::msg::HLMsg02>()
{
  return "sd_can_msgs/msg/HLMsg02";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::HLMsg02>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::HLMsg02>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::HLMsg02>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG02__TRAITS_HPP_
