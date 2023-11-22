// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "MMA7660.h"

MMA7660 acc(p28, p27);                  // initialize MMA7660 3-Axis Orientation/Motion Detection Sensor

int main()
{
    while(1) {
        printf("ax=%+d\t\tay=%+d\t\taz=%+d\n",(int)(acc.x()*1000),(int)(acc.y()*1000),(int)(acc.z()*1000));
        thread_sleep_for(300);
    }
}