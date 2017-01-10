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
    * [Adafruit Python library setup documented here](https://github.com/adafruit/io-client-python)
  * dependencies - I also had to do a pip install paho-mqtt but your mileage may vary.

Install Arduino IDE and necessary drivers
open and download to Uno, shooter.ino

Create an Adafruit.io account
  * https://io.adafruit.com/
  * [Good getting started guide] (https://learn.adafruit.com/mqtt-adafruit-io-and-you/getting-started-on-adafruit-io)
  * Create dashboard, and feed.
     * [The basic feed info is here] (https://learn.adafruit.com/adafruit-io-basics-feeds/creating-a-feed)
  * [Specific feed and dash settings in this doc](https://github.com/osbock/InternetOfSilly/blob/master/AdaIOSetup.md)

To run the Shooter:
   * program the Arduino
   * Set environment variables for adafruit io userid and AIOKEY

   export AIOUSER="YourAIOUsername"
   export AIOKEY ="YourAIOKey"

   * edit sillyserver.py to the serial port used by the arduino
   python sillyserver.py
