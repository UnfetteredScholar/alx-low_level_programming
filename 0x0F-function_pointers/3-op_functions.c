#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: the quocient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulo of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
