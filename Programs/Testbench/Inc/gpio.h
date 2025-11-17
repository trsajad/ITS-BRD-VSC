#ifndef GPIO_H
#define GPIO_H

#include "stm32f429xx.h"
#include <stdbool.h>

int readGPIOPin(GPIO_TypeDef *GPIOx, int pin);

int setGPIOPin(GPIO_TypeDef *GPIOx, int pin, bool on);

#endif /* GPIO_H */
