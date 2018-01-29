/*
 * LEDBlink.c
 *
 * Created: 11/27/2016 12:46:29 AM
 * Author : Krishna Ray
 */ 

#define F_CPU 8000000UL//Define clock frequency
#include <avr/io.h>//include io library
#include <util/delay.h>//delay library



int main(void)
{
	//DDRD |= (1<<PD0); //Data direction register 
	DDRD = 0b00000001;
	PORTD = 0b00000011;
	while (1) 
    {
		//PORTD |= (1<<PD0);//PORT Output
		//_delay_ms(1000);
		//PORTD &= (0<<PD0);//PORT Output
		//_delay_ms(100);
    }
   return 0;
}