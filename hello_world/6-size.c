#include <stdio.h>
/**
 * main - décrire la taille de chaque ligne, -m32
 * Return: 0
 */

int main(void)
{
printf("Size of a char: %zu 1\n", sizeof(char));
printf("Size of an int: %zu 4\n", sizeof(int));
printf("Size of a long int: %zu 4\n", sizeof(long int));
printf("Size of a long long int: %zu 8\n", sizeof(long long int));
printf("Size of a float: %zu 4\n", sizeof(float));

return (0);
}
