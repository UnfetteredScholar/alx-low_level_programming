#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 *
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime
 * @n: the  number
 * @f: current factor
 *
 * Return: 1 if prime 0 othrwise
 */
int check_prime(int n, int f)
{
	if (f > n / 2)
		return (1);

	if (n % f == 0)
		return (0);
	else
		return (1 && check_prime(n, f + 1));
}	
