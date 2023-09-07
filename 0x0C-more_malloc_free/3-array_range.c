#include "main.h"

/**
 * *array_range - arranges a memory buffer
 * @min: smallest number
 * @max: largest number
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, x;
	int j = 0;

	if (min > max)
		return (NULL);
	x = max - min;
	arr = malloc(sizeof(int) * (x + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[j++] = i;
	}
	return (arr);
}
