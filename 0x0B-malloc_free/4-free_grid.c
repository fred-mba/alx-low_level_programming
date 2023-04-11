#include <stdlib.h>
#include "main.h"

/**
 *free_grid - Frees a 2-D grid previously created by alloc_grid function.
 *@grid: pointer to the grid memory allocation
 *@height: column grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
