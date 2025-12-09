// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/GlobalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/global_path_planning_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::GlobalPathPlanningInterface & msg,
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

  // member: startpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.startpoint.size() == 0) {
      out << "startpoint: []\n";
    } else {
      out << "startpoint:\n";
      for (auto item : msg.startpoint) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.endpoint.size() == 0) {
      out << "endpoint: []\n";
    } else {
      out << "endpoint:\n";
      for (auto item : msg.endpoint) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: routedata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.routedata.size() == 0) {
      out << "routedata: []\n";
    } else {
      out << "routedata:\n";
      for (auto item : msg.routedata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: back_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.back_point.size() == 0) {
      out << "back_point: []\n";
    } else {
      out << "back_point:\n";
      for (auto item : msg.back_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: end_obu_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.end_obu_point.size() == 0) {
      out << "end_obu_point: []\n";
    } else {
      out << "end_obu_point:\n";
      for (auto item : msg.end_obu_point) {
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

inline std::string to_yaml(const car_interfaces::msg::GlobalPathPlanningInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::GlobalPathPlanningInterface>()
{
  return "car_interfaces::msg::GlobalPathPlanningInterface";
}

template<>
inline const char * name<car_interfaces::msg::GlobalPathPlanningInterface>()
{
  return "car_interfaces/msg/GlobalPathPlanningInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::GlobalPathPlanningInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_interfaces::msg::GlobalPathPlanningInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_interfaces::msg::GlobalPathPlanningInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__TRAITS_HPP_
