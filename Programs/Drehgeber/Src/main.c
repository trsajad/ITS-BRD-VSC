/**
  ******************************************************************************
  * @file    main.c
  * @author  Franz Korf
  * @brief   Kleines Testprogramm fuer neu erstelle Fonts.
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/

#include "general_def.h"
#include "init.h"
#include "operations.h"
#include "printer.h"
#include "timer.h"

#define MIN_TIME = 250  // ms
#define MAX_TIME = 500  // ms

int main(void) {
  // Initialisierung ITS Board und interne Variabeln
  initITSboard();
  int state = EOK;
  int steps = 0;
  int stepsOfFrame = 0;

  // Initialisierung LCD mit Text und Ausgabe-Buffern
  initDisplay();
  PrintBuffer bufAngle = newBuffer(INIT_ANGLE);
  PrintBuffer bufSpeed = newBuffer(INIT_SPEED);

  // Initialisierung Timer und Zeitfenster direkt vor super-loop öffnen
  initTimer();
	uint32_t frameStart = getTimeStamp();
	
  // Beginn der super-loop
	while(1) {
		
	}
}

// EOF
