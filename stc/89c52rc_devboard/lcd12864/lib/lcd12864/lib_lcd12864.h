// Muthanna Alwahash
// Oct 2023


//E51_LIB_LCD12864_H
#ifndef E51_LIB_LCD12864_H
#define E51_LIB_LCD12864_H

    #define LCD_DATA_PORT   P0
    #define EN              P2_0
    #define RW              P2_1
    #define RS              P2_2
    #define CS2             P2_3
    #define CS1             P2_4


    void lcd_init(void);                             // LCD initialization
    void first_page(void);                           // clear screen

    void lcd_write_command(unsigned char command);   // write command to LCD
    void lcd_write_data(unsigned char RWdata);       // write data to LCD

    unsigned char lcd_read_data(void);

    void set_dot(unsigned char x,unsigned char y);   // Set a pixel

#endif 
//E51_LIB_LCD12864_H
