# VRC Team 479C 2016/2017 Code
This is the code to be used by team 479C for the 2016/2017 competition seasion. The game this year is Starstruck, a game where stars are thrown over a fence to score points.  
[Starstruck Competition Resources](http://www.vexrobotics.com/vexedr/competition/competition-resources/)  

## Robot design
The current robot design is very simple in order to allow for swift completion before the first competition.
The base chassis is taken from a robot that was used last year. As a U-Shaped chassis it will be useful for this year's game because it can hold stars or other mechanics in the middle of the bot.  
In order to actually manipulate the star the robot will have an articulating arm. The arm will have two joints, one connecting the whole assembly to the robot while the other will articulate the end of the appendage.
The end of the arm will be a fork, designed to pick up a star with a leg between the forks. The middle joint will then close up, holding the star in place, allowing the entire arm to lift the star up and over the fence.

## Robot Code

The code has three main sections: driver control, autonomous, and other.

### Driver Control
The driver control is very simple, just taking user input and converting it directly to motor output. This will later become more complecated as the season progresses and more closed loop controls are added.

### Autonomous
An autonomous has been added with the simple task of turning right 90º (which must still be calibrated) and then driving forward to collect the three stars in between the two robots. This is so that when the driver control period starts the stars can be efficiently moved into a lower scoring zone or under the fence.
### Other
A few helper funcitons have been added to assist with the coding of the robot.

```C
leftDrive(speed)
``` 
This function will set both motors on the left side of the drivetrain to the same speed.

```C
rightDrive(speed)
```
This function will set the right side motors on the drivetrain to the same speed.

```C
moveArm(speed)
```
This will pivot the entirety of the arm at the specified speed.

```C
flexArm(speed)
```
This will raise or lower the end of the arm.
