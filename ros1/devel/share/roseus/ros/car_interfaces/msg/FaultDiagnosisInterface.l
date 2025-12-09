;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::FaultDiagnosisInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'FaultDiagnosisInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::FAULTDIAGNOSISINTERFACE")
  (make-package "CAR_INTERFACES::FAULTDIAGNOSISINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude FaultDiagnosisInterface.msg.html


(defclass car_interfaces::FaultDiagnosisInterface
  :super ros::object
  :slots (_lidar_state _can_state _gps_can_state _gps_system_state _camera_state _internet_state _v2n_state _location_state _sim_state ))

(defmethod car_interfaces::FaultDiagnosisInterface
  (:init
   (&key
    ((:lidar_state __lidar_state) 0)
    ((:can_state __can_state) 0)
    ((:gps_can_state __gps_can_state) 0)
    ((:gps_system_state __gps_system_state) 0)
    ((:camera_state __camera_state) 0)
    ((:internet_state __internet_state) 0)
    ((:v2n_state __v2n_state) 0)
    ((:location_state __location_state) 0)
    ((:sim_state __sim_state) 0)
    )
   (send-super :init)
   (setq _lidar_state (round __lidar_state))
   (setq _can_state (round __can_state))
   (setq _gps_can_state (round __gps_can_state))
   (setq _gps_system_state (round __gps_system_state))
   (setq _camera_state (round __camera_state))
   (setq _internet_state (round __internet_state))
   (setq _v2n_state (round __v2n_state))
   (setq _location_state (round __location_state))
   (setq _sim_state (round __sim_state))
   self)
  (:lidar_state
   (&optional __lidar_state)
   (if __lidar_state (setq _lidar_state __lidar_state)) _lidar_state)
  (:can_state
   (&optional __can_state)
   (if __can_state (setq _can_state __can_state)) _can_state)
  (:gps_can_state
   (&optional __gps_can_state)
   (if __gps_can_state (setq _gps_can_state __gps_can_state)) _gps_can_state)
  (:gps_system_state
   (&optional __gps_system_state)
   (if __gps_system_state (setq _gps_system_state __gps_system_state)) _gps_system_state)
  (:camera_state
   (&optional __camera_state)
   (if __camera_state (setq _camera_state __camera_state)) _camera_state)
  (:internet_state
   (&optional __internet_state)
   (if __internet_state (setq _internet_state __internet_state)) _internet_state)
  (:v2n_state
   (&optional __v2n_state)
   (if __v2n_state (setq _v2n_state __v2n_state)) _v2n_state)
  (:location_state
   (&optional __location_state)
   (if __location_state (setq _location_state __location_state)) _location_state)
  (:sim_state
   (&optional __sim_state)
   (if __sim_state (setq _sim_state __sim_state)) _sim_state)
  (:serialization-length
   ()
   (+
    ;; int8 _lidar_state
    1
    ;; int8 _can_state
    1
    ;; int8 _gps_can_state
    1
    ;; int8 _gps_system_state
    1
    ;; int8 _camera_state
    1
    ;; int8 _internet_state
    1
    ;; int8 _v2n_state
    1
    ;; int8 _location_state
    1
    ;; int8 _sim_state
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _lidar_state
       (write-byte _lidar_state s)
     ;; int8 _can_state
       (write-byte _can_state s)
     ;; int8 _gps_can_state
       (write-byte _gps_can_state s)
     ;; int8 _gps_system_state
       (write-byte _gps_system_state s)
     ;; int8 _camera_state
       (write-byte _camera_state s)
     ;; int8 _internet_state
       (write-byte _internet_state s)
     ;; int8 _v2n_state
       (write-byte _v2n_state s)
     ;; int8 _location_state
       (write-byte _location_state s)
     ;; int8 _sim_state
       (write-byte _sim_state s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _lidar_state
     (setq _lidar_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _lidar_state 127) (setq _lidar_state (- _lidar_state 256)))
   ;; int8 _can_state
     (setq _can_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _can_state 127) (setq _can_state (- _can_state 256)))
   ;; int8 _gps_can_state
     (setq _gps_can_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _gps_can_state 127) (setq _gps_can_state (- _gps_can_state 256)))
   ;; int8 _gps_system_state
     (setq _gps_system_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _gps_system_state 127) (setq _gps_system_state (- _gps_system_state 256)))
   ;; int8 _camera_state
     (setq _camera_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _camera_state 127) (setq _camera_state (- _camera_state 256)))
   ;; int8 _internet_state
     (setq _internet_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _internet_state 127) (setq _internet_state (- _internet_state 256)))
   ;; int8 _v2n_state
     (setq _v2n_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _v2n_state 127) (setq _v2n_state (- _v2n_state 256)))
   ;; int8 _location_state
     (setq _location_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _location_state 127) (setq _location_state (- _location_state 256)))
   ;; int8 _sim_state
     (setq _sim_state (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _sim_state 127) (setq _sim_state (- _sim_state 256)))
   ;;
   self)
  )

(setf (get car_interfaces::FaultDiagnosisInterface :md5sum-) "0acf205619b222615d838811655182ab")
(setf (get car_interfaces::FaultDiagnosisInterface :datatype-) "car_interfaces/FaultDiagnosisInterface")
(setf (get car_interfaces::FaultDiagnosisInterface :definition-)
      "int8 lidar_state
int8 can_state
int8 gps_can_state
int8 gps_system_state
int8 camera_state
int8 internet_state

int8 v2n_state
int8 location_state
int8 sim_state

")



(provide :car_interfaces/FaultDiagnosisInterface "0acf205619b222615d838811655182ab")


