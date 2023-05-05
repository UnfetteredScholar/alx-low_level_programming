#include "main.h"

/**
 * _mod2 - returns the modulo 2 of a number
 * @n: the number
 *
 * Return: the modulo 2
 */
unsigned long int _mod2(unsigned long int n)
{
	return (n - ((n >> 1) * 2));
}

/**
 * _print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: void
 */
void _print_binary(unsigned long int n)
{
	if (n == 0)
		return;
	_print_binary(n >> 1);
	_putchar('0' + _mod2(n));
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		_print_binary(n);
	}
}
