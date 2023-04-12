#include <stdlib.h>
#include "main.h"

/**
 * str_concat - merges two two strings into one
 * @s1: the fitst string
 * @s2: the second string
 *
 * Return: pointer to new string or else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int j = 0;
	int i;
	char *concat = NULL;

	while (s1[len1] != '\0' && s1 != NULL)
		len1++;
	while (s2[len2] != '\0' && s2 != NULL)
		len2++;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat[j] = s1[i];
		j++;
	}
	for (i = 0; i < len2; i++)
	{
		concat[j] = s2[i];
		j++;
	}
	concat[j] = '\0';
	return (concat);
}
