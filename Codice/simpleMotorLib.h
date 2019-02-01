#if 0
/// Copyright (c) SAMT. All rights reserved.
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
	//Imposto la potenza al motore
	motor[port] = power;
}

void goMotorSeconds(short port, float seconds , byte power = 127)
{
	//Imposto la velocità al motore appoggiandomi al metodo "goMotorStandad"
	goMotorStandard(port,power)

	//Imposto il tempo di sleep
	wait1Msec(seconds * 1000);
}

void goMotorDegrees(short port, float degrees, byte power = 127)
{
	//Imposto a quanti gradi deve arrivare
	setMotorTarget(port, degrees, power);
	
	//Faccio girare il motore finchè non gira dei gradi passati
	waitUntilMotorStop(port);
}

void goMotorRotations(short port, int rotations, byte power = 127){
	//Faccio girare il motore per il numero rotazioni passate
	for(int i = 0; i < rotations; i++){
		//Per ogni rotazione faccio fare un giro di 360 gradi al motore
		goMotorDegrees(port,360,power);
	}
}

void stopMotor(short port)
{
	//Imposto la velocità del motore a 0 per fermarlo
	motor[port] = 0;
}
