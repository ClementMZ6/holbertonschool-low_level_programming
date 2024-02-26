#include "main.h"
/**
 * print_most_numbers - don't print 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int a = 48;
	int b = 57;

	int c = 50;
	int d = 52;

	while (a <= b)
	{
		(a != c && a != d) ?
		_putchar(a) : 0;
		a++;
	}
	_putchar('\n');
}
