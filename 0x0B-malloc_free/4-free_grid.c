#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2d array created in 3-alloc_grid.c file
 * @grid: grid to free
 * @hright: columns
 * Return: returns nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		{
			free(grid[height]);
		}

		free(grid);
	}
}
