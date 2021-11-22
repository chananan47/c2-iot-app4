/*
*authorities: Chananan Mayura
*Project: ESP32 LED BLINK Demo
*Board ESP32 DevKit V1
*On Board LED GPIO 2
*/
#include <Arduino.h>
#define LED1 15 //GPIO15
#define LED2 16  // GPIO 16
#define LED3 5  // GPIO 5

void setup() {
  // Set pin mode
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
  delay(2000); //2000 mili secound
  digitalWrite(LED1,HIGH);
  delay(2000); //2000 mili secound
  digitalWrite(LED1,LOW);
  delay(2000); 
  digitalWrite(LED2,HIGH);
  delay(2000); 
  digitalWrite(LED2,LOW);
  delay(2000); 
  digitalWrite(LED3,HIGH);
  delay(2000);
  digitalWrite(LED3,LOW);
  delay(2000);
}
