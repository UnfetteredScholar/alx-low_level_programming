#include "main.h"

/**
 * get_bit - gets the bit at the specified index
 * @n: the number
 * @index: the index of the bit
 *
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (index > 32)
		return (-1);
	bit = (n >> index);
	return (bit & 1);
}
