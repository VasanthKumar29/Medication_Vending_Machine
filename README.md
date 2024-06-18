## Project demo and Explanation

_**Embedded C programming in Arduino IDE**_

     QR Code contains medicine information
     Mobile apk is connected to ESP32S via bluetooth
     Microcontroller fetch the data from apk after scanning the QR
     Video Demo 👇
[![Project Demo](https://img.youtube.com/vi/0Dg65Skf-iE/0.jpg)](https://www.youtube.com/watch?v=0Dg65Skf-iE)
## Working Theory
Using Android studio APK is build and connection made between microcontroller via bluetooth for fetching the medicine information from the QR. Then ESP32S with provide the instruction to motor driver, it will operate the servo motors.

 ### ESP32S - >  Motor Driver - >  Servo motors - > Dispensing of medicines
  
  _Additionally Voice processor is connected to Microcontroller for providing voice indication for patient via speaker_

  ## Versions

    -Version 1 : Fetched data should be reflected at servo motors
    -Version 2 : Multiple commands should be executed by motors
    -Version 3 : Voice indication should be provided after Dispensing of Medicines
    
  






