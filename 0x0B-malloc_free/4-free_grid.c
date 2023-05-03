#include "main.h"

/**
 * free_grid - function which allocate space for grid
 * @grid: gird
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
