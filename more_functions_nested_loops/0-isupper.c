#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: uppercase
 * Return: 1 if 'c' is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
