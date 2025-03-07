#include "mcc_generated_files/system/system.h"
#include <xc.h>

volatile unsigned int a = 0;

int main(void) {
    SYSTEM_Initialize();
    
    while (1) {
        a++;
        if (a >= 40000) {
            a = 0;
            LED0_Toggle();
        }
    }
}
