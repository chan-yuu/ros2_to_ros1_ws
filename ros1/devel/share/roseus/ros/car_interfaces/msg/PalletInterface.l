;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::PalletInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'PalletInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::PALLETINTERFACE")
  (make-package "CAR_INTERFACES::PALLETINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude PalletInterface.msg.html


(defclass car_interfaces::PalletInterface
  :super ros::object
  :slots (_pallet_x _pallet_y _pallet_heading ))

(defmethod car_interfaces::PalletInterface
  (:init
   (&key
    ((:pallet_x __pallet_x) 0.0)
    ((:pallet_y __pallet_y) 0.0)
    ((:pallet_heading __pallet_heading) 0.0)
    )
   (send-super :init)
   (setq _pallet_x (float __pallet_x))
   (setq _pallet_y (float __pallet_y))
   (setq _pallet_heading (float __pallet_heading))
   self)
  (:pallet_x
   (&optional __pallet_x)
   (if __pallet_x (setq _pallet_x __pallet_x)) _pallet_x)
  (:pallet_y
   (&optional __pallet_y)
   (if __pallet_y (setq _pallet_y __pallet_y)) _pallet_y)
  (:pallet_heading
   (&optional __pallet_heading)
   (if __pallet_heading (setq _pallet_heading __pallet_heading)) _pallet_heading)
  (:serialization-length
   ()
   (+
    ;; float64 _pallet_x
    8
    ;; float64 _pallet_y
    8
    ;; float64 _pallet_heading
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _pallet_x
       (sys::poke _pallet_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _pallet_y
       (sys::poke _pallet_y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _pallet_heading
       (sys::poke _pallet_heading (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _pallet_x
     (setq _pallet_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _pallet_y
     (setq _pallet_y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _pallet_heading
     (setq _pallet_heading (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get car_interfaces::PalletInterface :md5sum-) "d3851b4afec05d2d716993bd4b1f4057")
(setf (get car_interfaces::PalletInterface :datatype-) "car_interfaces/PalletInterface")
(setf (get car_interfaces::PalletInterface :definition-)
      "float64 pallet_x
float64 pallet_y

float64 pallet_heading

")



(provide :car_interfaces/PalletInterface "d3851b4afec05d2d716993bd4b1f4057")


