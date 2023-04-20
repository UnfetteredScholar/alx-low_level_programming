#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an item in an array
 * @array: the array of int
 * @size: the array size
 * @cmp: function to compare values
 *
 * Return: index of element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
