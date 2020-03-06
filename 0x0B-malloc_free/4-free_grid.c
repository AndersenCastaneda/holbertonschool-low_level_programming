#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees the memory allocate for the grid
 * @grid: input
 * @height: input
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
