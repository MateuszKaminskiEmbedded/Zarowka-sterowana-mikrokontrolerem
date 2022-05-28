#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "DeviceConfig.h"

#define LIGHT LATFbits.LATF0
#define ON 1
#define OFF 0

void main(){
	// Ustaw porty jako cyfrowe
    ANSELA = 0;
    ANSELB = 0;
    ANSELC = 0;
    ANSELE = 0;
    ANSELG = 0;
	
	Set_MaxSpeed_Mode();
    
    TRISFbits.TRISF0 = 0; // Port F pin 0 as output
	
	while (1){
        LIGHT = ON;
	}
}