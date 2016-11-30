/** @file helper.c
 * @breif Header file for helper functions
 *
 * This file contains declarations for functions allowing easy control of the
 * robot's chassis and other attachements, cleaning up the code and allowing
 * for code reuse.
 */
#ifndef _479_HELPER_
#define _479_HELPER_

/*
 * Sets the speed of the left side of the drivetrain. This function will invert
 * the motors as necessary
 */
void leftDrive(int speed);

/*
 * Sets the speed of the right side of the drivetrain. This function will invert
 * the motors as necessary
 */
void rightDrive(int speed);

/*
 * Sets the speed of both sides of the drivetrain. This function will invert
 * motors as necessary.
 */
void drive(int speed);

/*
 * Moves the arm at the specified speed, inverting motors as necessary
 */
void moveArm(int speed);

/*
 * Turns the robot about the center the specified speed, positive numbers turn
 * the robot clockwise.
 */
void turnRobot(int speed);

#endif
