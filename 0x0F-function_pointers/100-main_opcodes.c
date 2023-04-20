#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints its own opcodes
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 1 & 2 on error
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *m = NULL;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	m = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", m[i]);
		if (i != (bytes - 1))
			printf(" ");
	}
	printf("\n");

	return (0);
}
