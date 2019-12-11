#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor driveL = motor(PORT1, ratio18_1, false);
motor driveR = motor(PORT9, ratio18_1, true);
controller Controller1 = controller(primary);
motor SiderollerL = motor(PORT4, ratio18_1, false);
motor SiderollerR = motor(PORT3, ratio18_1, true);
motor PushR = motor(PORT8, ratio18_1, false);
motor PushL = motor(PORT2, ratio18_1, true);
motor Arm = motor(PORT5, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}