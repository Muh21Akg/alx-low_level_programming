#include "main.h"

/**
 * str_concat - concatinates two given strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	len = i;
	for (j = 0; s2[j] != '\0'; j++)
		;
	len += j;
	str = malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
