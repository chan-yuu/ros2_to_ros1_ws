;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::Pathplan)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'Pathplan (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::PATHPLAN")
  (make-package "CAR_INTERFACES::PATHPLAN"))

(in-package "ROS")
;;//! \htmlinclude Pathplan.msg.html


(defclass car_interfaces::Pathplan
  :super ros::object
  :slots (_points ))

(defmethod car_interfaces::Pathplan
  (:init
   (&key
    ((:points __points) ())
    )
   (send-super :init)
   (setq _points __points)
   self)
  (:points
   (&rest __points)
   (if (keywordp (car __points))
       (send* _points __points)
     (progn
       (if __points (setq _points (car __points)))
       _points)))
  (:serialization-length
   ()
   (+
    ;; car_interfaces/Pointplan[] _points
    (apply #'+ (send-all _points :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; car_interfaces/Pointplan[] _points
     (write-long (length _points) s)
     (dolist (elem _points)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; car_interfaces/Pointplan[] _points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _points (let (r) (dotimes (i n) (push (instance car_interfaces::Pointplan :init) r)) r))
     (dolist (elem- _points)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get car_interfaces::Pathplan :md5sum-) "9c4c89b7b017e468ad8dfddbec0bf5e6")
(setf (get car_interfaces::Pathplan :datatype-) "car_interfaces/Pathplan")
(setf (get car_interfaces::Pathplan :definition-)
      "Pointplan[] points
================================================================================
MSG: car_interfaces/Pointplan
float64 x
float64 y
float64 yaw
float64 speed
float64 kappa
int8 gear


")



(provide :car_interfaces/Pathplan "9c4c89b7b017e468ad8dfddbec0bf5e6")


