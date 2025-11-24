#include "operations.h"
#include "timer.h"

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

int calcAngle(double steps, PrintBuffer *bufAngle) {
    double angle = steps * (360.0 / STEPS_PER_CYCLE);
}