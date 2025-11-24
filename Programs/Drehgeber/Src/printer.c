#include "printer.h"
#include "LCD_GUI.h"
#include "lcd.h"

#define INIT_TEXT1  "Winkel          : 0.0            Grad"
#define INIT_TEXT2  "Geschwindigkeit : 0.00           Grad/s"
#define Y_ANGLE     2
#define Y_SPEED     4
#define X_TEXT      2
#define X_VALUE     (X_TEXT + 18)

void initDisplay(void) {
    GUI_init(DEFAULT_BRIGHTNESS);
    lcdGotoXY(X_TEXT, Y_ANGLE);
    lcdPrintS(INIT_TEXT1);
    lcdGotoXY(X_TEXT, Y_SPEED);
    lcdPrintS(INIT_TEXT2);
}

// EOF
