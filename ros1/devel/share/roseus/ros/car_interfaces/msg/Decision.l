;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::Decision)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'Decision (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::DECISION")
  (make-package "CAR_INTERFACES::DECISION"))

(in-package "ROS")
;;//! \htmlinclude Decision.msg.html


(defclass car_interfaces::Decision
  :super ros::object
  :slots (_brake_enable _value_brake ))

(defmethod car_interfaces::Decision
  (:init
   (&key
    ((:brake_enable __brake_enable) 0.0)
    ((:value_brake __value_brake) 0.0)
    )
   (send-super :init)
   (setq _brake_enable (float __brake_enable))
   (setq _value_brake (float __value_brake))
   self)
  (:brake_enable
   (&optional __brake_enable)
   (if __brake_enable (setq _brake_enable __brake_enable)) _brake_enable)
  (:value_brake
   (&optional __value_brake)
   (if __value_brake (setq _value_brake __value_brake)) _value_brake)
  (:serialization-length
   ()
   (+
    ;; float32 _brake_enable
    4
    ;; float32 _value_brake
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _brake_enable
       (sys::poke _brake_enable (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _value_brake
       (sys::poke _value_brake (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _brake_enable
     (setq _brake_enable (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _value_brake
     (setq _value_brake (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get car_interfaces::Decision :md5sum-) "d400007abdee232a447063e2c6c629e0")
(setf (get car_interfaces::Decision :datatype-) "car_interfaces/Decision")
(setf (get car_interfaces::Decision :definition-)
      "float32 brake_enable  #刹车使能
float32 value_brake   #刹车量

")



(provide :car_interfaces/Decision "d400007abdee232a447063e2c6c629e0")


