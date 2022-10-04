#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - initializes grid elements to zero
 * @width: grid width
 * @height: grid height
 * Return: pointer to a 2D integer array
 */
int **alloc_grid(int width, int height)
{
	int m, n, **grid;

	grid = malloc(height * sizeof(*grid));

	if (width < 1 || width < 1 || grid == 0)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		grid[m] = malloc(width * sizeof(**grid));
		if (grid[m] == 0)
		{
			while (m--)
				free(grid[m]);
			free(grid);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}

	return (grid);
}
