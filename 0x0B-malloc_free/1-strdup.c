#include "main.h"

/**
 * _strdup - duplicates a given string
 * @str: given string
 *
 * Return: a pointer to new string
 */
char *_strdup(char *str)
{
	char *nstr;
	int i, j;
	int nsize;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	nsize = i;
	nstr = malloc(sizeof(*nstr) * (nsize + 1));
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < nsize; j++)
	{
		nstr[j] = str[j];
	}
	nstr[j] = '\0';
	return (nstr);
}
