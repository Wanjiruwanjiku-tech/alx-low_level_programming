#include "main.h"

/**
*free_grid - A Function that frees the 2D array
*previously created by alloc_grid
* @grid: The 2-dimensional array of integers to be freed
* @height: The height of grid.
*Return: void
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
