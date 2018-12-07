bool isButtonPressed(short port){
    if(SensorValue(port) == 1){
    	return true;
    }
    return false;
}
