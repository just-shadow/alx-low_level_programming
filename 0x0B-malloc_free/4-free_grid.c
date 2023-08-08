#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - fress 2 dimensional array
 * @grid: 2dimensional grid
 * @height: height dimension of grid
 * Return: 0 success
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
