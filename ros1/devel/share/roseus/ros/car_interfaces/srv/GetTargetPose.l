;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::GetTargetPose)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'GetTargetPose (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::GETTARGETPOSE")
  (make-package "CAR_INTERFACES::GETTARGETPOSE"))
(unless (find-package "CAR_INTERFACES::GETTARGETPOSEREQUEST")
  (make-package "CAR_INTERFACES::GETTARGETPOSEREQUEST"))
(unless (find-package "CAR_INTERFACES::GETTARGETPOSERESPONSE")
  (make-package "CAR_INTERFACES::GETTARGETPOSERESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass car_interfaces::GetTargetPoseRequest
  :super ros::object
  :slots (_tar_pose ))

(defmethod car_interfaces::GetTargetPoseRequest
  (:init
   (&key
    ((:tar_pose __tar_pose) (instance geometry_msgs::PoseStamped :init))
    )
   (send-super :init)
   (setq _tar_pose __tar_pose)
   self)
  (:tar_pose
   (&rest __tar_pose)
   (if (keywordp (car __tar_pose))
       (send* _tar_pose __tar_pose)
     (progn
       (if __tar_pose (setq _tar_pose (car __tar_pose)))
       _tar_pose)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PoseStamped _tar_pose
    (send _tar_pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PoseStamped _tar_pose
       (send _tar_pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PoseStamped _tar_pose
     (send _tar_pose :deserialize buf ptr-) (incf ptr- (send _tar_pose :serialization-length))
   ;;
   self)
  )

(defclass car_interfaces::GetTargetPoseResponse
  :super ros::object
  :slots (_success _message ))

(defmethod car_interfaces::GetTargetPoseResponse
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

(defclass car_interfaces::GetTargetPose
  :super ros::object
  :slots ())

(setf (get car_interfaces::GetTargetPose :md5sum-) "4b25ad0cf04125d2d21d637138312288")
(setf (get car_interfaces::GetTargetPose :datatype-) "car_interfaces/GetTargetPose")
(setf (get car_interfaces::GetTargetPose :request) car_interfaces::GetTargetPoseRequest)
(setf (get car_interfaces::GetTargetPose :response) car_interfaces::GetTargetPoseResponse)

(defmethod car_interfaces::GetTargetPoseRequest
  (:response () (instance car_interfaces::GetTargetPoseResponse :init)))

(setf (get car_interfaces::GetTargetPoseRequest :md5sum-) "4b25ad0cf04125d2d21d637138312288")
(setf (get car_interfaces::GetTargetPoseRequest :datatype-) "car_interfaces/GetTargetPoseRequest")
(setf (get car_interfaces::GetTargetPoseRequest :definition-)
      "geometry_msgs/PoseStamped tar_pose

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

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
bool success
string message
")

(setf (get car_interfaces::GetTargetPoseResponse :md5sum-) "4b25ad0cf04125d2d21d637138312288")
(setf (get car_interfaces::GetTargetPoseResponse :datatype-) "car_interfaces/GetTargetPoseResponse")
(setf (get car_interfaces::GetTargetPoseResponse :definition-)
      "geometry_msgs/PoseStamped tar_pose

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

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
bool success
string message
")



(provide :car_interfaces/GetTargetPose "4b25ad0cf04125d2d21d637138312288")


