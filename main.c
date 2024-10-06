/*
 * File:   main.c
 * Author: User
 *
 * Created on 05 October 2024, 20:53
 */


#include "configurationBits.h"
#include "constantsDeclarations.h"
#include "configPorts.h"
#include "configOsc.h"
void main(void) 
{
    configOsc();
    configPorts();
    ledState level;
    ledState *ptr;
    ptr = &level;
    while(1)
    {
      /* ptr->led = HI;
       PORTCbits.RC7 = level.led;
       __delay_ms(1000); 
       ptr->led = LO;
       PORTCbits.RC7 = level.led;
       __delay_ms(1000); */
        
        ptr->led = HI;
       PORTCbits.RC7 = ptr->led;
       __delay_ms(1000); 
       ptr->led = LO;
       PORTCbits.RC7 = ptr->led;;
       __delay_ms(1000); 
       
    }
    return;
}
