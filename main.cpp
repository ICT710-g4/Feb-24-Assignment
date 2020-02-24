#include "mbed.h"

DigitalIn myLovelyButton(PC_13);
DigitalOut MyAwesomeLED(LED1);
DigitalOut MyLessAwesomeLED(LED2);

void led1_handler(){
    MyAwesomeLED = !myLovelyButton;
}

void led2_handler(){
    MyLessAwesomeLED = !myLovelyButton;
}

int main() {
    EventQueue queue;
    queue.call_every(200, led1_handler);
    queue.call_every(200, led2_handler);
    queue.dispatch();
}