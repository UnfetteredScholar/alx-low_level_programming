#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: the string
 *
 * Return: length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (s != NULL)
	{
		while (s[len] != '\0')
			len++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates s1 and max n chars form s2
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters to copy from s2
 *
 * Return: new stirng, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1;
	unsigned int len2;
	char *res = NULL;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len2 = len2 > n ? n : len2;

	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (res == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < len1; i++)
		res[j++] = s1[i];
	for (i = 0; i < len2; i++)
		res[j++] = s2[i];
	res[j] = '\0';

	return (res);
}
