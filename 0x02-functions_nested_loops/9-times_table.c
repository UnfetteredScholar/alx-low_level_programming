#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int nums[]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i;

	while (1)
	{
		for (i = 0; i < 10; i++)
		{
			if (nums[i] > 9)
				_putchar('0' + ((nums[i] / 10) % 10));
			_putchar('0' + (nums[i] % 10));

			if(nums[i] == 81)
				return;

			_putchar(',');
			if ( i < 9 && nums[i + 1] < 10)
				_putchar(' ');
			_putchar(' ');
			nums[i] += i;
		}
		_putchar('\n');
	}
}
