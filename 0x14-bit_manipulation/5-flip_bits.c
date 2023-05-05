#include "main.h"

/**
 * flip_bits - finds the bits to flip to get n->m
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int rem = n ^ m;

	while (rem != 0)
	{
		if ((rem & 1) == 1)
			count++;
		rem = rem >> 1;
	}
	return (count);
}
