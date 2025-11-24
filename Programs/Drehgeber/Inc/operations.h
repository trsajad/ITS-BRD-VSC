#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "printer.h"
#include <stdint.h>

#define NO_POSITION -1

typedef struct {
    char string[PRINT_SIZE];
    int position[PRINT_SIZE];
    int next;
} PrintBuffer;

double calcTimeFrame(uint32_t start, uint32_t end);

void calcAngle(double steps, PrintBuffer *bufAngle);

void calcSpeed(double stepsOfFrame, double timeFrame, PrintBuffer *bufSpeed);

void resetBuffer(void);

#endif /* OPERATIONS_H */
// EOF
