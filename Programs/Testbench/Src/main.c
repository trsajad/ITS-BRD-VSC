/**
  ******************************************************************************
  * @file    main.c
  * @author  René Rudzki
  * @brief   Testbench zum entwickeln von Testprogrammen und sonstiges.
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/

#include "init.h"
#include "general_def.h"
#include "gpio.h"
#include "delay.h"
#include <stdbool.h>

#define BLINK_ERR_DELAY 500 //[ms]

static void ErrorBlinker(void) {
	bool toggle = true;
	while(1) {
		setGPIOPin(LED_PORT, D8, toggle);
		setGPIOPin(LED_PORT, D9, toggle);
		toggle = !toggle;
		delay(BLINK_ERR_DELAY);
	}
}

int main(void) {
	initITSboard();    // Initialisierung des ITS Boards
	bool error = false;
	
	while(1) {
		int s0Pressed = readGPIOPin(BUTTON_PORT, S0);
		int s1Pressed = readGPIOPin(BUTTON_PORT, S1);
		error = error || (INTERNAL_ERR == s0Pressed) || (INTERNAL_ERR == s1Pressed);

		bool d8State = s0Pressed && !s1Pressed;
		bool d9State = !s0Pressed && s1Pressed;

		error = error || (INTERNAL_ERR == setGPIOPin(LED_PORT, D8, d8State));
		error = error || (INTERNAL_ERR == setGPIOPin(LED_PORT, D9, d9State));

		if (error) {
			ErrorBlinker();
		}
	}
}

// EOF
