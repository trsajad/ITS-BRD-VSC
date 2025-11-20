#include "state_machine.h"
#include "general_def.h"

static char bufPhase = 's';

static int fsm(char newPhase) {
    switch (bufPhase) {

        case 'a':
            switch (newPhase) {
                case 'a':
                    return STANDSTILL;
                
                case 'b':
                    bufPhase = newPhase;
                    return FORWARD;
                
                case 'd':
                    bufPhase = newPhase;
                    return BACKWARD;
                
                default:
                    return INTERNAL_ERR;
            }

        case 'b':
            switch (newPhase) {
                case 'a':
                    bufPhase = newPhase;
                    return BACKWARD;
                
                case 'b':
                    return STANDSTILL;
                
                case 'c':
                    bufPhase = newPhase;
                    return FORWARD;
                
                default:
                    return INTERNAL_ERR;
            }

        case 'c':

        case 'd':

        case 's':
    }
}

int getState(bool in0High, bool in1High) {
    char phase;
    if (in0High) {
        phase = (in1High) ? 'c' : 'b';
    } else /* !in0High */ {
        phase = (in1High) ? 'd' : 'a';
    }
    return fsm(phase);
}