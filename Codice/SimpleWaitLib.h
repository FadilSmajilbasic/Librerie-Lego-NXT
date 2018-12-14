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
#include "SimpleUltrasonicLib.h"

typedef enumWord { PRESSED, RELEASED, CLICKED} TouchModes;
typedef enumWord { LESS, GREATER} UltrasonicModes;

void wait(float time){
	wait1Msec(time * 1000);
}

void waitDistance(short port,int distance,UltrasonicModes mode){
	//TODO: FINIRE WAIT PER LA DISTANZA
	if(mode == LESS){

	}
	else if(mode == GREATER){

	}
}

void waitTouch(short port,TouchModes mode){
	writeDebugStreamLine("int x is: %d", SensorValue(port));

	bool preState = false;
	bool currentState = false;

	if(mode == PRESSED){
		while(true){
			currentState = (bool) SensorValue(port);

			if(currentState == 1 && preState == 0){
				break;
			}

			preState = currentState;
		}
	}
	else if(mode == RELEASED){
		while(true){
			currentState = (bool) SensorValue(port);

			if(currentState == 0 && preState == 1){
				break;
			}

			preState = currentState;
		}
	}
	else if(mode == CLICKED){
		bool wasPressed = false;
		bool wasReleased = false;

		while(true){
				currentState = (bool) SensorValue(port);

				if(currentState == 1 && preState == 0){
					wasPressed = true;
				}

				if(currentState == 0 && preState == 1){
					wasReleased = true;
				}

				preState = currentState;


				if(wasPressed && wasReleased){break;}
		}
	}
}
