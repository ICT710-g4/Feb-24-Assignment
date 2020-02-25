#include "mbed.h"
DigitalIn Button(PC_13);
DigitalOut led1(LED1);
DigitalOut led2(LED2);
 Thread thread; 
 
 void led2_thread() {
    while (true) {
        led2 = !Button;
    }
} 
int main() {
	thread.start(led2_thread);
}
