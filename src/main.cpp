#include<myServoLib.h>

//Servo myServo;

void setup() 
{
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop()
{
     myServoLib();
}
