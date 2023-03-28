#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers
 * @a: the array
 * @n: the length of the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		prinf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
