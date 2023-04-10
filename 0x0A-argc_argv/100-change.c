#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimun number of coins to make change
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int money;
	int coins = 0;
	int divs[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money > 0)
	{
		for (i = 0; i < 5; i++)
		{
			coins += (money / divs[i]);
			money %= divs[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}
