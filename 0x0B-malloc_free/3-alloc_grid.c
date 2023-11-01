#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeod(int));

		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
