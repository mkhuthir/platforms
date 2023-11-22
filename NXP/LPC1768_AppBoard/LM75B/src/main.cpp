// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "LM75B.h"

LM75B sensor(p28, p27);                                         //Create an LM75B object at the default address (ADDRESS_0)

int main()
{
    if (sensor.open()) {                                        //Try to open the LM75B
        printf("Device detected!\n");

        while (1) {
        
            printf("Temp = %f\n", (float)sensor.temp());    //Print the current temperature
            thread_sleep_for(500);                              //Sleep for 0.5 seconds
        }
    } else {
        error("Device not detected!\n");
    }
}


