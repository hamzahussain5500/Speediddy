// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_map_msgs:msg/SnState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_STATE__TRAITS_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_map_msgs/msg/detail/sn_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sd_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SnState & msg,
  std::ostream & out)
{
  out << "{";
  // member: idx
  {
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
    out << ", ";
  }

  // member: ds
  {
    out << "ds: ";
    rosidl_generator_traits::value_to_yaml(msg.ds, out);
    out << ", ";
  }

  // member: d_idx
  {
    out << "d_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.d_idx, out);
    out << ", ";
  }

  // member: n
  {
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << ", ";
  }

  // member: epsi
  {
    out << "epsi: ";
    rosidl_generator_traits::value_to_yaml(msg.epsi, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SnState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
    out << "\n";
  }

  // member: ds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ds: ";
    rosidl_generator_traits::value_to_yaml(msg.ds, out);
    out << "\n";
  }

  // member: d_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.d_idx, out);
    out << "\n";
  }

  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << "\n";
  }

  // member: epsi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epsi: ";
    rosidl_generator_traits::value_to_yaml(msg.epsi, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SnState & msg, bool use_flow_style = false)
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

}  // namespace sd_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_map_msgs::msg::SnState & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_map_msgs::msg::SnState & msg)
{
  return sd_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_map_msgs::msg::SnState>()
{
  return "sd_map_msgs::msg::SnState";
}

template<>
inline const char * name<sd_map_msgs::msg::SnState>()
{
  return "sd_map_msgs/msg/SnState";
}

template<>
struct has_fixed_size<sd_map_msgs::msg::SnState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sd_map_msgs::msg::SnState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sd_map_msgs::msg::SnState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_STATE__TRAITS_HPP_
