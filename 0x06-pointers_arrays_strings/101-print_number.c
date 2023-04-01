#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int div = 10;
	int mul = 1;

	if (n < 0)
	{
		_putchar('-');
		mul = -1;
	}

	while ((n / div) * mul > 9)
	{
		div *= 10;
	}
	if ((n <= 9 && n >= 0) || (n < 0 && n >= -9))
		div /= 10;
	while (div > 0)
	{
		_putchar('0' + mul * ((n / div) % 10));
		div /= 10;
	}
}
