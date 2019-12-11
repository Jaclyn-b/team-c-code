// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// driveL               motor         1               
// driveR               motor         9               
// Controller1          controller                    
// SiderollerL          motor         4               
// SiderollerR          motor         3               
// PushR                motor         8               
// PushL                motor         2               
// Arm                  motor         5               
// ---- END VEXCODE CONFIGURED DEVICES ----
#include "vex.h"
#include "functions.cpp"//file that contains the funtions for driver control 
using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  //calling the usercontrol function (not in competition formating)
  usercontrol();

}
