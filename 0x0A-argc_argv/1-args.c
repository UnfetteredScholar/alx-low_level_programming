#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	argv++; /* to stop the warning */
	printf("%d\n", argc - 1);
	return (0);
}
