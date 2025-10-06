#include "pneumatics-control.h"
#include "robot-config.h"

// Pneumatics
vex::pneumatics PneuA = vex::pneumatics(Brain.ThreeWirePort.A);
vex::pneumatics PneuB = vex::pneumatics(Brain.ThreeWirePort.B);
vex::pneumatics PneuC = vex::pneumatics(Brain.ThreeWirePort.C);

// Toggles
void TogglePneumaticA() {
    static bool state = false;
    state = !state;
    PneuA.set(state);
}

void TogglePneumaticB() {
    static bool state = false;
    state = !state;
    PneuB.set(state);
}

void TogglePneumaticC() {
    static bool state = false;
    state = !state;
    PneuC.set(state);
}