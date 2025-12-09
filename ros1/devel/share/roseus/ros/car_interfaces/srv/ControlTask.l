;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::ControlTask)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'ControlTask (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::CONTROLTASK")
  (make-package "CAR_INTERFACES::CONTROLTASK"))
(unless (find-package "CAR_INTERFACES::CONTROLTASKREQUEST")
  (make-package "CAR_INTERFACES::CONTROLTASKREQUEST"))
(unless (find-package "CAR_INTERFACES::CONTROLTASKRESPONSE")
  (make-package "CAR_INTERFACES::CONTROLTASKRESPONSE"))

(in-package "ROS")





(defclass car_interfaces::ControlTaskRequest
  :super ros::object
  :slots (_data _limited_speed ))

(defmethod car_interfaces::ControlTaskRequest
  (:init
   (&key
    ((:data __data) 0)
    ((:limited_speed __limited_speed) 0.0)
    )
   (send-super :init)
   (setq _data (round __data))
   (setq _limited_speed (float __limited_speed))
   self)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:limited_speed
   (&optional __limited_speed)
   (if __limited_speed (setq _limited_speed __limited_speed)) _limited_speed)
  (:serialization-length
   ()
   (+
    ;; int8 _data
    1
    ;; float32 _limited_speed
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _data
       (write-byte _data s)
     ;; float32 _limited_speed
       (sys::poke _limited_speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _data
     (setq _data (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _data 127) (setq _data (- _data 256)))
   ;; float32 _limited_speed
     (setq _limited_speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass car_interfaces::ControlTaskResponse
  :super ros::object
  :slots (_success _message ))

(defmethod car_interfaces::ControlTaskResponse
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

(defclass car_interfaces::ControlTask
  :super ros::object
  :slots ())

(setf (get car_interfaces::ControlTask :md5sum-) "b2af9fa50c34b99733809c3ac7fab044")
(setf (get car_interfaces::ControlTask :datatype-) "car_interfaces/ControlTask")
(setf (get car_interfaces::ControlTask :request) car_interfaces::ControlTaskRequest)
(setf (get car_interfaces::ControlTask :response) car_interfaces::ControlTaskResponse)

(defmethod car_interfaces::ControlTaskRequest
  (:response () (instance car_interfaces::ControlTaskResponse :init)))

(setf (get car_interfaces::ControlTaskRequest :md5sum-) "b2af9fa50c34b99733809c3ac7fab044")
(setf (get car_interfaces::ControlTaskRequest :datatype-) "car_interfaces/ControlTaskRequest")
(setf (get car_interfaces::ControlTaskRequest :definition-)
      "int8 data
float32 limited_speed
---
bool success
string message
")

(setf (get car_interfaces::ControlTaskResponse :md5sum-) "b2af9fa50c34b99733809c3ac7fab044")
(setf (get car_interfaces::ControlTaskResponse :datatype-) "car_interfaces/ControlTaskResponse")
(setf (get car_interfaces::ControlTaskResponse :definition-)
      "int8 data
float32 limited_speed
---
bool success
string message
")



(provide :car_interfaces/ControlTask "b2af9fa50c34b99733809c3ac7fab044")


