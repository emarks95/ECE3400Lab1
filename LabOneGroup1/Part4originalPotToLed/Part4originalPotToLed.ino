/*
8/31/2016 Lab 1
Code the reads in a pot value by way of voltage diveder and outputs a power
to an LED that is proportional to pot value. Uses a PWM pin for the LED output
*/
const int analogInPin = A0; //Initializing the input pin
const int analogOutPin = 3; //Initializing the output pin

int sensorValue = 0; /*declaring variables that will be used for reading in 
                    values and then converting them to usable values */
int adjustedValue = 0;

void setup() {
  Serial.begin(9600); //initializing the serial monitor
}


void loop(){
 
   sensorValue = analogRead(analogInPin); //Reading in the Pot values
   
   adjustedValue = map(sensorValue, 0, 1023, 0, 255); /* mapping the read in
                                            value to usable values for output */
   analogWrite(analogOutPin, adjustedValue); //outping proportional power
   
   Serial.print("sensor = "); //printing out input values to serial monitor
   Serial.println(adjustedValue); //will show adjusted values not measure values
    
   delay(500);
  
}
