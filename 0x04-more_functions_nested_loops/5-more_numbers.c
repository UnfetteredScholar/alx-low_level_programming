#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar('0' + ((num / 10) % 10));
			_putchar('0' + (num % 10));
		}
		_putchar('\n');
	}
}
