#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the econd string
 *
 * Return: an integer (bigger, equal, smaller) (>0, 0 , <0)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (diff == 0)
	{
		diff = s1[i] - s2[i];

		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (diff);
}
