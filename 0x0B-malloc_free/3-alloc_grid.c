#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2D integer array
 * @width: the width
 * @height: height of the array
 *
 * Return: pointer to the array or NULL
 */
int **alloc_grid(int width, int height)
{
	int r = 0;
	int c = 0;
	int **grid = NULL;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* declare rows */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		grid[r] = malloc(sizeof(int) * width);
		if (grid[r] == NULL)
		{
			for (i = 0; i < r; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			grid[r][c] = 0;
	}
	return (grid);
}
