#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be processed
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n *= -1;

	r = n % 10;
	_putchar('0' + r);

	return (r);
}

