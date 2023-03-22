#include "main.h"

/**
 * jack_bauer - prints all minutes in 24 hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours = 0;
	int min = -1;
	char time[4];

	while (hours != 23 || min != 59)
	{
		min++;

		if (min == 60)
		{
			hours++;
			min = 0;
		}
		time[0] = '0' + ((hours / 10) % 10);
		time[1] = '0' + (hours % 10);
		time[2] = '0' + ((min / 10) % 10);
		time[3] = '0' + (min % 10);

		_putchar(time[0]);
		_putchar(time[1]);
		_putchar(':');
		_putchar(time[2]);
		_putchar(time[3]);
		_putchar('\n');
	}
}
