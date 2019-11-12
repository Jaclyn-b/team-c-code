using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor driveL1;
extern motor driveL2;
extern motor driveR1;
extern motor driveR2;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );