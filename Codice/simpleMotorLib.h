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

void goMotorStandard(short port, byte power = 127)
{
	motor[port] = power;
}

void goMotorSeconds(short port, float seconds , byte power = 127)
{
	goMotorStandard(port,power)
	wait1Msec(1000);
}

void goMotorDegrees(short motorId, float degrees, byte power = 127)
{
	setMotorTarget(motorId, degrees, power);
	waitUntilMotorStop(motorId);
}

void goMotorRotations(short motorId, int giri, byte power = 127){
	for(int i = 0; i < giri; i++){
		goMotorDegrees(motorId,360,127);
	}
}

void stopMotor(short motorId)
{
	motor[motorId] = 0;
}
