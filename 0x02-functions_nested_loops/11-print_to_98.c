#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers n-98
 * @n: the start of the sequence
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	printf("%d", n);

	if (n <= 98)
	{
		for (i = n + 1; i <= 98; i++)
			printf(", %d", n);
	}
	else
	{
		for (i = n - 1; i >= 98; i--)
			printf(", %d", n);
	}
}
