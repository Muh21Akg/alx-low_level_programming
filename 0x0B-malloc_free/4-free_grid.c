#include "main.h"

/**
 * free_grid - free malloc allocated 2d array
 * @grid: array to be free'd
 * @height: no of vectors
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
