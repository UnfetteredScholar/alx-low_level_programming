#include "main.h"

/**
 * string_toupper - changes all lowercase letters to upper
 * @s: the string
 *
 * Return: pointer to the string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
