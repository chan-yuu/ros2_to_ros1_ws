// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/NetTrafficSignInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/net_traffic_sign_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::NetTrafficSignInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: lightnumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lightnumber: ";
    value_to_yaml(msg.lightnumber, out);
    out << "\n";
  }

  // member: lightstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lightstate.size() == 0) {
      out << "lightstate: []\n";
    } else {
      out << "lightstate:\n";
      for (auto item : msg.lightstate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: etcnumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "etcnumber: ";
    value_to_yaml(msg.etcnumber, out);
    out << "\n";
  }

  // member: etcstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.etcstate.size() == 0) {
      out << "etcstate: []\n";
    } else {
      out << "etcstate:\n";
      for (auto item : msg.etcstate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: parkingnumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parkingnumber: ";
    value_to_yaml(msg.parkingnumber, out);
    out << "\n";
  }

  // member: parkingstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parkingstate.size() == 0) {
      out << "parkingstate: []\n";
    } else {
      out << "parkingstate:\n";
      for (auto item : msg.parkingstate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: process_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_time: ";
    value_to_yaml(msg.process_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::NetTrafficSignInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::NetTrafficSignInterface>()
{
  return "car_interfaces::msg::NetTrafficSignInterface";
}

template<>
inline const char * name<car_interfaces::msg::NetTrafficSignInterface>()
{
  return "car_interfaces/msg/NetTrafficSignInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::NetTrafficSignInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_interfaces::msg::NetTrafficSignInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_interfaces::msg::NetTrafficSignInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__TRAITS_HPP_
