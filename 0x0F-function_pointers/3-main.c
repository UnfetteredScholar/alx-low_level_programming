#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calculator program
 * @argc: the number of arguments
 * @argv: the argument array
 *
 * Return: 0 on success, exit 98, 99 or 100 on error
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b) = NULL;
	int res, a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	f = get_op_func(op);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	res = f(a, b);
	printf("%d\n", res);
	return (0);
}
