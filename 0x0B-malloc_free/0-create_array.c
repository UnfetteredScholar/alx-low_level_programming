#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array initialized with a character
 * @size: the size of the array
 * @c: the character to initialize with
 *
 * Return: pointer to the array  else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *res = NULL;
	unsigned int i;

	if (size > 0)
		res = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		res[i] = c;
	return (res);
}
