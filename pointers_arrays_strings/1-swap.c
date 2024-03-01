#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: pointer to st value
 * @b: pointer to nd value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
