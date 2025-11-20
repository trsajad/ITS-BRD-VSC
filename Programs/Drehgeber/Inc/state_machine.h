#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <stdbool.h>

int getState(bool in0High, bool in1High);

void resetMachine(void);

#endif /* STATE_MACHINE_H */