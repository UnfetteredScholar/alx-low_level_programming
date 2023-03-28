#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0;
	int r = 0;
	char tmp;

	while (*(s + r) != '\0')
		r++;

	r--;
	while (l < r)
	{
		tmp = *(s + l);
		*(s + l) = *(s + r);
		*(s + r) = tmp;
		l++;
		r--;
	}
}
