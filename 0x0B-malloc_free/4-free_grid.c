#include "main.h"
#include <stdlib.h>
/**
 * free_grid - allocates a grid, make space and free space
 * @grid: takes in width of grid
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
			{
				free(grid[i]);
			}
		}
		free(grid);
	}
}
