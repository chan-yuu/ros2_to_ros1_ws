;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::FusionDetTask)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'FusionDetTask (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::FUSIONDETTASK")
  (make-package "CAR_INTERFACES::FUSIONDETTASK"))
(unless (find-package "CAR_INTERFACES::FUSIONDETTASKREQUEST")
  (make-package "CAR_INTERFACES::FUSIONDETTASKREQUEST"))
(unless (find-package "CAR_INTERFACES::FUSIONDETTASKRESPONSE")
  (make-package "CAR_INTERFACES::FUSIONDETTASKRESPONSE"))

(in-package "ROS")





(defclass car_interfaces::FusionDetTaskRequest
  :super ros::object
  :slots (_x _y _z _width _height _yaw ))

(defmethod car_interfaces::FusionDetTaskRequest
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    ((:width __width) 0.0)
    ((:height __height) 0.0)
    ((:yaw __yaw) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   (setq _width (float __width))
   (setq _height (float __height))
   (setq _yaw (float __yaw))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:z
   (&optional __z)
   (if __z (setq _z __z)) _z)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:serialization-length
   ()
   (+
    ;; float32 _x
    4
    ;; float32 _y
    4
    ;; float32 _z
    4
    ;; float32 _width
    4
    ;; float32 _height
    4
    ;; float32 _yaw
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _x
       (sys::poke _x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _y
       (sys::poke _y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _z
       (sys::poke _z (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _width
       (sys::poke _width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _height
       (sys::poke _height (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _x
     (setq _x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _y
     (setq _y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _z
     (setq _z (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _width
     (setq _width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _height
     (setq _height (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _yaw
     (setq _yaw (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass car_interfaces::FusionDetTaskResponse
  :super ros::object
  :slots (_success _message ))

(defmethod car_interfaces::FusionDetTaskResponse
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

(defclass car_interfaces::FusionDetTask
  :super ros::object
  :slots ())

(setf (get car_interfaces::FusionDetTask :md5sum-) "48cd9fb0e1c8c635b71f4ac18496bd3e")
(setf (get car_interfaces::FusionDetTask :datatype-) "car_interfaces/FusionDetTask")
(setf (get car_interfaces::FusionDetTask :request) car_interfaces::FusionDetTaskRequest)
(setf (get car_interfaces::FusionDetTask :response) car_interfaces::FusionDetTaskResponse)

(defmethod car_interfaces::FusionDetTaskRequest
  (:response () (instance car_interfaces::FusionDetTaskResponse :init)))

(setf (get car_interfaces::FusionDetTaskRequest :md5sum-) "48cd9fb0e1c8c635b71f4ac18496bd3e")
(setf (get car_interfaces::FusionDetTaskRequest :datatype-) "car_interfaces/FusionDetTaskRequest")
(setf (get car_interfaces::FusionDetTaskRequest :definition-)
      "
# fusion_det_task
float32 x
float32 y
float32 z
float32 width
float32 height
float32 yaw
---
bool success
string message
")

(setf (get car_interfaces::FusionDetTaskResponse :md5sum-) "48cd9fb0e1c8c635b71f4ac18496bd3e")
(setf (get car_interfaces::FusionDetTaskResponse :datatype-) "car_interfaces/FusionDetTaskResponse")
(setf (get car_interfaces::FusionDetTaskResponse :definition-)
      "
# fusion_det_task
float32 x
float32 y
float32 z
float32 width
float32 height
float32 yaw
---
bool success
string message
")



(provide :car_interfaces/FusionDetTask "48cd9fb0e1c8c635b71f4ac18496bd3e")


