;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::RoadList)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'RoadList (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::ROADLIST")
  (make-package "CAR_INTERFACES::ROADLIST"))

(in-package "ROS")
;;//! \htmlinclude RoadList.msg.html


(defclass car_interfaces::RoadList
  :super ros::object
  :slots (_paths _path_length _end_points _dis_every_end ))

(defmethod car_interfaces::RoadList
  (:init
   (&key
    ((:paths __paths) ())
    ((:path_length __path_length) 0)
    ((:end_points __end_points) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:dis_every_end __dis_every_end) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _paths __paths)
   (setq _path_length (round __path_length))
   (setq _end_points __end_points)
   (setq _dis_every_end __dis_every_end)
   self)
  (:paths
   (&rest __paths)
   (if (keywordp (car __paths))
       (send* _paths __paths)
     (progn
       (if __paths (setq _paths (car __paths)))
       _paths)))
  (:path_length
   (&optional __path_length)
   (if __path_length (setq _path_length __path_length)) _path_length)
  (:end_points
   (&optional __end_points)
   (if __end_points (setq _end_points __end_points)) _end_points)
  (:dis_every_end
   (&optional __dis_every_end)
   (if __dis_every_end (setq _dis_every_end __dis_every_end)) _dis_every_end)
  (:serialization-length
   ()
   (+
    ;; car_interfaces/Pathplan[] _paths
    (apply #'+ (send-all _paths :serialization-length)) 4
    ;; int8 _path_length
    1
    ;; float32[] _end_points
    (* 4    (length _end_points)) 4
    ;; float32[] _dis_every_end
    (* 4    (length _dis_every_end)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; car_interfaces/Pathplan[] _paths
     (write-long (length _paths) s)
     (dolist (elem _paths)
       (send elem :serialize s)
       )
     ;; int8 _path_length
       (write-byte _path_length s)
     ;; float32[] _end_points
     (write-long (length _end_points) s)
     (dotimes (i (length _end_points))
       (sys::poke (elt _end_points i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _dis_every_end
     (write-long (length _dis_every_end) s)
     (dotimes (i (length _dis_every_end))
       (sys::poke (elt _dis_every_end i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; car_interfaces/Pathplan[] _paths
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _paths (let (r) (dotimes (i n) (push (instance car_interfaces::Pathplan :init) r)) r))
     (dolist (elem- _paths)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; int8 _path_length
     (setq _path_length (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _path_length 127) (setq _path_length (- _path_length 256)))
   ;; float32[] _end_points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _end_points (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _end_points i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _dis_every_end
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _dis_every_end (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _dis_every_end i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get car_interfaces::RoadList :md5sum-) "9b41673bd6f78e4df2d5e654099939f0")
(setf (get car_interfaces::RoadList :datatype-) "car_interfaces/RoadList")
(setf (get car_interfaces::RoadList :definition-)
      "Pathplan[] paths
int8 path_length
float32[] end_points
float32[] dis_every_end
================================================================================
MSG: car_interfaces/Pathplan
Pointplan[] points
================================================================================
MSG: car_interfaces/Pointplan
float64 x
float64 y
float64 yaw
float64 speed
float64 kappa
int8 gear


")



(provide :car_interfaces/RoadList "9b41673bd6f78e4df2d5e654099939f0")


