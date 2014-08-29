#include "Car.h"
#include "Motor.h"

 //first parameter is the Left Motor
 
  Car::Car(Motor mF, Motor mS) {
     mL = mF;
     mR = mS; 
    }
   
    
   void Car::turnRight() {
    mL.goStraight();
    mR.goBack(); 
   }
   void Car::turnLeft() {
    mR.goStraight();
    mL.goBack(); 
   }
   void Car::goBackward() {
    mR.goBack();
    mL.goBack();
   }
   void Car::run() {
    mR.goStraight();
    mL.goStraight();
   }
   void Car::carStop() {
    mR.Stop();
    mL.Stop(); 
   }
