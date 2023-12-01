// Muthanna Alwahash
// Oct 2023

#include "STC89xx.h"        // Official header from STC-ISP for STC89xx / STC90xx
#include "lib_lcd1602.h"
#include "lib_delay.h"

// Calculation of the power of a certain number
unsigned int lcd_pow(unsigned int num, unsigned int pow)
{
    unsigned int i;
    unsigned int result = 1;

    for (i=0; i<pow; i++) {
        result *= num;
    }

    return result;
}

void lcd_write_command(unsigned char command)
{
    LCD_RS = 0;
    LCD_WR = 0;

    LCD_DATA_PORT = command;
    LCD_EN = 1;
    delay_ms(1);
    LCD_EN = 0;
    delay_ms(1);
}

void lcd_write_data(unsigned char data)
{
    LCD_RS = 1;
    LCD_WR = 0;

    LCD_DATA_PORT = data;
    LCD_EN = 1;
    delay_ms(1);
    LCD_EN = 0;
    delay_ms(1);
}

void lcd_1602_init(void)
{
    lcd_write_command(0x06);    // AC++, the screen does not move
    lcd_write_command(0x0C);    // Display on, cursor off, flashing off
    lcd_write_command(0x38);    // Eight-bit data interface, two-line display, 5x7 dot matrix
    lcd_write_command(0x01);    // clear screen
}

void lcd_set_ac(unsigned int line, unsigned int column)
{
    if (line == 1) {
        lcd_write_command(0x80 | (column - 1));
    } else {
        lcd_write_command(0x80 | ((column - 1) + 0x40));
    }
}

void lcd_show_char(unsigned int line, unsigned int column, unsigned char show_char)
{
    lcd_set_ac(line, column);
    lcd_write_data(show_char);
}

void lcd_show_string(unsigned int line, unsigned int column, unsigned char *show_string)
{
    lcd_set_ac(line, column);

    unsigned int i = 0;
    while (show_string[i] != '\0') {
        lcd_write_data(show_string[i]);
        i++;
    }
}

void lcd_show_int_num(unsigned int line, unsigned int column, unsigned int num, unsigned int length)
{
    lcd_set_ac(line, column);
    unsigned int i;

    for (i=length; i>0; i--) {
        lcd_write_data('0' + ((num / lcd_pow(10, i-1)) % 10));
    }
}

void lcd_show_dec_num(unsigned int line, unsigned int column, int num, unsigned int length)
{
    lcd_set_ac(line, column);
    unsigned int single_num, i;

    if (num < 0) {
        single_num = -num;
        lcd_write_data('-');
    } else {
        single_num = num;
        lcd_write_data('+');
    }

    for (i=length; i>0; i--) {
        lcd_write_data('0' + ((single_num / lcd_pow(10, i-1)) % 10));
    }
}

void lcd_show_hex_num   (
                        unsigned int line, 
                        unsigned int column,
                        unsigned char hex_num,
                        unsigned int length
                        )
{
    lcd_set_ac(line, column);
    unsigned int i, single_num;

    for (i=length; i>0; i--) {
        single_num = hex_num / lcd_pow(16, i-1) % 16;
        if (single_num < 10) {
            lcd_write_data('0' + single_num);
        } else {
            lcd_write_data('A' + single_num - 10);
        }
    }
}

void lcd_show_bin_num   (
                        unsigned int line, 
                        unsigned int column, 
                        unsigned int bin_num, 
                        unsigned int length
                        )
{
    lcd_set_ac(line, column);
    unsigned int i;

    for (i=length; i>0; i--) {
        lcd_write_data('0' + bin_num / lcd_pow(2, i-1) % 2);
    }
}
