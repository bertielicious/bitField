//#include <pic16f1459.h>

#include "constantsDeclarations.h"
void configPorts(void)
{
    TRISCbits.TRISC7 = LO;  //LED blinky pin 9 is and OUTPUT pin
    
}
