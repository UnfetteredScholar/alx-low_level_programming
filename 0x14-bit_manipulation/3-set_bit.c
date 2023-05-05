#include "main.h"

/**
 * set_bit - sets the bit at the given index
 * @n: pointer to the number
 * @index: the index
 *
 * Return: 1 if successful or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int or = 1;

	if (index > 32)
		return (-1);
	or = or << index;
	*n = (*n) | or;
	return (1);
}
