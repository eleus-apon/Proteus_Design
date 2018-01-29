/*
 * LEDproject.c
 *
 * Created: 10/18/2017 1:44:25 PM
 * Author : Krishna Ray
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>


int main(void)
{
	DDRD |= (1 << PD0);
	PORTD |= (1 << PD0);
    /* Replace with your application code */
    while (1) 
    {
    }
}

