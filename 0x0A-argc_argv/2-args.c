#include <stdio.h>

/**
 * main - prints all command line arguments
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
