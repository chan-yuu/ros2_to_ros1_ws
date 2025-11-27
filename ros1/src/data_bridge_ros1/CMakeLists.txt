cmake_minimum_required(VERSION 3.0.2)
project(data_bridge_ros1)

## Compile as C++14, required for modern features
add_compile_options(-std=c++14)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  tf2_msgs
  geometry_msgs
  car_interfaces
)

## System dependencies
find_package(Threads REQUIRED)

###################################
## catkin specific configuration ##
###################################
catkin_package(
  CATKIN_DEPENDS roscpp std_msgs sensor_msgs tf2_msgs geometry_msgs car_interfaces
)

###########
## Build ##
###########

## Specify additional locations of header files
include_directories(
  ${catkin_INCLUDE_DIRS}
  include
)

## Declare C++ executables
add_executable(pointcloud_reader_node src/pointcloud_reader.cpp)
add_executable(imu_reader_node src/imu_reader.cpp)
add_executable(tf_reader_node src/tf_reader.cpp)
add_executable(performance_monitor_node src/performance_monitor.cpp)
add_executable(gps_reader_node src/gps_reader.cpp)

## Add cmake target dependencies of the executables
add_dependencies(pointcloud_reader_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(imu_reader_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(tf_reader_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(performance_monitor_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(gps_reader_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(pointcloud_reader_node
  ${catkin_LIBRARIES}
  rt
  pthread
)

target_link_libraries(imu_reader_node
  ${catkin_LIBRARIES}
  rt
  pthread
)

target_link_libraries(tf_reader_node
  ${catkin_LIBRARIES}
  rt
  pthread
)

target_link_libraries(performance_monitor_node
  ${catkin_LIBRARIES}
  rt
  pthread
)

target_link_libraries(gps_reader_node
  ${catkin_LIBRARIES}
  rt
  pthread
)

#############
## Install ##
#############

## Mark executables for installation
install(TARGETS pointcloud_reader_node imu_reader_node tf_reader_node performance_monitor_node gps_reader_node
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

## Mark launch files for installation
install(DIRECTORY launch/
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/launch
  FILES_MATCHING PATTERN "*.launch"
)
