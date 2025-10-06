#ifndef PNEUMATICS_CONTROL_H
#define PNEUMATICS_CONTROL_H

#include "vex.h"

// Externs
extern vex::pneumatics PneuA;
extern vex::pneumatics PneuB;
extern vex::pneumatics PneuC;

// Toggle declarations
void TogglePneumaticA();
void TogglePneumaticB();
void TogglePneumaticC();

#endif // PNEUMATICS_CONTROL_H