#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c" //Main competition Background Code

void pre_auton()
{
    bStopTasksBetweenModes = true;
}

task autonomous(){
    AutonomousCodePlaceholderForTesting();
}

task usercontrol(){
    while(true){
        UserControlCodePlaceholderForTesting();
    }
}