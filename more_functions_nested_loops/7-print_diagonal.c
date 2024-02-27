#include "main.h"
/**
 * print_diagonal - multiply n x \
 * Return: void
 * @n: is a numbers of \
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, s;

		for (b = 0; b < n; b++)
		{
			for (s = 0; s < b; s++)
			{
				_putchar(' ');
			}
			_putchar(95);
			_putchar('\n');
		}
	}
}
