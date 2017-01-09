#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(115200);
  myservo.attach(11);  // attaches the servo on pin 11 to the servo object
}

void loop() {
  if (Serial.available()){
    char command = Serial.read();
    //Reset position for the servo is 90
    //down is up in value
    if (command = "F"){
      myservo.write(140);
      delay(300);
      myservo.write(90);
    }
  }
  }
  


