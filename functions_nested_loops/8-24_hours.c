#include "main.h"
/**
 * jack_bauer - and today is the longest day of my life
 * @a: jack_bauer
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24 ; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{	
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
}
