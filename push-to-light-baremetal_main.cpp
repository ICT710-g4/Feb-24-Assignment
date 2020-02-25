//push-to-light-baremetal_main.cpp
#include "mbed.h"
DigitalOut ShinyLED(LED1);
DigitalIn TinyButton(PC_13);

int main()
{
    while(1) {
        if(TinyButton){
            ShinyLED = 0;
            }
        else{
            ShinyLED = 1;
            }
    }
}
