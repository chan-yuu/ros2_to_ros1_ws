;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::RoadToControl)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'RoadToControl (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::ROADTOCONTROL")
  (make-package "CAR_INTERFACES::ROADTOCONTROL"))

(in-package "ROS")
;;//! \htmlinclude RoadToControl.msg.html
(if (not (find-package "NAV_MSGS"))
  (ros::roseus-add-msgs "nav_msgs"))


(defclass car_interfaces::RoadToControl
  :super ros::object
  :slots (_path _gear ))

(defmethod car_interfaces::RoadToControl
  (:init
   (&key
    ((:path __path) (instance nav_msgs::Path :init))
    ((:gear __gear) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _path __path)
   (setq _gear __gear)
   self)
  (:path
   (&rest __path)
   (if (keywordp (car __path))
       (send* _path __path)
     (progn
       (if __path (setq _path (car __path)))
       _path)))
  (:gear
   (&optional __gear)
   (if __gear (setq _gear __gear)) _gear)
  (:serialization-length
   ()
   (+
    ;; nav_msgs/Path _path
    (send _path :serialization-length)
    ;; int32[] _gear
    (* 4    (length _gear)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; nav_msgs/Path _path
       (send _path :serialize s)
     ;; int32[] _gear
     (write-long (length _gear) s)
     (dotimes (i (length _gear))
       (write-long (elt _gear i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; nav_msgs/Path _path
     (send _path :deserialize buf ptr-) (incf ptr- (send _path :serialization-length))
   ;; int32[] _gear
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _gear (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _gear i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get car_interfaces::RoadToControl :md5sum-) "ba7de6d6e6f69a4d62782487a2d676e6")
(setf (get car_interfaces::RoadToControl :datatype-) "car_interfaces/RoadToControl")
(setf (get car_interfaces::RoadToControl :definition-)
      "# 发给控制的路 相比nav_msgs/Path 多加了档位，混合A搜索自带档位标志

nav_msgs/Path path
int32[] gear  #每个点对应档位

================================================================================
MSG: nav_msgs/Path
#An array of poses that represents a Path for a robot to follow
Header header
geometry_msgs/PoseStamped[] poses

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
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :car_interfaces/RoadToControl "ba7de6d6e6f69a4d62782487a2d676e6")


