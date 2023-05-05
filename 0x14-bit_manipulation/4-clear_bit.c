#include "main.h"

/**
 * clear_bit - clears the bit at the specified index
 * @n: pointer to the number
 * @index: the index of the bit to clear
 *
 * Return: 1 on success, 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear = 1;

	if (index > 32)
		return (-1);
	clear = clear << index;
	clear = ~clear;
	*n = (*n) & clear;
	return (1);
}
