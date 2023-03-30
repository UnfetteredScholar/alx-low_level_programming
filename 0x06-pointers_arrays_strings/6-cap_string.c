#include "main.h"

/**
 * cap_string - capitalizes each word in a string
 * @s: the string
 *
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	char sep[] = {'\t', ' ', '\n', ',', ';',
			'.', '!', '?', '\"', '(', ')', '{', '}'};
	int i = 0;
	int j;
	int newWord;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != '\0')
	{
		newWord = 0;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				newWord = 1;
				break;
			}
		}
		if (newWord && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
			i++;
		}
		i++;
	}
	return (s);
}
