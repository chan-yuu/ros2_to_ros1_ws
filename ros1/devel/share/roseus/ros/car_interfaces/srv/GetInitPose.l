;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::GetInitPose)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'GetInitPose (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::GETINITPOSE")
  (make-package "CAR_INTERFACES::GETINITPOSE"))
(unless (find-package "CAR_INTERFACES::GETINITPOSEREQUEST")
  (make-package "CAR_INTERFACES::GETINITPOSEREQUEST"))
(unless (find-package "CAR_INTERFACES::GETINITPOSERESPONSE")
  (make-package "CAR_INTERFACES::GETINITPOSERESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass car_interfaces::GetInitPoseRequest
  :super ros::object
  :slots (_init_pose ))

(defmethod car_interfaces::GetInitPoseRequest
  (:init
   (&key
    ((:init_pose __init_pose) (instance geometry_msgs::PoseWithCovarianceStamped :init))
    )
   (send-super :init)
   (setq _init_pose __init_pose)
   self)
  (:init_pose
   (&rest __init_pose)
   (if (keywordp (car __init_pose))
       (send* _init_pose __init_pose)
     (progn
       (if __init_pose (setq _init_pose (car __init_pose)))
       _init_pose)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PoseWithCovarianceStamped _init_pose
    (send _init_pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PoseWithCovarianceStamped _init_pose
       (send _init_pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PoseWithCovarianceStamped _init_pose
     (send _init_pose :deserialize buf ptr-) (incf ptr- (send _init_pose :serialization-length))
   ;;
   self)
  )

(defclass car_interfaces::GetInitPoseResponse
  :super ros::object
  :slots (_success _message ))

(defmethod car_interfaces::GetInitPoseResponse
  (:init
   (&key
    ((:success __success) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _success __success)
   (setq _message (string __message))
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass car_interfaces::GetInitPose
  :super ros::object
  :slots ())

(setf (get car_interfaces::GetInitPose :md5sum-) "8f01c405c2d32588f7064cc8b383fa9f")
(setf (get car_interfaces::GetInitPose :datatype-) "car_interfaces/GetInitPose")
(setf (get car_interfaces::GetInitPose :request) car_interfaces::GetInitPoseRequest)
(setf (get car_interfaces::GetInitPose :response) car_interfaces::GetInitPoseResponse)

(defmethod car_interfaces::GetInitPoseRequest
  (:response () (instance car_interfaces::GetInitPoseResponse :init)))

(setf (get car_interfaces::GetInitPoseRequest :md5sum-) "8f01c405c2d32588f7064cc8b383fa9f")
(setf (get car_interfaces::GetInitPoseRequest :datatype-) "car_interfaces/GetInitPoseRequest")
(setf (get car_interfaces::GetInitPoseRequest :definition-)
      "# 请求部分
geometry_msgs/PoseWithCovarianceStamped init_pose

================================================================================
MSG: geometry_msgs/PoseWithCovarianceStamped
# This expresses an estimated pose with a reference coordinate frame and timestamp

Header header
PoseWithCovariance pose

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
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

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
---
# 响应部分
bool success
string message

")

(setf (get car_interfaces::GetInitPoseResponse :md5sum-) "8f01c405c2d32588f7064cc8b383fa9f")
(setf (get car_interfaces::GetInitPoseResponse :datatype-) "car_interfaces/GetInitPoseResponse")
(setf (get car_interfaces::GetInitPoseResponse :definition-)
      "# 请求部分
geometry_msgs/PoseWithCovarianceStamped init_pose

================================================================================
MSG: geometry_msgs/PoseWithCovarianceStamped
# This expresses an estimated pose with a reference coordinate frame and timestamp

Header header
PoseWithCovariance pose

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
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

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
---
# 响应部分
bool success
string message

")



(provide :car_interfaces/GetInitPose "8f01c405c2d32588f7064cc8b383fa9f")


