#ifndef PNEUMATICS_CONTROL_H
#define PNEUMATICS_CONTROL_H

#include "vex.h"

// Externs
extern vex::pneumatics PneuA;
extern vex::pneumatics PneuB;
extern vex::pneumatics PneuC;
extern vex::pneumatics PenuD;

// Toggles
void TogglePneumaticA(){
    static bool state = false;
    state = !state;
    PneuA.set(state);
}

void TogglePneumaticB(){
    static bool state = false;
    state = !state;
    PneuB.set(state);
}

void TogglePneumaticC(){
    static bool state = false;
    state = !state;
    PneuC.set(state);
}

void TogglePneumaticD(){
    static bool state = false;
    state = !state;
    PneuD.set(state);
}

#endif // PNEUMATICS_CONTROL_H