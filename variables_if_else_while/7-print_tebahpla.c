#include <stdio.h>
/**
 *main - blak blok
 *just putchar alphabet
 *Return: 0
 */
int main(void)
{

	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
