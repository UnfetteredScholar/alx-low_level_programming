#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in reverse lowercase
 *
 * Return: - always
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');

	return (0);
}
