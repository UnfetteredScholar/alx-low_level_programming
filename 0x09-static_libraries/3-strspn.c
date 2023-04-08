#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: characters to accept in substring
 *
 * Return: number of nitial bytes which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i = 0;
	int found;

	while (s[len] != '\0')
	{
		found = 0;
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == s[len])
			{
				found = 1;
				break;
			}
			i++;
		}
		if (!found)
			break;
		len++;
	}
	return (len);
}

