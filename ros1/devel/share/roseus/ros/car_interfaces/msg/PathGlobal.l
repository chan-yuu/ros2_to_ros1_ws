;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::PathGlobal)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'PathGlobal (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::PATHGLOBAL")
  (make-package "CAR_INTERFACES::PATHGLOBAL"))

(in-package "ROS")
;;//! \htmlinclude PathGlobal.msg.html
(if (not (find-package "NAV_MSGS"))
  (ros::roseus-add-msgs "nav_msgs"))


(defclass car_interfaces::PathGlobal
  :super ros::object
  :slots (_timestamp _startpoint _goal_received _path ))

(defmethod car_interfaces::PathGlobal
  (:init
   (&key
    ((:timestamp __timestamp) 0.0)
    ((:startpoint __startpoint) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:goal_received __goal_received) nil)
    ((:path __path) (instance nav_msgs::Path :init))
    )
   (send-super :init)
   (setq _timestamp (float __timestamp))
   (setq _startpoint __startpoint)
   (setq _goal_received __goal_received)
   (setq _path __path)
   self)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:startpoint
   (&optional __startpoint)
   (if __startpoint (setq _startpoint __startpoint)) _startpoint)
  (:goal_received
   (&optional (__goal_received :null))
   (if (not (eq __goal_received :null)) (setq _goal_received __goal_received)) _goal_received)
  (:path
   (&rest __path)
   (if (keywordp (car __path))
       (send* _path __path)
     (progn
       (if __path (setq _path (car __path)))
       _path)))
  (:serialization-length
   ()
   (+
    ;; float64 _timestamp
    8
    ;; float64[] _startpoint
    (* 8    (length _startpoint)) 4
    ;; bool _goal_received
    1
    ;; nav_msgs/Path _path
    (send _path :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _timestamp
       (sys::poke _timestamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64[] _startpoint
     (write-long (length _startpoint) s)
     (dotimes (i (length _startpoint))
       (sys::poke (elt _startpoint i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; bool _goal_received
       (if _goal_received (write-byte -1 s) (write-byte 0 s))
     ;; nav_msgs/Path _path
       (send _path :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _timestamp
     (setq _timestamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64[] _startpoint
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _startpoint (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _startpoint i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; bool _goal_received
     (setq _goal_received (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; nav_msgs/Path _path
     (send _path :deserialize buf ptr-) (incf ptr- (send _path :serialization-length))
   ;;
   self)
  )

(setf (get car_interfaces::PathGlobal :md5sum-) "b37aa2b40541c58a99e5b6f91bb685b0")
(setf (get car_interfaces::PathGlobal :datatype-) "car_interfaces/PathGlobal")
(setf (get car_interfaces::PathGlobal :definition-)
      "float64  timestamp  #时间戳
float64[]  startpoint   #起点位置
bool goal_received
nav_msgs/Path path
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



(provide :car_interfaces/PathGlobal "b37aa2b40541c58a99e5b6f91bb685b0")


