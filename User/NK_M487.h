/*
 * NK_M487.h
 *
 *  Created on: 31 de mar de 2021
 *      Author: duan_
 */

#ifndef NK_M487_H_
#define NK_M487_H_

// GPIO's
#define	LED1		PH7
#define LED2		PH6
#define JT_RIGHT	PG4
#define JT_LEFT		PC9
#define JT_DOWN		PC10
#define JT_CENTER	PG3
#define JT_UP		PG2
#define SW1			PA0
#define SW2			PA1
#define BUZZER		BPWM0, BPWM_CH_5_MASK

// barramento I2C2
#define AXIS3_ADR 	0X68
#define AXIS3_INT	PD2
#define EEPROM_ADR	0x50



//Display
#define LCD_RS	PH3
#define LCD_RST	PB6
#define LCD_BL	PB7
#define LCD_XR	PB9
#define LCD_YU	PB8
#define LCD_XL	PH4
#define LCD_YD	PH5



#endif /* NK_M487_H_ */
