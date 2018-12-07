void goMotor(short motorId, byte power,float seconds)
{
	motor[motorId] = power;
	wait1Msec(seconds*1000);
	motor[motorId] = 0;
}
void stopMotor(short motorId)
{
	motor[motorId] = 0;
}

void moveRobot(short leftMotorId,short rightMotorId,byte leftPower, byte rightPower,float seconds){
	motor[leftMotorId] = leftPower;
	motor[rightMotorId] = rightPower;
	wait1Msec(seconds*1000);
}
