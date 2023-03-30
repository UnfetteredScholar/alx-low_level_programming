#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: the string
 *
 * Return: pointer to the string
 */
char *leet(char *s)
{
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j;

	for (i = 0; i < 5; i++)
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == letters[i] || s[j] == (letters[i] + 32))
				s[j] = replace[i];
			j++;
		}
	}
	return (s);
}
