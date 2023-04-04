#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be found
 *
 * Return: pointer to first occurane of c else NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *res = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			res = s + i;
			break;
		}
		i++;
	}
	return (res);
}
