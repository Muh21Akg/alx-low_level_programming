#include "main.h"

/**
 * *_calloc - allocates memory block for an array
 * @nmemb: size of array
 * @size: no of arrays
 * Return: adress
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
	{
			arr[i] = 0;
	}
	return (arr);
}
