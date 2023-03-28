#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the stirng to convert
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int res = 0;
	int minus = 0;
	int i = 0;

	/* move to the first int while counting -  */
	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			minus++;
		i++;
	}

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	if (minus % 2 != 0)
		res *= -1;

	return (res);
}
