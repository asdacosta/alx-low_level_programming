#include "main.h"

/**
 * free_grid - Frees a 2-D grid previously created by alloc_grid function.
 * @grid: Multidimensional array
 * @height: Height of the grid
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

