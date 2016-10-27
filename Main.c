#pragma platform(VEX)
#pragma config(Motor, port1, backRight, tmotorVex393_HBridge, openLoop);
#pragma config(Motor, port2, frontRight, tmotorVex393_MC29, openLoop);
#pragma config(Motor, port3, topRightArm, tmotorVex393_MC29, openLoop);
#pragma config(Motor, port4, bottomRightArm, tmotorVex393_MC29, openLoop);
#pragma config(Motor, port5, rightArmFlex, tmotorVex393_MC29, openLoop);
#pragma config(Motor, port6, topLeftArm, tmotorVex393_MC29, openLoop);
#pragma config(Motor, port7, bottomLeftArm, tmotorVex393_MC29, openLoop);
#pragma config(Motor, port8, leftArmFlex, tmotorVex393_MC29, openLoop);
#pragma config(Motor, port9, frontLeft, tmotorVex393_MC29, openLoop);
#pragma config(Motor, port10, backLeft, tmotorVex393_HBridge, openloop)
//Competition Control and Duration Settings
#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c" //Main competition Background Code

void pre_auton()
{
    bStopTasksBetweenModes = true;
}

// Sets the speed of the left side of the drive train
void leftDrive(int speed){
    motor[frontLeft] = speed;
    motor[backLeft] = speed;
}

// Sets the speed of the right side of the drive train
void rightDrive(int speed){
    motor[frontRight] = speed;
    motor[backRight] = speed;
}

// Raises and lowers the arm
void moveArm(int speed){
    motor[topRightArm] = speed;
    motor[topLeftArm] = speed;
    motor[bottomRightArm] = speed;
    motor[bottomLeftArm] = speed;
}

// Extends and retracts the arm
void flexArm(int speed){
    motor[leftArmFlex] = speed;
    motor[rightArmFlex] = speed;
}

task autonomous(){
    AutonomousCodePlaceholderForTesting();
}

task usercontrol(){
    while(true){
        // Tank Drive
        leftDrive(vexRT[Ch3]);
        rightDrive(vexRT[Ch2]);

        int armSpeed = 0;
        int armFlexSpeed = 0;

        // Arm Control
        if (vexRT[Btn7UXmtr2] == 1) {
            armSpeed = 127;
        } else if (vexRT[Btn7DXmtr2] == 1) {
            armSpeed = -127;
        }

        if (vexRT[Btn8UXmtr2] == 1){
            armFlexSpeed = 127;
        } else if (vexRT[Btn8DXmtr2] == 1) {
            armFlexSpeed = -127;
        }

        moveArm(armSpeed);
        flexArm(armFlexSpeed);
    }
}