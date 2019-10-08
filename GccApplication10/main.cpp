/*
 * GccApplication7.cpp
 *
 * Created: 10/6/2019 9:20:18 AM
 * Author : annhienuit ft victor
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#define sbi(PORT,bit) {PORT |= (1<<bit);}
#define cbi(PORT,bit) {PORT &= ~(1<<bit);}
#define tbi(PORT,bit) {PORT ^= (1<<bit);}
int main(void)
{
	int n,i;
	DDRA = 0xff;
	DDRD = 0xff;
	DDRB = 0xff;
	DDRC = 0xff;
    while (1) 
    {
		for (n=0;n<2;n++)
		{
			for (i=0; i < 10; i++)
			{
				sbi(PORTA,i);
				_delay_ms(50);
				cbi(PORTA,i-2);
				_delay_ms(0);
			}
			for (i=0; i < 10; i++)
			{
				sbi(PORTB,i);
				_delay_ms(50);
				cbi(PORTB,i-2);
				_delay_ms(0);
			}
			for (i=0; i < 10; i++)
			{
				sbi(PORTC,i);
				_delay_ms(50);
				cbi(PORTC,i-2);
				_delay_ms(0);
			}
			for (i=0; i < 10; i++)
			{
				sbi(PORTD,i);
				_delay_ms(50);
				cbi(PORTD,i-2)
			}
		_delay_ms(00);
		}
		for (n=0;n<2;n++)
		{
			for (i=0;i<8;i++)
			{
				if (i%2==0)
				{
					sbi(PORTA,i);
					_delay_ms(100);
					cbi(PORTA,i);		
				}
			}
			for (i=0;i<8;i++)
			{
				if (i%2==0)
				{
					sbi(PORTB,i);
					_delay_ms(100);
					cbi(PORTB,i);		
				}
			}
			for (i=0;i<8;i++)
			{
				if (i%2==0)
				{
					sbi(PORTC,i);
					_delay_ms(100);
					cbi(PORTC,i);
				}
			}
			for (i=0;i<8;i++)
			{
				if (i%2==0)
				{
					sbi(PORTD,i);
					_delay_ms(100);
					cbi(PORTD,i);		
				}
			}
			for (i=0;i<8;i++)
			{
				if (i%2==1)
				{
					sbi(PORTA,i);
					_delay_ms(100);
					cbi(PORTA,i);
				}
			}
			for (i=0;i<8;i++)
			{
				if (i%2==1)
				{
					sbi(PORTB,i);
					_delay_ms(100);
					cbi(PORTB,i);
				}
			}
			for (i=0;i<8;i++)
			{
				if (i%2==1)
				{
					sbi(PORTC,i);
					_delay_ms(100);
					cbi(PORTC,i);
				}
			}
			for (i=0;i<8;i++)
			{
				if (i%2==1)
				{
					sbi(PORTD,i);
					_delay_ms(100);
					cbi(PORTD,i);
				}
			}
		}
		for (n=0;n<2;n++)
		{
			for (i=0; i < 8; i++)
			{
				sbi(PORTA,i);
				_delay_ms(100);
				cbi(PORTA,i);
				_delay_ms(100);
			}
			for (i=0; i < 8; i++)
			{
				sbi(PORTB,i);
				_delay_ms(100);
				cbi(PORTB,i);
				_delay_ms(100);
			}
			for (i=0;i<8;i++)
			{
				sbi(PORTC,i);
				_delay_ms(100);
				cbi(PORTC,i);
				_delay_ms(100);
			}
			for (i=0;i<8;i++)
			{
				sbi(PORTD,i);
				_delay_ms(100);
				cbi(PORTD,i);
				_delay_ms(100);
			}
		}
		for(n=0;n<2;n++)
		{
			for (i=0; i < 8; i++)
			{
				sbi(PORTA,i);
				sbi(PORTB,i);
				sbi(PORTC,i);
				sbi(PORTD,i);
			}
			_delay_ms(500);
			for (i=0;i<8;i++)
			{
				cbi(PORTA,i);
				cbi(PORTB,i);
				cbi(PORTC,i);
				cbi(PORTD,i);
			}
			_delay_ms(500);
		}
		for(n=0;n<2;n++)
		{
		for (i=0; i < 8; i++)
		{
			sbi(PORTA,i);
			_delay_ms(00);
		}
		for (i=0; i < 8; i++)
		{
			sbi(PORTB,i);
			_delay_ms(00);
		}
		for (i=0;i<8;i++)
		{
			sbi(PORTC,i);
			_delay_ms(00);
		}
		for (i=0;i<8;i++)
		{
			sbi(PORTD,i);
			_delay_ms(00);
		}
		_delay_ms(100);
		for (i=0;i<8;i++)
		{
			cbi(PORTA,i);
			cbi(PORTB,i);
			cbi(PORTC,i);
			cbi(PORTD,i);
		}
		_delay_ms(100);
		}
		_delay_ms(5000);
    }
}