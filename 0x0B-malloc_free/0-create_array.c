#include "main.h"

/**
 * create_array - creates an array of given size
 * @size: size of array
 * @c: character to be stored
 *
 * Return: pointer to array first element
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i++ < size)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
