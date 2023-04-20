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
	char op;
	int i, bytes;
	FILE *fp = NULL;
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
	fp = fopen(__FILE__, "r");
	for (i = 0; i < bytes; i++)
	{
		op = getc(fp);
		printf("%x", op);
		if ( i != (bytes - 1))
			printf(" ");
	}
	printf("\n");
	fclose(fp);

	return (0);
}
