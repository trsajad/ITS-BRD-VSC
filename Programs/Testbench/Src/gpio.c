#include "gpio.h"
#include "general_def.h"

#define MIN_GPIO_PIN 0
#define MAX_GPIO_PIN 15

int readGPIOPin(GPIO_TypeDef *GPIOx, int pin) {
    if ( (pin < MIN_GPIO_PIN) || (pin > MAX_GPIO_PIN) ) {
        return INTERNAL_ERR;
    }
    return ( (0x01 << pin) != (GPIOx->IDR & (0x01 << pin)) );
}

int setGPIOPin(GPIO_TypeDef *GPIOx, int pin, bool on) {
    if ( (pin < MIN_GPIO_PIN) || (pin > MAX_GPIO_PIN) ) {
        return INTERNAL_ERR;
    }
    int offset = (on) ? 0 : 16;

    GPIOx->BSRR = (0x01 << (pin + offset));
    return EOK;
}
