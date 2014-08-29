#ifndef car_h
#define car_h

#include "Motor.h"

class Car {
   
   public:
   Motor mL;
   Motor mR;
   
   Car(Motor mF, Motor mS) ;
    
   void turnRight();
   void turnLeft() ;
   void goBackward() ;
   void run() ;
   void carStop() ;
  };
  
#endif
