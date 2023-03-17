#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints message to stderr using fwrite
 *
 * Return: 1 always
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 59, 1, stderr);

	return (1);
}
