#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int rem;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	rem = n;
	while (rem > 9)
	{
		rem /= 10;
		div *= 10;
	}

	while (div > 0)
	{
		_putchar('0' + (n / div) % 10);
		div /= 10;
	}
}
