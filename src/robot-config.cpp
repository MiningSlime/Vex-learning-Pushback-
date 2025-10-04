#include "robot-config.h"

// Motors
vex::motor LMA = vex::motor(vex::PORT1, false);
vex::motor LMB = vex::motor(vex::PORT2, true);
vex::motor LMC = vex::motor(vex::PORT3, false);
vex::motor RMA = vex::motor(vex::PORT1, true);
vex::motor RMB = vex::motor(vex::PORT2, false);
vex::motor RMC = vex::motor(vex::PORT3, true);

// Motor Groups
vex::motor_group LeftDrv = vex::motor_group(LMA, LMB, LMC);
vex::motor_group RightDrv = vex::motor_group(RMA, RMB, RMC);

// Drivetrain
vex::drivetrain Drivetrain = vex::drivetrain(LeftDrv, RightDrv, 3.25, 4.0, 4.0, vex::distanceUnits::in, 1);

// Controller
vex::controller Controller1 = vex::controller();

// Brain
vex::brain Brain = vex::brain();
