;; Auto-generated. Do not edit!


(when (boundp 'learing_communication::person)
  (if (not (find-package "LEARING_COMMUNICATION"))
    (make-package "LEARING_COMMUNICATION"))
  (shadow 'person (find-package "LEARING_COMMUNICATION")))
(unless (find-package "LEARING_COMMUNICATION::PERSON")
  (make-package "LEARING_COMMUNICATION::PERSON"))

(in-package "ROS")
;;//! \htmlinclude person.msg.html


(intern "*UNKNOWN*" (find-package "LEARING_COMMUNICATION::PERSON"))
(shadow '*UNKNOWN* (find-package "LEARING_COMMUNICATION::PERSON"))
(defconstant learing_communication::person::*UNKNOWN* 0)
(intern "*MALE*" (find-package "LEARING_COMMUNICATION::PERSON"))
(shadow '*MALE* (find-package "LEARING_COMMUNICATION::PERSON"))
(defconstant learing_communication::person::*MALE* 1)
(intern "*FEMALE*" (find-package "LEARING_COMMUNICATION::PERSON"))
(shadow '*FEMALE* (find-package "LEARING_COMMUNICATION::PERSON"))
(defconstant learing_communication::person::*FEMALE* 2)

(defun learing_communication::person-to-symbol (const)
  (cond
        ((= const 0) 'learing_communication::person::*unknown*)
        ((= const 1) 'learing_communication::person::*male*)
        ((= const 2) 'learing_communication::person::*female*)
        (t nil)))

(defclass learing_communication::person
  :super ros::object
  :slots (_name _sex _age ))

(defmethod learing_communication::person
  (:init
   (&key
    ((:name __name) "")
    ((:sex __sex) 0)
    ((:age __age) 0)
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _sex (round __sex))
   (setq _age (round __age))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:sex
   (&optional __sex)
   (if __sex (setq _sex __sex)) _sex)
  (:age
   (&optional __age)
   (if __age (setq _age __age)) _age)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; uint8 _sex
    1
    ;; uint8 _age
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; uint8 _sex
       (write-byte _sex s)
     ;; uint8 _age
       (write-byte _age s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _sex
     (setq _sex (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _age
     (setq _age (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get learing_communication::person :md5sum-) "8361f88618d6779bd872f0ba928ced56")
(setf (get learing_communication::person :datatype-) "learing_communication/person")
(setf (get learing_communication::person :definition-)
      "string name
uint8 sex
uint8 age

uint8 unknown = 0
uint8 male = 1
uint8 female = 2

")



(provide :learing_communication/person "8361f88618d6779bd872f0ba928ced56")


