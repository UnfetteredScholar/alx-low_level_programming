#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area with the constant byte
 * @s: pointer to the memory location
 * @b: the constant character
 * @n: the number of bytes
 *
 * Return: pointer to the memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
