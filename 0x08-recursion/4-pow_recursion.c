#include "main.h"

/**
 * _pow_recursion - finds the power of a number
 * @x: the number
 * @y: the index or power
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
