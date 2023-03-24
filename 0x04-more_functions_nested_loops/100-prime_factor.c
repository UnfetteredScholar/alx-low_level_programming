#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - finds the largest prime factor of 612852475143
 *
 * Return: 0 always
 */
int main(void)
{
	long int n = 612852475143;
	long int factor = 2;
	long int max;

	while (n != 0)
	{
		if (n % factor != 0)
		{
			factor++;
		}
		else
		{
			max = n;
			n /= factor;
			if (n == 1)
			{
				printf("%ld\n", max);
				break;
			}
		}
	}

	return (0);
}
