#include "main.h"
/**
 * _abs - absolute value of an integer.
 * @n: number
 * Return: n if n and -n if -n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
