/****************************************************************/
/****************************************************************/
/**********************  Author: shaaban elsayed ****************/
/**********************  Layer:MCAL              ****************/
/**********************  SWE:ADC               ****************/
/**********************  Verison:1.00            ****************/
/**********************  Date:8/4/2024          ****************/
/****************************************************************/
/****************************************************************/


#ifndef ADC_REGISTER_H_
#define ADC_REGISTER_H_

#define  ADMUX               *((volatile u8 *) 0x27)   //ADC multiplexer selection register
#define  ADMUX_REFS1            7                       //Referance selection bit 1
#define  ADMUX_REFS0            6                      //Referance selection bit 0
#define  ADMUX_ADLAR            5                       //ADC left adjust result




#define  ADCSRA             *((volatile u8 *) 0x26)      //ADC control and status register A
#define  ADCSRA_ADEN           7                   //ADC enable
#define  ADCSRA_ADSC           6                  //Start conversion
#define  ADCSRA_ADATE          5               //Auto trigger enable
#define  ADCSRA_ADIF           4              // Interrupt flag 
#define  ADCSRA_ADIE           3               // Interrupt enable
#define  ADCSRA_ADPS2          2               // Prescalar bit 2
#define  ADCSRA_ADPS1          1               //Prescalar bit 1
#define  ADCSRA_ADPS0          0                //  Prescalar  bit 0


#define  ADCH             *((volatile u8 *) 0x25)      //ADC high register
#define  ADCL             *((volatile u8 *) 0x24)       //ADC low register











#endif