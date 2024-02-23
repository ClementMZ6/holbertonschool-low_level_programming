#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x > 0)

		_putchar(x + '0');
	else
	{
		x *= -1;
		_putchar(x + '0');
	}
	return (x);
}
