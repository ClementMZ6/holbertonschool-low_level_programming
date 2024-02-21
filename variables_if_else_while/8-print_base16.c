#include <stdio.h>
/**
 *main - blak blok
 *just putchar alphabet
 *Return: 0
 */
int main(void)
{
	int digit = 48;
	char letter = 'a';

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
