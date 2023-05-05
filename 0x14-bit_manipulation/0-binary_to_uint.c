#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the lenght of a string
 * @s: the string
 *
 * Return: the length
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * binary_to_uint - converts a binary number to uint
 * @b: string representing the binary number
 *
 * Return: base 10 number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int len = _strlen(b);
	unsigned int i;
	unsigned int j = 0;

	for (j = 0, i = len - 1; j < len; j++, i--)
	{
		if (b[i] == '0' || b[i] == '1')
			num += ((b[i] - '0') * (1 << j));
		else
			return (0);
	}
	return (num);
}
