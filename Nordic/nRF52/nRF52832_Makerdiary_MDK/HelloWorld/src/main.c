// Muthanna Alwahash
// Dec 2023

#include <kernel.h>
#include <sys/printk.h>

int main(void)
{
    while (1) {
        printk("Hello nRF World! %s\n", CONFIG_BOARD);
        k_sleep(K_SECONDS(1));
    }
    return 0;
}
