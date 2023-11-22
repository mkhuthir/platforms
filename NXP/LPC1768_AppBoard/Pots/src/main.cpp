// Muthanna Alwahash
// Nov 2023

#include "mbed.h"

AnalogIn p1(p19);
AnalogIn p2(p20);

int main() {
    while(1) {
        printf("Pot1 = %i\tPot2 = %i \n",(int)(p1*1000),(int)(p2*1000));
        thread_sleep_for(100);
    }
}