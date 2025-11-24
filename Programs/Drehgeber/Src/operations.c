#include "operations.h"
#include "printer.h"
#include "timer.h"
#include <stdio.h>

#define STEPS_PER_CYCLE 1200  /* Phasenwechsel pro 360° Umdrehung */

double calcTimeFrame(uint32_t start, uint32_t end) {
    double frame;
    if (start > end) {  /* Register Overflow */
        frame = UINT32_MAX - start + end;
    } else {
        frame = end - start;
    }
    return (frame / TICKS_PER_US) / 1000;  /* US zu MS */
}

static void updateBuffer(char newString[], PrintBuffer *buffer) {
    char *oldString = buffer->string;
    int printCounter = 0;

    for (int i = 0; i < (PRINT_SIZE - 1); i++) {
        if (oldString[i] != newString[i]) {
            oldString[i] = newString[i];
            buffer->position[printCounter] = i;
            printCounter++;
        }
    }
    buffer->position[printCounter] = NO_POSITION;
    buffer->next = 0;
}

void calcAngle(double steps, PrintBuffer *bufAngle) {
    double angle = steps * (360.0 / STEPS_PER_CYCLE);
    char temp[PRINT_SIZE];
    sprintf(temp, "%*.1lf", (PRINT_SIZE - 1), angle);
    updateBuffer(temp, bufAngle);
}

void calcSpeed(double stepsOfFrame, double timeFrame, PrintBuffer *bufSpeed) {
    if (stepsOfFrame < 0) {
        stepsOfFrame = -stepsOfFrame;
    }
    double angleOfFrame = stepsOfFrame * (360.0 / STEPS_PER_CYCLE);
    double speed = (angleOfFrame / timeFrame) * 1000;  /* Grad/ms zu Grad/s */
    char temp[PRINT_SIZE];
    sprintf(temp, "%*.2lf", (PRINT_SIZE - 1), speed);
    updateBuffer(temp, bufSpeed);
}

