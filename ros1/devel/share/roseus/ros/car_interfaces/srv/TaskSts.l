;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::TaskSts)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'TaskSts (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::TASKSTS")
  (make-package "CAR_INTERFACES::TASKSTS"))
(unless (find-package "CAR_INTERFACES::TASKSTSREQUEST")
  (make-package "CAR_INTERFACES::TASKSTSREQUEST"))
(unless (find-package "CAR_INTERFACES::TASKSTSRESPONSE")
  (make-package "CAR_INTERFACES::TASKSTSRESPONSE"))

(in-package "ROS")





(defclass car_interfaces::TaskStsRequest
  :super ros::object
  :slots (_order_id _business_type _origin_shelf_area _destination_shelf_area _task_id _bale_num_to_handle _task_sts _final_pose ))

(defmethod car_interfaces::TaskStsRequest
  (:init
   (&key
    ((:order_id __order_id) "")
    ((:business_type __business_type) "")
    ((:origin_shelf_area __origin_shelf_area) "")
    ((:destination_shelf_area __destination_shelf_area) "")
    ((:task_id __task_id) "")
    ((:bale_num_to_handle __bale_num_to_handle) 0)
    ((:task_sts __task_sts) 0)
    ((:final_pose __final_pose) (instance car_interfaces::pose :init))
    )
   (send-super :init)
   (setq _order_id (string __order_id))
   (setq _business_type (string __business_type))
   (setq _origin_shelf_area (string __origin_shelf_area))
   (setq _destination_shelf_area (string __destination_shelf_area))
   (setq _task_id (string __task_id))
   (setq _bale_num_to_handle (round __bale_num_to_handle))
   (setq _task_sts (round __task_sts))
   (setq _final_pose __final_pose)
   self)
  (:order_id
   (&optional __order_id)
   (if __order_id (setq _order_id __order_id)) _order_id)
  (:business_type
   (&optional __business_type)
   (if __business_type (setq _business_type __business_type)) _business_type)
  (:origin_shelf_area
   (&optional __origin_shelf_area)
   (if __origin_shelf_area (setq _origin_shelf_area __origin_shelf_area)) _origin_shelf_area)
  (:destination_shelf_area
   (&optional __destination_shelf_area)
   (if __destination_shelf_area (setq _destination_shelf_area __destination_shelf_area)) _destination_shelf_area)
  (:task_id
   (&optional __task_id)
   (if __task_id (setq _task_id __task_id)) _task_id)
  (:bale_num_to_handle
   (&optional __bale_num_to_handle)
   (if __bale_num_to_handle (setq _bale_num_to_handle __bale_num_to_handle)) _bale_num_to_handle)
  (:task_sts
   (&optional __task_sts)
   (if __task_sts (setq _task_sts __task_sts)) _task_sts)
  (:final_pose
   (&rest __final_pose)
   (if (keywordp (car __final_pose))
       (send* _final_pose __final_pose)
     (progn
       (if __final_pose (setq _final_pose (car __final_pose)))
       _final_pose)))
  (:serialization-length
   ()
   (+
    ;; string _order_id
    4 (length _order_id)
    ;; string _business_type
    4 (length _business_type)
    ;; string _origin_shelf_area
    4 (length _origin_shelf_area)
    ;; string _destination_shelf_area
    4 (length _destination_shelf_area)
    ;; string _task_id
    4 (length _task_id)
    ;; int8 _bale_num_to_handle
    1
    ;; int8 _task_sts
    1
    ;; car_interfaces/pose _final_pose
    (send _final_pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _order_id
       (write-long (length _order_id) s) (princ _order_id s)
     ;; string _business_type
       (write-long (length _business_type) s) (princ _business_type s)
     ;; string _origin_shelf_area
       (write-long (length _origin_shelf_area) s) (princ _origin_shelf_area s)
     ;; string _destination_shelf_area
       (write-long (length _destination_shelf_area) s) (princ _destination_shelf_area s)
     ;; string _task_id
       (write-long (length _task_id) s) (princ _task_id s)
     ;; int8 _bale_num_to_handle
       (write-byte _bale_num_to_handle s)
     ;; int8 _task_sts
       (write-byte _task_sts s)
     ;; car_interfaces/pose _final_pose
       (send _final_pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _order_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _order_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _business_type
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _business_type (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _origin_shelf_area
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _origin_shelf_area (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _destination_shelf_area
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _destination_shelf_area (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _task_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _task_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int8 _bale_num_to_handle
     (setq _bale_num_to_handle (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _bale_num_to_handle 127) (setq _bale_num_to_handle (- _bale_num_to_handle 256)))
   ;; int8 _task_sts
     (setq _task_sts (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _task_sts 127) (setq _task_sts (- _task_sts 256)))
   ;; car_interfaces/pose _final_pose
     (send _final_pose :deserialize buf ptr-) (incf ptr- (send _final_pose :serialization-length))
   ;;
   self)
  )

(defclass car_interfaces::TaskStsResponse
  :super ros::object
  :slots (_success _message ))

(defmethod car_interfaces::TaskStsResponse
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

(defclass car_interfaces::TaskSts
  :super ros::object
  :slots ())

(setf (get car_interfaces::TaskSts :md5sum-) "8a6ad011433f39152e544540da918dee")
(setf (get car_interfaces::TaskSts :datatype-) "car_interfaces/TaskSts")
(setf (get car_interfaces::TaskSts :request) car_interfaces::TaskStsRequest)
(setf (get car_interfaces::TaskSts :response) car_interfaces::TaskStsResponse)

(defmethod car_interfaces::TaskStsRequest
  (:response () (instance car_interfaces::TaskStsResponse :init)))

(setf (get car_interfaces::TaskStsRequest :md5sum-) "8a6ad011433f39152e544540da918dee")
(setf (get car_interfaces::TaskStsRequest :datatype-) "car_interfaces/TaskStsRequest")
(setf (get car_interfaces::TaskStsRequest :definition-)
      "string order_id
string business_type
string origin_shelf_area
string destination_shelf_area
string task_id
int8 bale_num_to_handle
int8 task_sts
car_interfaces/pose final_pose

================================================================================
MSG: car_interfaces/pose
std_msgs/Header header
float32 x
float32 y
float32 z
float32 pitch
float32 roll
float32 yaw
bool state
bool slam_reliability

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
---
bool success
string message
")

(setf (get car_interfaces::TaskStsResponse :md5sum-) "8a6ad011433f39152e544540da918dee")
(setf (get car_interfaces::TaskStsResponse :datatype-) "car_interfaces/TaskStsResponse")
(setf (get car_interfaces::TaskStsResponse :definition-)
      "string order_id
string business_type
string origin_shelf_area
string destination_shelf_area
string task_id
int8 bale_num_to_handle
int8 task_sts
car_interfaces/pose final_pose

================================================================================
MSG: car_interfaces/pose
std_msgs/Header header
float32 x
float32 y
float32 z
float32 pitch
float32 roll
float32 yaw
bool state
bool slam_reliability

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
---
bool success
string message
")



(provide :car_interfaces/TaskSts "8a6ad011433f39152e544540da918dee")


