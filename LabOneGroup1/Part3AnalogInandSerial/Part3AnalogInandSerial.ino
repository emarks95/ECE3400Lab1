/*
8/31/2016 Lab 1
Code to test the analog ports on Arduino Uno
Reads in a value from a pot by way of a voltage divider then outputs it to the
serial monitor
*/


const int analogInPin = A5;  //Sets up the analog pin. Changed to between
                              //A0 and A5 to test all the pins
int sensorValue = 0;    

void setup() {
  Serial.begin(9600); //initialize communication
}

void loop() {
  
   sensorValue = analogRead(analogInPin);//Reading in values from the Analog pin        

  Serial.print("sensor = " );   //Printing out the value that are read in                    
  Serial.println(sensorValue);      
  
  delay(100);                     
}
