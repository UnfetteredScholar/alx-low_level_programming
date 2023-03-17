#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet
 *
 * Return: 0 always
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
