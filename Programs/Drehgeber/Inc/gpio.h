#ifndef GPIO_H
#define GPIO_H

#include "stm32f429xx.h"
#include <stdbool.h>

int readGPIOpin(GPIO_TypeDef *GPIOx, int pin);

void setLEDstate(int state);

void setLEDcounter(int steps);

void resetLED(void);

#endif /* GPIO_H */
