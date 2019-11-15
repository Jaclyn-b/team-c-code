#include "vex.h"
void chassis (){
 while (true){
 driveL.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct); //(Axis3+Axis4)/2
 driveR.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);//(Axis3-Axis4)/2
       
 }
}

void siderollers (int i) {
  if (Controller1.ButtonL1.pressing() && (Controller1.ButtonL2.pressing() == false)){
    i++;//increase int i by one every time L1 is pressed

    /*Spins the siderollers forward if i/2 have a remainder of 1. The siderollers spin every other time L1 is pressed*/
    if (i%2 == 1){
      SiderollerL.spin(forward); 
      SiderollerR.spin(forward); 
    }

   //If i doesn't equal 1 then stop spinning. 
   //This means that the siderollers will start spinning when L1 is pressed and stop once it is pressed again
    else {
      SiderollerL.stop(); 
      SiderollerR.stop(); 
    }
  }

 //when L2 is pressed and L1 isnt pressed, spin the side rollers in reverse
  else if (Controller1.ButtonL2.pressing() && (Controller1.ButtonL1.pressing() == false)){
    SiderollerL.spin(reverse); 
    SiderollerR.spin(reverse); 
  }
  //Otherwise stop spinning
  else {
    SiderollerL.stop(); 
    SiderollerR.stop(); 
  }

}

void usercontrol (){
  int i = 0; //sets i to 0 at the start of user control
  while (true){
    chassis();
    siderollers(i);
  }
}