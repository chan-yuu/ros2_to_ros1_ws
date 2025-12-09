
(cl:in-package :asdf)

(defsystem "car_interfaces-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :car_interfaces-msg
               :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "BalesNumInCamera" :depends-on ("_package_BalesNumInCamera"))
    (:file "_package_BalesNumInCamera" :depends-on ("_package"))
    (:file "CameraTask" :depends-on ("_package_CameraTask"))
    (:file "_package_CameraTask" :depends-on ("_package"))
    (:file "ControlTask" :depends-on ("_package_ControlTask"))
    (:file "_package_ControlTask" :depends-on ("_package"))
    (:file "EmergencyStopTask" :depends-on ("_package_EmergencyStopTask"))
    (:file "_package_EmergencyStopTask" :depends-on ("_package"))
    (:file "FusionDetTask" :depends-on ("_package_FusionDetTask"))
    (:file "_package_FusionDetTask" :depends-on ("_package"))
    (:file "GetInitPose" :depends-on ("_package_GetInitPose"))
    (:file "_package_GetInitPose" :depends-on ("_package"))
    (:file "GetTargetPose" :depends-on ("_package_GetTargetPose"))
    (:file "_package_GetTargetPose" :depends-on ("_package"))
    (:file "PlanTask" :depends-on ("_package_PlanTask"))
    (:file "_package_PlanTask" :depends-on ("_package"))
    (:file "PositionTask" :depends-on ("_package_PositionTask"))
    (:file "_package_PositionTask" :depends-on ("_package"))
    (:file "StopTask" :depends-on ("_package_StopTask"))
    (:file "_package_StopTask" :depends-on ("_package"))
    (:file "TaskSts" :depends-on ("_package_TaskSts"))
    (:file "_package_TaskSts" :depends-on ("_package"))
    (:file "cloud_order" :depends-on ("_package_cloud_order"))
    (:file "_package_cloud_order" :depends-on ("_package"))
  ))