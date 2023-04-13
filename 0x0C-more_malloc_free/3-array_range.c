#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array rom a range
 * @min: the min element
 * @max: the max element
 *
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
	int range = max - min + 1;
	int i;
	int *arr = NULL;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * range);
	if (arr != NULL)
	{
		for (i = 0; i < range; i++)
			arr[i] = min + i;
	}
	return (arr);
}
