#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: the substring
 *
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, found;
	char *res = 0;

	i = 0;
	while (haystack[i] != '\0')
	{
		found = 1;
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
			{
				found = 0;
				break;
			}
			j++;
		}
		if (found)
		{
			res = haystack + i;
			break;
		}
		i++;
	}
	return (res);
}
