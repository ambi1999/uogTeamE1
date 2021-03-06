/*
  Arduino Starter Kit example
 Project 9  - Motorized Pinwheel
 
 This sketch is written to accompany Project 9 in the
 Arduino Starter Kit
 
 Parts required:
 10 kilohm resistor
 pushbutton
 motor
 9V battery
 IRF520 MOSFET
 1N4007 diode
 
 Created 13 September 2012
 by Scott Fitzgerald
 
 http://arduino.cc/starterKit
 
 This example code is part of the public domain 
 */

// named constants for the switch and motor pins
const int switchPin = 2; // the number of the switch pin
const int motorPin =  9; // the number of the motor pin

int switchState = 0;  // variable for reading the switch's status

void setup() {
  Serial.begin(9600);
  // initialize the motor pin as an output:
  pinMode(motorPin, OUTPUT);      
  // initialize the switch pin as an input:
  pinMode(switchPin, INPUT);     
}

void loop(){
  // read the state of the switch value:
  switchState = digitalRead(switchPin);
Serial.println(switchState);
  // check if the switch is pressed.
  if (switchState == HIGH) {     
    // turn motor on:    
    analogWrite(motorPin, 150);  
    //digitalWrite(motorPin, HIGH);  
    Serial.println("turning on");
  } 
  else {
    // turn motor off:
    Serial.println("turning off");
    digitalWrite(motorPin, LOW); 
  }
  
  delay(500);
}
