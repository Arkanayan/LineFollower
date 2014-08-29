 #include "Motor.h"
 
 
 Motor::Motor(int pinF,int pinS) {
  pin1 = pinF;
  pin2 = pinS;
 } 
 Motor::Motor() { } 
  
 void Motor::decOutput() {
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT); 
 }
 
 void Motor::goStraight() {
  
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  }
  void Motor::turnOn() {
   Motor::goStraight(); 
  }
  
  void Motor::goBack() {
   digitalWrite(pin1,LOW);
   digitalWrite(pin2,HIGH); 
  }
  
  void Motor::Stop() {
   digitalWrite(pin1,LOW);
   digitalWrite(pin2,LOW); 
  }
  

 
