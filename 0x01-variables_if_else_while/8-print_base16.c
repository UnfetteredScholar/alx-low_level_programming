#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 16 numbers
 *
 * Return: 0 always
 */
int main(void)
{
	char num;
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
