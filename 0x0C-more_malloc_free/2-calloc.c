#include "main.h"

/**
 * *_calloc - allocates memory block for an array
 * @nmemb: size of array
 * @size: no of arrays
 * Return: adress
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	int *arr;

	if (nmemb <= 0 || size <= 0)
		return (0);
	arr = malloc (sizeof(unsigned int) * size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < nmemb; j++)
		{
			arr[i + j * size] = 0;
		}
	}
	return (arr);
}
