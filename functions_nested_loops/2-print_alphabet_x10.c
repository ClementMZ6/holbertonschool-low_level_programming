#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Print the alphabet in lowercase, x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char z = 'a';
	int i = 0;

	while (i < 10)
	{
		z = 'a';
		while (z <= 'z')
		{
			_putchar(z);
			z++;
		}
		_putchar('\n');
		i++;
	}
}
