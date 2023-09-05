#include "main.h"
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: a pointer to string
 */
char *_strdup(char *str)
{
	int i, size;
	char *strdup;

	for (size = 0; str[size] != '\0'; size++)
		;
	if (size <= 0)
		return (NULL);
	strdup = malloc(sizeof(char) * size);
	if (strdup == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		strdup[i] = str[i];
	}
	return (strdup);
}
