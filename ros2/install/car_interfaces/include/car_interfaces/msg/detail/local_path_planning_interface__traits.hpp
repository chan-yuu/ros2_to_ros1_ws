// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/LocalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/local_path_planning_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::LocalPathPlanningInterface & msg,
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

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.longitude.size() == 0) {
      out << "longitude: []\n";
    } else {
      out << "longitude:\n";
      for (auto item : msg.longitude) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.latitude.size() == 0) {
      out << "latitude: []\n";
    } else {
      out << "latitude:\n";
      for (auto item : msg.latitude) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed.size() == 0) {
      out << "speed: []\n";
    } else {
      out << "speed:\n";
      for (auto item : msg.speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angle.size() == 0) {
      out << "angle: []\n";
    } else {
      out << "angle:\n";
      for (auto item : msg.angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: path_end_dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_end_dis: ";
    value_to_yaml(msg.path_end_dis, out);
    out << "\n";
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

inline std::string to_yaml(const car_interfaces::msg::LocalPathPlanningInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::LocalPathPlanningInterface>()
{
  return "car_interfaces::msg::LocalPathPlanningInterface";
}

template<>
inline const char * name<car_interfaces::msg::LocalPathPlanningInterface>()
{
  return "car_interfaces/msg/LocalPathPlanningInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::LocalPathPlanningInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_interfaces::msg::LocalPathPlanningInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_interfaces::msg::LocalPathPlanningInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__TRAITS_HPP_
