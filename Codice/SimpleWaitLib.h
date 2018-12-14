#if 0
/// Copyright (c) Luca Di Bello & Fadil Smajilbasic. All rights reserved.
///
/// <module name="SimpleWaitLib.h" />
///
/// <summary>
///     This module contains all the wait functions
/// </summary>
///
/// <remarks>
///     Environment: RobotC for Lego Mindstorms NXT.
/// </remarks>
#endif
#include "SimpleTouchLib.h"

typedef enumWord { PRESSED, RELEASED, CLICKED} TouchModes;

void wait(float time){
	wait1Msec(time * 1000);
}

void waitTouch(short port,TouchModes mode){
	writeDebugStreamLine("int x is: %d", SensorValue(port));
	while(isPressed(port) == false){
	}
}
