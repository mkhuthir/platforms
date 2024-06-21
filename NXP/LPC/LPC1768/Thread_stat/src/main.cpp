// Muthanna Alwahash
// Nov 2023


#include "mbed.h"
#include <inttypes.h>
 
#if !defined(MBED_THREAD_STATS_ENABLED)
#error "Thread statistics not enabled"
#endif
 
#define MAX_THREAD_STATS    0x8
#define BLINKY_THREAD_STACK 224
#define IDLE_THREAD_STACK 384
#define STOP_FLAG 0xEF
#define WAIT_TIME_MS 500

// Initialise the digital pin LED1 as an output
DigitalOut led1(LED1);
static EventFlags idle_ef;

void blinky()
{
    while (1) {
        led1 = !led1;
        thread_sleep_for(WAIT_TIME_MS);
    }
}

void idle()
{
    idle_ef.wait_all(STOP_FLAG);
}

int main()
{
    Thread *blinky_thread = new Thread(osPriorityNormal, BLINKY_THREAD_STACK, nullptr, "blinky_thread");
    blinky_thread->start(blinky);

    Thread *idle_thread = new Thread(osPriorityNormal, IDLE_THREAD_STACK, nullptr, "idle_thread");
    idle_thread->start(idle);

    // Sleep helps other created threads to run
    thread_sleep_for(10);
    mbed_stats_thread_t *stats = new mbed_stats_thread_t[MAX_THREAD_STATS];
    int count = mbed_stats_thread_get_each(stats, MAX_THREAD_STATS);

    for (int i = 0; i < count; i++) {
        printf("ID: 0x%" PRIx32 "\n", stats[i].id);
        printf("Name: %s \n", stats[i].name);
        printf("State: %" PRId32 "\n", stats[i].state);
        printf("Priority: %" PRId32 "\n", stats[i].priority);
        printf("Stack Size: %" PRId32 "\n", stats[i].stack_size);
        printf("Stack Space: %" PRId32 "\n", stats[i].stack_space);
        printf("\n");
    }
   
    blinky_thread->terminate();
    idle_thread->terminate();    
    return 0;
}
