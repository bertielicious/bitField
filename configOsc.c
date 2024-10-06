
#include "constantsDeclarations.h"
#include <xc.h>
void configOsc(void)
{
    OSCCONbits.IRCF3 = HI;  /* 16MHz clock*/
    OSCCONbits.IRCF2 = HI;
    OSCCONbits.IRCF1 = HI;
    OSCCONbits.IRCF0 = HI;
    OSCCONbits.SCS1 = HI;
    OSCCONbits.SCS0 = HI;
}
