#include "main.h"
/**
 * _isalpha - is a letter in uppercase or lowercase
 * @c: letter or upper or lower
 * Return: 1 if 'c' is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
