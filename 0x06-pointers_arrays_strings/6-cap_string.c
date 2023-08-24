#include "main.h"

/**
 * *cap_string - capitalizes every word in a string
 * @str: target string
 * Return: processed string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
			str[i] = str[i] - 32;
		}
		/**if (str[i] == ',' || str[i] == ';' || str[i] == '.')
		{
			i++;
			str[i] = str[i] - 32;
		}*/
		if (str[i] == '!' || str[i] == '?' || str[i] == '"')
		{
			i++;
			str[i] = str[i] - 32;
		}
		if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] =='}')
		{
			i++;
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
