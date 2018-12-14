bool isPressed(short port){
	bool preState = 0;

	while(true){
		bool currentState = SensorValue(port);

		if(preState == 0 && currentState == 1){
			return true;
		}
	}
}
