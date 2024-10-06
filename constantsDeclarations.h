/* 
 * File:   constantsDeclarations.h
 * Author: User
 *
 * Created on 05 October 2024, 20:57
 */

#ifndef CONSTANTSDECLARATIONS_H
#define	CONSTANTSDECLARATIONS_H
#include "stdint.h"
#include <xc.h>
enum{LO, HI};
#define _XTAL_FREQ 16000000
typedef struct{
    uint8_t led:1;// bit field use of 1 bit of an unsigned 8 bit integer 
}ledState;

#endif	/* CONSTANTSDECLARATIONS_H */

