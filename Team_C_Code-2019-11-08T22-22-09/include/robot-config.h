using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor driveL;
extern motor driveR;
extern motor SiderollerL;
extern motor SiderollerR;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );