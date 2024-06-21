// Muthanna Alwahash
// Feb 2024

#include "../interrupt.h"

int8_t CPUINT_Initialize()
{
    /* IVSEL and CVT are Configuration Change Protected */

    //CVT disabled; IVSEL disabled; LVL0RR disabled; 
    ccp_write_io((void*)&(CPUINT.CTRLA),0x0);
    
    //LVL0PRI 0; 
    CPUINT.LVL0PRI = 0x0;
    
    //LVL1VEC 0; 
    CPUINT.LVL1VEC = 0x0;

        
    return 0;
}