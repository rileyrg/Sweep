
#include<Arduino.h>

#include<Servo.h>

Servo myservo;  // create servo object to control a servo

// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
void setup() 
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop()
{
  for (pos = 0; pos <= 150; pos += 1) { // goes from 30 degrees to 150 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
  }
  for (pos =150; pos >= 0; pos -= 1) { // goes from 150 degrees to 30 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
  }
  // myservo.write(0);
  // delay(1000);
}
