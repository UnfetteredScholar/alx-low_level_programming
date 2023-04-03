#include "main.h"

/**
 * _memcpy - coppies n bytes from soucre to destination
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
