// Muthanna Alwahash
// Oct 2023

#include "STC89xx.h"        // Official header from STC-ISP for STC89xx / STC90xx
#include "lib_lcd1602.h"    // pins settings are in lib_lcd1602.h

void main()
{
    lcd_1602_init();

    lcd_show_char       (1, 1 ,'M');
    lcd_show_string     (1, 3 ,"Hello World!");
    lcd_show_int_num    (2, 1 ,35    ,2);
    lcd_show_dec_num    (2, 4 ,-78   ,2);
    lcd_show_hex_num    (2, 8 ,0xA4  ,2);
    lcd_show_bin_num    (2, 13,0b0101,4);

    while (1) {}
}
