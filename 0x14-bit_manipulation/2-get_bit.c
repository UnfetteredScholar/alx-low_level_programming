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
	if (n == 0 && index == 0)
	{
		return (n & 0x1);
	}
	else
	{
		n = n >> index;
		/*
		 * if (n == 0)
		 * return (-1);
		*/
		return (n & 0x1);
	}
}
