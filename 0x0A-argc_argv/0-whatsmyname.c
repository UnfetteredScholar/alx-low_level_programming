#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
