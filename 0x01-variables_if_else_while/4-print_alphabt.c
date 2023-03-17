#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lower case alphabet except q and e
 *
 * Return: 0 always
 */
int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'q' || lower == 'e')
			continue;

		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
