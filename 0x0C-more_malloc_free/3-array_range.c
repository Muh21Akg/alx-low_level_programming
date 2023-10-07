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
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i] = i;
	return (arr);
}
