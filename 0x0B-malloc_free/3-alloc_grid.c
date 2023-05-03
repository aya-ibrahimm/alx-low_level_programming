#include "main.h"

/**
 * alloc_grid - function which allocate space for grid
 * @width: width of grid
 * @height: height of grid
 * Return: the memory address for grid
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		}

	}
	return (grid);
}
