#include "main.h"

/**
*alloc_grid - A Function that returns a
*pointer to a 2D array of integers
*@width: The width of the 2-dimensional array
*@height: The height of the 2-dimensional array
*
*Return: If width <= 0, height <= 0, or the function fails - NULL
*Otherwise - a pointer to the 2-dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0) /* check if negative*/
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * height);

	if (grid == NULL) /*allocate memory to rows*/
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width); /*allocate memory to each column*/

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;

		}
	}
	return (grid);
}
