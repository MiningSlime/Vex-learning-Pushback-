#include "robot-config.h"

// Motors
vex::motor IntakeA = vex::motor(vex::PORT1, true);

// Code
void IntakeFWD() {
    IntakeA.setVelocity(100, vex::velocityUnits::pct);
    IntakeA.spin(vex::directionType::fwd);
}
void IntakeREV() {
    IntakeA.setVelocity(100, vex::velocityUnits::pct);
    IntakeA.spin(vex::directionType::rev);
}