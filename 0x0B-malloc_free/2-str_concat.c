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

	for (i = 0; s1[i] != '\0'; i++)
		;
	if (i == 0)
		return (NULL);
	len = i;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j == 0)
		return (NULL);
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
