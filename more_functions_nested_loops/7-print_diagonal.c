#include "main.h"
/**
 * print_diagonal - multiply n x \
 *
 * @n: is a number of \
 * Return: void
 */
void print_diagonal(int n)
{
	int b, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			for (s = 0; s < b; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
