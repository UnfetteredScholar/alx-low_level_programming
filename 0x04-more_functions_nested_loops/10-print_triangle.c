#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int space = size - 1;
	int hash = 1;
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		/* print spaces */
		for (j = 0; j < space; j++)
			_putchar(' ');
		/* print # */
		for (k = 0; k < hash; k++)
			_putchar('#');
		_putchar('\n');
		space--;
		hash++;
	}
}

