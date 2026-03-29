// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/ICEStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/ice_status01__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ICEStatus01 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ice_actual_gear
  {
    out << "ice_actual_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_actual_gear, out);
    out << ", ";
  }

  // member: ice_target_gear_ack
  {
    out << "ice_target_gear_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_target_gear_ack, out);
    out << ", ";
  }

  // member: ice_actual_throttle
  {
    out << "ice_actual_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_actual_throttle, out);
    out << ", ";
  }

  // member: ice_target_throttle_ack
  {
    out << "ice_target_throttle_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_target_throttle_ack, out);
    out << ", ";
  }

  // member: ice_push_to_pass_req
  {
    out << "ice_push_to_pass_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_push_to_pass_req, out);
    out << ", ";
  }

  // member: ice_push_to_pass_ack
  {
    out << "ice_push_to_pass_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_push_to_pass_ack, out);
    out << ", ";
  }

  // member: ice_water_press_k_pa
  {
    out << "ice_water_press_k_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_water_press_k_pa, out);
    out << ", ";
  }

  // member: ice_available_fuel_l
  {
    out << "ice_available_fuel_l: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_available_fuel_l, out);
    out << ", ";
  }

  // member: ice_downshift_available
  {
    out << "ice_downshift_available: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_downshift_available, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ICEStatus01 & msg,
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

  // member: ice_actual_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_actual_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_actual_gear, out);
    out << "\n";
  }

  // member: ice_target_gear_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_target_gear_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_target_gear_ack, out);
    out << "\n";
  }

  // member: ice_actual_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_actual_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_actual_throttle, out);
    out << "\n";
  }

  // member: ice_target_throttle_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_target_throttle_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_target_throttle_ack, out);
    out << "\n";
  }

  // member: ice_push_to_pass_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_push_to_pass_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_push_to_pass_req, out);
    out << "\n";
  }

  // member: ice_push_to_pass_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_push_to_pass_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_push_to_pass_ack, out);
    out << "\n";
  }

  // member: ice_water_press_k_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_water_press_k_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_water_press_k_pa, out);
    out << "\n";
  }

  // member: ice_available_fuel_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_available_fuel_l: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_available_fuel_l, out);
    out << "\n";
  }

  // member: ice_downshift_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_downshift_available: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_downshift_available, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ICEStatus01 & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::ICEStatus01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::ICEStatus01 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::ICEStatus01>()
{
  return "sd_can_msgs::msg::ICEStatus01";
}

template<>
inline const char * name<sd_can_msgs::msg::ICEStatus01>()
{
  return "sd_can_msgs/msg/ICEStatus01";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::ICEStatus01>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::ICEStatus01>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::ICEStatus01>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__TRAITS_HPP_
