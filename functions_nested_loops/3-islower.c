#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * @c: letter
 * Return: 1 if 'c' is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
