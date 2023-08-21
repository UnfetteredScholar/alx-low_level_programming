#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	char c;

	while (*(str + i) != '\0')
	{
		c = *(str + i);
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
