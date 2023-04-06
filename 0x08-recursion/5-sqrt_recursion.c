#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: the number
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (n);
	return (check_sqrt(n, 2));
}

/**
 * check_sqrt - checks if a number is the sqrt
 * @n: the number
 * @r: possible root
 *
 * Return: the square root else -1
 */
int check_sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r > n / 2)
		return (-1);

	return (check_sqrt(n, r + 1));
}
