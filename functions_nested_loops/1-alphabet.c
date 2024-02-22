#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - ALWAYS IS SAID
 */
void print_alphabet(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		_putchar(z);
		z++;
	}
	_putchar('\n');
}
