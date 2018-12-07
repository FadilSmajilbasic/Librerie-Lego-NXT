#include "simpleTouchLib.h"
#include "simpleMotorLib.h"


task main()
{
		while(true){
			bool status = isButtonPressed(1);

			string a = "";
			sprintf(a,"%d",SensorValue(0));
			writeDebugStreamLine(a);
			wait1Msec(500);

			if(status){
				writeDebugStreamLine("Pressed");
			}
			else{
				writeDebugStreamLine("Not pressed");
			}
		}
}
