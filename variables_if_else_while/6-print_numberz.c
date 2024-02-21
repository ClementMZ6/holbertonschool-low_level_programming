#include <stdio.h>
/**
 * main - Numbers
 * putchar digit numbers from base 10 starting 0
 * Return: 0
 */
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
