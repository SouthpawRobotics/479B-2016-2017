/** @file helper.c
 * @brief Contains helper functions
 *
 * Contains the functions for assisting with the robot build
 */

#include "main.h"

 void leftDrive(int speed){
   motorSet(FRONT_LEFT_DRIVE, speed * FRONT_LEFT_DRIVE_INVERT);
   motorSet(BACK_LEFT_DRIVE, speed * BACK_LEFT_DRIVE_INVERT);
 }

 void rightDrive(int speed){
   motorSet(FRONT_RIGHT_DRIVE, speed * FRONT_RIGHT_DRIVE_INVERT);
   motorSet(BACK_RIGHT_DRIVE, speed * BACK_RIGHT_DRIVE_INVERT);
 }

 void drive(int speed){
   leftDrive(speed);
   rightDrive(speed);
 }

 void moveArm(int speed){
   motorSet(TOP_LEFT_ARM, speed * TOP_LEFT_ARM_INVERT);
   motorSet(BOTTOM_LEFT_ARM, speed * BOTTOM_LEFT_ARM_INVERT);
   motorSet(TOP_RIGHT_ARM, speed * TOP_RIGHT_ARM_INVERT);
   motorSet(BOTTOM_RIGHT_ARM, speed * BOTTOM_RIGHT_ARM_INVERT);
 }

 void turnRobot(int speed){
   leftDrive(speed);
   rightDrive(-speed);
 }
