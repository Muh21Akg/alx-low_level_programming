#include "main.h"

/**
 * *string_nconcat - concqtenates two strings in a new mem block
 * @s1: first string
 * @s2: sexond string
 * @n: required length of s2
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *constr;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j <= 0 || j <= 0)
		return (NULL);
	if (n < j)
		j = n;
	constr = malloc(sizeof(char *) * (i + j + 1));
	if (constr == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		constr[k] = s1[k];
	}
	for (k = 0; k <= j; k++)
	{
		constr[i + k] = s2[k];
	}
	constr[i + k] = '\0';
	return (constr);
}
