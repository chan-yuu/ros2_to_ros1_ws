;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::EmergencyStopTask)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'EmergencyStopTask (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::EMERGENCYSTOPTASK")
  (make-package "CAR_INTERFACES::EMERGENCYSTOPTASK"))
(unless (find-package "CAR_INTERFACES::EMERGENCYSTOPTASKREQUEST")
  (make-package "CAR_INTERFACES::EMERGENCYSTOPTASKREQUEST"))
(unless (find-package "CAR_INTERFACES::EMERGENCYSTOPTASKRESPONSE")
  (make-package "CAR_INTERFACES::EMERGENCYSTOPTASKRESPONSE"))

(in-package "ROS")





(defclass car_interfaces::EmergencyStopTaskRequest
  :super ros::object
  :slots (_data ))

(defmethod car_interfaces::EmergencyStopTaskRequest
  (:init
   (&key
    ((:data __data) 0)
    )
   (send-super :init)
   (setq _data (round __data))
   self)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; int8 _data
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _data
       (write-byte _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _data
     (setq _data (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _data 127) (setq _data (- _data 256)))
   ;;
   self)
  )

(defclass car_interfaces::EmergencyStopTaskResponse
  :super ros::object
  :slots (_success _message ))

(defmethod car_interfaces::EmergencyStopTaskResponse
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

(defclass car_interfaces::EmergencyStopTask
  :super ros::object
  :slots ())

(setf (get car_interfaces::EmergencyStopTask :md5sum-) "208d4ab53cf12eb941a7d93b34b7532b")
(setf (get car_interfaces::EmergencyStopTask :datatype-) "car_interfaces/EmergencyStopTask")
(setf (get car_interfaces::EmergencyStopTask :request) car_interfaces::EmergencyStopTaskRequest)
(setf (get car_interfaces::EmergencyStopTask :response) car_interfaces::EmergencyStopTaskResponse)

(defmethod car_interfaces::EmergencyStopTaskRequest
  (:response () (instance car_interfaces::EmergencyStopTaskResponse :init)))

(setf (get car_interfaces::EmergencyStopTaskRequest :md5sum-) "208d4ab53cf12eb941a7d93b34b7532b")
(setf (get car_interfaces::EmergencyStopTaskRequest :datatype-) "car_interfaces/EmergencyStopTaskRequest")
(setf (get car_interfaces::EmergencyStopTaskRequest :definition-)
      "int8 data
---
bool success
string message
")

(setf (get car_interfaces::EmergencyStopTaskResponse :md5sum-) "208d4ab53cf12eb941a7d93b34b7532b")
(setf (get car_interfaces::EmergencyStopTaskResponse :datatype-) "car_interfaces/EmergencyStopTaskResponse")
(setf (get car_interfaces::EmergencyStopTaskResponse :definition-)
      "int8 data
---
bool success
string message
")



(provide :car_interfaces/EmergencyStopTask "208d4ab53cf12eb941a7d93b34b7532b")


