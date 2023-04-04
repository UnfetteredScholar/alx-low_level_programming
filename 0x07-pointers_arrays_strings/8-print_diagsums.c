#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: thesize of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int res1 = 0;
	int res2 = 0;
	int r = 0;
	int c2 = size - 1;

	while (r < size)
	{
		res1 += *((a + r * size) + r);
		res2 += *((a + r * size) + c2);
		c2--;
		r++;
	}
	printf("%d, %d\n", res1, res2);
}
