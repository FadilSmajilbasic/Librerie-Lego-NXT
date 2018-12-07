#include "lib.h"

task main()
{
		for(int i = 0; i< 50; i++){
			goMotor(1,(float)0.5);
			wait1Msec(1000);
			string text = "";
			sprintf(text, "cycle: %d" ,i);

			writeDebugStreamLine(text);
		}
}
