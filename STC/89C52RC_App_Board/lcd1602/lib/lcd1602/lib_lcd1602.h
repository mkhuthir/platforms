// Muthanna Alwahash
// Oct 2023

//E51_LIB_LCD1602_H
#ifndef E51_LIB_LCD1602_H
#define E51_LIB_LCD1602_H

    // Used Pins to connect LCD1602 Display
    #define LCD_EN          P1_0    // Enable
    #define LCD_WR          P1_1    // Write
    #define LCD_RS          P1_2    // Read Select
    #define LCD_DATA_PORT   P0      // 8-Bits Data bus

    void lcd_write_command  (unsigned char command);
    void lcd_write_data     (unsigned char data);
    void lcd_1602_init      (void);
    void lcd_set_ac         (unsigned int line, unsigned int column);

    void lcd_show_char      (unsigned int line, unsigned int column, unsigned char show_char);
    void lcd_show_string    (unsigned int line, unsigned int column, unsigned char *show_string);
    void lcd_show_int_num   (unsigned int line, unsigned int column, unsigned int num, unsigned int length);
    void lcd_show_dec_num   (unsigned int line, unsigned int column, int num, unsigned int length);
    void lcd_show_hex_num   (unsigned int line, unsigned int column, unsigned char hex_num, unsigned int length);
    void lcd_show_bin_num   (unsigned int line, unsigned int column, unsigned int bin_num, unsigned int length);

#endif
//E51_LIB_LCD1602_H
