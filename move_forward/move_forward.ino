#include <AFMotor.h>
AF_DCMotor forward_motor(1, MOTOR12_8KHZ);
AF_DCMotor turn_motor(2, MOTOR12_8KHZ);

void setup() {
  Serial.begin(9600); //begin serial communication
  forward_motor.setSpeed(500); //set motor 1 & motor 2 speeds
  turn_motor.setSpeed(250);
}

void loop() {
  delay(5000); //wait 5000 miliseconds
 
  forward_motor.run (FORWARD); //turn motor 1 forward
  turn_motor.run (RELEASE); //release motor 2
  delay(5000); //wait 5000 miliseconds
  
  forward_motor.run (FORWARD); //turn motor 1 forward
  turn_motor.run (FORWARD); //turn motor 2 forward
  delay(2000); //wait 2000 miliseconds
  
  forward_motor.run (BACKWARD); //turn motor 1 backward
  turn_motor.run (RELEASE); //release motor 2
  delay(5000); //wait 5000 miliseconds
}
