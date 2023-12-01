// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "Servo.h"

Servo s1(p21);
Servo s2(p22);

AnalogIn p1(p19);
AnalogIn p2(p20);

int main() {
    while(1) {
        s1=p1;
        s2=p2;        
        thread_sleep_for(100);
    }
}
