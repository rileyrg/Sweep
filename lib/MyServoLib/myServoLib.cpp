#include<Arduino.h>
#include<Servo.h>

#define STEPLIMIT 150

Servo myServo;  // create servo object to control a servo

void myServoLib(){
     for (int pos = 0; pos <= STEPLIMIT; pos += 1) { // goes from 30 degrees to 150 degrees
          // in steps of 1 degree
          myServo.write(pos);              // tell servo to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
     }
     for (int pos =STEPLIMIT; pos >= 0; pos -= 1) { // goes from 150 degrees to 30 degrees
          myServo.write(pos);              // tell servo to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
     }
}
