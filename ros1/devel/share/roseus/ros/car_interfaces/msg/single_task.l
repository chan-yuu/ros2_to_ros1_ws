;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::single_task)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'single_task (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::SINGLE_TASK")
  (make-package "CAR_INTERFACES::SINGLE_TASK"))

(in-package "ROS")
;;//! \htmlinclude single_task.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass car_interfaces::single_task
  :super ros::object
  :slots (_task_id _bale_num_to_handle _destination_shelf_area _origin_shelf_job_position _destination_shelf_job_position ))

(defmethod car_interfaces::single_task
  (:init
   (&key
    ((:task_id __task_id) "")
    ((:bale_num_to_handle __bale_num_to_handle) 0)
    ((:destination_shelf_area __destination_shelf_area) "")
    ((:origin_shelf_job_position __origin_shelf_job_position) (instance geometry_msgs::Pose :init))
    ((:destination_shelf_job_position __destination_shelf_job_position) (instance geometry_msgs::Pose :init))
    )
   (send-super :init)
   (setq _task_id (string __task_id))
   (setq _bale_num_to_handle (round __bale_num_to_handle))
   (setq _destination_shelf_area (string __destination_shelf_area))
   (setq _origin_shelf_job_position __origin_shelf_job_position)
   (setq _destination_shelf_job_position __destination_shelf_job_position)
   self)
  (:task_id
   (&optional __task_id)
   (if __task_id (setq _task_id __task_id)) _task_id)
  (:bale_num_to_handle
   (&optional __bale_num_to_handle)
   (if __bale_num_to_handle (setq _bale_num_to_handle __bale_num_to_handle)) _bale_num_to_handle)
  (:destination_shelf_area
   (&optional __destination_shelf_area)
   (if __destination_shelf_area (setq _destination_shelf_area __destination_shelf_area)) _destination_shelf_area)
  (:origin_shelf_job_position
   (&rest __origin_shelf_job_position)
   (if (keywordp (car __origin_shelf_job_position))
       (send* _origin_shelf_job_position __origin_shelf_job_position)
     (progn
       (if __origin_shelf_job_position (setq _origin_shelf_job_position (car __origin_shelf_job_position)))
       _origin_shelf_job_position)))
  (:destination_shelf_job_position
   (&rest __destination_shelf_job_position)
   (if (keywordp (car __destination_shelf_job_position))
       (send* _destination_shelf_job_position __destination_shelf_job_position)
     (progn
       (if __destination_shelf_job_position (setq _destination_shelf_job_position (car __destination_shelf_job_position)))
       _destination_shelf_job_position)))
  (:serialization-length
   ()
   (+
    ;; string _task_id
    4 (length _task_id)
    ;; int32 _bale_num_to_handle
    4
    ;; string _destination_shelf_area
    4 (length _destination_shelf_area)
    ;; geometry_msgs/Pose _origin_shelf_job_position
    (send _origin_shelf_job_position :serialization-length)
    ;; geometry_msgs/Pose _destination_shelf_job_position
    (send _destination_shelf_job_position :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _task_id
       (write-long (length _task_id) s) (princ _task_id s)
     ;; int32 _bale_num_to_handle
       (write-long _bale_num_to_handle s)
     ;; string _destination_shelf_area
       (write-long (length _destination_shelf_area) s) (princ _destination_shelf_area s)
     ;; geometry_msgs/Pose _origin_shelf_job_position
       (send _origin_shelf_job_position :serialize s)
     ;; geometry_msgs/Pose _destination_shelf_job_position
       (send _destination_shelf_job_position :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _task_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _task_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _bale_num_to_handle
     (setq _bale_num_to_handle (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _destination_shelf_area
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _destination_shelf_area (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; geometry_msgs/Pose _origin_shelf_job_position
     (send _origin_shelf_job_position :deserialize buf ptr-) (incf ptr- (send _origin_shelf_job_position :serialization-length))
   ;; geometry_msgs/Pose _destination_shelf_job_position
     (send _destination_shelf_job_position :deserialize buf ptr-) (incf ptr- (send _destination_shelf_job_position :serialization-length))
   ;;
   self)
  )

(setf (get car_interfaces::single_task :md5sum-) "cd39bd39ec0bd232a174cb3a0b3c77c0")
(setf (get car_interfaces::single_task :datatype-) "car_interfaces/single_task")
(setf (get car_interfaces::single_task :definition-)
      "string task_id
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

")



(provide :car_interfaces/single_task "cd39bd39ec0bd232a174cb3a0b3c77c0")


