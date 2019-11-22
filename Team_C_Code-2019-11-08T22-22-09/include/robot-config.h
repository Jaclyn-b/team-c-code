using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor driveL;
extern motor driveR;
extern controller Controller1;
extern motor SiderollerL;
extern motor SiderollerR;
extern motor PushR;
extern motor PushL;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );