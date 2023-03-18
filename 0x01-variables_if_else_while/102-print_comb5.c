#include <stdio.h>
#include <stdlib.h>

/**
 * increment - increments string number
 * @num: the number array
 * Return: void
 */
void increment(int num[])
{
	int i;

	for (i = 3; i >= 0; i--)
	{
		num[i]++;

		if (num[i] <= '9')
		{
			break;
		}
		else
		{
			num[i] = '0';
		}
	}

	if (num[2] == '0' && num[3] == '0')
	{
		num[2] = num[0];
		num[3] = num[1];
		increment(num);
	}
}

/**
 * main - prints possible combinations of two 2 digit numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int num[] = { '0', '0', '0', '1'};

	while (1)
	{
		putchar(num[0]);
		putchar(num[1]);
		putchar(' ');
		putchar(num[2]);
		putchar(num[3]);

		if (num[0] == '9' && num[1] == '8' && num[2] == '9' && num[3] == '9')
			break;
		putchar(',');
		putchar(' ');
		increment(num);
	}
	putchar('\n');

	return (0);
}
