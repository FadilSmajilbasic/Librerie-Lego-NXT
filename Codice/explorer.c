#pragma config(Sensor, S1,     touchLeft,      sensorTouch)
#pragma config(Sensor, S2,     touchRight,     sensorTouch)
#pragma config(Sensor, S3,     distance,       sensorSONAR)
#pragma config(Motor,  motorA,          motorRight,    tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          motorLeft,     tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "SimpleMotorLib.h"
#include "SimpleWaitLib.h"

task main()
{
	int SPEED = 20;
	while(true){
	 	if(SensorValue(touchLeft)){
			//Va a destra
			stopMotor(motorLeft);
			goMotorDegrees(motorRight,480,80);

		}
		else if(SensorValue(touchRight)){
			//Va a sinistra
		}
		else if(SensorValue(touchRight) && SensorValue(touchLeft)){
			//Va indietro e gira a random tra destra e sinistra di 90 gradi
		}
		else{
			//Controlla ultrasuoni
			goMotorStandard(motorRight,SPEED);
			goMotorStandard(motorLeft,SPEED);
		}
	}
	/*
	*/
}