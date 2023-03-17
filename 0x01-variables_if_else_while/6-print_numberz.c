#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 10 numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
