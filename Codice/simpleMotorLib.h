#if 0
/// Copyright (c) Luca Di Bello & Fadil Smajilbasic. All rights reserved.
///
/// <module name="SimpleMotorLib.h" />
///
/// <summary>
///     This module contains all the functions about the motor actuator.
/// </summary>
///
/// <remarks>
///     Environment: RobotC for Lego Mindstorms NXT.
/// </remarks>
#endif

#include "SimpleWaitLib.h"

//Funziona
void goMotor(short port, byte power,float seconds)
{
	motor[port] = power;
	wait(seconds);
}

//Funziona
void goMotor(short port, byte power = 127)
{
	motor[port] = power;
}

//Not working (WIP)
void goMotor(short motorId, float degrees)
{
	int rCount = degrees;

	motor[motorId] = 50;
	nMotorEncoder[motorId] = 0;


	while (abs(nMotorEncoder[motorId]) < rCount)
	{
		nxtDisplayTextLine(1, "Distance=%d", nMotorEncoder[motorId]);

		string text = "";
		sprintf(text, "motor: %d" ,nMotorEncoder[motorId]);
	}
	motor[motorId] = 0;
	wait10Msec(100);
}

//Funziona -> se mode = 1: instant, se 0: friction (spegne i motori e si ferma da solo
void stopMotor(short motorId,short mode)
{
	if(mode == 1){
		motor[motorId] = 0;
	}
	else{

	}
}
