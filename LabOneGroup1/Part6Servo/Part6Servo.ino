/*
8/31/2016 Lab 1
Code written to for part 6 of lab 1. Ussed to test the servo. 
90 will stop servo once its calibrated.
0 and 180 are full speed in opposite directions
*/
#include <Servo.h> //importing servo library

Servo servoControl; //declaring the servo

void setup(){
  pinMode(11, OUTPUT); //setting the control pin to output
  servoControl.attach(11); //associating the servo variable to pin 11
}

void loop(){
 
servoControl.write(180); //changing the value changes the speed and direction of servo
 
}
