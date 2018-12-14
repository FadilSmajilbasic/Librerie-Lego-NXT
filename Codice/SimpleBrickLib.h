bool isNxtPressedLeft(){
}

bool isNxtPressedRight(){
}

bool isNxtPressedCenter(){
}

bool isNxtPressedBottom(){
}

void displayWriteLine(string text, ubyte line){
	if(line > 7) line = 7;
	nxtDisplayTextLine(line,text);
}
