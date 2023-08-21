#include "main.h"

/**
 * _strncpy - coppies n characters from source to destination
 * @dest: sestination buffer
 * @src: source buffer
 * @n: number of characters to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
