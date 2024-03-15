#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Free a 2 dimensional grid
 * @grid: Grid 2 dimensional
 * @height: Height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
