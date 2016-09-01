/*
8/31/2016 Lab 1
Code for part 5 of lab. First it provides power to a button which can then power
an LED when it is pressed. When the LED is illuminated it changes the resistance
value for a photoresistor. These changes are measure and shown in the serial 
monitor by way of a voltage divider
*/

const int ledPin = 13; //Pin used to power button and thus LED
const int photoRes = A0; //Reads in a voltage from photoresistor

int photoValue = 0; //variable to store values from analog input

void setup(){
 Serial.begin(9600); //initiallizing serial monitor
 pinMode(ledPin, OUTPUT); //setting up the pin that powers the button/LED
}

void loop(){
  digitalWrite(ledPin, HIGH); //providing power to the LED
  
  photoValue = analogRead(photoRes);/* reading in values that are related to
                                  the resistance of the photoresistor*/
  Serial.println(photoValue); //showing measured values in serial monitor
  
  delay(500);
  
}
