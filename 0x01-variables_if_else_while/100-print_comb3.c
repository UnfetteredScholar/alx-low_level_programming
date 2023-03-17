#include <stdio.h>
#include <stdlib.h>

/**
 * main - print unique combinations of different numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);

			if (num1 != '8' || num2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
