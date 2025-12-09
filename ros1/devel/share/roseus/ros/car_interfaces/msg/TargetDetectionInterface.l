;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::TargetDetectionInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'TargetDetectionInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::TARGETDETECTIONINTERFACE")
  (make-package "CAR_INTERFACES::TARGETDETECTIONINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude TargetDetectionInterface.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass car_interfaces::TargetDetectionInterface
  :super ros::object
  :slots (_header _objects ))

(defmethod car_interfaces::TargetDetectionInterface
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:objects __objects) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _objects __objects)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:objects
   (&rest __objects)
   (if (keywordp (car __objects))
       (send* _objects __objects)
     (progn
       (if __objects (setq _objects (car __objects)))
       _objects)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; car_interfaces/Object[] _objects
    (apply #'+ (send-all _objects :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; car_interfaces/Object[] _objects
     (write-long (length _objects) s)
     (dolist (elem _objects)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; car_interfaces/Object[] _objects
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _objects (let (r) (dotimes (i n) (push (instance car_interfaces::Object :init) r)) r))
     (dolist (elem- _objects)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get car_interfaces::TargetDetectionInterface :md5sum-) "735eae5f7f43274afc03991f37962f29")
(setf (get car_interfaces::TargetDetectionInterface :datatype-) "car_interfaces/TargetDetectionInterface")
(setf (get car_interfaces::TargetDetectionInterface :definition-)
      "# topic : /lidar_camera_det/detections
# frame_id : velo_link
std_msgs/Header header  
Object[] objects

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: car_interfaces/Object
float32 conf            # 得分
float32 class_id        # 类别
float32 track_id	    # 跟踪id
float32 x               # 全局 相对加+车辆定位  单位m
float32 y	            # 全局 相对加+车辆定位  单位m
float32 z	            # 全局 相对加+车辆定位  单位m
float32 l_x	            # 相对 单位m
float32 l_y	            # 相对 单位m
float32 l_z	            # 相对 单位m
float32 pitch	        # unit:rad,关于车辆坐标系z轴角度+车辆pitch 
float32 roll	        # unit:rad,关于车辆坐标系y轴角度+车辆roll 
float32 yaw	            # unit:rad,degree+车辆航向 yaw 
float32 degree	        # 角度,车辆坐标系x轴夹角 
float32 distance	    # 单位m
float32 height	        # 单位m
float32 target_width    # 单位m
float32 target_height   # 单位m
float32[] left_boudary_point
float32[] right_boudary_point
float32[] top_boudary_point
")



(provide :car_interfaces/TargetDetectionInterface "735eae5f7f43274afc03991f37962f29")


