#ifndef PRINTER_H
#define PRINTER_H

#define PRINT_SIZE 15  // Displayed string size + '\0'
#define INIT_ANGLE "0.0           "
#define INIT_SPEED "0.00          "

void initDisplay(void);

void printAngle(char c, int index);

void printSpeed(char c, int index);

void resetPrinter(void);

#endif /* PRINTER_H */
// EOF
