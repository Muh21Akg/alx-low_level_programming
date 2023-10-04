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
	char *str;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc((size) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
