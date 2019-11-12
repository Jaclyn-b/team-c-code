#include "vex.h"
void chassis (){
 while (true){
  //Added in a forever loop so that the joystick values are constantly updated 

  
 driveL.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct); //(Axis3+Axis4)/2
 driveR.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);//(Axis3-Axis4)/2
       
 }
}
void usercontrol (){
 chassis();
}