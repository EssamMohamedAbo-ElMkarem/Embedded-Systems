/*
 * Blinking Led.c
 *
 * Created: 1/18/2020 8:00:34 AM
 * Author : Essam Mohamed
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA = 0b00000001;
    while (1) 
    {
		PORTA = 0b00000001;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(500);
    }
}

