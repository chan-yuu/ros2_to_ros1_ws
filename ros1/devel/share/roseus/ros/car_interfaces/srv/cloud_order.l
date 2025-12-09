;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::cloud_order)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'cloud_order (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::CLOUD_ORDER")
  (make-package "CAR_INTERFACES::CLOUD_ORDER"))
(unless (find-package "CAR_INTERFACES::CLOUD_ORDERREQUEST")
  (make-package "CAR_INTERFACES::CLOUD_ORDERREQUEST"))
(unless (find-package "CAR_INTERFACES::CLOUD_ORDERRESPONSE")
  (make-package "CAR_INTERFACES::CLOUD_ORDERRESPONSE"))

(in-package "ROS")

(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))




(defclass car_interfaces::cloud_orderRequest
  :super ros::object
  :slots (_header _order_id _task_info ))

(defmethod car_interfaces::cloud_orderRequest
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:order_id __order_id) "")
    ((:task_info __task_info) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _order_id (string __order_id))
   (setq _task_info __task_info)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:order_id
   (&optional __order_id)
   (if __order_id (setq _order_id __order_id)) _order_id)
  (:task_info
   (&rest __task_info)
   (if (keywordp (car __task_info))
       (send* _task_info __task_info)
     (progn
       (if __task_info (setq _task_info (car __task_info)))
       _task_info)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _order_id
    4 (length _order_id)
    ;; car_interfaces/single_task[] _task_info
    (apply #'+ (send-all _task_info :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _order_id
       (write-long (length _order_id) s) (princ _order_id s)
     ;; car_interfaces/single_task[] _task_info
     (write-long (length _task_info) s)
     (dolist (elem _task_info)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _order_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _order_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; car_interfaces/single_task[] _task_info
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _task_info (let (r) (dotimes (i n) (push (instance car_interfaces::single_task :init) r)) r))
     (dolist (elem- _task_info)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(defclass car_interfaces::cloud_orderResponse
  :super ros::object
  :slots (_task_progress ))

(defmethod car_interfaces::cloud_orderResponse
  (:init
   (&key
    ((:task_progress __task_progress) 0.0)
    )
   (send-super :init)
   (setq _task_progress (float __task_progress))
   self)
  (:task_progress
   (&optional __task_progress)
   (if __task_progress (setq _task_progress __task_progress)) _task_progress)
  (:serialization-length
   ()
   (+
    ;; float32 _task_progress
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _task_progress
       (sys::poke _task_progress (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _task_progress
     (setq _task_progress (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass car_interfaces::cloud_order
  :super ros::object
  :slots ())

(setf (get car_interfaces::cloud_order :md5sum-) "2f612faf22d533382bbf07ab0d079f5c")
(setf (get car_interfaces::cloud_order :datatype-) "car_interfaces/cloud_order")
(setf (get car_interfaces::cloud_order :request) car_interfaces::cloud_orderRequest)
(setf (get car_interfaces::cloud_order :response) car_interfaces::cloud_orderResponse)

(defmethod car_interfaces::cloud_orderRequest
  (:response () (instance car_interfaces::cloud_orderResponse :init)))

(setf (get car_interfaces::cloud_orderRequest :md5sum-) "2f612faf22d533382bbf07ab0d079f5c")
(setf (get car_interfaces::cloud_orderRequest :datatype-) "car_interfaces/cloud_orderRequest")
(setf (get car_interfaces::cloud_orderRequest :definition-)
      "std_msgs/Header header
string order_id
single_task[] task_info

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
MSG: car_interfaces/single_task
string task_id
int32 bale_num_to_handle
string destination_shelf_area
geometry_msgs/Pose origin_shelf_job_position
geometry_msgs/Pose destination_shelf_job_position
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
float32 task_progress
")

(setf (get car_interfaces::cloud_orderResponse :md5sum-) "2f612faf22d533382bbf07ab0d079f5c")
(setf (get car_interfaces::cloud_orderResponse :datatype-) "car_interfaces/cloud_orderResponse")
(setf (get car_interfaces::cloud_orderResponse :definition-)
      "std_msgs/Header header
string order_id
single_task[] task_info

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
MSG: car_interfaces/single_task
string task_id
int32 bale_num_to_handle
string destination_shelf_area
geometry_msgs/Pose origin_shelf_job_position
geometry_msgs/Pose destination_shelf_job_position
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
float32 task_progress
")



(provide :car_interfaces/cloud_order "2f612faf22d533382bbf07ab0d079f5c")


