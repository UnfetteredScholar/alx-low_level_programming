#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		/* check if string is valid */
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
