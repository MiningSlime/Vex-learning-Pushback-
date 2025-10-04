#ifndef ROBOT_CONFIG_H
#define ROBOT_CONFIG_H

#include "vex.h"

// Motors
extern vex::motor LMA;
extern vex::motor LMB;
extern vex::motor LMC;
extern vex::motor RMA;
extern vex::motor RMB;
extern vex::motor RMC;

// Motor Groups
extern vex::motor_group LeftDrv;
extern vex::motor_group RightDrv;

// Drivetrain
extern vex::drivetrain Drivetrain;

// Controller
extern vex::controller Controller1;

// Brain
extern vex::brain Brain;

#endif // ROBOT_CONFIG_H
