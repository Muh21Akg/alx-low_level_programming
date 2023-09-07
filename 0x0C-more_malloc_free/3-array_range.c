#include "main.h"

/**
 * *array_range
 * @min: smallest number
 * @max: largest number
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, x;

	if (min > max)
		return (NULL);
	x = max - min;
	arr = malloc(sizeof(int) * x);
	if (arr == NULL)
		return(NULL);
	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	return (arr);
}
