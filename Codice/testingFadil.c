#pragma config(Sensor, S2,     Ultrasonic,     sensorSONAR)

#include "SimpleUltrasonicLib.h";
task main()
{
	while(true){
			int sad =  SensorValue(Ultrasonic);
			writeDebugStream("int x is: %d", sad);
	}
}
