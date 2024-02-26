#include "main.h"
/**
 * print_line - multiply n x _
 * Return: void
 * @n: is a numbers of _
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
