#include "main.h"

/**
 * print_line -  prints a straight line
 * @n: the lenght of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');
	_putchar('\n');
}
