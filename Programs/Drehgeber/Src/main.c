/**
  ******************************************************************************
  * @file    main.c
  * @author  Franz Korf
  * @brief   Kleines Testprogramm fuer neu erstelle Fonts.
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/

#include "init.h"
#include "printer.h"
#include "timer.h"

int main(void) {
  initITSboard();    // Initialisierung des ITS Boards
  initDisplay();
  char txt[4];
  txt[1] = 'A';
  testPrint("0123456789abcdef");
	initTimer();
	uint32_t timeStampStart = getTimeStamp();
	
	// Test in Endlosschleife
	while(1) {
		
	}
}

// EOF
