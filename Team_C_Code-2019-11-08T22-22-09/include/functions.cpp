#include "vex.h"
void chassis (){
 while (true){
  //Added in a forever loop so that the joystick values are constantly updated 

  //Spins the left side of the chassis using joystick values
 driveL1.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct); //(Axis3+Axis4)/2
 driveL2.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct); //(Axis3+Axis4)/2
 //Spins the right side of the chassis using joystick values
 driveR1.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);//(Axis3-Axis4)/2
 driveR2.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);//(Axis3-Axis4)/2
               
 }
}
void usercontrol (){
 chassis();
}