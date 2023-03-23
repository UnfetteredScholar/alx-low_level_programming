#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = n;
	int j = 1;
	int k;

	if ( n <= 0)
		_putchar('\n');

	while (i > 0)
	{
		/* print the spaces */
		for (k = 1; k < j; k++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i--;
		j++;
	}
}
