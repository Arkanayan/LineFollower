#ifndef motor_h
#define motor_h

#import <Arduino.h>
 


class Motor {
  
 public:
 int pin1;
 int pin2;
 
 Motor(int pinF,int pinS) ; 
 Motor();
 
 void decOutput() ;
 
 void goStraight() ;
  void turnOn() ;
  
  void goBack() ;
  
  void Stop() ;
  
 };
 
 #endif
