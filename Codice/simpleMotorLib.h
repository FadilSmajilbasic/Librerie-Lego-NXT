void goMotor(short motorId, byte power,float seconds)
{
	motor[motorId] = power;
	wait1Msec(seconds*1000);
	motor[motorId] = 0;
}

void goMotor(short motorId, byte power = 127)
{
	motor[motorId] = power;
}

//Not working (WIP)
void goMotor(short motorId, float degrees)
{
	int rCount = degrees;

	motor[motorId] = 50;
	nMotorEncoder[motorId] = 0;

	//writeDebugStreamLine(text);

	while (abs(nMotorEncoder[motorId]) < rCount)
	{
		nxtDisplayTextLine(1, "Distance=%d", nMotorEncoder[motorId]);

		string text = "";
		sprintf(text, "motor: %d" ,nMotorEncoder[motorId]);
	}
	motor[motorId] = 0;
	wait10Msec(100);
}

void stopMotor(short motorId)
{
	motor[motorId] = 0;
}
