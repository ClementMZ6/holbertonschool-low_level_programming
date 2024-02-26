#include "main.h"
/**
 * print_numbers - print 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int a = 48;
	int b = 57;

	while (a <= b)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
