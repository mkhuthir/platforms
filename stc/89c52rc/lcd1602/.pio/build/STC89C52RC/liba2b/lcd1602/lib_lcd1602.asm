;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.1.0 #12072 (Linux)
;--------------------------------------------------------
	.module lib_lcd1602
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _lcd_pow
	.globl _lcd_delay
	.globl _TF2
	.globl _EXF2
	.globl _RCLK
	.globl _TCLK
	.globl _EXEN2
	.globl _TR2
	.globl _C_T2
	.globl _CP_RL2
	.globl _T2CON_7
	.globl _T2CON_6
	.globl _T2CON_5
	.globl _T2CON_4
	.globl _T2CON_3
	.globl _T2CON_2
	.globl _T2CON_1
	.globl _T2CON_0
	.globl _PT2
	.globl _ET2
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _RD
	.globl _WR
	.globl _T1
	.globl _T0
	.globl _INT1
	.globl _INT0
	.globl _TXD
	.globl _RXD
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _EA
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2CON
	.globl _B
	.globl _ACC
	.globl _PSW
	.globl _IP
	.globl _P3
	.globl _IE
	.globl _P2
	.globl _SBUF
	.globl _SCON
	.globl _P1
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
	.globl _lcd_show_bin_num_PARM_4
	.globl _lcd_show_bin_num_PARM_3
	.globl _lcd_show_bin_num_PARM_2
	.globl _lcd_show_hex_num_PARM_4
	.globl _lcd_show_hex_num_PARM_3
	.globl _lcd_show_hex_num_PARM_2
	.globl _lcd_show_dec_num_PARM_4
	.globl _lcd_show_dec_num_PARM_3
	.globl _lcd_show_dec_num_PARM_2
	.globl _lcd_show_int_num_PARM_4
	.globl _lcd_show_int_num_PARM_3
	.globl _lcd_show_int_num_PARM_2
	.globl _lcd_show_string_PARM_3
	.globl _lcd_show_string_PARM_2
	.globl _lcd_show_char_PARM_3
	.globl _lcd_show_char_PARM_2
	.globl _lcd_set_ac_PARM_2
	.globl _lcd_pow_PARM_2
	.globl _lcd_write_command
	.globl _lcd_write_data
	.globl _lcd_1602_init
	.globl _lcd_set_ac
	.globl _lcd_show_char
	.globl _lcd_show_string
	.globl _lcd_show_int_num
	.globl _lcd_show_dec_num
	.globl _lcd_show_hex_num
	.globl _lcd_show_bin_num
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_SP	=	0x0081
_DPL	=	0x0082
_DPH	=	0x0083
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_P1	=	0x0090
_SCON	=	0x0098
_SBUF	=	0x0099
_P2	=	0x00a0
_IE	=	0x00a8
_P3	=	0x00b0
_IP	=	0x00b8
_PSW	=	0x00d0
_ACC	=	0x00e0
_B	=	0x00f0
_T2CON	=	0x00c8
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_EA	=	0x00af
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_RXD	=	0x00b0
_TXD	=	0x00b1
_INT0	=	0x00b2
_INT1	=	0x00b3
_T0	=	0x00b4
_T1	=	0x00b5
_WR	=	0x00b6
_RD	=	0x00b7
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_P	=	0x00d0
_F1	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
_ET2	=	0x00ad
_PT2	=	0x00bd
_T2CON_0	=	0x00c8
_T2CON_1	=	0x00c9
_T2CON_2	=	0x00ca
_T2CON_3	=	0x00cb
_T2CON_4	=	0x00cc
_T2CON_5	=	0x00cd
_T2CON_6	=	0x00ce
_T2CON_7	=	0x00cf
_CP_RL2	=	0x00c8
_C_T2	=	0x00c9
_TR2	=	0x00ca
_EXEN2	=	0x00cb
_TCLK	=	0x00cc
_RCLK	=	0x00cd
_EXF2	=	0x00ce
_TF2	=	0x00cf
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_lcd_pow_PARM_2:
	.ds 2
_lcd_set_ac_PARM_2:
	.ds 2
_lcd_show_char_PARM_2:
	.ds 2
_lcd_show_char_PARM_3:
	.ds 1
_lcd_show_string_PARM_2:
	.ds 2
_lcd_show_string_PARM_3:
	.ds 3
_lcd_show_int_num_PARM_2:
	.ds 2
_lcd_show_int_num_PARM_3:
	.ds 2
_lcd_show_int_num_PARM_4:
	.ds 2
_lcd_show_dec_num_PARM_2:
	.ds 2
_lcd_show_dec_num_PARM_3:
	.ds 2
_lcd_show_dec_num_PARM_4:
	.ds 2
_lcd_show_hex_num_PARM_2:
	.ds 2
_lcd_show_hex_num_PARM_3:
	.ds 1
_lcd_show_hex_num_PARM_4:
	.ds 2
_lcd_show_bin_num_PARM_2:
	.ds 2
_lcd_show_bin_num_PARM_3:
	.ds 2
_lcd_show_bin_num_PARM_4:
	.ds 2
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_delay'
;------------------------------------------------------------
;i                         Allocated to registers r6 
;j                         Allocated to registers r7 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:5: void lcd_delay(void)
;	-----------------------------------------
;	 function lcd_delay
;	-----------------------------------------
_lcd_delay:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
;	lib/lcd1602/lib_lcd1602.c:12: while (--j);
	mov	r7,#0xef
	mov	r6,#0x02
00101$:
	djnz	r7,00101$
;	lib/lcd1602/lib_lcd1602.c:13: } while (--i);
	djnz	r6,00101$
;	lib/lcd1602/lib_lcd1602.c:14: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_pow'
;------------------------------------------------------------
;pow                       Allocated with name '_lcd_pow_PARM_2'
;num                       Allocated to registers r6 r7 
;i                         Allocated to registers r2 r3 
;result                    Allocated to registers r4 r5 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:17: unsigned int lcd_pow(unsigned int num, unsigned int pow)
;	-----------------------------------------
;	 function lcd_pow
;	-----------------------------------------
_lcd_pow:
	mov	r6,dpl
	mov	r7,dph
;	lib/lcd1602/lib_lcd1602.c:20: unsigned int result = 1;
	mov	r4,#0x01
	mov	r5,#0x00
;	lib/lcd1602/lib_lcd1602.c:22: for (i=0; i<pow; i++) {
	mov	r2,#0x00
	mov	r3,#0x00
00103$:
	clr	c
	mov	a,r2
	subb	a,_lcd_pow_PARM_2
	mov	a,r3
	subb	a,(_lcd_pow_PARM_2 + 1)
	jnc	00101$
;	lib/lcd1602/lib_lcd1602.c:23: result *= num;
	mov	__mulint_PARM_2,r6
	mov	(__mulint_PARM_2 + 1),r7
	mov	dpl,r4
	mov	dph,r5
	push	ar7
	push	ar6
	push	ar3
	push	ar2
	lcall	__mulint
	mov	r4,dpl
	mov	r5,dph
	pop	ar2
	pop	ar3
	pop	ar6
	pop	ar7
;	lib/lcd1602/lib_lcd1602.c:22: for (i=0; i<pow; i++) {
	inc	r2
	cjne	r2,#0x00,00103$
	inc	r3
	sjmp	00103$
00101$:
;	lib/lcd1602/lib_lcd1602.c:26: return result;
	mov	dpl,r4
	mov	dph,r5
;	lib/lcd1602/lib_lcd1602.c:27: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_write_command'
;------------------------------------------------------------
;command                   Allocated to registers r7 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:29: void lcd_write_command(unsigned char command)
;	-----------------------------------------
;	 function lcd_write_command
;	-----------------------------------------
_lcd_write_command:
	mov	r7,dpl
;	lib/lcd1602/lib_lcd1602.c:31: LCD_RS = 0;
;	assignBit
	clr	_P1_2
;	lib/lcd1602/lib_lcd1602.c:32: LCD_WR = 0;
;	assignBit
	clr	_P1_1
;	lib/lcd1602/lib_lcd1602.c:34: LCD_DATA_PORT = command;
	mov	_P0,r7
;	lib/lcd1602/lib_lcd1602.c:35: LCD_EN = 1;
;	assignBit
	setb	_P1_0
;	lib/lcd1602/lib_lcd1602.c:36: lcd_delay();
	lcall	_lcd_delay
;	lib/lcd1602/lib_lcd1602.c:37: LCD_EN = 0;
;	assignBit
	clr	_P1_0
;	lib/lcd1602/lib_lcd1602.c:38: lcd_delay();
;	lib/lcd1602/lib_lcd1602.c:39: }
	ljmp	_lcd_delay
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_write_data'
;------------------------------------------------------------
;data                      Allocated to registers r7 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:41: void lcd_write_data(unsigned char data)
;	-----------------------------------------
;	 function lcd_write_data
;	-----------------------------------------
_lcd_write_data:
	mov	r7,dpl
;	lib/lcd1602/lib_lcd1602.c:43: LCD_RS = 1;
;	assignBit
	setb	_P1_2
;	lib/lcd1602/lib_lcd1602.c:44: LCD_WR = 0;
;	assignBit
	clr	_P1_1
;	lib/lcd1602/lib_lcd1602.c:46: LCD_DATA_PORT = data;
	mov	_P0,r7
;	lib/lcd1602/lib_lcd1602.c:47: LCD_EN = 1;
;	assignBit
	setb	_P1_0
;	lib/lcd1602/lib_lcd1602.c:48: lcd_delay();
	lcall	_lcd_delay
;	lib/lcd1602/lib_lcd1602.c:49: LCD_EN = 0;
;	assignBit
	clr	_P1_0
;	lib/lcd1602/lib_lcd1602.c:50: lcd_delay();
;	lib/lcd1602/lib_lcd1602.c:51: }
	ljmp	_lcd_delay
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_1602_init'
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:53: void lcd_1602_init(void)
;	-----------------------------------------
;	 function lcd_1602_init
;	-----------------------------------------
_lcd_1602_init:
;	lib/lcd1602/lib_lcd1602.c:56: lcd_write_command(0x06);
	mov	dpl,#0x06
	lcall	_lcd_write_command
;	lib/lcd1602/lib_lcd1602.c:58: lcd_write_command(0x0C);
	mov	dpl,#0x0c
	lcall	_lcd_write_command
;	lib/lcd1602/lib_lcd1602.c:60: lcd_write_command(0x38);
	mov	dpl,#0x38
	lcall	_lcd_write_command
;	lib/lcd1602/lib_lcd1602.c:62: lcd_write_command(0x01);
	mov	dpl,#0x01
;	lib/lcd1602/lib_lcd1602.c:63: }
	ljmp	_lcd_write_command
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_set_ac'
;------------------------------------------------------------
;column                    Allocated with name '_lcd_set_ac_PARM_2'
;line                      Allocated to registers r6 r7 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:65: void lcd_set_ac(unsigned int line, unsigned int column)
;	-----------------------------------------
;	 function lcd_set_ac
;	-----------------------------------------
_lcd_set_ac:
	mov	r6,dpl
	mov	r7,dph
;	lib/lcd1602/lib_lcd1602.c:67: if (line == 1) {
	cjne	r6,#0x01,00102$
	cjne	r7,#0x00,00102$
;	lib/lcd1602/lib_lcd1602.c:68: lcd_write_command(0x80 | (column - 1));
	mov	r7,_lcd_set_ac_PARM_2
	dec	r7
	mov	a,#0x80
	orl	a,r7
	mov	dpl,a
	ljmp	_lcd_write_command
00102$:
;	lib/lcd1602/lib_lcd1602.c:70: lcd_write_command(0x80 | ((column - 1) + 0x40));
	mov	r7,_lcd_set_ac_PARM_2
	mov	a,#0x3f
	add	a,r7
	mov	r7,a
	mov	a,#0x80
	orl	a,r7
	mov	dpl,a
;	lib/lcd1602/lib_lcd1602.c:72: }
	ljmp	_lcd_write_command
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_show_char'
;------------------------------------------------------------
;column                    Allocated with name '_lcd_show_char_PARM_2'
;show_char                 Allocated with name '_lcd_show_char_PARM_3'
;line                      Allocated to registers 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:74: void lcd_show_char(unsigned int line, unsigned int column, unsigned char show_char)
;	-----------------------------------------
;	 function lcd_show_char
;	-----------------------------------------
_lcd_show_char:
;	lib/lcd1602/lib_lcd1602.c:76: lcd_set_ac(line, column);
	mov	_lcd_set_ac_PARM_2,_lcd_show_char_PARM_2
	mov	(_lcd_set_ac_PARM_2 + 1),(_lcd_show_char_PARM_2 + 1)
	lcall	_lcd_set_ac
;	lib/lcd1602/lib_lcd1602.c:77: lcd_write_data(show_char);
	mov	dpl,_lcd_show_char_PARM_3
;	lib/lcd1602/lib_lcd1602.c:78: }
	ljmp	_lcd_write_data
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_show_string'
;------------------------------------------------------------
;column                    Allocated with name '_lcd_show_string_PARM_2'
;show_string               Allocated with name '_lcd_show_string_PARM_3'
;line                      Allocated to registers 
;i                         Allocated to registers r6 r7 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:80: void lcd_show_string(unsigned int line, unsigned int column, unsigned char *show_string)
;	-----------------------------------------
;	 function lcd_show_string
;	-----------------------------------------
_lcd_show_string:
;	lib/lcd1602/lib_lcd1602.c:82: lcd_set_ac(line, column);
	mov	_lcd_set_ac_PARM_2,_lcd_show_string_PARM_2
	mov	(_lcd_set_ac_PARM_2 + 1),(_lcd_show_string_PARM_2 + 1)
	lcall	_lcd_set_ac
;	lib/lcd1602/lib_lcd1602.c:85: while (show_string[i] != '\0') {
	mov	r6,#0x00
	mov	r7,#0x00
00101$:
	mov	a,r6
	add	a,_lcd_show_string_PARM_3
	mov	r3,a
	mov	a,r7
	addc	a,(_lcd_show_string_PARM_3 + 1)
	mov	r4,a
	mov	r5,(_lcd_show_string_PARM_3 + 2)
	mov	dpl,r3
	mov	dph,r4
	mov	b,r5
	lcall	__gptrget
	mov	r5,a
	jz	00104$
;	lib/lcd1602/lib_lcd1602.c:86: lcd_write_data(show_string[i]);
	mov	dpl,r5
	push	ar7
	push	ar6
	lcall	_lcd_write_data
	pop	ar6
	pop	ar7
;	lib/lcd1602/lib_lcd1602.c:87: i++;
	inc	r6
	cjne	r6,#0x00,00101$
	inc	r7
	sjmp	00101$
00104$:
;	lib/lcd1602/lib_lcd1602.c:89: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_show_int_num'
;------------------------------------------------------------
;column                    Allocated with name '_lcd_show_int_num_PARM_2'
;num                       Allocated with name '_lcd_show_int_num_PARM_3'
;length                    Allocated with name '_lcd_show_int_num_PARM_4'
;line                      Allocated to registers 
;i                         Allocated to registers r6 r7 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:91: void lcd_show_int_num(unsigned int line, unsigned int column, unsigned int num, unsigned int length)
;	-----------------------------------------
;	 function lcd_show_int_num
;	-----------------------------------------
_lcd_show_int_num:
;	lib/lcd1602/lib_lcd1602.c:93: lcd_set_ac(line, column);
	mov	_lcd_set_ac_PARM_2,_lcd_show_int_num_PARM_2
	mov	(_lcd_set_ac_PARM_2 + 1),(_lcd_show_int_num_PARM_2 + 1)
	lcall	_lcd_set_ac
;	lib/lcd1602/lib_lcd1602.c:96: for (i=length; i>0; i--) {
	mov	r6,_lcd_show_int_num_PARM_4
	mov	r7,(_lcd_show_int_num_PARM_4 + 1)
00103$:
	mov	a,r6
	orl	a,r7
	jz	00105$
;	lib/lcd1602/lib_lcd1602.c:97: lcd_write_data('0' + ((num / lcd_pow(10, i-1)) % 10));
	mov	a,r6
	add	a,#0xff
	mov	r4,a
	mov	a,r7
	addc	a,#0xff
	mov	r5,a
	mov	_lcd_pow_PARM_2,r4
	mov	(_lcd_pow_PARM_2 + 1),r5
	mov	dptr,#0x000a
	push	ar5
	push	ar4
	lcall	_lcd_pow
	mov	__divuint_PARM_2,dpl
	mov	(__divuint_PARM_2 + 1),dph
	mov	dpl,_lcd_show_int_num_PARM_3
	mov	dph,(_lcd_show_int_num_PARM_3 + 1)
	lcall	__divuint
	mov	__moduint_PARM_2,#0x0a
	mov	(__moduint_PARM_2 + 1),#0x00
	lcall	__moduint
	mov	r2,dpl
	mov	a,#0x30
	add	a,r2
	mov	dpl,a
	lcall	_lcd_write_data
	pop	ar4
	pop	ar5
;	lib/lcd1602/lib_lcd1602.c:96: for (i=length; i>0; i--) {
	mov	ar6,r4
	mov	ar7,r5
	sjmp	00103$
00105$:
;	lib/lcd1602/lib_lcd1602.c:99: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_show_dec_num'
;------------------------------------------------------------
;column                    Allocated with name '_lcd_show_dec_num_PARM_2'
;num                       Allocated with name '_lcd_show_dec_num_PARM_3'
;length                    Allocated with name '_lcd_show_dec_num_PARM_4'
;line                      Allocated to registers 
;single_num                Allocated to registers r6 r7 
;i                         Allocated to registers r4 r5 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:101: void lcd_show_dec_num(unsigned int line, unsigned int column, int num, unsigned int length)
;	-----------------------------------------
;	 function lcd_show_dec_num
;	-----------------------------------------
_lcd_show_dec_num:
;	lib/lcd1602/lib_lcd1602.c:103: lcd_set_ac(line, column);
	mov	_lcd_set_ac_PARM_2,_lcd_show_dec_num_PARM_2
	mov	(_lcd_set_ac_PARM_2 + 1),(_lcd_show_dec_num_PARM_2 + 1)
	lcall	_lcd_set_ac
;	lib/lcd1602/lib_lcd1602.c:106: if (num < 0) {
	mov	a,(_lcd_show_dec_num_PARM_3 + 1)
	jnb	acc.7,00102$
;	lib/lcd1602/lib_lcd1602.c:107: single_num = -num;
	clr	c
	clr	a
	subb	a,_lcd_show_dec_num_PARM_3
	mov	r6,a
	clr	a
	subb	a,(_lcd_show_dec_num_PARM_3 + 1)
	mov	r7,a
;	lib/lcd1602/lib_lcd1602.c:108: lcd_write_data('-');
	mov	dpl,#0x2d
	push	ar7
	push	ar6
	lcall	_lcd_write_data
	pop	ar6
	pop	ar7
	sjmp	00103$
00102$:
;	lib/lcd1602/lib_lcd1602.c:110: single_num = num;
	mov	r6,_lcd_show_dec_num_PARM_3
	mov	r7,(_lcd_show_dec_num_PARM_3 + 1)
;	lib/lcd1602/lib_lcd1602.c:111: lcd_write_data('+');
	mov	dpl,#0x2b
	push	ar7
	push	ar6
	lcall	_lcd_write_data
	pop	ar6
	pop	ar7
00103$:
;	lib/lcd1602/lib_lcd1602.c:114: for (i=length; i>0; i--) {
	mov	r4,_lcd_show_dec_num_PARM_4
	mov	r5,(_lcd_show_dec_num_PARM_4 + 1)
00106$:
	mov	a,r4
	orl	a,r5
	jnz	00125$
	ret
00125$:
;	lib/lcd1602/lib_lcd1602.c:115: lcd_write_data('0' + ((single_num / lcd_pow(10, i-1)) % 10));
	mov	a,r4
	add	a,#0xff
	mov	r2,a
	mov	a,r5
	addc	a,#0xff
	mov	r3,a
	mov	_lcd_pow_PARM_2,r2
	mov	(_lcd_pow_PARM_2 + 1),r3
	mov	dptr,#0x000a
	push	ar7
	push	ar6
	push	ar3
	push	ar2
	lcall	_lcd_pow
	mov	__divuint_PARM_2,dpl
	mov	(__divuint_PARM_2 + 1),dph
	pop	ar2
	pop	ar3
	pop	ar6
	pop	ar7
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	push	ar3
	push	ar2
	lcall	__divuint
	mov	__moduint_PARM_2,#0x0a
	mov	(__moduint_PARM_2 + 1),#0x00
	lcall	__moduint
	mov	r0,dpl
	mov	a,#0x30
	add	a,r0
	mov	dpl,a
	lcall	_lcd_write_data
	pop	ar2
	pop	ar3
	pop	ar6
	pop	ar7
;	lib/lcd1602/lib_lcd1602.c:114: for (i=length; i>0; i--) {
	mov	ar4,r2
	mov	ar5,r3
;	lib/lcd1602/lib_lcd1602.c:117: }
	ljmp	00106$
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_show_hex_num'
;------------------------------------------------------------
;column                    Allocated with name '_lcd_show_hex_num_PARM_2'
;hex_num                   Allocated with name '_lcd_show_hex_num_PARM_3'
;length                    Allocated with name '_lcd_show_hex_num_PARM_4'
;line                      Allocated to registers 
;i                         Allocated to registers 
;single_num                Allocated to registers r4 r5 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:119: void lcd_show_hex_num   (
;	-----------------------------------------
;	 function lcd_show_hex_num
;	-----------------------------------------
_lcd_show_hex_num:
;	lib/lcd1602/lib_lcd1602.c:126: lcd_set_ac(line, column);
	mov	_lcd_set_ac_PARM_2,_lcd_show_hex_num_PARM_2
	mov	(_lcd_set_ac_PARM_2 + 1),(_lcd_show_hex_num_PARM_2 + 1)
	lcall	_lcd_set_ac
;	lib/lcd1602/lib_lcd1602.c:129: for (i=length; i>0; i--) {
	mov	r6,_lcd_show_hex_num_PARM_4
	mov	r7,(_lcd_show_hex_num_PARM_4 + 1)
00106$:
	mov	a,r6
	orl	a,r7
	jz	00108$
;	lib/lcd1602/lib_lcd1602.c:130: single_num = hex_num / lcd_pow(16, i-1) % 16;
	mov	a,r6
	add	a,#0xff
	mov	_lcd_pow_PARM_2,a
	mov	a,r7
	addc	a,#0xff
	mov	(_lcd_pow_PARM_2 + 1),a
	mov	dptr,#0x0010
	push	ar7
	push	ar6
	lcall	_lcd_pow
	mov	__divuint_PARM_2,dpl
	mov	(__divuint_PARM_2 + 1),dph
	mov	r4,_lcd_show_hex_num_PARM_3
	mov	r5,#0x00
	mov	dpl,r4
	mov	dph,r5
	lcall	__divuint
	mov	a,dpl
	mov	b,dph
	pop	ar6
	pop	ar7
	anl	a,#0x0f
	mov	r4,a
	mov	r5,#0x00
;	lib/lcd1602/lib_lcd1602.c:131: if (single_num < 10) {
	clr	c
	mov	a,r4
	subb	a,#0x0a
	mov	a,r5
	subb	a,#0x00
	jnc	00102$
;	lib/lcd1602/lib_lcd1602.c:132: lcd_write_data('0' + single_num);
	mov	ar3,r4
	mov	a,#0x30
	add	a,r3
	mov	dpl,a
	push	ar7
	push	ar6
	lcall	_lcd_write_data
	pop	ar6
	pop	ar7
	sjmp	00107$
00102$:
;	lib/lcd1602/lib_lcd1602.c:134: lcd_write_data('A' + single_num - 10);
	mov	a,#0x37
	add	a,r4
	mov	dpl,a
	push	ar7
	push	ar6
	lcall	_lcd_write_data
	pop	ar6
	pop	ar7
00107$:
;	lib/lcd1602/lib_lcd1602.c:129: for (i=length; i>0; i--) {
	dec	r6
	cjne	r6,#0xff,00127$
	dec	r7
00127$:
	sjmp	00106$
00108$:
;	lib/lcd1602/lib_lcd1602.c:137: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'lcd_show_bin_num'
;------------------------------------------------------------
;column                    Allocated with name '_lcd_show_bin_num_PARM_2'
;bin_num                   Allocated with name '_lcd_show_bin_num_PARM_3'
;length                    Allocated with name '_lcd_show_bin_num_PARM_4'
;line                      Allocated to registers 
;i                         Allocated to registers r6 r7 
;------------------------------------------------------------
;	lib/lcd1602/lib_lcd1602.c:139: void lcd_show_bin_num   (
;	-----------------------------------------
;	 function lcd_show_bin_num
;	-----------------------------------------
_lcd_show_bin_num:
;	lib/lcd1602/lib_lcd1602.c:146: lcd_set_ac(line, column);
	mov	_lcd_set_ac_PARM_2,_lcd_show_bin_num_PARM_2
	mov	(_lcd_set_ac_PARM_2 + 1),(_lcd_show_bin_num_PARM_2 + 1)
	lcall	_lcd_set_ac
;	lib/lcd1602/lib_lcd1602.c:149: for (i=length; i>0; i--) {
	mov	r6,_lcd_show_bin_num_PARM_4
	mov	r7,(_lcd_show_bin_num_PARM_4 + 1)
00103$:
	mov	a,r6
	orl	a,r7
	jz	00105$
;	lib/lcd1602/lib_lcd1602.c:150: lcd_write_data('0' + bin_num / lcd_pow(2, i-1) % 2);
	mov	a,r6
	add	a,#0xff
	mov	r4,a
	mov	a,r7
	addc	a,#0xff
	mov	r5,a
	mov	_lcd_pow_PARM_2,r4
	mov	(_lcd_pow_PARM_2 + 1),r5
	mov	dptr,#0x0002
	push	ar5
	push	ar4
	lcall	_lcd_pow
	mov	__divuint_PARM_2,dpl
	mov	(__divuint_PARM_2 + 1),dph
	mov	dpl,_lcd_show_bin_num_PARM_3
	mov	dph,(_lcd_show_bin_num_PARM_3 + 1)
	lcall	__divuint
	mov	a,dpl
	mov	b,dph
	anl	a,#0x01
	add	a,#0x30
	mov	dpl,a
	lcall	_lcd_write_data
	pop	ar4
	pop	ar5
;	lib/lcd1602/lib_lcd1602.c:149: for (i=length; i>0; i--) {
	mov	ar6,r4
	mov	ar7,r5
	sjmp	00103$
00105$:
;	lib/lcd1602/lib_lcd1602.c:152: }
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
