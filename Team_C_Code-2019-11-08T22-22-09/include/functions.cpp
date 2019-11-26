#include "vex.h"
void chassis (){
 driveL.setVelocity((Controller1.Axis3.value()+Controller1.Axis4.value()), percent);//(Axis3+Axis4)/2
 driveR.setVelocity((Controller1.Axis3.value()-Controller1.Axis4.value()), percent);//(Axis3-Axis4)/2
 driveL.spin(forward); //(Axis3+Axis4)/2
 driveR.spin(forward);//(Axis3-Axis4)/2      
 
}
/*void siderollers (int i) {
  if(Controller1.ButtonR1.pressing()){
    waitUntil(Controller1.ButtonR1.pressing()==false);
      i++; 
    if (i%2==1){
      SiderollerL.spin(forward); 
      SiderollerR.spin(forward); 
    }

    else{
      SiderollerL.stop();
      SiderollerR.stop();
    }
    
  }

}*/
void siderollers () {
  if (Controller1.ButtonL1.pressing()){
    SiderollerL.spin(forward); 
    SiderollerR.spin(forward); 
  }
  else if (Controller1.ButtonL2.pressing()){
   SiderollerL.spin(reverse); 
   SiderollerR.spin(reverse); 
  }

  else {
    SiderollerL.stop(); 
    SiderollerR.stop(); 
  }

}
void push(){
  //if the button R1 is pressed then raise the push mech
  PushL.setVelocity(50, percent); 
  PushR.setVelocity(50, percent); 
  if (Controller1.ButtonR1.pressing()){
    PushL.spin(forward);
    //Note: PushR Motor is already set to reversed
    PushR.spin(forward);
  }
  //if button R2 is pressed then lower push mech
  else if (Controller1.ButtonR2.pressing()){
    PushL.spin(reverse);
    PushR.spin(reverse);
  }
  else {
    PushL.stop();
    PushR.stop();
  }
}

void usercontrol (){
  while (true){
    chassis();
    siderollers();
    push();
  }
}