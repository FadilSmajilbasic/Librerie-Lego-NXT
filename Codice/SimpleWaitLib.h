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

void wait(float time){
	wait1Msec(time * 1000);
}

void waitNxtButtons(short button){
	/*
		0 = Gray Rectangle button.
		1 = Right Arrow button.
		2 = Left Arrow button.
		3 = Orange Square button
	*/
	while(true){
		if(nNxtButtonPressed == button){break;}
	}
}

void waitDistance(short port,int distance,short mode){
	//MODE == 0 -> LESS
	//MODE == 1 -> GREATER

	if(distance > 255){distance = 255;}
	if(mode == 0){
		while(true){
			float curr_distance = SensorValue(port);
			if(curr_distance < distance){break;}
		}
	}
	else if(mode == 1){
		while(true){
			float curr_distance = SensorValue(port);
			if(curr_distance > distance){break;}
		}
	}
}

void waitMicrophone(short port,int db,short mode){
	//MODE == 0 -> LESS
	//MODE == 1 -> GREATER
	if(db > 100){db = 100;}

	if(mode == 0){
		while(true){
			float curr_db = SensorValue(port);

			if(curr_db < db){break;}
		}
	}
	else if(mode == 1){
		while(true){
			float curr_db = SensorValue(port);

			if(curr_db > db){break;}
		}
	}
}

void waitLight(short port,int light_value ,short mode){
	//MODE == 0 -> LESS
	//MODE == 1 -> GREATER

	if(mode == 0){
		while(true){
			writeDebugStreamLine("Less mode, current value: %d",SensorValue(port));
			if(SensorValue(port) < light_value){
				break;
			}
		}
	}
	else if(mode == 1){
		while(true){
			writeDebugStreamLine("Greater mode, current value: %d",SensorValue(port));
			if(SensorValue(port) > light_value){
					break;
			}
		}
	}
}

void waitTouch(short port,short mode){
	//MODE == 0 -> PRESSED
	//MODE == 1 -> RELEASED
	//MODE == 2 -> CLICKED
	bool preState = false;
	bool currentState = false;

	if(mode == 0){
		while(true){
			currentState = (bool) SensorValue(port);

			if(currentState == 1 && preState == 0){
				break;
			}

			preState = currentState;
		}
	}
	else if(mode == 1){
		while(true){
			currentState = (bool) SensorValue(port);

			if(currentState == 0 && preState == 1){
				break;
			}

			preState = currentState;
		}
	}
	else if(mode == 2){
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
