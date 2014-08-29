#include "Motor.h"
#include "Car.h"

Motor mR(9,10);
Motor mL(6,7);
Car myCar(mL,mR);

int leftIr = 1;
int rightIr = 2;

void setup() {
  
  mR.decOutput();
  mL.decOutput();

 pinMode(leftIr,INPUT);
 pinMode(rightIr,INPUT);
  
 
}

void loop() {
  int leftir = digitalRead(leftIr);
  int rightir = digitalRead(rightIr);
  
  if(leftir == 1 && rightir == 1) {
   myCar.run(); 
  }
  else if(leftir == 0 && rightir == 1) {
   myCar.turnLeft(); 
  }
  else if(leftir == 1 && rightir == 0) {
   myCar.turnRight(); 
  }
  else {
   myCar.carStop(); 
  }
 

}
