#include "vex.h"
void chassis (){
 while (true){
  //Added in a forever loop so that the joystick values are constantly updated 
 driveL.setVelocity((Controller1.Axis3.value()+Controller1.Axis4.value()), percent);//(Axis3+Axis4)/2
 driveR.setVelocity((Controller1.Axis3.value()-Controller1.Axis4.value()), percent);//(Axis3-Axis4)/2
 driveL.spin(forward); 
 driveR.spin(forward); 
       
 }
}
void usercontrol (){
 chassis();
}