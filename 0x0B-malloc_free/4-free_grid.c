#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a grid created by alloc_grid
 * @grid: the grid
 * @height: the height / numbe rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
