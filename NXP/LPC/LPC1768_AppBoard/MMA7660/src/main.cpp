// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "MMA7660.h"

MMA7660 acc(p28, p27);  // initialize MMA7660 3-Axis Orientation/Motion Detection Sensor

int main()
{
    while(1) {
        printf("ax=%+f\tay=%+f\taz=%+f\n",acc.x(),acc.y(),acc.z());
        thread_sleep_for(300);
    }
}