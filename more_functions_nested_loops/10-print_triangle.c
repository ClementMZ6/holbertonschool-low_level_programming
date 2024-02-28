#include "main.h"
/**
 * print_triangle - Write a function that print a triangle
 * @size: is the size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j  = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
