/**********************************************/
/*********************************************/
/**************** Author: Shaaban Oraby  ******/
/*************** Layer: MCAL             ********/
/**************  SWC: TIMER             **********/
/**************  Version : 1.00         **********/

#ifndef  TIMER_REGISTER_H
#define  TIMER_REGISTER_H

#define  TCCR0     *((volatile u8* ) 0x53)        /*Timer0 control register */
#define  TCCR0_WGM00    6                        /*Waveform genration Mode bit 0*/
#define  TCCR0_WGM01    3                       /*Waveform genration Mode bit1 */
#define  TCCR0_CS02     2                       /*Prescaler bit2*/
#define  TCCR0_CS01     1                       /*Prescaler bit1*/
#define  TCCR0_CS00     0                       /*Prescaler bit0*/

#define  OCR0         *((volatile u8* ) 0x5c)       /*Output compare register 0*/

#define  TIMSK        *((volatile u8*) 0x59)        /*Timer mask*/
#define  TIMSK_OCIE0     1                          /*Output compare 0 interrupt enable*/
  

#endif