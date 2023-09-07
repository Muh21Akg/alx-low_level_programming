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
	unsigned int i, j, k, l;
	char *constr;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (n < j)
		j = n;
	constr = malloc(sizeof(char *) * (i + 1));
	if (constr == NULL)
		return (NULL);
	l = 0;
	for (k = 0; k <= i; k++)
	{
		constr[l++] = s1[k];
	}
	for (k = 0; k <= j; k++)
	{
		constr[l++] = s2[k];
	}
	constr[l] = '\0';
	return (constr);
}
