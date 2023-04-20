#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - calls a funtion with each member of the array
 * @array: the array
 * @size: size of the array
 * @action: the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
