/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       ewans                                                     */
/*    Created:      10/2/2025, 3:30:49 PM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include <string>
#include "robot-config.h"
#include "pneumatics-control.h"

using namespace vex;

float pCurve = 0.6;       // curve for fwd/back
float tCoefficient = 1.2; // curve for turn
float tCurve = 0.4;       // coefficient for turn
double power;
double powerC;
double turn;
double turnC;
bool HalfSpeed = false;

int main() {
    
    while(true) {

        if (Controller1.ButtonX.pressing() && HalfSpeed == false)
            {
                HalfSpeed = true;
                waitUntil(!Controller1.ButtonX.pressing());
            }
        else if (Controller1.ButtonX.pressing() && HalfSpeed == true)
            {
                HalfSpeed = false;
                waitUntil(!Controller1.ButtonX.pressing());
            }

            // Setting power and turn variables
        power = Controller1.Axis3.position();
        turn = Controller1.Axis1.position();
        if (HalfSpeed == true)
            {
             powerC *= 0.75;
            }

        // Calculating velocity
        // calculates power curve for joystick
        powerC = ((1 - pCurve) * power) + ((pCurve * pow(power, 3)) / 16129); // 16129 is 127^2
        // modelled after https://www.desmos.com/calculator/asjs86sdpy

        //calculates curve
        //turnC = turn * tCoefficient;
        turnC = tCoefficient * ((1 - tCurve) * turn) + ((tCurve * pow(turn, 3)) / 16129); // 16129 is 127^2
        // modelled after https://www.desmos.com/calculator/asjs86sdpy

        // Arcade Drive, setting the motor velocity
        LeftDrv.setVelocity(powerC + turnC, vex::velocityUnits::pct);
        RightDrv.setVelocity(powerC - turnC, vex::velocityUnits::pct);
        // Arcade Drive, drive
        Drivetrain.drive(forward);

        // Pneumatics control A
        if (Controller1.ButtonX.pressing()){
            funnyhaha();
            waitUntil(!Controller1.ButtonX.pressing());
        }
        
        // Nothing...
        if (Controller1.ButtonB.pressing())
        {
            Brain.Screen.print("This Person is presssing B it does nothing muahaha.");
            waitUntil(!Controller1.ButtonB.pressing());
        }

    }
    
}
