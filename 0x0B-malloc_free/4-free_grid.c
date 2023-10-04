#include "main.h"

/**
 * free_grid - deallocates a previously allocated memory
 * @grid: first arg
 * @height: second arg
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (i = 0; i < height;  i++)
	{
		free(grid[i]);
	}
	free(grid);
}
