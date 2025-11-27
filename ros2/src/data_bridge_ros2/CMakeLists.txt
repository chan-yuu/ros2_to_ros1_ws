cmake_minimum_required(VERSION 3.8)
project(data_bridge_ros2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

# Include directories
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  include
)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(car_interfaces REQUIRED)
find_package(geodesy REQUIRED)

# System dependencies
find_package(Threads REQUIRED)

# Add executables
add_executable(pointcloud_writer_node src/pointcloud_writer.cpp)
add_executable(imu_writer_node src/imu_writer.cpp)
add_executable(tf_writer_node src/tf_writer.cpp)
add_executable(performance_monitor src/performance_monitor.cpp)
add_executable(benchmark_tool src/benchmark_tool.cpp)
add_executable(gps_converter_node src/gps_converter_node.cpp)

# Target dependencies
ament_target_dependencies(pointcloud_writer_node
  rclcpp
  sensor_msgs
  std_msgs
)

ament_target_dependencies(imu_writer_node
  rclcpp
  sensor_msgs
  std_msgs
)

ament_target_dependencies(tf_writer_node
  rclcpp
  tf2_msgs
  geometry_msgs
)

ament_target_dependencies(performance_monitor
  rclcpp
  sensor_msgs
  std_msgs
)

ament_target_dependencies(benchmark_tool
  rclcpp
  sensor_msgs
  std_msgs
)

ament_target_dependencies(gps_converter_node
  rclcpp
  car_interfaces
  std_msgs
  geodesy
)

# Link libraries
target_link_libraries(pointcloud_writer_node
  rt
  pthread
)

target_link_libraries(imu_writer_node
  rt
  pthread
)

target_link_libraries(tf_writer_node
  rt
  pthread
)

target_link_libraries(performance_monitor
  rt
  pthread
)

target_link_libraries(benchmark_tool
  rt
  pthread
)

target_link_libraries(gps_converter_node
  rt
  pthread
)

# Install targets
install(TARGETS
  pointcloud_writer_node
  imu_writer_node
  tf_writer_node
  performance_monitor
  benchmark_tool
  gps_converter_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()