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

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
