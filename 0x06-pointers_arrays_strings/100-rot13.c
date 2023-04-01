#include "main.h"

/**
 * rot13 - encodes a string using rot 13
 * @s: the string to be encoded
 *
 * Return: a pointer to the string
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
				s[i] -= 13;
			else
				s[i] += 13;
			i++;
		}
		i++;
	}
	return (s);
}
