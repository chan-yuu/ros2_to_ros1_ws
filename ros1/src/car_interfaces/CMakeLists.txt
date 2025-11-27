cmake_minimum_required(VERSION 3.0.2)
project(car_interfaces)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  message_generation
  message_runtime
  roscpp
  rospy
  std_msgs
  sensor_msgs
  nav_msgs
)

add_message_files(
  FILES
  # control/CanData.msg
  # control/ControlPub.msg
  # plan/GlobalPathPlanningInterface.msg

  # car/FaultDiagnosisInterface.msg
  # car/FusionInterface.msg
  # car/HmiStartEndPointInterface.msg
  # car/LaneRecognitionInterface.msg
  # car/LocalPathPlanningInterface.msg
  # car/NetStartEndPointInterface.msg
  # car/RadarObstacleInterface.msg
  # car/RadarStateInterface.msg
  # car/VehOperatingData.msg
  # car/VehOperatingStateInterface.msg
  # car/CameraStateInterface.msg
  # car/SlamInterface.msg
  # car/LidarOriInterface.msg
  # car/FusionRequisiteInterface.msg
  # car/FusionAddInterface.msg
  # car/CarActionInterface.msg

  single_task.msg

  location/GpsImuInterface.msg
  location/GpsImuAddInterface.msg
  location/GpsImuRequisiteInterface.msg

  # 需要依赖的msg放在msg文件夹下，依赖标准msg的则是分类进行管理:
  control/CanStateInterface.msg
  control/CarDecisionInterface.msg
  control/CarOriInterface.msg
  control/PathSpeedCtrlInterface.msg

  diagnose/FaultDiagnosisInterface.msg

  camera/Yolov5DetectionInterface.msg
  camera/PalletInterface.msg

  plan/Decision.msg
  plan/PathGlobal.msg
  Pointplan.msg
  Pathplan.msg
  RoadList.msg

  # lidar_camera_det
  Object.msg
  TargetDetectionInterface.msg
  RoadToControl.msg

  pose.msg

)

## Generate services in the 'srv' folder
add_service_files(
  FILES
  GetInitPose.srv
  GetTargetPose.srv
  ControlTask.srv
  PlanTask.srv
  CameraTask.srv
  PositionTask.srv
  BalesNumInCamera.srv
  EmergencyStopTask.srv
  TaskSts.srv
  FusionDetTask.srv

  cloud_order.srv
  StopTask.srv


)

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
  sensor_msgs
  nav_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES car_interfaces
 CATKIN_DEPENDS message_generation message_runtime roscpp rospy std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)
