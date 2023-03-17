#include <stdio.h>
#include <string.h>

/**
 * main - prints text using printf()
 *
 * Return: 0 always
 */

int main(void)
{
	char str[] = "with proper grammar, but the outcome is a piece of art,\0";

	printf("%s\n", str);

	return (0);
}
