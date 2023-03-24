#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * is_prime - checks if an integer is prime
 * @n: the integer
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime(long int n)
{
	long int factor = sqrt(n);

	while (factor > 1)
	{
		if (n % factor == 0)
			return (0);
		factor--;
	}

	return (1);
}

/**
 * main - finds the largest prime factor of 612852475143
 *
 * Return: 0 always
 */
int main(void)
{
	long int n = 612852475143;
	long int factor = sqrt(n);

	while (factor > 1)
	{
		if (n % factor == 0 && is_prime(factor))
		{
			printf("%ld\n", factor);
			break;
		}
		factor--;
	}

	return (0);
}
