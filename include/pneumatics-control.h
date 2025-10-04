#ifndef PNEUMATICS_CONTROL_H
#define PNEUMATICS_CONTROL_H

#include "vex.h"

// Externs
extern vex::pneumatics PneuA;
extern vex::pneumatics PneuB;
extern vex::pneumatics PneuC;

// Toggles
void TogglePneumaticA(){
    static bool state = false;
    state = !state;
    PneuA.set(state);
}

void TogglePneumaticB(){
    static bool state = false;
    state = !state;
    PneuA.set(state);
}

void TogglePneumaticC(){
    static bool state = false;
    state = !state;
    PneuA.set(state);
}


#endif // PNEUMATICS_CONTROL_H