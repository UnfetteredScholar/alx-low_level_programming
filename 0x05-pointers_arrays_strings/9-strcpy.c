#include "main.h"

/**
 * _strcpy - coppies a tring from source to destination
 * @dest: the destination
 * @src: the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
