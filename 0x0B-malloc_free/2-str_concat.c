#include "main.h"
#include "string.h"

/**
 * str_concat - contastinates two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 success
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *con;

	for (size1 = 0;  s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	con = malloc(sizeof(char) * (size1 + size2));
	for (i = 0; i < size1; i++)
	{
		con[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		con[size1 + i] = s2[i];
	}
	return (con);
}
