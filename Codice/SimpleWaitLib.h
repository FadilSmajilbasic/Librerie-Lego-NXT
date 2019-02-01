#if 0
/// Copyright (c) SAMT. All rights reserved.
///
/// <module name="SimpleWaitLib.h" />
///
/// <summary>
///     This module contains all the waiting functions
/// </summary>
///
/// <remarks>
///     Environment: RobotC for Lego Mindstorms NXT.
/// </remarks>
#endif

void wait(float seconds){

	//Aspetta per il numero di secondi specificato
	wait1Msec(seconds * 1000);
}

void waitNxtButtons(short button){
	/*
		Id dei pulsanti del blocchetto:

		0 = Gray Rectangle button.
		1 = Right Arrow button.
		2 = Left Arrow button.
		3 = Orange Square button
	*/

	while(true){

		/*
			Blocca il programma finchè non rileva che l'id del pulsante
			premuto sia identico a quello richiesto
		*/
		if(nNxtButtonPressed == button){break;}
	}
}

void waitDistance(short port,int distance,short mode){

	//MODE == 0 -> LESS
	//MODE == 1 -> GREATER

	//Reimposta il target se è stato inserito un target troppo grande
	if(distance > 255){distance = 255;}

	if(mode == 0){ //Se è stata scelta la modalità "LESS"
		while(true){
			//Legge la distanza corrente
			float curr_distance = SensorValue(port);

			//Blocca il programma finchè la distanza corrente diventa minore del target passato
			if(curr_distance < distance){break;}
		}
	}
	else if(mode == 1){ //Se è stata scelta la modalità "GREATER"
		while(true){
			//Legge la distanza corrente
			float curr_distance = SensorValue(port);

			//Blocca il programma finchè la distanza corrente diventa maggiore del target passato
			if(curr_distance > distance){break;}
		}
	}
}

void waitMicrophone(short port,int db,short mode){
	//MODE == 0 -> LESS
	//MODE == 1 -> GREATER

	//Reimposta il target se è stato inserito un target troppo grande
	if(db > 100){db = 100;}

	if(mode == 0){ //Se è stata scelta la modalità "LESS"
		while(true){
			//Legge i decibel rilevati dal microfono
			float curr_db = SensorValue(port);

			//Blocca il programma finchè i decibel rilevati diventano minori del target passato
			if(curr_db < db){break;}
		}
	}
	else if(mode == 1){ //Se è stata scelta la modalità "GREATER"
		while(true){
			//Legge i decibel rilevati dal microfono
			float curr_db = SensorValue(port);

			//Blocca il programma finchè i decibel rilevati diventano maggiori del target passato
			if(curr_db > db){break;}
		}
	}
}

void waitLight(short port, int light_value, short mode){
	//MODE == 0 -> LESS
	//MODE == 1 -> GREATER

	//Reimposta il target se è stato inserito un target troppo grande
	if(light_value > 100){light_value = 100;}

	if(mode == 0){ //Se è stata scelta la modalità "LESS"
		while(true){
			//Legge la percentuale di luce riflessa rilevata dal sensore di luce
			float curr_light = SensorValue(port);

			if(curr_light < light_value){break;}
		}
	}
	else if(mode == 1){ //Se è stata scelta la modalità "GREATER"
		while(true){
			//Legge la percentuale di luce riflessa rilevata dal sensore di luce
			float curr_light = SensorValue(port);

			//Blocca il programma finchè la distanza corrente diventa maggiore del target passato
			if(curr_light > light_value){break;}
		}
	}
}

void waitTouch(short port, short mode){
	//MODE == 0 -> PRESSED
	//MODE == 1 -> RELEASED
	//MODE == 2 -> CLICKED

	bool preState = false; //Stato del pulsante nel ciclo precendente
	bool currentState = false; //Stato corrente del pulsante

	if(mode == 0){ //Se è stata scelta la modalità "PRESSED"
		while(true){
			//Legge lo stato corrente del pulsante
			currentState = (bool) SensorValue(port);

			//Blocca il programma finchè non rileva che il pulsante è stato premuto
			if(currentState == 1 && preState == 0){break;}

			//Imposta lo stato corrente come stato precedente
			preState = currentState;
		}
	}
	else if(mode == 1){ //Se è stata scelta la modalità "RELEASED"
		while(true){
			//Legge lo stato corrente del pulsante
			currentState = (bool) SensorValue(port);

			//Blocca il programma finchè non rileva che il pulsante è stato rilasciato
			if(currentState == 0 && preState == 1){break;}

			//Imposta lo stato corrente come stato precedente
			preState = currentState;
		}
	}
	else if(mode == 2){ //Se è stata scelta la modalità "CLICKED"
		bool wasPressed = false; //True quando rileva che il pulsante è stato premuto
		bool wasReleased = false; //True quando rileva che il pulsante è stato rilasciato

		while(true){
			//Legge lo stato corrente del pulsante
			currentState = (bool) SensorValue(port);

			//Controlla se il pulsante è stato premuto
			if(currentState == 1 && preState == 0){
				wasPressed = true;
			}

			//Controlla se il pulsante è stato rilasciato
			if(currentState == 0 && preState == 1){
				wasReleased = true;
			}

			//Blocca il programma finchè il pulsante è stato premuto e rilasciato
			if(wasPressed && wasReleased){break;}

			//Imposta lo stato corrente come stato precedente
			preState = currentState;
		}
	}
}
