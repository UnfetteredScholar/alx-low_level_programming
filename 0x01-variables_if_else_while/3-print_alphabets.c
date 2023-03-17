#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lower and uppercase letters
 *
 * Return: 0 always
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'a')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
