#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "DeviceConfig.h"
#include "delay.h"

void main(){
	// Set ports as digital
    ANSELA = 0;
    ANSELB = 0;
    ANSELC = 0;
    ANSELE = 0;
    ANSELG = 0;
	
	Set_MaxSpeed_Mode();
    
    TRISFbits.TRISF0 = 0;   // Port F pin 0 as output
    TRISFbits. TRISF1 = 1;  // Port F pin 1 as input
    CNPUFbits.CNPUF1 = 1;   // Pull-up resistor enable for pin RF1
    
	while (1){
        if(PORTFbits.RF1 == 0){
            PORTFINV = 1;
            delay_ms(300);
        }
	}
}