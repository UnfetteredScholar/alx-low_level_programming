#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates a memory of nmemb * size
 * @nmemb: number of elements in the array
 * @size: size of an array element
 *
 * Return: pointer to allocated memory or else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res = NULL;
	unsigned long prod = size * nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (prod / size != nmemb)
		return (NULL);

	res =  malloc(nmemb * size);
	return (res);
}
