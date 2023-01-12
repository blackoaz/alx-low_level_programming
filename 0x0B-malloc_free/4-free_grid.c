#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function free a 2 dimensional grid
 *
 * @grid:first argument
 * @height: second argument
 *
 * Return:return 0
 */
void free_grid(int **grid, int height)
{
	void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
}
