#include "main.h"
#include <string.h>

/**
 * alloc_grid - allocates a twodimensional array
 * @width: widtho of array
 * @height: height of array
 * Return: 0 success
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *)malloc(width * sizeof(int));
		if (*(grid + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = grid[i];
				free(p);
			}
			free(grid);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			grid[l][j] = 0;
		}
	}
	return (grid);
}
