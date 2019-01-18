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

//Funziona
void goMotorSeconds(short port, float seconds , byte power = 127)
{
	motor[port] = power;
	wait1Msec(1000);
}

//Funziona
void goMotorStandard(short port, byte power = 127)
{
	motor[port] = power;
}

//Deve essere testato
void goMotorDegrees(short motorId, float degrees, byte power = 127)
{
	setMotorTarget(motorId, degrees, power);
	waitUntilMotorStop(motorId);
}

//Deve essere testato
void goMotorRotations(short motorId, int giri, byte power = 127){
	for(int i = 0; i < giri; i++){
		goMotorDegrees(motorId,360,127);
	}
}

//Funziona -> se mode = 1: instant, se 0: friction (spegne i motori e si ferma da solo
void stopMotor(short motorId, short mode = 1)
{
	if(mode == 1){
		motor[motorId] = 0;
	}
	else{

	}
}
