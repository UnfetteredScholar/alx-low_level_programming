#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory space
 * @ptr: the old memeory space
 * @old_size: the old memory space size
 * @new_size: the new memory space size
 *
 * Return: pointer to the new memeory space, else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res = NULL;
	unsigned int len = new_size > old_size ? old_size : new_size;
	unsigned int i;
	char *new = NULL;
	char *old = NULL;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	res = malloc(new_size);
	if (res == NULL)
		return (NULL);

	new = (char *)res;
	old = (char *)ptr;
	for (i = 0; i < len; i++)
		new[i] = old[i];
	free(ptr);
	return (res);
}
