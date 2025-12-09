;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::PlanTask)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'PlanTask (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::PLANTASK")
  (make-package "CAR_INTERFACES::PLANTASK"))
(unless (find-package "CAR_INTERFACES::PLANTASKREQUEST")
  (make-package "CAR_INTERFACES::PLANTASKREQUEST"))
(unless (find-package "CAR_INTERFACES::PLANTASKRESPONSE")
  (make-package "CAR_INTERFACES::PLANTASKRESPONSE"))

(in-package "ROS")





(defclass car_interfaces::PlanTaskRequest
  :super ros::object
  :slots (_data ))

(defmethod car_interfaces::PlanTaskRequest
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

(defclass car_interfaces::PlanTaskResponse
  :super ros::object
  :slots (_success _message ))

(defmethod car_interfaces::PlanTaskResponse
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

(defclass car_interfaces::PlanTask
  :super ros::object
  :slots ())

(setf (get car_interfaces::PlanTask :md5sum-) "208d4ab53cf12eb941a7d93b34b7532b")
(setf (get car_interfaces::PlanTask :datatype-) "car_interfaces/PlanTask")
(setf (get car_interfaces::PlanTask :request) car_interfaces::PlanTaskRequest)
(setf (get car_interfaces::PlanTask :response) car_interfaces::PlanTaskResponse)

(defmethod car_interfaces::PlanTaskRequest
  (:response () (instance car_interfaces::PlanTaskResponse :init)))

(setf (get car_interfaces::PlanTaskRequest :md5sum-) "208d4ab53cf12eb941a7d93b34b7532b")
(setf (get car_interfaces::PlanTaskRequest :datatype-) "car_interfaces/PlanTaskRequest")
(setf (get car_interfaces::PlanTaskRequest :definition-)
      "int8 data
---
bool success
string message
")

(setf (get car_interfaces::PlanTaskResponse :md5sum-) "208d4ab53cf12eb941a7d93b34b7532b")
(setf (get car_interfaces::PlanTaskResponse :datatype-) "car_interfaces/PlanTaskResponse")
(setf (get car_interfaces::PlanTaskResponse :definition-)
      "int8 data
---
bool success
string message
")



(provide :car_interfaces/PlanTask "208d4ab53cf12eb941a7d93b34b7532b")


