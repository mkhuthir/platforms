#include "STC89xx.h"     // Official header from STC-ISP for STC89xx / STC90xx
#include "lib_lcd1602.h"

void main()
{
    lcd_1602_init();

    lcd_show_char(1, 1, 'A');
    lcd_show_bin_num(1, 3, 0xA5, 8);
    lcd_show_string(1, 1, "Hello World!");
    lcd_show_int_num(2, 1, 457, 3);
    lcd_show_dec_num(2, 5, -789, 3);
    lcd_show_hex_num(2, 10, 0xA4, 2);

    while (1) {}
}
