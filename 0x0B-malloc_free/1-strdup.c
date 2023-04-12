#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates the input string
 * @str: the string to be buplicated
 *
 * Return: pointer to duplicate string or else NULL
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dup = NULL;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
