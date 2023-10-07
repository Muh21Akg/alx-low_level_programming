#include "main.h"

/**
 * *string_nconcat - concatednates two give strings
 * @s1: first string
 * @s2: second string
 * @n: delimiter for s2
 *
 * Return: a pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	len = i;
	for (j = 0; s2[j] != '\0' && j < n; j++)
		;
	len += j;
	str = malloc(sizeof(*str) * (++len));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
