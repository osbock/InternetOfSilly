# InternetOfSilly
Internet controlled silly string shooter

Created for CapitalOne Labs Software Engineering summit.

##Directories:
 * Arduino - Firmware files for Arduino servo control
 * Scripts - Python script to act as proxy to arduino and communicate to adafruit.io
 * fabricate - 3D models for printable parts for the silly string shooter.

##BOM:
 * Arduino uno or equivalent
 * standard servo
 * male jumper wires for actuating servo
 * USB cable for Arduino
 * computer to run python proxy script (could be raspberry pi, or laptop)
 * can of silly string
 * 3D printed silly string shooter
 *(optional) 3D printed pan tilt mechanism

##Instructions

Install Python
Install python libraries
  * adafruit mqtt
  * dependencies

Install Arduino IDE and necessary drivers
open and download to Uno, shooter.ino

Create an Adafruit.io account
  * https://io.adafruit.com/
Create dashboard, and feed.