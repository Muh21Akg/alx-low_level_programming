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

	arr = malloc(sizeof(*arr) * (size + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i++ < size)
	{
		arr[i] = c;
	}
	arr[i] = '\n';
	return (arr);
}
