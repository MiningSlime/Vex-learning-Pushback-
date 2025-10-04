#include "pneumatics-control.h"
#include "robot-config.h"

// Pneumatics
vex::pneumatics PneuA = vex::pneumatics(Brain.ThreeWirePort.A);
vex::pneumatics PneuB = vex::pneumatics(Brain.ThreeWirePort.B);
vex::pneumatics PneuC = vex::pneumatics(Brain.ThreeWirePort.C);