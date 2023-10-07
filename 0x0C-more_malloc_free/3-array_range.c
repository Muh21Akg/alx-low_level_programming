#include "main.h"

/**
 * *array_range
 * @min: minimum no
 * @max: maximum no
 *
 * Return: pointer to array of ints
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		arr[j] = i;
	return (arr);
}
